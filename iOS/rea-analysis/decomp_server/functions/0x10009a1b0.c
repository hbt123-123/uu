// rea decompile_all
// name: FUN_10009a1b0
// address: 0x10009a1b0
// body: available
// range: 0x10009a1b0-0x10009a20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10009a1b0(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long unaff_x21;
  undefined8 local_40 [4];
  
  if (param_3 == 0) {
    (*param_1)(local_40,0,0);
  }
  else {
    (*param_1)(local_40,param_3,param_4 - param_3);
  }
  if (unaff_x21 == 0) {
    return local_40[0];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009a210);
  (*pcVar1)();
}

