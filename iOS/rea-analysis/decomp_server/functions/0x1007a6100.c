// rea decompile_all
// name: FUN_1007a6100
// address: 0x1007a6100
// body: available
// range: 0x1007a6100-0x1007a61c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a6100(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    pvVar2 = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)**(undefined8 **)(param_1 + 8);
    iVar6 = (int)(*(undefined8 **)(param_1 + 8))[1];
    iVar3 = iVar6 - (int)pvVar2;
    iVar6 = iVar6 - (int)pvVar1;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 1;
    }
    if (iVar6 < iVar4 >> 1) {
      _memcpy(pvVar2,pvVar1,(long)iVar6);
      **(undefined8 **)(param_1 + 8) = pvVar2;
      iVar4 = *(int *)(param_1 + 0x20);
      _read(iVar4,(long)pvVar2 + (long)iVar6,iVar3 - iVar6);
      if (iVar4 < iVar3 - iVar6) {
        if (iVar4 < 0) {
          piVar5 = ___error();
          _strerror(*piVar5);
          FUN_1007b02e4("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashJSONCodec.c"
                        ,0x545,"Error reading file %s: %s");
        }
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
  }
  return;
}

