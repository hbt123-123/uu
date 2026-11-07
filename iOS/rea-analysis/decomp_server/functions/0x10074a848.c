// rea decompile_all
// name: FUN_10074a848
// address: 0x10074a848
// body: available
// range: 0x10074a848-0x10074a913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10074a848(undefined8 param_1,char *param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  
  pcVar5 = param_2 + (long)param_3 + -1;
  *pcVar5 = '\0';
  pcVar4 = param_2;
  if (param_2 < pcVar5) {
    lVar6 = (long)param_3 + -1;
    pcVar3 = param_2;
    do {
      uVar1 = param_1;
      _read(param_1,pcVar3,1);
      if ((int)uVar1 < 0) {
        piVar2 = ___error();
        _strerror(*piVar2);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                      ,0x159,"Could not read from fd %d: %s");
        return -1;
      }
      pcVar4 = pcVar3;
      if (((int)uVar1 == 0) || (*pcVar3 == '\n')) break;
      pcVar3 = pcVar3 + 1;
      lVar6 = lVar6 + -1;
      pcVar4 = pcVar5;
    } while (lVar6 != 0);
  }
  *pcVar4 = '\0';
  return (int)pcVar4 - (int)param_2;
}

