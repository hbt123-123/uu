// rea decompile_all
// name: FUN_1000ce104
// address: 0x1000ce104
// body: available
// range: 0x1000ce104-0x1000ce93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000ce938 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000ce104(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ID *pIVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long extraout_x8;
  long lVar27;
  long extraout_x8_00;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *puVar31;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar32;
  long unaff_x20;
  ID IVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  ulong uVar36;
  code *pcVar37;
  ulong uVar38;
  ulong auStack_1d0 [4];
  long alStack_1b0 [5];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  char *local_168;
  char *local_160;
  char local_c1;
  undefined *local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar12 = 0;
  __s10Foundation3URLVMa();
  lVar26 = *(long *)(uVar12 - 8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = (long)alStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_1b0[2] = lVar27;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar27 = lVar27 - extraout_x12;
  puVar13 = &DAT_100a75b08;
  FUN_100004bb4(&DAT_100a75b08,&DAT_10080c340);
  lVar32 = *(long *)(puVar13 + -8);
  puVar14 = puVar13;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar32 + 0x40));
  lVar30 = lVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_1b0[1] = lVar30;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar34 = (undefined8 *)(lVar30 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar31 = (undefined8 *)((long)puVar34 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar35 = (undefined8 *)((long)puVar31 - extraout_x12_02);
  FUN_1000cf128();
  local_c0 = PTR___swiftEmptySetSingleton_100995eb0;
  uVar28 = *(ulong *)(puVar14 + 0x10);
  if (uVar28 == 0) {
    _swift_bridgeObjectRelease(puVar14);
    local_170 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = PTR___swiftEmptySetSingleton_100995eb0;
  }
  else {
    uVar36 = 0;
    iVar6 = *(int *)(puVar13 + 0x40);
    bVar4 = *(byte *)(lVar32 + 0x50);
    iVar7 = *(int *)(puVar13 + 0x30);
    iVar8 = *(int *)(puVar13 + 0x50);
    local_160 = "mountedVolumesPath";
    local_168 = "leTransferDirectoryReader.swift";
    local_170 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1000ce938);
        (*pcVar37)();
      }
      FUN_10007f314(puVar14 + *(long *)(lVar32 + 0x48) * uVar36 +
                              ((ulong)bVar4 + 0x20 & ((ulong)bVar4 ^ 0xffffffffffffffff)),puVar35,
                    &DAT_100a75b08,&DAT_10080c340);
      uVar2 = puVar35[1];
      uVar25 = *(undefined8 *)((long)puVar35 + (long)iVar6);
      uVar20 = ((undefined8 *)((long)puVar35 + (long)iVar6))[1];
      uVar5 = *(undefined1 *)((long)puVar35 + (long)iVar8);
      iVar9 = *(int *)(puVar13 + 0x30);
      iVar10 = *(int *)(puVar13 + 0x40);
      iVar11 = *(int *)(puVar13 + 0x50);
      *puVar31 = *puVar35;
      puVar31[1] = uVar2;
      (**(code **)(lVar26 + 0x20))((long)puVar31 + (long)iVar9,(long)puVar35 + (long)iVar7,uVar12);
      *(undefined8 *)((long)puVar31 + (long)iVar10) = uVar25;
      ((undefined8 *)((long)puVar31 + (long)iVar10))[1] = uVar20;
      *(undefined1 *)((long)puVar31 + (long)iVar11) = uVar5;
      FUN_10007f314(puVar31,puVar34,&DAT_100a75b08,&DAT_10080c340);
      _swift_bridgeObjectRelease(puVar34[1]);
      iVar9 = *(int *)(puVar13 + 0x30);
      _swift_bridgeObjectRelease
                (*(undefined8 *)((long)puVar34 + (long)*(int *)(puVar13 + 0x40) + 8));
      __s10Foundation3URLV016standardizedFileB0ACvg(lVar27);
      pcVar37 = *(code **)(lVar26 + 8);
      uVar16 = (long)puVar34 + (long)iVar9;
      uVar23 = uVar12;
      (*pcVar37)();
      __s10Foundation3URLV4pathSSvg();
      puVar22 = local_c0;
      if (*(long *)(local_c0 + 0x10) != 0) {
        __ss6HasherV5_seedABSi_tcfC(&local_b8,*(undefined8 *)(local_c0 + 0x28));
        puVar17 = &local_b8;
        __sSS4hash4intoys6HasherVz_tF(puVar17,uVar16,uVar23);
        __ss6HasherV9_finalizeSiyF();
        uVar29 = -1L << ((ulong)(byte)puVar22[0x20] & 0x3f);
        uVar38 = (ulong)puVar17 & (uVar29 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar22 + (uVar38 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar38 & 0x3f) & 1)
            != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(puVar22 + 0x30) + uVar38 * 0x10);
            uVar18 = *puVar1;
            uVar3 = puVar1[1];
            if ((uVar18 == uVar16 && uVar3 == uVar23) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar18,uVar3,uVar16,uVar23,0), (uVar18 & 1) != 0)) {
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              puVar35[-2] = uVar16;
              puVar35[-1] = uVar23;
              pcVar15 = FUN_1000d0150;
              uVar25 = 0x5f;
              goto LAB_1000ce37c;
            }
            uVar38 = uVar38 + 1 & ~uVar29;
          } while ((*(ulong *)(puVar22 + (uVar38 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar38 & 0x3f) & 1) != 0);
        }
      }
      local_c1 = '\0';
      pIVar19 = (ID *)(unaff_x20 + 0x10);
      FUN_10003f030(pIVar19,*(undefined8 *)(unaff_x20 + 0x28));
      IVar33 = *pIVar19;
      uVar29 = uVar16;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar16,uVar23);
      IVar33 = _objc_msgSend(IVar33,"fileExistsAtPath:isDirectory:",uVar29,&local_c1);
      if (((int)IVar33 == 0) || (local_c1 != '\x01')) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        puVar35[-2] = uVar16;
        puVar35[-1] = uVar23;
        pcVar15 = FUN_1000d01ec;
        uVar25 = 0x65;
