// rea decompile_all
// name: FUN_1004dabe4
// address: 0x1004dabe4
// body: available
// range: 0x1004dabe4-0x1004dac5f inclusive
// range: 0x1004dac94-0x1004dacb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004dabe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1004daf20();
  if (unaff_x21 == 0) {
    if (*(ulong *)(unaff_x20 + 0x60) >> 8 != 0xffffffff ||
        (*(ulong *)(unaff_x20 + 0x70) & 0x3000000000000000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004dac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1004dac60 +
                (ulong)(byte)(&DAT_100832063)
                             [(uint)(*(ulong *)(unaff_x20 + 0x70) >> 0x39) & 0x18 |
                              (uint)(*(ulong *)(unaff_x20 + 0x60) >> 0x3d)] * 4))();
      return;
    }
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                  param_2,param_3);
  }
  return;
}

