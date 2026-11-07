// rea decompile_all
// name: FUN_10079ea7c
// address: 0x10079ea7c
// body: available
// range: 0x10079ea7c-0x10079ebb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079eb74 to 0x1007df730 _vm_deallocate (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10079ebb0 to 0x1007b02e4 FUN_1007b02e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079ea7c(uint *param_1,uint param_2)

{
  ipc_space_t task;
  uint target_act;
  kern_return_t error_value;
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  
  task = *(ipc_space_t *)PTR__mach_task_self__1009954c8;
  puVar1 = param_1;
  FUN_1007871b4();
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar4 = (ulong)param_2;
    uVar5 = uVar4;
    puVar6 = param_1;
    do {
      target_act = *puVar6;
      uVar3 = (ulong)target_act;
      if (((target_act != (uint)puVar1) && (FUN_10076c3b8(), (uVar3 & 1) == 0)) &&
         (error_value = _thread_resume(target_act), error_value != 0)) {
        _mach_error_string(error_value);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                      ,0xcd,"thread_resume (%08x): %s");
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
      uVar3 = uVar4;
      puVar2 = param_1;
    } while (uVar5 != 0);
    do {
      _mach_port_deallocate(task,*puVar2);
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    _vm_deallocate(task,(vm_address_t)param_1,uVar4 << 2);
    return;
  }
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashMachineContext.c"
                ,0xc3,"we should call sentrycrashmc_suspendEnvironment() first");
  return;
}

