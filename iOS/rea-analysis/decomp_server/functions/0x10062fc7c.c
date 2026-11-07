// rea decompile_all
// name: FUN_10062fc7c
// address: 0x10062fc7c
// body: available
// range: 0x10062fc7c-0x10062fcb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10062fcb0 to 0x1007dbdf4 _$sSays10ArraySliceVyxGSnySiGcig (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062fc7c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_1;
  __sSa8endIndexSivg();
  if (-1 < lVar2) {
    __sSays10ArraySliceVyxGSnySiGcig(0,lVar2,param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10062fcb8);
  (*pcVar1)();
}

