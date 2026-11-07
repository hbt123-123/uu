// rea decompile_all
// name: FUN_10067d2e0
// address: 0x10067d2e0
// body: available
// range: 0x10067d2e0-0x10067d34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067d2e0(long param_1)

{
  code *in_x4;
  long in_x7;
  long unaff_x21;
  
  (**(code **)(in_x7 + 8))();
  if (unaff_x21 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*in_x4)();
    }
    _swift_bridgeObjectRelease();
  }
  return;
}

