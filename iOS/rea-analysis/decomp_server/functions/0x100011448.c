// rea decompile_all
// name: FUN_100011448
// address: 0x100011448
// body: available
// range: 0x100011448-0x1000117f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000117f0 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100011448(void)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long extraout_x12;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined1 auStack_190 [16];
  ulong local_180;
  undefined8 *local_178;
  ulong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char *local_138;
  char *local_130;
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char local_70;
  
  uVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar4 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar10 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000117f8);
    (*pcVar2)();
  }
  uVar11 = 0;
  uVar9 = uVar3 & 0xc000000000000001;
  pcVar12 = "captureFailedRetryCount";
  local_130 = "tion generation:";
  local_138 = "captureFailedRetryCount";
  local_168 = uVar3;
  do {
    if (uVar9 == 0) {
      uVar5 = *(ulong *)(uVar3 + uVar11 * 8 + 0x20);
    }
    else {
      uVar5 = uVar11;
      FUN_100169c00(uVar11,uVar3);
    }
    uVar6 = uVar5;
    FUN_1003d541c();
    FUN_10004ffa0();
    if ((uVar6 & 1) == 0) {
      FUN_1003d541c();
      puVar7 = auStack_118;
      _swift_beginAccess(unaff_x20 + 0xa8,puVar7,0x20,0);
      if ((*(long *)(*(long *)(unaff_x20 + 0xa8) + 0x10) == 0) ||
         (thunk_FUN_1001a2c34(uVar6), ((ulong)puVar7 & 1) == 0)) {
        _swift_endAccess(auStack_118);
        FUN_1003d541c();
        FUN_10003990c(&local_100);
        cVar1 = local_d8;
        uVar4 = local_e0;
        if (local_d8 == '\x02') goto LAB_10001159c;
        FUN_100401b14(0);
        uStack_148 = uStack_f8;
        local_150 = local_100;
        uStack_158 = uStack_e8;
        local_160 = uStack_f0;
        uStack_c8 = uStack_f8;
        local_d0 = local_100;
        uStack_b8 = uStack_e8;
        uStack_c0 = uStack_f0;
        local_b0 = local_e0;
        local_a8 = cVar1;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_180 = CONCAT44(local_180._4_4_,(int)uVar6);
        local_178 = &local_d0;
        FUN_1003fb48c(FUN_10003fc44,auStack_190,extraout_x12 + 0x8d,
                      (ulong)local_138 | 0x8000000000000000,0xd00000000000001c,
                      (ulong)local_130 | 0x8000000000000000,0x273,0);
        _swift_beginAccess(unaff_x20 + 0xa8,auStack_118,0x21,0);
        uVar3 = local_168;
        uStack_80 = uStack_158;
        local_88 = local_160;
        uStack_90 = uStack_148;
        local_98 = local_150;
        local_78 = uVar4;
        local_70 = cVar1;
        uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
        _swift_isUniquelyReferenced_nonNull_native(uVar4);
        uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
        FUN_100060914(&local_98,uVar6,uVar4);
        *(undefined8 *)(unaff_x20 + 0xa8) = uVar8;
        pcVar12 = local_138;
      }
      _swift_endAccess(auStack_118);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_180 = uVar5;
      FUN_1003fb48c(FUN_10003fc50,auStack_190,0xd0000000000000a9,(ulong)pcVar12 | 0x8000000000000000
                    ,0xd00000000000001c,(ulong)local_130 | 0x8000000000000000,0x26d,0);
    }
LAB_10001159c:
    uVar11 = uVar11 + 1;
    if (uVar10 == uVar11) {
      _swift_bridgeObjectRelease(uVar3);
      return;
    }
  } while( true );
}

