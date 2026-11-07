// rea decompile_all
// name: FUN_100220060
// address: 0x100220060
// body: available
// range: 0x100220060-0x100220133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100220060(int param_1,long param_2)

{
  if ((param_2 == 0) || (__sSS14validatingUTF8SSSgSPys4Int8VG_tcfC(param_2), param_2 == 0)) {
    _swift_bridgeObjectRelease(0);
  }
  if (param_1 < -4) {
    if (param_1 == -6) {
      return 4;
    }
    if (param_1 == -5) {
      return 3;
    }
  }
  else {
    if (param_1 == -4) {
      return 2;
    }
    if (param_1 == -3) {
      return 1;
    }
    if (param_1 == -2) {
      return 0;
    }
  }
  return (long)param_1;
}

