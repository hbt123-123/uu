// rea decompile_all
// name: FUN_1007446d8
// address: 0x1007446d8
// body: available
// range: 0x1007446d8-0x1007447af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1007446d8(long param_1)

{
  kern_return_t kVar1;
  undefined4 extraout_var;
  long *plVar2;
  long *plVar3;
  long lVar4;
  mutex *unaff_x20;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_1007447b4(param_1);
    kVar1 = _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__1009954c8,
                                *(mach_port_name_t *)(param_1 + 0x8c),1,-1);
    unaff_x20 = (mutex *)CONCAT44(extraout_var,kVar1);
    if (kVar1 != 0) {
      FUN_1007a671c();
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x6f,"%s failed with kern return code: %d, description: %s");
    }
  }
  std::mutex::~mutex(unaff_x20);
  FUN_100744fb8(param_1 + 0x28,0);
  plVar3 = (long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return param_1;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
  return param_1;
}

