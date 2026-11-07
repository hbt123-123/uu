// rea decompile_all
// name: FUN_10076210c
// address: 0x10076210c
// body: available
// range: 0x10076210c-0x100762177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10076210c(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(ulong *)(param_1 + 0x1a0);
  }
  else if (param_2 == 1) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x1a8);
  }
  else if (param_2 == 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x1ac);
  }
  else {
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU_arm64.c"
                  ,0xa9,"Invalid register number: %d");
    uVar1 = 0;
  }
  return uVar1;
}

