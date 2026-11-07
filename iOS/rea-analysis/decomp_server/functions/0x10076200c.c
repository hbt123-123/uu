// rea decompile_all
// name: FUN_10076200c
// address: 0x10076200c
// body: available
// range: 0x10076200c-0x1007620ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10076200c(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 < 0x1d) {
    uVar1 = *(ulong *)(param_1 + (long)param_2 * 8 + 0x1b0);
  }
  else {
    switch(param_2) {
    case 0x1d:
      uVar1 = *(ulong *)(param_1 + 0x298);
      break;
    case 0x1e:
      uVar1 = *(ulong *)(param_1 + 0x2a0);
      break;
    case 0x1f:
      uVar1 = *(ulong *)(param_1 + 0x2a8);
      break;
    case 0x20:
      uVar1 = *(ulong *)(param_1 + 0x2b0);
      break;
    case 0x21:
      uVar1 = (ulong)*(uint *)(param_1 + 0x2b8);
      break;
    default:
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU_arm64.c"
                    ,0x88,"Invalid register number: %d");
      uVar1 = 0;
    }
  }
  return uVar1;
}

