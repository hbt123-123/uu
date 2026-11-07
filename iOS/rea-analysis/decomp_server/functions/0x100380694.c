// rea decompile_all
// name: FUN_100380694
// address: 0x100380694
// body: available
// range: 0x100380694-0x1003806ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003806e8 to 0x100387178 FUN_100387178 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100380694(long param_1,undefined8 param_2)

{
  uLong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    uVar1 = _crc32(0,(Bytef *)(lVar2 + 4),*(uInt *)(param_1 + 0x88));
    *(int *)(param_1 + 0x9c) = (int)uVar1;
    FUN_100387178(param_1,*(undefined8 *)(param_1 + 0x88),uVar1,param_2,1);
    return;
  }
  return;
}

