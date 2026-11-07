// rea decompile_all
// name: FUN_1000231b4
// address: 0x1000231b4
// body: available
// range: 0x1000231b4-0x100023413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

bool FUN_1000231b4(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x20;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [16];
  int local_90;
  int iStack_8c;
  undefined1 auStack_80 [40];
  char local_58;
  
  lVar8 = *(long *)(unaff_x20 + 0x38);
  iVar6 = (int)param_1;
  uVar3 = param_1;
  if (*(char *)(lVar8 + 0x14) == '\x01') {
    FUN_100039b50();
    if ((uVar3 & 1) == 0) goto LAB_10002321c;
    if ((*(byte *)(lVar8 + 0x14) & 1) != 0) {
      FUN_100039b50();
      if ((uVar3 & 1) == 0) goto LAB_10002321c;
      iVar7 = -1;
      goto LAB_10002332c;
    }
    iVar2 = *(int *)(lVar8 + 0x10);
    iVar7 = -1;
  }
  else {
    iVar2 = *(int *)(lVar8 + 0x10);
    iVar7 = iVar2;
  }
  if ((iVar2 < 0) || (iVar2 != iVar6)) {
LAB_10002332c:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = iVar6;
    iStack_8c = iVar7;
    FUN_1003fb45c(FUN_10003f648,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029,
                  0x8000000100877ec0,0x917,0);
    return false;
  }
LAB_10002321c:
  FUN_10004d12c();
  uVar11 = param_1;
  thunk_FUN_100152fd0(param_1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  if (((uVar11 & 1) == 0) &&
     (uVar3 = param_1, thunk_FUN_100152fd0(param_1,param_2), (uVar3 & 1) == 0)) {
    uVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar4 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
    uVar11 = uVar3 & 0xffffffffffffff8;
    if (uVar3 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar11;
      if ((long)uVar3 < 0) {
        uVar9 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    uVar10 = 0;
    while (uVar9 != uVar10) {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100023400);
          (*pcVar1)();
        }
        iVar2 = (int)*(undefined8 *)(uVar3 + uVar10 * 8 + 0x20);
      }
      else {
        uVar5 = uVar10;
        FUN_100169c00(uVar10,uVar3);
        iVar2 = (int)uVar5;
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000233fc);
        (*pcVar1)();
      }
      FUN_1003d541c();
      uVar10 = uVar10 + 1;
      if (iVar2 == iVar6) {
        _swift_bridgeObjectRelease(uVar3);
        FUN_10003990c(auStack_80,param_1);
        return local_58 != '\x02';
      }
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  return false;
}

