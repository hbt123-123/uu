// rea decompile_all
// name: FUN_1001d0374
// address: 0x1001d0374
// body: available
// range: 0x1001d0374-0x1001d066f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d0374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  local_f4 = param_4;
  local_f0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar9 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_e8 = *(long *)(lVar3 + -8);
  lStack_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar12 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a7d408;
  FUN_100004bb4(&DAT_100a7d408,&DAT_100812378);
  lVar10 = *(long *)(puVar4 + -8);
  lVar3 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)(lVar3 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_6 + 0x10,auStack_80,0,0);
  puVar4 = (undefined *)(param_6 + 0x10);
  _swift_weakLoadStrong();
  if (puVar4 != (undefined *)0x0) {
    _swift_beginAccess(param_7 + 0x10,auStack_98,0,0);
    param_7 = param_7 + 0x10;
    _swift_weakLoadStrong();
    if (param_7 != 0) {
      local_100 = *(undefined8 *)(puVar4 + 0x18);
      FUN_1001d31f0(param_5,lVar12 - extraout_x8_01);
      uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
      uVar11 = uVar8 + 0x31 & (uVar8 ^ 0xffffffffffffffff);
      puVar5 = &DAT_1009a35b0;
      _swift_allocObject(&DAT_1009a35b0,uVar11 + lVar3,uVar8 | 7);
      uVar1 = local_f0;
      *(long *)(puVar5 + 0x10) = param_7;
      *(undefined8 *)(puVar5 + 0x18) = param_1;
      *(undefined8 *)(puVar5 + 0x20) = local_f0;
      *(undefined **)(puVar5 + 0x28) = puVar4;
      puVar5[0x30] = (byte)local_f4 & 1;
      FUN_1001d32fc(lVar12 - extraout_x8_01,puVar5 + uVar11);
      local_a8 = FUN_1001d334c;
      local_c8 = PTR___NSConcreteStackBlock_100995490;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_1009a35c8;
      local_a0 = puVar5;
      aBlock = __Block_copy(&local_c8);
      _swift_retain(param_7);
      FUN_10010bd10(param_1,uVar1);
      _swift_retain(puVar4);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar7 = &DAT_100a75aa0;
      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar9,&local_d0,puVar5,puVar7,lVar2,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,lVar9,aBlock);
      __Block_release(aBlock);
      _swift_release(param_7);
      (**(code **)(local_d8 + 8))(lVar9,lVar2);
      (**(code **)(local_e8 + 8))(lVar12,lStack_e0);
      _swift_release(puVar4);
      puVar4 = local_a0;
    }
    _swift_release(puVar4);
  }
  return;
}

