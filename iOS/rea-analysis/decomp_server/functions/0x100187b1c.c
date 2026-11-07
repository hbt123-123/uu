// rea decompile_all
// name: FUN_100187b1c
// address: 0x100187b1c
// body: available
// range: 0x100187b1c-0x100187dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100187b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined *local_c8 [6];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar3 = 0;
  local_110 = param_2;
  local_108 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar3 + -8);
  local_e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  lVar8 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f0 = lVar8;
  __s8Dispatch0A3QoSVMa();
  local_e0 = *(long *)(lVar3 + -8);
  lStack_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_100 = lVar8;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar10 + 0x40);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_100187918();
  local_f8 = lVar3;
  (**(code **)(lVar10 + 0x10))(lVar8,param_3,lVar4);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_1009a1060;
  _swift_allocObject(&DAT_1009a1060,uVar13 + 0x40,uVar9 | 7);
  (**(code **)(lVar10 + 0x20))(puVar5 + uVar11,lVar8,lVar4);
  uVar2 = local_108;
  uVar1 = local_110;
  *(undefined8 *)(puVar5 + uVar13) = local_108;
  puVar6 = (undefined8 *)(puVar5 + uVar13 + 8);
  uVar14 = param_4[2];
  uVar16 = param_4[5];
  uVar15 = param_4[4];
  puVar6[3] = param_4[3];
  puVar6[2] = uVar14;
  puVar6[5] = uVar16;
  puVar6[4] = uVar15;
  uVar14 = *param_4;
  puVar6[1] = param_4[1];
  *puVar6 = uVar14;
  *(undefined8 *)(puVar5 + uVar13 + 0x38) = local_110;
  local_78 = FUN_10018849c;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009a1078;
  local_70 = puVar5;
  aBlock = __Block_copy(&local_98);
  _swift_retain(uVar2);
  FUN_100135bf4(param_4,local_c8);
  _swift_retain(uVar1);
  lVar3 = local_100;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_100);
  local_c8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  lVar8 = local_e8;
  lVar4 = local_f0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_f0,local_c8,puVar5,puVar7,local_e8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,lVar4,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d0 + 8))(lVar4,lVar8);
  (**(code **)(local_e0 + 8))(lVar3,lStack_d8);
  _swift_release(local_70);
  return;
}

