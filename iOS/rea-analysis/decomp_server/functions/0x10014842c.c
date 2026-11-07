// rea decompile_all
// name: FUN_10014842c
// address: 0x10014842c
// body: available
// range: 0x10014842c-0x10014866b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100148664 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014842c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong self;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [16];
  ulong local_80;
  char *local_70;
  char *pcStack_68;
  
  FUN_100401b14(0);
  local_70 = s___100891e30 + 0x10;
  pcStack_68 = s_____100891c00;
  FUN_1003fb45c(FUN_10014866c,0,0xd0000000000000ab,0x8000000100891c00,0xd000000000000014,
                0x8000000100891e40,0x94,7);
  uVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x18),"operations");
  uVar3 = 0;
  FUN_100148e14(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  if (uVar2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar2 & 0xffffffffffffff8;
    if ((long)uVar2 < 0) {
      uVar5 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10014866c);
      (*pcVar1)();
    }
    uVar6 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
      }
      else {
        uVar4 = uVar6;
        FUN_10016a1d0(uVar6,uVar2);
      }
      uVar3 = 0;
      FUN_100145bc8(0);
      self = uVar4;
      _swift_dynamicCastClass(uVar4,uVar3);
      if (self != 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_80 = uVar4;
        FUN_1003fb45c(FUN_100149614,auStack_90,0xd0000000000000ab,
                      (ulong)pcStack_68 | 0x8000000000000000,0xd000000000000014,
                      (ulong)local_70 | 0x8000000000000000,0x97,7);
        _objc_msgSend(self,"setExecuting:",0);
        _objc_msgSend(self,"setFinished:",1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
    _swift_bridgeObjectRelease(uVar2);
    return;
  }
  _swift_bridgeObjectRelease(uVar2);
  return;
}

