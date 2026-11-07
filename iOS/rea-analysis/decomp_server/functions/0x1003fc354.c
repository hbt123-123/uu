// rea decompile_all
// name: FUN_1003fc354
// address: 0x1003fc354
// body: available
// range: 0x1003fc354-0x1003fc90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003fc8f0) */

void FUN_1003fc354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long extraout_x13_00;
  long lVar17;
  code *pcVar18;
  undefined8 unaff_x20;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  long lStack_108;
  long local_100;
  code *local_f8;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar1 = 0;
  local_128 = param_1;
  local_118 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  local_110 = *(long *)(lVar3 + -8);
  lStack_108 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_120 = lVar13;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar21 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = lVar21 - extraout_x12_01;
  local_130 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar20 - extraout_x12_02;
  if (DAT_100a89288 != -1) {
    _swift_once(&DAT_100a89288,FUN_1003b1eec);
  }
  FUN_10021bec0(lVar3,&DAT_100b36820);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar21,param_3,param_4);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar20,0x7265532f73676f4c,0xeb00000000726576);
  pcVar18 = *(code **)(lVar17 + 8);
  lVar4 = lVar21;
  lVar8 = lVar3;
  local_100 = lVar17;
  (*pcVar18)(lVar21,lVar3);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar18)(lVar20,lVar3);
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar15,lVar4,lVar8,1);
  _swift_bridgeObjectRelease(lVar8);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar13,param_3,param_4);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar21,0x73676f4c,0xe400000000000000);
  lVar17 = lVar3;
  (*pcVar18)(lVar13,lVar3);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar18)(lVar21,lVar3);
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar20,lVar13,lVar17,1);
  _swift_bridgeObjectRelease(lVar17);
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
            (lVar14,0x6568636143676f4c,0xe800000000000000,1);
  local_f8 = pcVar18;
  (*pcVar18)(lVar20,lVar3);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  FUN_1003fc90c(unaff_x20,lVar15,local_128,local_118,lVar14);
  _objc_msgSend(self,"unlock");
  FUN_100004b70(0);
  lVar21 = lStack_108;
  lVar17 = local_110;
  lVar13 = local_120;
  (**(code **)(local_110 + 0x68))
            (local_120,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_100995f68,
             lStack_108);
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar13);
  (**(code **)(lVar17 + 8))(lVar13,lVar21);
  lVar13 = local_100;
  (**(code **)(local_100 + 0x10))(lVar20,lVar15,lVar3);
  uVar16 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar19 = uVar16 + 0x18 & (uVar16 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009bc490;
  _swift_allocObject(&DAT_1009bc490,uVar19 + local_130,uVar16 | 7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar19,lVar20,lVar3);
  local_80 = FUN_100401a24;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009bc4a8;
  local_78 = puVar5;
  aBlock = __Block_copy(&local_a0);
  pvVar6 = aBlock;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_a8,puVar5,puVar7,lVar1,pvVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,lVar10,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar9 + 8))(lVar10,lVar1);
  (**(code **)(lVar11 + 8))(lVar12,lVar2);
  _swift_release(local_78);
  pcVar18 = local_f8;
  (*local_f8)(lVar14,lVar3);
  (*pcVar18)(lVar15,lVar3);
  return;
}

