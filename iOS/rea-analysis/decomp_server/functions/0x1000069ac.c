// rea decompile_all
// name: FUN_1000069ac
// address: 0x1000069ac
// body: available
// range: 0x1000069ac-0x100006af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100006abc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000069ac(undefined8 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  if (DAT_100a73b60 != -1) {
    param_1 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
    param_1 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      lVar3 = lVar5;
      FUN_1000c815c();
      cVar2 = *(char *)(lVar3 + 0x10);
      _swift_release();
      if (cVar2 != '\x01') {
        return (undefined8 *)0x0;
      }
      lVar3 = lVar5 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
      _swift_beginAccess(lVar3,auStack_48,0,0);
      if (*(long *)(lVar3 + 8) == 5) {
        uVar1 = *(undefined4 *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle);
        IVar4 = NSCursor::currentSystemCursor((ID)&_OBJC_CLASS___NSCursor,"currentSystemCursor");
        FUN_100006e48(uVar1,IVar4);
      }
      param_1 = (undefined8 *)0x0;
    }
  }
  return param_1;
}

