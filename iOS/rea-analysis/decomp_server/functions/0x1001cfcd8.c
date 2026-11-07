// rea decompile_all
// name: FUN_1001cfcd8
// address: 0x1001cfcd8
// body: available
// range: 0x1001cfcd8-0x1001cffbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cfcd8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  puVar8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_e0 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a7d408;
  FUN_100004bb4(&DAT_100a7d408,&DAT_100812378);
  lVar2 = *(long *)(puVar3 + -8);
  lVar11 = *(long *)(lVar2 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)(lVar11 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  puVar3 = (undefined *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (puVar3 != (undefined *)0x0) {
    _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (param_3 != 0) {
      local_e8 = *(undefined8 *)(puVar3 + 0x18);
      FUN_1001d31f0(param_1,lVar10 - extraout_x8_01);
      uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
      uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      uVar12 = lVar11 + uVar9 + 7 & 0xfffffffffffffff8;
      puVar4 = &DAT_1009a36a0;
      _swift_allocObject(&DAT_1009a36a0,uVar12 + 8,uVar7 | 7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = param_4;
      FUN_1001d32fc(lVar10 - extraout_x8_01,puVar4 + uVar9);
      *(undefined **)(puVar4 + uVar12) = puVar3;
      local_a0 = FUN_1001d35e0;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0x42000000;
      local_b0 = FUN_1000acdb4;
      puStack_a8 = &DAT_1009a36b8;
      local_98 = puVar4;
      aBlock = __Block_copy(&local_c0);
      _swift_retain(param_3);
      _swift_retain(puVar3);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar5 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar4 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar6 = &DAT_100a75aa0;
      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar8,&local_c8,puVar4,puVar6,lVar1,puVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar10,puVar8,aBlock);
      __Block_release(aBlock);
      _swift_release(param_3);
      (**(code **)(local_d0 + 8))(puVar8,lVar1);
      (**(code **)(local_e0 + 8))(lVar10,lStack_d8);
      _swift_release(puVar3);
      puVar3 = local_98;
    }
    _swift_release(puVar3);
  }
  return;
}

