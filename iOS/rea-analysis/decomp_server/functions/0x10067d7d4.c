// rea decompile_all
// name: FUN_10067d7d4
// address: 0x10067d7d4
// body: available
// range: 0x10067d7d4-0x10067d803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10067d7d4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 < 0x41) {
    uVar2 = param_1 >> (param_2 & 0x3f);
    if (0x3f < param_2) {
      uVar2 = 0;
    }
    param_1 = param_1 << (0x40 - param_2 & 0x3f);
    if (0x3f < 0x40 - param_2) {
      param_1 = 0;
    }
    return param_1 | uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067d804);
  (*pcVar1)();
}

