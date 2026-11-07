// rea decompile_all
// name: FUN_1000b4588
// address: 0x1000b4588
// body: available
// range: 0x1000b4588-0x1000b45f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b45dc to 0x10000eb08 FUN_10000eb08 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000b45f4 to 0x10000eb08 FUN_10000eb08 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b4588(void)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = 0xd;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xd,0,0,0x10,0,0);
  if ((uVar1 & 1) != 0) {
    puVar2 = &DAT_100104458;
    FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
    if (puVar2 != (undefined *)0x0) {
      FUN_10000eb08(&DAT_100104f38,&DAT_1000d6ce8);
      return;
    }
  }
  FUN_10000eb08(&DAT_100104f30,&DAT_1000d6ce0);
  return;
}

