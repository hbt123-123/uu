// rea decompile_all
// name: FUN_1007b210c
// address: 0x1007b210c
// body: available
// range: 0x1007b210c-0x1007b23d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b23d0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007b210c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  sigaction local_78;
  char acStack_66 [30];
  long local_48;
  ulong uVar3;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((uint)DAT_100b30f51 == (uint)param_1) goto LAB_1007b2310;
  DAT_100b30f51 = (byte)param_1;
  if ((uint)param_1 == 0) {
    FUN_1007b20e0();
    piVar4 = param_1;
    FUN_1007b20ec();
    if (0 < (int)piVar4) {
      lVar9 = 0;
      do {
        if (*param_1 != 0xf || DAT_100b30f50 != '\0') {
          _sigaction(*param_1,(sigaction *)((long)DAT_100b30f90 + lVar9),(sigaction *)0x0);
        }
        lVar9 = lVar9 + 0x10;
        param_1 = param_1 + 1;
      } while (((ulong)piVar4 & 0xffffffff) << 4 != lVar9);
    }
    DAT_100b30f78 = (void *)0x0;
    DAT_100b30f80 = 0;
    DAT_100b30f88 = 0;
    goto LAB_1007b2310;
  }
  FUN_100777df8(&DAT_100b30f52);
  if (DAT_100b30f80 == 0) {
    DAT_100b30f80 = 0x20000;
    DAT_100b30f78 = _malloc(0x20000);
    if (DAT_100b30f78 != (void *)0x0) goto LAB_1007b2184;
    pcVar7 = "Failed to allocate signal stack area of size %ul";
    uVar6 = 0x88;
  }
  else {
LAB_1007b2184:
    iVar2 = _sigaltstack((stack_t *)&DAT_100b30f78,(stack_t *)0x0);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      FUN_1007b20e0();
      uVar5 = uVar3;
      FUN_1007b20ec();
      if (DAT_100b30f90 == (void *)0x0) {
        DAT_100b30f90 = _malloc((uVar5 & 0xffffffff) << 4);
      }
      local_78.sa_mask = 0;
      local_78.sa_flags = 0x241;
      local_78.__sigaction_u.__sa_handler = FUN_1007b23fc;
      if (0 < (int)uVar5) {
        lVar9 = 0;
        uVar8 = 0;
        do {
          iVar2 = *(int *)(uVar3 + uVar8 * 4);
          if (iVar2 != 0xf || DAT_100b30f50 != '\0') {
            iVar2 = _sigaction(iVar2,&local_78,(sigaction *)((long)DAT_100b30f90 + lVar9));
            if (iVar2 != 0) {
              uVar5 = (ulong)*(uint *)(uVar3 + uVar8 * 4);
              FUN_1007b2034();
              if (uVar5 == 0) {
                _snprintf(acStack_66,0x1e,"%d");
              }
              piVar4 = ___error();
              _strerror(*piVar4);
              FUN_1007b02e4("ERROR",
                            "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_Signal.c"
                            ,0xb3,"sigaction (%s): %s");
              if (uVar8 != 0) {
                lVar9 = uVar8 + 1;
                do {
                  uVar1 = (int)lVar9 - 2;
                  _sigaction(*(int *)(uVar3 + (ulong)uVar1 * 4),
                             (sigaction *)((long)DAT_100b30f90 + (ulong)uVar1 * 0x10),
                             (sigaction *)0x0);
                  lVar9 = lVar9 + -1;
                } while (1 < lVar9);
              }
              break;
            }
            if ((((sigaction *)((long)DAT_100b30f90 + lVar9))->__sigaction_u).__sa_handler ==
                (_func_333 *)0x1) {
              _sigaction(*(int *)(uVar3 + uVar8 * 4),(sigaction *)((long)DAT_100b30f90 + lVar9),
                         (sigaction *)0x0);
            }
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((uVar5 & 0xffffffff) != uVar8);
      }
      goto LAB_1007b2310;
    }
    piVar4 = ___error();
    _strerror(*piVar4);
    pcVar7 = "signalstack: %s";
    uVar6 = 0x8f;
  }
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_Signal.c"
                ,uVar6,pcVar7);
LAB_1007b2310:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

