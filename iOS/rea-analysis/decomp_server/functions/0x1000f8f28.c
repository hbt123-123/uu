// rea decompile_all
// name: FUN_1000f8f28
// address: 0x1000f8f28
// body: available
// range: 0x1000f8f28-0x1000f8fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000f8fb0 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f8f28(undefined8 *param_1)

{
  int iVar1;
  long in_x4;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(in_x4 + 0x58) & 0x3000000000000000;
  if (((uVar2 & *(ulong *)(in_x4 + 0x48)) != 0x3000000000000000) &&
     (iVar1 = *(int *)(in_x4 + 0x20), uVar2 == 0x2000000000000000 && (iVar1 == 1 || iVar1 == 2))) {
    if (DAT_100a73b60 != -1) {
      param_1 = &DAT_100a73b60;
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1003b2720();
    uVar3 = *param_1;
    _swift_retain(uVar3);
    FUN_10039a1f0(iVar1 == 2);
    _swift_release(uVar3);
    return;
  }
  return;
}

