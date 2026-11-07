// rea decompile_all
// name: FUN_1007b7a2c
// address: 0x1007b7a2c
// body: available
// range: 0x1007b7a2c-0x1007b7f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1007b7a2c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long unaff_x20;
  long *plVar13;
  long local_a0 [6];
  long *local_70;
  long *plStack_68;
  undefined *local_58;
  
  lVar8 = _TtC6Sentry14SentryFeedback::associatedEventId;
  puVar3 = PTR___sSSN_1009957f8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name);
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email);
  lVar5 = 2;
  if (puVar1[1] != 0) {
    lVar5 = 3;
  }
  if (puVar2[1] != 0) {
    lVar5 = lVar5 + 1;
  }
  if (*(long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::associatedEventId) != 0) {
    lVar5 = lVar5 + 1;
  }
  __sSD15minimumCapacitySDyxq_GSi_tcfC
            (lVar5,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  local_70 = *(long **)(unaff_x20 + _TtC6Sentry14SentryFeedback::message);
  plVar13 = (long *)((undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message))[1];
  local_58 = puVar3;
  plStack_68 = plVar13;
  FUN_10007f3d4(&local_70,local_a0 + 2);
  _swift_bridgeObjectRetain(plVar13);
  lVar10 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar6 = 0x6567617373656d;
  uVar11 = 0;
  local_a0[0] = lVar5;
  FUN_1007b8564(0x6567617373656d,0xe700000000000000,lVar10,FUN_100063670,FUN_1000675f0);
  lVar5 = local_a0[0];
  if ((uVar11 & 1) == 0) {
    lVar10 = 0x6567617373656d;
    FUN_100060330();
  }
  else {
    lVar10 = *(long *)(local_a0[0] + 0x38) + lVar6 * 0x20;
    FUN_10003f094(lVar10);
    FUN_10007f3d4(local_a0 + 2);
  }
  _swift_bridgeObjectRelease(0x8000000000000000);
  plVar13 = (long *)puVar1[1];
  if (plVar13 != (long *)0x0) {
    local_70 = (long *)*puVar1;
    local_58 = puVar3;
    plStack_68 = plVar13;
    FUN_10007f3d4(&local_70,local_a0 + 2);
    _swift_bridgeObjectRetain(plVar13);
    lVar10 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native(lVar5);
    lVar6 = 0x656d616e;
    uVar11 = 0;
    local_a0[0] = lVar5;
    FUN_1007b8564(0x656d616e,0xe400000000000000,lVar10,FUN_100063670,FUN_1000675f0);
    lVar5 = local_a0[0];
    if ((uVar11 & 1) == 0) {
      lVar10 = 0x656d616e;
      FUN_100060330();
    }
    else {
      lVar10 = *(long *)(local_a0[0] + 0x38) + lVar6 * 0x20;
      FUN_10003f094(lVar10);
      FUN_10007f3d4(local_a0 + 2);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  plVar13 = (long *)puVar2[1];
  if (plVar13 != (long *)0x0) {
    local_70 = (long *)*puVar2;
    local_58 = puVar3;
    plStack_68 = plVar13;
    FUN_10007f3d4(&local_70,local_a0 + 2);
    _swift_bridgeObjectRetain(plVar13);
    lVar10 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native(lVar5);
    lVar6 = 0x5f746361746e6f63;
    uVar11 = 0xed00006c69616d65;
    local_a0[0] = lVar5;
    FUN_1007b8564(0x5f746361746e6f63,0xed00006c69616d65,lVar10,FUN_100063670,FUN_1000675f0);
    lVar5 = local_a0[0];
    if ((uVar11 & 1) == 0) {
      lVar10 = 0x5f746361746e6f63;
      FUN_100060330();
    }
    else {
      lVar10 = *(long *)(local_a0[0] + 0x38) + lVar6 * 0x20;
      FUN_10003f094(lVar10);
      FUN_10007f3d4(local_a0 + 2);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  plVar13 = *(long **)(unaff_x20 + lVar8);
  if (plVar13 != (long *)0x0) {
    __s10Foundation4UUIDV10uuidStringSSvg(_TtC6Sentry8SentryId::id);
    local_a0[2] = 0x2d;
    local_a0[3] = 0xe100000000000000;
    local_a0[0] = 0;
    local_a0[1] = 0xe000000000000000;
    local_70 = plVar13;
    plStack_68 = (long *)lVar10;
    FUN_10009ff0c();
    plVar7 = local_a0 + 2;
    plVar12 = local_a0;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (plVar7,plVar12,0,0,0,1,puVar3,puVar3,puVar3,plVar13,plVar13,plVar13);
    _swift_bridgeObjectRelease(lVar10);
    plVar13 = plVar12;
    __sSS10lowercasedSSyF();
    _swift_bridgeObjectRelease(plVar12);
    local_58 = puVar3;
    local_70 = plVar7;
    plStack_68 = plVar13;
    FUN_10007f3d4(&local_70,local_a0 + 2);
    lVar8 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native(lVar5);
    uVar11 = 0;
    puVar9 = &DAT_d000000000000013;
    local_a0[0] = lVar5;
    FUN_1007b8564(&DAT_d000000000000013,0x80000001008da800,lVar8,FUN_100063670,FUN_1000675f0);
    lVar5 = local_a0[0];
    if ((uVar11 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar8 = *(long *)(local_a0[0] + 0x38) + (long)puVar9 * 0x20;
      FUN_10003f094(lVar8);
      FUN_10007f3d4(local_a0 + 2,lVar8);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  local_70 = *(long **)(unaff_x20 + _TtC6Sentry14SentryFeedback::source);
  if (local_70 == (long *)0x1) {
    local_70 = (long *)0x6d6f74737563;
  }
  else {
    if (local_70 != (long *)0x0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&DAT_1009eaec0,&local_70,&DAT_1009eaec0,PTR___sSiN_100995968);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b7f40);
      (*pcVar4)();
    }
    local_70 = (long *)0x746567646977;
  }
  local_58 = puVar3;
  plStack_68 = (long *)0xe600000000000000;
  FUN_10007f3d4(&local_70,local_a0 + 2);
  lVar8 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar10 = 0x656372756f73;
  uVar11 = 0;
  local_a0[0] = lVar5;
  FUN_1007b8564(0x656372756f73,0xe600000000000000,lVar8,FUN_100063670,FUN_1000675f0);
  lVar5 = local_a0[0];
  if ((uVar11 & 1) == 0) {
    FUN_100060330();
  }
  else {
    lVar8 = *(long *)(local_a0[0] + 0x38) + lVar10 * 0x20;
    FUN_10003f094(lVar8);
    FUN_10007f3d4(local_a0 + 2,lVar8);
  }
  _swift_bridgeObjectRelease(0x8000000000000000);
  return lVar5;
}

