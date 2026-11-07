// rea decompile_all
// name: thunk_FUN_10074c5bc
// address: 0x10076c2c4
// body: available
// range: 0x10076c2c4-0x10076c2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10074c5bc(void)

{
  char acStack_21c [500];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  _snprintf(acStack_21c,500,"%s/%s-report-%016llx.json");
  FUN_10074aa04(acStack_21c,1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

