// rea decompile_all
// name: FUN_100788e78
// address: 0x100788e78
// body: available
// range: 0x100788e78-0x100788f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100788efc to 0x100788a64 FUN_100788a64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100788e78(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  timeval local_40;
  
  dVar2 = DAT_100b2e0e0;
  uVar1 = DAT_100b2e098;
  if (DAT_100b2e0f0 != '\0') {
    _gettimeofday(&local_40,(void *)0x0);
    DAT_100b2e0a8 =
         DAT_100b2e0a8 + (((double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec) - dVar2);
    FUN_100788a64(uVar1);
    return;
  }
  return;
}

