// rea decompile_all
// name: FUN_10050bad4
// address: 0x10050bad4
// body: available
// range: 0x10050bad4-0x10050bb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050bad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long unaff_x21;
  long local_18;
  
  local_18 = 0;
  FUN_1005640a8(&local_18,param_2,param_3,param_1);
  if (unaff_x21 == 0) {
    if (SCARRY8(*unaff_x20,local_18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10050bb18);
      (*pcVar1)();
    }
    *unaff_x20 = *unaff_x20 + local_18;
  }
  return;
}

