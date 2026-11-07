// rea decompile_all
// name: FUN_10076c404
// address: 0x10076c404
// body: available
// range: 0x10076c404-0x10076c753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076c750 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076c404(char param_1)

{
  task_t task;
  kern_return_t kVar1;
  int iVar2;
  thread_act_t tVar3;
  undefined8 uVar4;
  char *pcVar5;
  pthread_attr_t pStack_88;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  DAT_100b2d6f0 = param_1;
  if ((param_1 == '\0') || (DAT_100b2d6f1 != '\0')) goto LAB_10076c688;
  FUN_100777df8(&DAT_100b2d6f2);
  FUN_100777df8(&DAT_100b2d717);
  task = *(task_t *)PTR__mach_task_self__1009954c8;
  kVar1 = _task_get_exception_ports
                    (task,0x6e,&DAT_100b2d73c,&DAT_100b2d81c,&DAT_100b2d774,&DAT_100b2d7ac,
                     &DAT_100b2d7e4);
  if (kVar1 == 0) {
    if (DAT_100b2d820 == 0) {
      kVar1 = _mach_port_allocate(task,1,&DAT_100b2d820);
      if (kVar1 == 0) {
        kVar1 = _mach_port_insert_right(task,DAT_100b2d820,DAT_100b2d820,0x14);
        if (kVar1 == 0) goto LAB_10076c4cc;
        _mach_error_string(kVar1);
        pcVar5 = "mach_port_insert_right: %s";
        uVar4 = 0x1e4;
      }
      else {
        _mach_error_string(kVar1);
        pcVar5 = "mach_port_allocate: %s";
        uVar4 = 0x1dc;
      }
      goto LAB_10076c5e8;
    }
LAB_10076c4cc:
    kVar1 = _task_set_exception_ports(task,0x6e,DAT_100b2d820,-0x7fffffff,5);
    if (kVar1 != 0) {
      _mach_error_string(kVar1);
      pcVar5 = "task_set_exception_ports: %s";
      uVar4 = 0x1ed;
      goto LAB_10076c5e8;
    }
    _pthread_attr_init(&pStack_88);
    _pthread_attr_setdetachstate(&pStack_88,2);
    iVar2 = _pthread_create(&DAT_100b2d828,&pStack_88,(void **)FUN_10076c7a8,
                            "SentryCrash Exception Handler (Secondary)");
    if (iVar2 == 0) {
      DAT_100b2d6ec = _pthread_mach_thread_np(DAT_100b2d828);
      iVar2 = _pthread_create(&DAT_100b2d830,&pStack_88,(void **)FUN_10076c7a8,
                              "SentryCrash Exception Handler (Primary)");
      if (iVar2 == 0) {
        _pthread_attr_destroy(&pStack_88);
        DAT_100b2d6e8 = _pthread_mach_thread_np(DAT_100b2d830);
        DAT_100b2d6f0 = '\x01';
        DAT_100b2d6f1 = '\x01';
        goto LAB_10076c688;
      }
      _strerror(iVar2);
      pcVar5 = "pthread_create: %s";
      uVar4 = 0x1ff;
    }
    else {
      _strerror(iVar2);
      pcVar5 = "pthread_create_suspended_np: %s";
      uVar4 = 0x1f7;
    }
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                  ,uVar4,pcVar5);
    tVar3 = _pthread_attr_destroy(&pStack_88);
  }
  else {
    _mach_error_string(kVar1);
    pcVar5 = "task_get_exception_ports: %s";
    uVar4 = 0x1d4;
LAB_10076c5e8:
    tVar3 = 0x8ce423;
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                  ,uVar4,pcVar5);
  }
  FUN_10076cab8();
  FUN_1007871b4();
  if ((DAT_100b2d830 != (pthread_t)0x0) && (DAT_100b2d6e8 != tVar3)) {
    if (DAT_100b2d838 == '\x01') {
      _thread_terminate(DAT_100b2d6e8);
    }
    else {
      _pthread_cancel(DAT_100b2d830);
    }
    DAT_100b2d6e8 = 0;
    DAT_100b2d830 = (pthread_t)0x0;
  }
  if ((DAT_100b2d828 != (pthread_t)0x0) && (DAT_100b2d6ec != tVar3)) {
    if (DAT_100b2d838 == '\x01') {
      _thread_terminate(DAT_100b2d6ec);
    }
    else {
      _pthread_cancel(DAT_100b2d828);
    }
    DAT_100b2d6ec = 0;
    DAT_100b2d828 = (pthread_t)0x0;
  }
  DAT_100b2d6f0 = '\0';
  DAT_100b2d820 = 0;
LAB_10076c688:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

