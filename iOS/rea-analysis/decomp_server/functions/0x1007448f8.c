// rea decompile_all
// name: FUN_1007448f8
// address: 0x1007448f8
// body: available
// range: 0x1007448f8-0x100744c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100744c18 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007448f8(mach_timespec_t *param_1,undefined8 param_2)

{
  mach_timespec_t *pmVar1;
  int iVar2;
  kern_return_t kVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  mach_timespec_t mVar10;
  undefined8 uVar11;
  sched_param local_a0;
  pthread_attr_t pStack_98;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((char)param_1[6].tv_sec == '\0') goto LAB_100744be4;
  std::mutex::lock();
  if ((char)param_1[0xf].tv_sec == '\0') {
    *(undefined1 *)&param_1[0xf].tv_sec = 1;
    pmVar1 = param_1 + 0x12;
    pmVar1->tv_sec = 0;
    pmVar1->tv_nsec = 0;
    piVar4 = ___error();
    *piVar4 = 0;
    iVar2 = _pthread_attr_init(&pStack_98);
    piVar4 = ___error();
    if (*piVar4 != 0) {
      _strerror(*piVar4);
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x81,"%s failed with code: %d, description: %s");
    }
    if (iVar2 == 0) {
      piVar4 = ___error();
      *piVar4 = 0;
      iVar2 = _pthread_attr_getschedparam(&pStack_98,&local_a0);
      piVar4 = ___error();
      if (*piVar4 != 0) {
        _strerror(*piVar4);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0x85,"%s failed with code: %d, description: %s");
      }
      if (iVar2 == 0) {
        local_a0.sched_priority = 0x32;
        piVar4 = ___error();
        *piVar4 = 0;
        _pthread_attr_setschedparam(&pStack_98,&local_a0);
        piVar4 = ___error();
        if (*piVar4 != 0) {
          _strerror(*piVar4);
          FUN_1007b02e4("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                        ,0x8b,"%s failed with code: %d, description: %s");
        }
      }
      puVar5 = operator_new(0x60);
      uVar11 = NEON_rev64(param_1[0x11],4);
      *puVar5 = uVar11;
      mVar10 = param_1[5];
      *(mach_timespec_t *)(puVar5 + 1) = *param_1;
      *(mach_timespec_t *)(puVar5 + 2) = mVar10;
      plVar8 = puVar5 + 3;
      FUN_100697608(plVar8,param_1 + 1);
      puVar5[7] = pmVar1;
      plVar7 = puVar5 + 8;
      FUN_1007450b0(plVar7,param_2);
      piVar4 = ___error();
      *piVar4 = 0;
      iVar2 = _pthread_create((pthread_t *)(param_1 + 0x10),&pStack_98,(void **)FUN_100744c6c,puVar5
                             );
      piVar4 = ___error();
      if (*piVar4 != 0) {
        _strerror(*piVar4);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0x91,"%s failed with code: %d, description: %s");
      }
      if (iVar2 == 0) {
        kVar3 = _clock_alarm(param_1[0x11].tv_sec,1,*param_1,param_1[0x11].tv_nsec);
        if (kVar3 != 0) {
          FUN_1007a671c();
          FUN_1007b02e4("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                        ,0x97,"%s failed with kern return code: %d, description: %s");
        }
      }
      else {
        plVar6 = (long *)puVar5[0xb];
        if (plVar6 == plVar7) {
          lVar9 = 4;
LAB_100744b9c:
          (**(code **)(*plVar7 + lVar9 * 8))();
        }
        else if (plVar6 != (long *)0x0) {
          lVar9 = 5;
          plVar7 = plVar6;
          goto LAB_100744b9c;
        }
        plVar7 = (long *)puVar5[6];
        if (plVar7 == plVar8) {
          lVar9 = 4;
LAB_100744bc8:
          (**(code **)(*plVar8 + lVar9 * 8))();
        }
        else if (plVar7 != (long *)0x0) {
          lVar9 = 5;
          plVar8 = plVar7;
          goto LAB_100744bc8;
        }
        operator_delete(puVar5);
      }
    }
  }
  std::mutex::unlock();
LAB_100744be4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

