// rea decompile_all
// name: FUN_10021adac
// address: 0x10021adac
// body: available
// range: 0x10021adac-0x10021ae73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021ae60 to 0x1007df514 _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021adac(void)

{
  undefined8 uVar1;
  ID self;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(lVar2);
    FUN_100414840();
    _swift_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    _swift_unknownObjectRetain(lVar2);
    self = NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::removeObserver_(self,"removeObserver:",lVar2);
    _swift_unknownObjectRelease(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    _swift_unknownObjectRelease(uVar1);
    return;
  }
  return;
}

