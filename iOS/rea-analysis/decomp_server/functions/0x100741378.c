// rea decompile_all
// name: FUN_100741378
// address: 0x100741378
// body: available
// range: 0x100741378-0x10074152b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100741528 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100741378(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t local_58;
  int local_50 [6];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_50[2] = 0;
  local_50[3] = 0x12;
  local_50[0] = 4;
  local_50[1] = 0x11;
  local_50[4] = 3;
  local_50[5] = _if_nametoindex(param_1);
  if (local_50[5] == 0) {
    piVar3 = ___error();
    _strerror(*piVar3);
    pcVar6 = "Could not get interface index for %s: %s";
    uVar5 = 0xf1;
LAB_100741440:
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,uVar5,pcVar6);
  }
  else {
    iVar2 = _sysctl(local_50,6,(void *)0x0,&local_58,(void *)0x0,0);
    if (iVar2 != 0) {
      piVar3 = ___error();
      _strerror(*piVar3);
      pcVar6 = "Could not get interface data for %s: %s";
      uVar5 = 0xf8;
      goto LAB_100741440;
    }
    pvVar4 = _malloc(local_58);
    if (pvVar4 == (void *)0x0) {
      pcVar6 = "Out of memory";
      uVar5 = 0xfe;
      goto LAB_100741440;
    }
    iVar2 = _sysctl(local_50,6,pvVar4,&local_58,(void *)0x0,0);
    if (iVar2 == 0) {
      bVar1 = *(byte *)((long)pvVar4 + 0x75);
      *param_2 = *(undefined4 *)((long)pvVar4 + (ulong)bVar1 + 0x78);
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)((long)pvVar4 + (ulong)bVar1 + 0x7c);
      _free(pvVar4);
      uVar5 = 1;
      goto LAB_100741448;
    }
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0x104,"Could not get interface data for %s: %s");
    _free(pvVar4);
  }
  uVar5 = 0;
LAB_100741448:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}

