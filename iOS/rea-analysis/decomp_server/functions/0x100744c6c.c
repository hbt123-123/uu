// rea decompile_all
// name: FUN_100744c6c
// address: 0x100744c6c
// body: available
// range: 0x100744c6c-0x100744e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100744c6c(clock_reply_t *param_1)

{
  long lVar1;
  mach_msg_return_t mVar2;
  kern_return_t kVar3;
  int *piVar4;
  mach_msg_header_t *msg;
  pthread_t p_Var5;
  pthread_t p_Var6;
  undefined8 uVar7;
  char *pcVar8;
  __darwin_pthread_handler_rec local_80;
  __darwin_pthread_handler_rec local_68;
  
  piVar4 = ___error();
  *piVar4 = 0;
  _pthread_setname_np("io.sentry.SamplingProfiler");
  piVar4 = ___error();
  if (*piVar4 != 0) {
    _strerror(*piVar4);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                  ,0x2d,"%s failed with code: %d, description: %s");
  }
  if (*(long **)(param_1 + 0x16) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x16) + 0x30))();
  }
  msg = _malloc(0x200);
  p_Var5 = _pthread_self();
  local_68.__routine = _free;
  local_68.__next = p_Var5->__cleanup_stack;
  p_Var5->__cleanup_stack = &local_68;
  local_68.__arg = msg;
  p_Var6 = _pthread_self();
  local_80.__routine = FUN_100744ecc;
  local_80.__next = p_Var6->__cleanup_stack;
  p_Var6->__cleanup_stack = &local_80;
  local_80.__arg = param_1;
  _pthread_testcancel();
  mVar2 = _mach_msg(msg,2,0,0x200,*param_1,0,0);
  if (mVar2 == 0) {
    do {
      kVar3 = _clock_alarm(param_1[1],1,*(mach_timespec_t *)(param_1 + 2),*param_1);
      if (kVar3 != 0) {
        FUN_1007a671c();
        pcVar8 = "%s failed with kern return code: %d, description: %s";
        uVar7 = 0x3e;
        goto LAB_100744e08;
      }
      lVar1 = **(long **)(param_1 + 0xe);
      **(long **)(param_1 + 0xe) = lVar1 + 1;
      FUN_100786cec(lVar1,param_1 + 6,*(undefined8 *)(param_1 + 4));
      _pthread_testcancel();
      mVar2 = _mach_msg(msg,2,0,0x200,*param_1,0,0);
    } while (mVar2 == 0);
  }
  FUN_1007a6740();
  pcVar8 = "%s failed with mach_msg return code: %d, description: %s";
  uVar7 = 0x39;
LAB_100744e08:
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                ,uVar7,pcVar8);
  p_Var6->__cleanup_stack = local_80.__next;
  (*local_80.__routine)(local_80.__arg);
  p_Var5->__cleanup_stack = local_68.__next;
  (*local_68.__routine)(local_68.__arg);
  return 0;
}

