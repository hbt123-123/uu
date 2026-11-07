// rea decompile_all
// name: FUN_1000c90c0
// address: 0x1000c90c0
// body: available
// range: 0x1000c90c0-0x1000c91e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c90c0(void)

{
  ID self;
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  _swift_getObjectType();
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_(self,"removeObserver:");
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000cdc08,auStack_80,0xd00000000000009c,0x8000000100885110,0x74696e696564,
                0xe600000000000000,0x3c,0);
  local_38 = 0;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::_peerState,auStack_50
                     ,0x21,0);
  puVar1 = &DAT_100a77460;
  FUN_100004bb4(&DAT_100a77460,&DAT_10080c138);
  FUN_10039f3d0(&local_38,puVar1);
  _swift_endAccess(auStack_50);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"dealloc");
  return;
}

