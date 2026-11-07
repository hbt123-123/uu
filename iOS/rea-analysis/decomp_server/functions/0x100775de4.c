// rea decompile_all
// name: FUN_100775de4
// address: 0x100775de4
// body: available
// range: 0x100775de4-0x100775efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100775de4(undefined4 *param_1,ulong param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  double local_40;
  undefined4 local_34;
  
  _open(param_2,0);
  if ((int)param_2 < 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                  ,0x52,"Could not open replay info crash file %s: %s");
  }
  else {
    local_34 = 0;
    local_40 = 0.0;
    uVar1 = param_2;
    FUN_10074a46c();
    if ((uVar1 & 1) == 0) {
      pcVar4 = "Error reading segmentId from replay info crash file.";
      uVar3 = 0x5a;
    }
    else {
      uVar1 = param_2;
      FUN_10074a46c(param_2,&local_40,8);
      if ((uVar1 & 1) != 0) {
        _close(param_2);
        if (local_40 == 0.0) {
          return 0;
        }
        *param_1 = local_34;
        *(double *)(param_1 + 2) = local_40;
        return 1;
      }
      pcVar4 = "Error reading lastSegmentEnd from replay info crash file.";
      uVar3 = 0x60;
    }
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                  ,uVar3,pcVar4);
    _close(param_2);
  }
  return 0;
}

