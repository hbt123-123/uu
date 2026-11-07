// rea decompile_all
// name: FUN_10024eaec
// address: 0x10024eaec
// body: available
// range: 0x10024eaec-0x10024eb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024eb04 to 0x1007de5b4 _fread (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_10024eaec(undefined8 param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  size_t sVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    sVar1 = _fread(param_3,1,param_4,(FILE *)*param_2);
    return sVar1;
  }
  return 0xffffffffffffffff;
}

