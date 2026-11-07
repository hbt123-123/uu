// rea decompile_all
// name: FUN_1003e2238
// address: 0x1003e2238
// body: available
// range: 0x1003e2238-0x1003e22c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e22b0 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e2238(undefined1 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  
  if (param_1[0x31] == '\x04') {
    if (param_2 != (code *)0x0) {
      (*param_2)(*(undefined8 *)(param_1 + 8));
    }
  }
  else if (param_4 != (code *)0x0) {
    FUN_1003e2410();
    puVar1 = &DAT_1009e6258;
    _swift_allocError(&DAT_1009e6258,param_1,0,0);
    *param_1 = 3;
    (*param_4)();
    _swift_errorRelease(puVar1);
    return;
  }
  return;
}

