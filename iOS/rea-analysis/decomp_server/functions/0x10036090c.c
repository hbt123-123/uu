// rea decompile_all
// name: FUN_10036090c
// address: 0x10036090c
// body: available
// range: 0x10036090c-0x100360a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100360a58 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036090c(undefined8 *param_1,ulong param_2)

{
  ID self;
  long lVar1;
  long lVar2;
  ID IVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  pvVar4 = (void *)*param_1;
  uVar5 = *(undefined8 *)((long)pvVar4 + 0x30);
  self = *(ID *)((long)pvVar4 + 0x48);
  lVar1 = *(long *)((long)pvVar4 + 0x50);
  IVar3 = *(ID *)((long)pvVar4 + 0x38);
  lVar2 = *(long *)((long)pvVar4 + 0x40);
  if ((param_2 & 1) == 0) {
    _objc_msgSend(self,"lock");
    IVar3 = _objc_msgSend(IVar3,"taskIdentifier");
    _swift_beginAccess(lVar2 + lVar1,(long)pvVar4 + 0x18,0x21,0);
    FUN_100360750(uVar5,IVar3);
    _swift_endAccess((long)pvVar4 + 0x18);
    _objc_msgSend(self,"unlock");
  }
  else {
    _objc_msgSend(self,"lock");
    IVar3 = _objc_msgSend(IVar3,"taskIdentifier");
    _swift_beginAccess(lVar2 + lVar1,(long)pvVar4 + 0x18,0x21,0);
    FUN_100360750(uVar5,IVar3);
    _swift_endAccess((long)pvVar4 + 0x18);
    _objc_msgSend(self,"unlock");
  }
  _free(pvVar4);
  return;
}

