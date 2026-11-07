// rea decompile_all
// name: FUN_1000c2548
// address: 0x1000c2548
// body: available
// range: 0x1000c2548-0x1000c261b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000c2548(void)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000ccb44();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::isEnabled) = 0;
  FUN_1000c2814();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"init");
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::addObserver_selector_name_object_
            (self,"addObserver:selector:name:object:",IVar3,"handleScreenParametersChanged",
             *(undefined8 *)PTR__NSApplicationDidChangeScreenParametersNotification_100995408,0);
  return IVar3;
}

