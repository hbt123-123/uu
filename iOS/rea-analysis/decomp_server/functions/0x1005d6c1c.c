// rea decompile_all
// name: FUN_1005d6c1c
// address: 0x1005d6c1c
// body: available
// range: 0x1005d6c1c-0x1005d6c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d6c7c to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d6c1c(code *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 != (code *)0x0) {
    pcVar1 = param_1;
    FUN_1005d42c0();
    puVar2 = &DAT_1009d90b8;
    _swift_allocError(&DAT_1009d90b8,pcVar1,0,0);
    *pcVar1 = (code)0x2;
    (*param_1)();
    _swift_errorRelease(puVar2);
    return;
  }
  return;
}

