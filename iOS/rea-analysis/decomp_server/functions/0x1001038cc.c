// rea decompile_all
// name: FUN_1001038cc
// address: 0x1001038cc
// body: available
// range: 0x1001038cc-0x100103977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100103964 to 0x1007df514 _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001038cc(void)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _TtC14UURemoteServer30AccessibilityPermissionMonitor::observer;
  lVar4 = *(long *)(unaff_x20 + _TtC14UURemoteServer30AccessibilityPermissionMonitor::observer);
  if (lVar4 != 0) {
    IVar2 = 0;
    FUN_10004003c(0,&DAT_100a76e10,&PTR__OBJC_CLASS___NSDistributedNotificationCenter_100a65888);
    _swift_getObjCClassFromMetadata();
    _swift_unknownObjectRetain(lVar4);
    IVar2 = _objc_msgSend(IVar2,"defaultCenter");
    _objc_msgSend(IVar2,"removeObserver:",lVar4);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
    return;
  }
  return;
}

