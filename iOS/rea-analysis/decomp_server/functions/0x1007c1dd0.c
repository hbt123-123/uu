// rea decompile_all
// name: FUN_1007c1dd0
// address: 0x1007c1dd0
// body: available
// range: 0x1007c1dd0-0x1007c1e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c1e1c to 0x1007b4550 FUN_1007b4550 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c1dd0(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = 0xd;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xd,0,0);
  puVar3 = &DAT_100abcde8;
  if ((uVar1 & 1) != 0) {
    lVar2 = 0;
    switchD_1007bf228::caseD_6d();
    if (lVar2 != 0) {
      puVar3 = &DAT_100abcdf0;
    }
  }
  FUN_1007b4550(puVar3);
  return;
}

