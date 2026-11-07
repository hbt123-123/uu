// rea decompile_all
// name: SADatabase::databaseCheck
// address: 0x10071e2e4
// body: available
// range: 0x10071e2e4-0x10071e317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071e308 to 0x1007e7760 objc_stub::createTable (external=false, thunk=false, hasNoReturn=false), 0x10071e318 SADatabase::createTable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool SADatabase::databaseCheck(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = open(param_1);
  if (bVar1 != 0) {
    bVar1 = createTable(param_1);
    return bVar1;
  }
  return 0;
}

