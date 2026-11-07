// rea decompile_all
// name: FUN_100737698
// address: 0x100737698
// body: available
// range: 0x100737698-0x1007377bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100737764 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007377b8 to 0x1007b02e4 FUN_1007b02e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737698(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = DAT_100b2ca88;
  puVar1 = DAT_100b2ca80;
  pvVar6 = (void *)0x0;
  uVar7 = (ulong)DAT_100b2ca88;
  uVar3 = 0;
  if ((param_1 != 0) && (0 < (int)param_2)) {
    pvVar6 = _malloc((ulong)param_2 << 3);
    if (pvVar6 == (void *)0x0) {
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,0x6e4,"Could not allocate memory");
      return;
    }
    lVar8 = 0;
    do {
      pcVar4 = _strdup(*(char **)(param_1 + lVar8));
      *(char **)((long)pvVar6 + lVar8) = pcVar4;
      lVar8 = lVar8 + 8;
      uVar3 = param_2;
    } while ((ulong)param_2 * 8 - lVar8 != 0);
  }
  DAT_100b2ca88 = uVar3;
  DAT_100b2ca80 = pvVar6;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = puVar1;
  if (0 < (int)uVar2) {
    do {
      if ((void *)*puVar5 != (void *)0x0) {
        _free((void *)*puVar5);
      }
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 != 0);
  }
  _free(puVar1);
  return;
}

