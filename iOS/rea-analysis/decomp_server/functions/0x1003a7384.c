// rea decompile_all
// name: FUN_1003a7384
// address: 0x1003a7384
// body: available
// range: 0x1003a7384-0x1003a75eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a7384(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_68 = param_1;
  _swift_errorRetain(param_1);
  puVar4 = &DAT_100a75b40;
  FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
  ppuVar5 = &local_98;
  _swift_dynamicCast(ppuVar5,&local_68,puVar4,&DAT_1009bb090,6);
  puVar4 = puStack_80;
  pcVar1 = local_88;
  if (((ulong)ppuVar5 & 1) != 0) {
    if (local_98 == (undefined *)0x460) {
      uVar6 = 0;
      FUN_100004b70();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar7 = &DAT_1009b7c48;
      local_a0 = uVar6;
      _swift_allocObject(&DAT_1009b7c48,0x30,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x460;
      *(undefined8 *)(puVar7 + 0x18) = local_90;
      *(code **)(puVar7 + 0x20) = local_88;
      *(undefined **)(puVar7 + 0x28) = puStack_80;
      local_a8 = local_88;
      local_78 = FUN_1003a78b8;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009b7c60;
      local_70 = puVar7;
      aBlock = __Block_copy(&local_98);
      puVar8 = local_70;
      _swift_retain(puVar4);
      _swift_bridgeObjectRetain(pcVar1);
      _swift_release(puVar8);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10003f7fc();
      puVar7 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar9 = puVar7;
      FUN_10004eec4();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar10,&local_98,puVar7,puVar9,lVar2,puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar11,puVar10,aBlock);
      __Block_release(aBlock);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(local_a8);
      (**(code **)(lVar13 + 8))(puVar10,lVar2);
      (**(code **)(lVar12 + 8))(lVar11,lVar3);
    }
    else {
      _swift_bridgeObjectRelease();
      _swift_release(puStack_80);
    }
  }
  return;
}

