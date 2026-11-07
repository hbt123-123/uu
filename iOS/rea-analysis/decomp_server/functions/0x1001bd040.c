// rea decompile_all
// name: FUN_1001bd040
// address: 0x1001bd040
// body: available
// range: 0x1001bd040-0x1001bd1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001bd040(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = _TtC14UURemoteServer16ClipboardHandler::ref;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_68,0,0);
  lVar1 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if ((lVar1 == 0) ||
     (lVar1 = lVar1 + _TtC14UURemoteServer22StreamerConnectSession::_peerState,
     _swift_beginAccess(lVar1,auStack_80,0,0), *(long *)(lVar1 + 8) != 5)) {
    FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
    _swift_allocObject();
  }
  else {
    lVar2 = unaff_x20 + lVar2;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      FUN_1000c8ac4();
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      puVar3 = &DAT_100a79cf0;
      FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
      _swift_allocObject();
      FUN_100615648(FUN_100152890,auStack_c0,puVar3);
      _swift_release(lVar2);
      return;
    }
    FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
    _swift_allocObject();
  }
  FUN_100615648(FUN_1001be730,0);
  return;
}

