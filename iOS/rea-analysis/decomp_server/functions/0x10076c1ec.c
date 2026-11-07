// rea decompile_all
// name: FUN_10076c1ec
// address: 0x10076c1ec
// body: available
// range: 0x10076c1ec-0x10076c2bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10076c1ec(void *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((long)param_1 < 1) {
    pcVar3 = "Report ID was %llx";
    uVar2 = 0xff;
  }
  else {
    FUN_10074c22c();
    if (param_1 != (void *)0x0) {
      pvVar1 = param_1;
      FUN_10079f298();
      if (pvVar1 == (void *)0x0) {
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashC.c"
                      ,0x10b,"Failed to fixup report ID %llx");
      }
      _free(param_1);
      return pvVar1;
    }
    pcVar3 = "Failed to load report ID %llx";
    uVar2 = 0x105;
  }
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashC.c"
                ,uVar2,pcVar3);
  return (void *)0x0;
}

