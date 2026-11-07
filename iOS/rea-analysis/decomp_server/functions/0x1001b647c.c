// rea decompile_all
// name: FUN_1001b647c
// address: 0x1001b647c
// body: available
// range: 0x1001b647c-0x1001b65ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b647c(void)

{
  ID IVar1;
  long unaff_x20;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001b65f0,0,0xd000000000000093,0x800000010089b8d0,0x74696e696564,
                0xe600000000000000,0x30,0);
  _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"lock");
  FUN_1001b661c(0x94e9a1b1e8b9afe5,0xac00000081afe680);
  FUN_1001b6780();
  _objc_msgSend(*(ID *)(unaff_x20 + 0x40),"unlock");
  IVar1 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar1 = NSWorkspace::notificationCenter(IVar1,"notificationCenter");
  NSWorkspace::removeObserver_(IVar1,"removeObserver:");
  IVar1 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_(IVar1,"removeObserver:");
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}

