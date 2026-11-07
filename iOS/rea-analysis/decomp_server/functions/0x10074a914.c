// rea decompile_all
// name: FUN_10074a914
// address: 0x10074a914
// body: available
// range: 0x10074a914-0x10074aa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10074a914(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  pcVar2 = _strdup(param_1);
  lVar4 = 1;
  do {
    if (pcVar2[lVar4] == '/') {
      pcVar2[lVar4] = '\0';
      iVar1 = _mkdir(pcVar2,0x1c0);
      if ((iVar1 < 0) && (piVar3 = ___error(), *piVar3 != 0x11)) {
        uVar5 = 0x16d;
        goto LAB_10074a9b0;
      }
      pcVar2[lVar4] = '/';
    }
    else if (pcVar2[lVar4] == '\0') {
      iVar1 = _mkdir(pcVar2,0x1c0);
      if ((iVar1 < 0) && (piVar3 = ___error(), *piVar3 != 0x11)) {
        uVar5 = 0x174;
LAB_10074a9b0:
        piVar3 = ___error();
        _strerror(*piVar3);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                      ,uVar5,"Could not create directory %s: %s");
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      _free(pcVar2);
      return uVar5;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}

