// rea decompile_all
// name: SentryCrash::applicationWillTerminate
// address: 0x10078ec78
// body: available
// range: 0x10078ec78-0x10078ec7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SentryCrash::applicationWillTerminate(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  timeval tStack_40;
  
  dVar2 = DAT_100b2e0e0;
  uVar1 = DAT_100b2e098;
  if (DAT_100b2e0f0 != '\0') {
    _gettimeofday(&tStack_40,(void *)0x0);
    DAT_100b2e0a8 =
         DAT_100b2e0a8 +
         (((double)tStack_40.tv_usec / 1000000.0 + (double)tStack_40.tv_sec) - dVar2);
    FUN_100788a64(uVar1);
    return;
  }
  return;
}

