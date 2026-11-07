// rea decompile_all
// name: FUN_100604578
// address: 0x100604578
// body: available
// range: 0x100604578-0x1006045db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006045c0 to 0x100004bb4 FUN_100004bb4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006045d8 to 0x100004bb4 FUN_100004bb4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100604578(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0xd;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xd,0,0,0x10,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_100602d8c();
    if (lVar2 != 0) {
      FUN_100004bb4(&DAT_100aafec0,&DAT_100848258);
      return;
    }
  }
  FUN_100004bb4(&DAT_100aafeb8,&DAT_100848250);
  return;
}

