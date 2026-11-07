// rea decompile_all
// name: FUN_100026a98
// address: 0x100026a98
// body: available
// range: 0x100026a98-0x100026c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100026c00 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100026a98(void)

{
  ID IVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  ID self;
  undefined1 auStack_58 [24];
  
  if ((*(char *)(unaff_x20 + 0x99) == '\x01') &&
     (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) {
    self = *(ID *)(unaff_x20 + 0x10);
    IVar1 = _objc_msgSend(self,"screenId");
    puVar3 = auStack_58;
    _swift_beginAccess(unaff_x20 + 0x80,puVar3,0x20,0);
    if (*(long *)(*(long *)(unaff_x20 + 0x80) + 0x10) == 0) {
      _swift_endAccess(auStack_58);
    }
    else {
      thunk_FUN_1001a2c34(IVar1);
      _swift_endAccess(auStack_58);
      if (((ulong)puVar3 & 1) != 0) {
        uVar2 = _objc_msgSend(self,"screenId");
        FUN_1000231b4(uVar2,PTR___swiftEmptySetSingleton_100995eb0);
        if ((uVar2 & 1) != 0) {
          IVar1 = _objc_msgSend(self,"screenId");
          return IVar1;
        }
      }
    }
  }
  else {
    IVar1 = 0;
    FUN_10001efe0();
    if ((IVar1 >> 0x20 & 1) == 0) {
      FUN_10001a914();
      _objc_msgSend(IVar1,"setVideoTrackIndex:",0);
      uVar2 = _objc_msgSend(IVar1,"screenId");
      FUN_1000231b4(uVar2,PTR___swiftEmptySetSingleton_100995eb0);
      if ((uVar2 & 1) != 0) {
        IVar1 = _objc_msgSend(IVar1,"screenId");
        return IVar1;
      }
    }
    IVar1 = *(ID *)(unaff_x20 + 0x10);
    uVar2 = _objc_msgSend(IVar1,"screenId");
    FUN_1000231b4(uVar2,PTR___swiftEmptySetSingleton_100995eb0);
    if ((uVar2 & 1) != 0) {
      IVar1 = _objc_msgSend(IVar1,"screenId");
      return IVar1;
    }
  }
  return 0xffffffff;
}

