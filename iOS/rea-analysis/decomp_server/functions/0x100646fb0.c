// rea decompile_all
// name: FUN_100646fb0
// address: 0x100646fb0
// body: available
// range: 0x100646fb0-0x100647087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100647014 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100646fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *unaff_x20;
  long *plVar3;
  long lVar4;
  
  plVar3 = unaff_x20 + 3;
  iVar1 = (int)*plVar3;
  if (*(byte *)(unaff_x20 + 2) < 2) {
    _swift_bridgeObjectRelease();
    *unaff_x20 = param_1;
    unaff_x20[1] = param_2;
    *(char *)(unaff_x20 + 2) = (char)param_3;
    unaff_x20[3] = param_4;
    _swift_bridgeObjectRetain(param_4);
    return;
  }
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *plVar3;
  if (iVar1 == 0) {
    lVar2 = 0;
    FUN_100629f38(0,*(ulong *)(lVar4 + 0x18) >> 1);
    _swift_bridgeObjectRelease(lVar4);
    *plVar3 = lVar2;
  }
  else {
    FUN_100634e4c(0,*(undefined8 *)(lVar4 + 0x10));
  }
  _swift_bridgeObjectRetain(param_4);
  FUN_100628ce8(param_1,param_2,param_3,param_4);
  return;
}

