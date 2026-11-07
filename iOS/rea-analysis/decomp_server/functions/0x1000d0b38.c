// rea decompile_all
// name: FUN_1000d0b38
// address: 0x1000d0b38
// body: available
// range: 0x1000d0b38-0x1000d108b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000d0b38(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x21;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_100 [16];
  long alStack_f0 [2];
  undefined8 uStack_e0;
  undefined *local_d8;
  byte abStack_d0 [4];
  undefined4 local_cc;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 *local_a0;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar4 = 0;
  local_a0 = param_1;
  __s10Foundation17URLResourceValuesVMa();
  local_b8 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar17 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1000d4610();
  local_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar15 = (undefined1 *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar12 - extraout_x12;
  __s10Foundation3URLV23resolvingSymlinksInPathACyF(lVar16);
  __s10Foundation3URLV016standardizedFileB0ACvg(lVar12);
  pcVar14 = *(code **)(lVar13 + 8);
  lVar4 = lVar16;
  lVar11 = lVar5;
  local_a8 = lVar13;
  (*pcVar14)(lVar16,lVar5);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar14)(lVar12,lVar5);
  puVar6 = auStack_70;
  FUN_10006d958(puVar6,lVar4,lVar11);
  _swift_bridgeObjectRelease(local_68);
  puVar9 = local_a0;
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar16 + -0x10) = param_2;
    FUN_1003fb45c(FUN_1000d2a9c,lVar16 + -0x20,0xd0000000000000af,0x8000000100885ec0,
                  0xd000000000000021,0x8000000100886060,0xb2,0);
    puVar8 = &DAT_100a75b08;
    FUN_100004bb4(&DAT_100a75b08,&DAT_10080c340);
    pcVar14 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
    puVar9 = local_a0;
LAB_1000d0e64:
    (*pcVar14)(puVar9,1,1,puVar8);
  }
  else {
    puVar8 = &DAT_100a76708;
    FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
    _swift_initStackObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)PTR__NSURLVolumeIsReadOnlyKey_100995390;
    puVar7 = puVar8;
    FUN_100128084();
    _swift_setDeallocating(puVar8);
    pcVar14 = FUN_10000603c;
    FUN_1000d27dc(puVar8 + 0x20);
    __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
              (lVar17,puVar7);
    if (unaff_x21 == 0) {
      local_c8 = param_2;
      _swift_bridgeObjectRelease();
      __s10Foundation17URLResourceValuesV11isDirectorySbSgvg();
      local_cc = SUB84(puVar7,0);
      __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
      lVar4 = local_c0;
      uStack_e0._4_4_ = SUB84(pcVar14,0);
      local_d8 = puVar7;
      __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg
                (puVar15 + *(int *)(local_c0 + 0x18));
      __s10Foundation17URLResourceValuesV10volumeNameSSSgvg();
      puVar8 = puVar7;
      __s10Foundation17URLResourceValuesV16volumeIsReadOnlySbSgvg();
      (**(code **)(local_b8 + 8))(lVar17,lStack_b0);
      *puVar15 = (char)local_cc;
      *(undefined **)(puVar15 + 8) = local_d8;
      puVar15[0x10] = (byte)uStack_e0._4_4_ & 1;
      iVar1 = *(int *)(lVar4 + 0x1c);
      *(undefined **)(puVar15 + iVar1) = puVar7;
      *(code **)((long)(puVar15 + iVar1) + 8) = pcVar14;
      puVar15[*(int *)(lVar4 + 0x20)] = (char)puVar8;
      if ((((uint)puVar8 & 0xff) != 2) && (((ulong)puVar8 & 1) != 0)) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)(lVar16 + -0x10) = local_c8;
        FUN_1003fb48c(FUN_1000d2aac,lVar16 + -0x20,0xd0000000000000af,0x8000000100885ec0,
                      0xd000000000000021,0x8000000100886060,0xb9,0);
        FUN_1000d27dc(puVar15,FUN_1000d4610);
        puVar8 = &DAT_100a75b08;
        FUN_100004bb4(&DAT_100a75b08,&DAT_10080c340);
        pcVar14 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
        goto LAB_1000d0e64;
      }
      FUN_1000d27dc(puVar15,FUN_1000d4610);
      param_2 = local_c8;
    }
    else {
      _swift_bridgeObjectRelease(puVar7);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(lVar16 + -0x10) = param_2;
      *(long *)(lVar16 + -8) = unaff_x21;
      FUN_1003fb4ec(FUN_1000d2aa4,lVar16 + -0x20,0xd0000000000000af,0x8000000100885ec0,
                    0xd000000000000021,0x8000000100886060,0xbd,0);
      _swift_errorRelease(unaff_x21);
    }
    puVar8 = &DAT_100a75b08;
    puVar7 = &DAT_10080c340;
    FUN_100004bb4();
    iVar1 = *(int *)(puVar8 + 0x30);
    iVar2 = *(int *)(puVar8 + 0x40);
    iVar3 = *(int *)(puVar8 + 0x50);
    puVar10 = puVar8;
    __s10Foundation3URLV17lastPathComponentSSvg();
    *puVar9 = puVar10;
    puVar9[1] = puVar7;
    (**(code **)(local_a8 + 0x10))((long)puVar9 + (long)iVar1,param_2,lVar5);
    *(undefined8 *)((long)puVar9 + (long)iVar2) = 0x6b736964;
    ((undefined8 *)((long)puVar9 + (long)iVar2))[1] = 0xe400000000000000;
    *(undefined1 *)((long)puVar9 + (long)iVar3) = 1;
    (**(code **)(*(long *)(puVar8 + -8) + 0x38))(puVar9,0,1,puVar8);
  }
  return;
}

