// rea decompile_all
// name: FUN_100178d08
// address: 0x100178d08
// body: available
// range: 0x100178d08-0x100178e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100178d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + _TtC14UURemoteServer22StreamerConnectSession::handle);
    lVar2 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if ((lVar2 != 0) &&
       (lVar2 = lVar2 + _TtC14UURemoteServer22StreamerConnectSession::_peerState,
       _swift_beginAccess(lVar2,auStack_80,0,0), *(long *)(lVar2 + 8) == 5)) {
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      if (*(long *)(param_4 + 0x1b0) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined1 *)(*(long *)(param_4 + 0x1b0) + 0x21);
      }
      FUN_1001ad794(iVar1,param_1,param_2,param_3,uVar3);
      return (long)iVar1;
    }
  }
  return 0x56b8;
}

