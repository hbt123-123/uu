// rea decompile_all
// name: FUN_1003ff094
// address: 0x1003ff094
// body: available
// range: 0x1003ff094-0x1003ff847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003ff314) */

uint FUN_1003ff094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  uint uVar12;
  long unaff_x21;
  undefined1 *puVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar1 = &DAT_100a76718;
  local_80 = param_2;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  local_b8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar10 - extraout_x12_00;
  local_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar10 - extraout_x12_01;
  lVar2 = 0;
  local_78 = lVar10;
  __s10Foundation4DateVMa();
  local_88 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar17 = lVar10 - extraout_x12_02;
  puVar1 = &DAT_100a76710;
  FUN_100004bb4(&DAT_100a76710,&DAT_10080b210);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar10 = uVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar10 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar10 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar14 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar16 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_68 = lVar11 - extraout_x12_07;
  local_c8 = param_1;
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (param_3);
  local_98 = uVar17;
  if (unaff_x21 != 0) {
    _swift_errorRelease();
  }
  lVar3 = 0;
  __s10Foundation17URLResourceValuesVMa();
  local_70 = *(long *)(lVar3 + -8);
  pcVar18 = *(code **)(local_70 + 0x38);
  (*pcVar18)(local_68,unaff_x21 != 0,1,lVar3);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar11,param_3);
  lVar6 = local_78;
  local_a8 = 0;
  (*pcVar18)(lVar11,0,1,lVar3);
  FUN_10007f314(local_68,lVar16,&DAT_100a76710,&DAT_10080b210);
  lVar5 = local_70;
  pcVar18 = *(code **)(local_70 + 0x30);
  lVar4 = lVar16;
  (*pcVar18)(lVar16,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
    lVar16 = local_88;
    (**(code **)(local_88 + 0x38))(lVar6,1,1,lVar2);
LAB_1003ff400:
    uVar17 = local_98;
    FUN_10007f314(local_68,lVar14,&DAT_100a76710,&DAT_10080b210);
    lVar4 = lVar14;
    (*pcVar18)(lVar14,1,lVar3);
    lVar5 = local_c0;
    if ((int)lVar4 == 1) {
      FUN_100040bb4(lVar14,&DAT_100a76710,&DAT_10080b210);
      lVar5 = local_c0;
      (**(code **)(lVar16 + 0x38))(local_c0,1,1,lVar2);
LAB_1003ff4b0:
      __s10Foundation4DateV11distantPastACvgZ(uVar17);
      pcVar15 = *(code **)(lVar16 + 0x30);
      lVar4 = lVar5;
      (*pcVar15)(lVar5,1,lVar2);
      lVar14 = local_a0;
      if ((int)lVar4 != 1) {
        FUN_100040bb4(lVar5,&DAT_100a76718,&DAT_10080ccc0);
      }
    }
    else {
      __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_c0);
      lVar6 = local_78;
      (**(code **)(local_70 + 8))(lVar14,lVar3);
      pcVar15 = *(code **)(lVar16 + 0x30);
      lVar14 = lVar5;
      (*pcVar15)(lVar5,1,lVar2);
      if ((int)lVar14 == 1) goto LAB_1003ff4b0;
      (**(code **)(lVar16 + 0x20))(uVar17,lVar5,lVar2);
      lVar14 = local_a0;
    }
    lVar5 = lVar6;
    (*pcVar15)(lVar6,1,lVar2);
    if ((int)lVar5 != 1) {
      FUN_100040bb4(lVar6,&DAT_100a76718,&DAT_10080ccc0);
    }
  }
  else {
    __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(lVar6);
    lVar6 = local_78;
    (**(code **)(lVar5 + 8))(lVar16,lVar3);
    lVar16 = local_88;
    pcVar15 = *(code **)(local_88 + 0x30);
    lVar5 = lVar6;
    (*pcVar15)(lVar6,1,lVar2);
    uVar17 = local_98;
    if ((int)lVar5 == 1) goto LAB_1003ff400;
    (**(code **)(lVar16 + 0x20))(local_98,lVar6,lVar2);
    lVar14 = local_a0;
  }
  FUN_10007f314(lVar11,lVar10,&DAT_100a76710,&DAT_10080b210);
  lVar6 = lVar10;
  (*pcVar18)(lVar10,1,lVar3);
  if ((int)lVar6 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a76710,&DAT_10080b210);
    (**(code **)(lVar16 + 0x38))(lVar14,1,1,lVar2);
  }
  else {
    __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(lVar14);
    (**(code **)(local_70 + 8))(lVar10,lVar3);
    lVar6 = lVar14;
    (*pcVar15)(lVar14,1,lVar2);
    lVar10 = local_90;
    if ((int)lVar6 != 1) {
      (**(code **)(lVar16 + 0x20))(local_90,lVar14,lVar2);
      goto LAB_1003ff744;
    }
  }
  lVar6 = local_b0;
  FUN_10007f314(lVar11,local_b0,&DAT_100a76710,&DAT_10080b210);
  lVar5 = lVar6;
  (*pcVar18)(lVar6,1,lVar3);
  lVar10 = local_90;
  puVar13 = local_b8;
  if ((int)lVar5 == 1) {
    FUN_100040bb4(lVar6,&DAT_100a76710,&DAT_10080b210);
    puVar13 = local_b8;
    (**(code **)(lVar16 + 0x38))(local_b8,1,1,lVar2);
LAB_1003ff6a8:
    __s10Foundation4DateV11distantPastACvgZ(lVar10);
    puVar7 = puVar13;
    (*pcVar15)(puVar13,1,lVar2);
    if ((int)puVar7 != 1) {
      FUN_100040bb4(puVar13,&DAT_100a76718,&DAT_10080ccc0);
    }
  }
  else {
    __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_b8);
    (**(code **)(local_70 + 8))(lVar6,lVar3);
    puVar7 = puVar13;
    (*pcVar15)(puVar13,1,lVar2);
    if ((int)puVar7 == 1) goto LAB_1003ff6a8;
    (**(code **)(lVar16 + 0x20))(lVar10,puVar13,lVar2);
  }
  lVar6 = lVar14;
  (*pcVar15)(lVar14,1,lVar2);
  if ((int)lVar6 != 1) {
    FUN_100040bb4(lVar14,&DAT_100a76718,&DAT_10080ccc0);
  }
LAB_1003ff744:
  uVar8 = uVar17;
  lVar14 = lVar10;
  __s10Foundation4DateV2eeoiySbAC_ACtFZ();
  if ((uVar8 & 1) == 0) {
    uVar8 = uVar17;
    __s10Foundation4DateV1goiySbAC_ACtFZ(uVar17,lVar10);
    uVar12 = (uint)uVar8;
  }
  else {
    __s10Foundation3URLV17lastPathComponentSSvg();
    uVar9 = uVar8;
    lVar6 = lVar14;
    __s10Foundation3URLV17lastPathComponentSSvg();
    if ((uVar9 == uVar8) && (lVar6 == lVar14)) {
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(lVar6);
      uVar12 = 0;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar12 = (uint)uVar9;
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(lVar6);
    }
  }
  pcVar18 = *(code **)(lVar16 + 8);
  (*pcVar18)(lVar10,lVar2);
  (*pcVar18)(uVar17,lVar2);
  FUN_100040bb4(lVar11,&DAT_100a76710,&DAT_10080b210);
  FUN_100040bb4(local_68,&DAT_100a76710,&DAT_10080b210);
  return uVar12 & 1;
}

