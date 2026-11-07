// rea decompile_all
// name: FUN_10017aef0
// address: 0x10017aef0
// body: available
// range: 0x10017aef0-0x10017af27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017aef0(void)

{
  ulong in_x3;
  ulong in_x4;
  ulong in_x5;
  ulong in_x6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((((in_x6 >> 0x21 & 0x7f) == 0) && (in_x5 >> 0x21 == 0)) &&
      ((in_x3 & 0x3000000000000000) == 0x3000000000000000)) &&
     ((in_x4 & 0xfffffffe00000000) == 0x7ffffffe00000000)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010017af24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

