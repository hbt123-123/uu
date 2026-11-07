// rea decompile_all
// name: FUN_10074c018
// address: 0x10074c018
// body: available
// range: 0x10074c018-0x10074c0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10074c018(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = DAT_100b2cec8;
  _opendir();
  if (lVar1 == 0) {
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportStore.c"
                  ,0x6a,"Could not open directory %s");
    iVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    _readdir();
    iVar3 = 0;
    while (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x14) != '\x04') {
        lVar2 = lVar2 + 0x15;
        FUN_10074c64c();
        if (0 < lVar2) {
          iVar3 = iVar3 + 1;
        }
      }
      lVar2 = lVar1;
      _readdir();
    }
    _closedir(lVar1);
  }
  return iVar3;
}

