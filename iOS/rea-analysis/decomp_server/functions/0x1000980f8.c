// rea decompile_all
// name: FUN_1000980f8
// address: 0x1000980f8
// body: available
// range: 0x1000980f8-0x100098deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000980f8(long param_1,long param_2,long param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x8_02;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x13;
  code *pcVar15;
  long unaff_x21;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long local_1b8;
  ulong local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined1 auStack_c8 [104];
  code *local_58;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = (long)&local_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar17 = lVar5 - extraout_x12;
  puVar4 = &DAT_100a76710;
  FUN_100004bb4(&DAT_100a76710,&DAT_10080b210);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = uVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_00;
  local_1a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_01;
  local_200 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_02;
  local_118 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_03;
  local_190 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar12 - extraout_x12_04;
  puVar4 = &DAT_100a76718;
  local_110 = lVar12;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar12 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar16 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar13 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (lVar14 - extraout_x12_08) - extraout_x12_09;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  local_198 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = lVar5 - extraout_x12_10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_120 = lVar5 - extraout_x12_11;
  if (param_3 != param_2) {
    local_1f0 = *param_4;
    local_1c8 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
    local_1d0 = *(undefined8 *)PTR__NSURLCreationDateKey_100995360;
    local_230 = *(long *)(extraout_x13 + 0x48);
    local_1d8 = *(code **)(extraout_x13 + 0x10);
    lVar19 = local_1f0 + local_230 * (param_3 + -1);
    local_1f8 = -local_230;
    local_178 = param_1 - param_3;
    local_180 = local_1f0 + local_230 * param_3;
    uStack_138 = 4;
    local_140 = 2;
    lVar8 = local_190;
    lVar18 = local_198;
    local_228 = param_2;
    local_220 = local_180;
    local_218 = local_178;
    local_210 = lVar19;
    local_208 = param_3;
    local_1c0 = lVar16;
    local_1b8 = lVar12;
    local_1b0 = uVar17;
    local_170 = extraout_x13;
    local_128 = lVar14 - extraout_x12_08;
LAB_1000985c4:
    do {
      lVar12 = local_110;
      pcVar15 = local_1d8;
      local_188 = lVar19;
      (*local_1d8)(local_120,local_180,lVar18);
      (*pcVar15)(lVar5,lVar19,lVar18);
      puVar4 = &DAT_100a76708;
      FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
      local_148 = puVar4;
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = uStack_138;
      *(undefined8 *)(puVar4 + 0x10) = local_140;
      *(undefined8 *)(puVar4 + 0x20) = local_1c8;
      *(undefined8 *)(puVar4 + 0x28) = local_1d0;
      local_150 = local_1c8;
      local_160 = local_1d0;
      puVar6 = puVar4;
      FUN_100128084(puVar4);
      _swift_setDeallocating(puVar4);
      uVar7 = 0;
      FUN_10000603c();
      local_158 = uVar7;
      _swift_arrayDestroy(puVar4 + 0x20,2);
      __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                (lVar12,puVar6);
      bVar1 = unaff_x21 != 0;
      if (bVar1) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      _swift_bridgeObjectRelease(puVar6);
      lVar19 = 0;
      __s10Foundation17URLResourceValuesVMa();
      lVar18 = *(long *)(lVar19 + -8);
      local_168 = *(code **)(lVar18 + 0x38);
      (*local_168)(lVar12,bVar1,1,lVar19);
      FUN_10007f314(lVar12,lVar8,&DAT_100a76710,&DAT_10080b210);
      pcVar15 = *(code **)(lVar18 + 0x30);
      lVar16 = lVar8;
      (*pcVar15)(lVar8,1,lVar19);
      lVar12 = local_128;
      if ((int)lVar16 == 1) {
        FUN_100040bb4(lVar8,&DAT_100a76710,&DAT_10080b210);
        (**(code **)(lVar10 + 0x38))(local_128,1,1,lVar3);
LAB_1000987d8:
        lVar16 = local_110;
        lVar12 = local_200;
        FUN_10007f314(local_110,local_200,&DAT_100a76710,&DAT_10080b210);
        lVar8 = lVar12;
        (*pcVar15)(lVar12,1,lVar19);
        if ((int)lVar8 == 1) {
          FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
          FUN_100040bb4(lVar12,&DAT_100a76710,&DAT_10080b210);
          (**(code **)(lVar10 + 0x38))(lVar11,1,1,lVar3);
        }
        else {
          __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(lVar11);
          FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
          (**(code **)(lVar18 + 8))(lVar12,lVar19);
        }
        lVar12 = local_128;
        local_58 = *(code **)(lVar10 + 0x30);
        lVar16 = local_128;
        (*local_58)(local_128,1,lVar3);
        if ((int)lVar16 != 1) {
          FUN_100040bb4(lVar12,&DAT_100a76718,&DAT_10080ccc0);
        }
      }
      else {
        __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(local_128);
        (**(code **)(lVar18 + 8))(lVar8,lVar19);
        local_58 = *(code **)(lVar10 + 0x30);
        (*local_58)(lVar12,1,lVar3);
        if ((int)lVar12 == 1) goto LAB_1000987d8;
        FUN_100040bb4(local_110,&DAT_100a76710,&DAT_10080b210);
        (**(code **)(lVar10 + 0x20))(lVar11,local_128,lVar3);
        (**(code **)(lVar10 + 0x38))(lVar11,0,1,lVar3);
      }
      puVar4 = local_148;
      _swift_initStackObject(local_148,auStack_c8);
      *(undefined8 *)(puVar4 + 0x18) = uStack_138;
      *(undefined8 *)(puVar4 + 0x10) = local_140;
      *(undefined8 *)(puVar4 + 0x20) = local_150;
      *(undefined8 *)(puVar4 + 0x28) = local_160;
      puVar6 = puVar4;
      FUN_100128084(puVar4);
      _swift_setDeallocating(puVar4);
      _swift_arrayDestroy(puVar4 + 0x20,2,local_158);
      lVar12 = local_118;
      __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                (local_118,puVar6);
      bVar1 = unaff_x21 != 0;
      if (bVar1) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      lVar8 = local_1a0;
      _swift_bridgeObjectRelease(puVar6);
      (*local_168)(lVar12,bVar1,1,lVar19);
      lVar16 = local_1a8;
      FUN_10007f314(lVar12,local_1a8,&DAT_100a76710,&DAT_10080b210);
      lVar12 = lVar16;
      (*pcVar15)(lVar16,1,lVar19);
      if ((int)lVar12 == 1) {
        FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
        (**(code **)(lVar10 + 0x38))(lVar13,1,1,lVar3);
LAB_100098aa0:
        lVar12 = local_118;
        FUN_10007f314(local_118,lVar8,&DAT_100a76710,&DAT_10080b210);
        lVar16 = lVar8;
        (*pcVar15)(lVar8,1,lVar19);
        if ((int)lVar16 == 1) {
          FUN_100040bb4(lVar12,&DAT_100a76710,&DAT_10080b210);
          FUN_100040bb4(lVar8,&DAT_100a76710,&DAT_10080b210);
          (**(code **)(lVar10 + 0x38))(lVar14,1,1,lVar3);
        }
        else {
          __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(lVar14);
          FUN_100040bb4(lVar12,&DAT_100a76710,&DAT_10080b210);
          (**(code **)(lVar18 + 8))(lVar8,lVar19);
        }
        uVar17 = local_1b0;
        lVar12 = local_1c0;
        lVar19 = lVar13;
        (*local_58)(lVar13,1,lVar3);
        lVar16 = local_1b8;
        if ((int)lVar19 != 1) {
          FUN_100040bb4(lVar13,&DAT_100a76718,&DAT_10080ccc0);
        }
      }
      else {
        __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(lVar13);
        (**(code **)(lVar18 + 8))(lVar16,lVar19);
        lVar12 = lVar13;
        (*local_58)(lVar13,1,lVar3);
        if ((int)lVar12 == 1) goto LAB_100098aa0;
        FUN_100040bb4(local_118,&DAT_100a76710,&DAT_10080b210);
        (**(code **)(lVar10 + 0x20))(lVar14,lVar13,lVar3);
        (**(code **)(lVar10 + 0x38))(lVar14,0,1,lVar3);
        uVar17 = local_1b0;
        lVar12 = local_1c0;
        lVar16 = local_1b8;
      }
      FUN_10007f314(lVar11,lVar12,&DAT_100a76718,&DAT_10080ccc0);
      lVar19 = lVar12;
      (*local_58)(lVar12,1,lVar3);
      if ((int)lVar19 == 1) {
LAB_1000984d8:
        lVar8 = local_190;
        FUN_100040bb4(lVar14,&DAT_100a76718,&DAT_10080ccc0);
        FUN_100040bb4(lVar11,&DAT_100a76718,&DAT_10080ccc0);
        FUN_100040bb4(lVar12,&DAT_100a76718,&DAT_10080ccc0);
        lVar18 = local_198;
        pcVar15 = *(code **)(local_170 + 8);
        (*pcVar15)(lVar5,local_198);
        (*pcVar15)(local_120,lVar18);
      }
      else {
        pcVar15 = *(code **)(lVar10 + 0x20);
        (*pcVar15)(uVar17,lVar12,lVar3);
        FUN_10007f314(lVar14,lVar16,&DAT_100a76718,&DAT_10080ccc0);
        lVar19 = lVar16;
        (*local_58)(lVar16,1,lVar3);
        lVar12 = local_1e0;
        if ((int)lVar19 == 1) {
          (**(code **)(lVar10 + 8))(uVar17,lVar3);
          lVar12 = lVar16;
          goto LAB_1000984d8;
        }
        (*pcVar15)(local_1e0,lVar16,lVar3);
        uVar9 = uVar17;
        __s10Foundation4DateV1goiySbAC_ACtFZ(uVar17,lVar12);
        pcVar15 = *(code **)(lVar10 + 8);
        (*pcVar15)(lVar12,lVar3);
        (*pcVar15)(uVar17,lVar3);
        FUN_100040bb4(lVar14,&DAT_100a76718,&DAT_10080ccc0);
        FUN_100040bb4(lVar11,&DAT_100a76718,&DAT_10080ccc0);
        lVar18 = local_198;
        pcVar15 = *(code **)(local_170 + 8);
        (*pcVar15)(lVar5,local_198);
        (*pcVar15)(local_120,lVar18);
        lVar2 = local_178;
        lVar16 = local_180;
        lVar8 = local_190;
        lVar12 = local_1e8;
        if ((uVar9 & 1) != 0) {
          if (local_1f0 == 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100098dec);
            (*pcVar15)();
          }
          pcVar15 = *(code **)(local_170 + 0x20);
          (*pcVar15)(local_1e8,local_180,lVar18);
          lVar19 = local_188;
          _swift_arrayInitWithTakeFrontToBack(lVar16,local_188,1,lVar18);
          (*pcVar15)(lVar19,lVar12,lVar18);
          lVar19 = lVar19 + local_1f8;
          local_180 = lVar16 + local_1f8;
          local_178 = lVar2 + 1;
          if (lVar2 != -1) goto LAB_1000985c4;
        }
      }
      local_208 = local_208 + 1;
      lVar19 = local_210 + local_230;
      local_178 = local_218 + -1;
      local_180 = local_220 + local_230;
      local_220 = local_180;
      local_218 = local_178;
      local_210 = lVar19;
    } while (local_208 != local_228);
  }
  return;
}

