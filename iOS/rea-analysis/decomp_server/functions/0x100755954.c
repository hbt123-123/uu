// rea decompile_all
// name: SentryOptions::isProfilingEnabled
// address: 0x100755954
// body: available
// range: 0x100755954-0x10075599f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool SentryOptions::isProfilingEnabled(ID param_1,SEL param_2)

{
  uint uVar1;
  double extraout_d0;
  
  if (((*(ID *)(param_1 + 0x100) != 0) &&
      (objc_stub::doubleValue(*(ID *)(param_1 + 0x100)), 0.0 < extraout_d0)) ||
     (*(long *)(param_1 + 0x108) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)(*(char *)(param_1 + 0x1d) != '\0');
  }
  return uVar1;
}

