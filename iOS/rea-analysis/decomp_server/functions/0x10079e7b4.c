// rea decompile_all
// name: FUN_10079e7b4
// address: 0x10079e7b4
// body: available
// range: 0x10079e7b4-0x10079e8d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079e7b4(thread_act_t *param_1)

{
  task_t target_task;
  kern_return_t error_value;
  vm_size_t size;
  uint uVar1;
  ulong uVar2;
  thread_act_array_t ptVar3;
  thread_act_t *ptVar4;
  uint local_3c;
  thread_act_array_t local_38;
  
  target_task = *(task_t *)PTR__mach_task_self__1009954c8;
  error_value = _task_threads(target_task,&local_38,&local_3c);
  if (error_value != 0) {
    _mach_error_string(error_value);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                  ,0x46,"task_threads: %s");
    return;
  }
  uVar2 = (ulong)local_3c;
  if ((int)local_3c < 0x65) {
    uVar1 = local_3c;
    if ((int)local_3c < 1) goto LAB_10079e880;
  }
  else {
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                  ,0x4e,"Thread count %d is higher than maximum of %d");
    uVar2 = 100;
  }
  uVar1 = (uint)uVar2;
  ptVar3 = local_38;
  ptVar4 = param_1;
  do {
    ptVar4 = ptVar4 + 1;
    *ptVar4 = *ptVar3;
    uVar2 = uVar2 - 1;
    ptVar3 = ptVar3 + 1;
  } while (uVar2 != 0);
LAB_10079e880:
  param_1[0x65] = uVar1;
  if (local_3c == 0) {
    size = 0;
  }
  else {
    uVar2 = 0;
    do {
      _mach_port_deallocate(target_task,param_1[uVar2 + 1]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_3c);
    size = (ulong)local_3c << 2;
  }
  _vm_deallocate(target_task,(vm_address_t)local_38,size);
  return;
}

