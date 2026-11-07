// rea decompile_all
// name: FUN_10076cab8
// address: 0x10076cab8
// body: available
// range: 0x10076cab8-0x10076cb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076cab8(void)

{
  task_t task;
  kern_return_t error_value;
  ulong uVar1;
  
  if (DAT_100b2d81c != 0) {
    uVar1 = 0;
    task = *(task_t *)PTR__mach_task_self__1009954c8;
    do {
      error_value = _task_set_exception_ports
                              (task,(&DAT_100b2d73c)[uVar1],(&DAT_100b2d774)[uVar1],
                               (&DAT_100b2d7ac)[uVar1],(&DAT_100b2d7e4)[uVar1]);
      if (error_value != 0) {
        _mach_error_string(error_value);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                      ,0xb3,"task_set_exception_ports: %s");
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_100b2d81c);
    DAT_100b2d81c = 0;
  }
  return;
}

