// rea decompile_all
// name: FUN_10079e95c
// address: 0x10079e95c
// body: available
// range: 0x10079e95c-0x10079ea7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079e95c(thread_act_array_t *param_1,mach_msg_type_number_t *param_2,uint param_3)

{
  task_t target_task;
  uint target_act;
  kern_return_t kVar1;
  thread_act_array_t *pptVar2;
  ulong uVar3;
  ulong uVar4;
  
  target_task = *(task_t *)PTR__mach_task_self__1009954c8;
  pptVar2 = param_1;
  FUN_1007871b4();
  kVar1 = _task_threads(target_task,param_1,param_2);
  if (kVar1 == 0) {
    if (param_3 < *param_2) {
      *param_2 = 0;
    }
    else if (*param_2 != 0) {
      uVar4 = 0;
      do {
        target_act = (*param_1)[uVar4];
        uVar3 = (ulong)target_act;
        if (((target_act != (uint)pptVar2) && (FUN_10076c3b8(), (uVar3 & 1) == 0)) &&
           (kVar1 = _thread_suspend(target_act), kVar1 != 0)) {
          _mach_error_string(kVar1);
          FUN_1007b02e4("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                        ,0xaf,"thread_suspend (%08x): %s");
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_2);
    }
  }
  else {
    _mach_error_string(kVar1);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                  ,0x9f,"task_threads: %s");
  }
  return;
}

