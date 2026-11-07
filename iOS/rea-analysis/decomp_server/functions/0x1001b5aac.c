// rea decompile_all
// name: FUN_1001b5aac
// address: 0x1001b5aac
// body: available
// range: 0x1001b5aac-0x1001b5c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b5b4c to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b5aac(void)

{
  undefined *puVar1;
  ID IVar2;
  ID self;
  long unaff_x20;
  undefined1 auStack_60 [31];
  undefined1 local_41;
  
  self = *(ID *)(unaff_x20 + 0x40);
  _objc_msgSend(self,"lock");
  if ((*(byte *)(unaff_x20 + 0x39) & 1) != 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001b7140,0,0xd000000000000093,0x800000010089b8d0,0x2928706f7473,
                  0xe600000000000000,0x4b,0);
    _objc_msgSend(self,"unlock");
    return;
  }
  *(undefined2 *)(unaff_x20 + 0x38) = 0x100;
  local_41 = 1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_60,0x21,0);
  puVar1 = &DAT_100a77428;
  FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
  FUN_10039f3d0(&local_41,puVar1);
  _swift_endAccess(auStack_60);
  FUN_1001b661c(0x81e58ba8e79bbfe8,0xac000000a2ade69c);
  FUN_1001b6780();
  IVar2 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar2 = NSWorkspace::notificationCenter(IVar2,"notificationCenter");
  NSWorkspace::removeObserver_(IVar2,"removeObserver:");
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_(IVar2,"removeObserver:");
  _objc_msgSend(self,"unlock");
  return;
}

