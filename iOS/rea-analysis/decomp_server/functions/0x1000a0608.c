// rea decompile_all
// name: FUN_1000a0608
// address: 0x1000a0608
// body: available
// range: 0x1000a0608-0x1000a093f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *aBlock;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_120 [8];
  ulong local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e4;
  long local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_100 = param_9;
  lVar8 = 0;
  local_108 = param_3;
  local_f8 = param_5;
  uStack_f0 = param_6;
  local_e4 = param_7;
  local_d8 = param_8;
  local_a8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar8 + -8);
  local_c8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar8 = 0;
  local_d0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar8 + -8);
  lStack_b8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar13 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_e0 = lVar13;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar9 + -8);
  lVar8 = *(long *)(lVar18 + 0x40);
  local_110 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar18 + 0x10))(lVar13,param_4);
  puVar10 = &DAT_100a766c0;
  FUN_100004bb4(&DAT_100a766c0,&DAT_10080b1c8);
  lVar9 = *(long *)(puVar10 + -8);
  lVar17 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)(lVar17 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(lVar13 - extraout_x8_01,param_1,puVar10);
  bVar2 = *(byte *)(lVar18 + 0x50);
  uVar15 = (ulong)bVar2 + 0x18 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar8 = uVar15 + lVar8;
  local_118 = lVar8 + 7U & 0xfffffffffffffff8;
  uVar16 = lVar8 + 0x1fU & 0xfffffffffffffff8;
  bVar3 = *(byte *)(lVar9 + 0x50);
  uVar14 = bVar3 + uVar16 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar11 = &DAT_10099a010;
  _swift_allocObject(&DAT_10099a010,uVar14 + lVar17,bVar2 | bVar3 | 7);
  uVar4 = local_108;
  *(undefined8 *)(puVar11 + 0x10) = local_108;
  (**(code **)(lVar18 + 0x20))(puVar11 + uVar15,lVar13,local_110);
  uVar12 = local_d8;
  uVar6 = uStack_f0;
  uVar5 = local_100;
  puVar1 = (undefined8 *)(puVar11 + local_118);
  *puVar1 = local_f8;
  puVar1[1] = uStack_f0;
  *(char *)(puVar1 + 2) = (char)local_e4;
  *(undefined8 *)(puVar11 + uVar16) = local_d8;
  *(undefined8 *)((long)(puVar11 + uVar16) + 8) = local_100;
  (**(code **)(lVar9 + 0x20))(puVar11 + uVar14,lVar13 - extraout_x8_01,puVar10);
  local_78 = FUN_10009fdcc;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_10099a028;
  local_70 = puVar11;
  aBlock = __Block_copy(&local_98);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  FUN_10004090c(uVar12,uVar5);
  lVar8 = local_e0;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar10 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar11 = puVar10;
  FUN_10004eec4();
  lVar9 = local_c8;
  puVar7 = local_d0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_d0,&local_a0,puVar10,puVar11,local_c8,uVar12);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_b0 + 8))(puVar7,lVar9);
  (**(code **)(local_c0 + 8))(lVar8,lStack_b8);
  _swift_release(local_70);
  return;
}

