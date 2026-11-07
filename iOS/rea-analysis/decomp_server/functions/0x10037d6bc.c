// rea decompile_all
// name: FUN_10037d6bc
// address: 0x10037d6bc
// body: available
// range: 0x10037d6bc-0x10037d713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d710 to 0x10037d71c FUN_10037d71c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037d6bc(undefined8 param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (0x7f < param_2) {
    do {
      FUN_10037d71c(param_1,uVar2 & 0xff | 0x80);
      param_2 = uVar2 >> 7;
      bVar1 = 0x3fff < uVar2;
      uVar2 = param_2;
    } while (bVar1);
  }
  FUN_10037d71c(param_1,param_2 & 0xff);
  return;
}

