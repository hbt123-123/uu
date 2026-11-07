// rea decompile_all
// name: FUN_1007d3fa0
// address: 0x1007d3fa0
// body: available
// range: 0x1007d3fa0-0x1007d4057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007d4054 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d3fa0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  lVar1 = lVar3;
  _swift_isUniquelyReferenced_nonNull_native(lVar3);
  *unaff_x20 = -0x8000000000000000;
  uVar2 = param_3;
  FUN_1007b853c(param_2,param_3,lVar1);
  if ((uVar2 & 1) == 0) {
    FUN_100060330();
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x38) + param_2 * 0x20;
    FUN_10003f094(lVar1);
    FUN_10007f3d4(param_1,lVar1);
  }
  lVar1 = *unaff_x20;
  *unaff_x20 = lVar3;
  _swift_bridgeObjectRelease(lVar1);
  return;
}

