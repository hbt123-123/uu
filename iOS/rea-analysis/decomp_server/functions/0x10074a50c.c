// rea decompile_all
// name: FUN_10074a50c
// address: 0x10074a50c
// body: available
// range: 0x10074a50c-0x10074a6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10074a50c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  off_t oVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulong uVar9;
  stat sStack_e0;
  
  _open(param_1,0);
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    piVar4 = ___error();
    _strerror(*piVar4);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0xf1,"Could not open %s: %s");
LAB_10074a6a8:
    uVar5 = 0;
    uVar8 = 0;
    pvVar7 = (void *)0x0;
    goto LAB_10074a6b4;
  }
  iVar2 = _fstat(iVar1,&sStack_e0);
  if (iVar2 < 0) {
    piVar4 = ___error();
    _strerror(*piVar4);
    pcVar6 = "Could not fstat %s: %s";
    uVar5 = 0xf7;
LAB_10074a61c:
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,uVar5,pcVar6);
    uVar5 = 0;
    uVar9 = 0;
    pvVar7 = (void *)0x0;
  }
  else {
    iVar2 = (int)param_4;
    uVar9 = (ulong)(uint)sStack_e0.st_size;
    if ((((iVar2 != 0) && (iVar2 < (int)(uint)sStack_e0.st_size)) && (uVar9 = param_4, 0 < iVar2))
       && (oVar3 = _lseek(iVar1,(long)-iVar2,2), oVar3 < 0)) {
      piVar4 = ___error();
      _strerror(*piVar4);
      pcVar6 = "Could not seek to %d from end of %s: %s";
      uVar5 = 0x100;
      goto LAB_10074a61c;
    }
    pvVar7 = _malloc((ulong)((int)uVar9 + 1));
    if (pvVar7 == (void *)0x0) {
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,0x107,"Out of memory");
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar5 = param_1;
      FUN_10074a46c(param_1,pvVar7,uVar9);
      if ((int)uVar5 == 0) {
        _close(param_1);
        _free(pvVar7);
        goto LAB_10074a6a8;
      }
      *(undefined1 *)((long)pvVar7 + (long)(int)uVar9) = 0;
      uVar5 = 1;
    }
  }
  uVar8 = (undefined4)uVar9;
  _close(param_1);
LAB_10074a6b4:
  *param_2 = pvVar7;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar8;
  }
  return uVar5;
}