LAB_1000ce37c:
        FUN_1003fb45c(pcVar15,puVar35 + -4,0xd0000000000000af,(ulong)local_160 | 0x8000000000000000,
                      0xd000000000000011,(ulong)local_168 | 0x8000000000000000,uVar25,0);
        _swift_bridgeObjectRelease(uVar23);
        (*pcVar37)(lVar27,uVar12);
        FUN_100040bb4(puVar31,&DAT_100a75b08,&DAT_10080c340);
      }
      else {
        FUN_10006d958(&local_b8,uVar16,uVar23);
        _swift_bridgeObjectRelease(local_b0);
        FUN_10007f314(puVar31,puVar34,&DAT_100a75b08,&DAT_10080c340);
        uVar25 = *puVar34;
        uVar2 = puVar34[1];
        alStack_1b0[3] = (long)*(int *)(puVar13 + 0x30);
        _swift_bridgeObjectRelease
                  (*(undefined8 *)((long)puVar34 + (long)*(int *)(puVar13 + 0x40) + 8));
        lVar30 = alStack_1b0[1];
        lVar24 = alStack_1b0[1];
        FUN_10007f314(puVar31,alStack_1b0[1],&DAT_100a75b08,&DAT_10080c340);
        uVar20 = *(undefined8 *)(lVar30 + 8);
        _swift_bridgeObjectRelease();
        lVar21 = alStack_1b0[2];
        iVar9 = *(int *)(puVar13 + 0x30);
        local_178 = *(undefined8 *)(lVar30 + *(int *)(puVar13 + 0x40));
        local_180 = ((undefined8 *)(lVar30 + *(int *)(puVar13 + 0x40)))[1];
        __s10Foundation3URLV016standardizedFileB0ACvg(alStack_1b0[2]);
        __s10Foundation3URLV4pathSSvg();
        alStack_1b0[4] = lVar24;
        local_188 = uVar20;
        (*pcVar37)(lVar21,uVar12);
        lVar21 = lVar27;
        FUN_1000d1b9c();
        (*pcVar37)(lVar30 + iVar9,uVar12);
        (*pcVar37)((long)puVar34 + alStack_1b0[3],uVar12);
        puVar22 = local_170;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar22 & 1) == 0) {
          puVar22 = (undefined *)0x0;
          FUN_100035ad8(0,*(long *)(local_170 + 0x10) + 1,1);
          local_170 = puVar22;
        }
        uVar16 = *(ulong *)(local_170 + 0x10);
        if (*(ulong *)(local_170 + 0x18) >> 1 <= uVar16) {
          puVar22 = (undefined *)(ulong)(1 < *(ulong *)(local_170 + 0x18));
          FUN_100035ad8(puVar22,uVar16 + 1,1,local_170);
          local_170 = puVar22;
        }
        *(ulong *)(local_170 + 0x10) = uVar16 + 1;
        *(undefined8 *)(local_170 + uVar16 * 0x48 + 0x20) = uVar25;
        *(undefined8 *)(local_170 + uVar16 * 0x48 + 0x28) = uVar2;
        *(undefined8 *)(local_170 + uVar16 * 0x48 + 0x30) = local_188;
        *(long *)(local_170 + uVar16 * 0x48 + 0x38) = alStack_1b0[4];
        *(undefined8 *)(local_170 + uVar16 * 0x48 + 0x40) = 0;
        *(long *)(local_170 + uVar16 * 0x48 + 0x48) = lVar21;
        local_170[uVar16 * 0x48 + 0x50] = 1;
        local_170[uVar16 * 0x48 + 0x51] = uVar5;
        *(undefined4 *)(local_170 + uVar16 * 0x48 + 0x52) = local_b8;
        *(undefined2 *)(local_170 + uVar16 * 0x48 + 0x56) = local_b4;
        *(undefined8 *)(local_170 + uVar16 * 0x48 + 0x58) = local_178;
        *(undefined8 *)(local_170 + uVar16 * 0x48 + 0x60) = local_180;
        (*pcVar37)(lVar27,uVar12);
        FUN_100040bb4(puVar31,&DAT_100a75b08,&DAT_10080c340);
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar28);
    _swift_bridgeObjectRelease(puVar14);
    puVar13 = local_c0;
  }
  _swift_bridgeObjectRelease(puVar13);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

