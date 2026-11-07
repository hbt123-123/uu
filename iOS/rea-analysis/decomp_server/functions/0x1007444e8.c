// rea decompile_all
// name: FUN_1007444e8
// address: 0x1007444e8
// body: available
// range: 0x1007444e8-0x100744677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_1007444e8(int *param_1,undefined8 param_2,uint param_3)

{
  mach_port_t host;
  kern_return_t kVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  
  FUN_100744f54(param_1 + 2);
  puVar2 = operator_new(0x18);
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0xf] = 0;
  puVar2[2] = 0;
  *(undefined8 **)(param_1 + 10) = puVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  host = _mach_host_self();
  kVar1 = _host_get_clock_service(host,0,(clock_serv_t *)(param_1 + 0x22));
  if (kVar1 == 0) {
    kVar1 = _mach_port_allocate(*(ipc_space_t *)PTR__mach_task_self__1009954c8,1,
                                (mach_port_name_t *)(param_1 + 0x23));
    if (kVar1 == 0) {
      uVar3 = (ulong)((1.0 / (float)param_3) * 1e+09);
      iVar4 = (int)(uVar3 / 1000000000);
      *param_1 = iVar4;
      param_1[1] = (int)uVar3 + iVar4 * -1000000000;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    else {
      FUN_1007a671c();
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x5c,"%s failed with kern return code: %d, description: %s");
    }
  }
  else {
    FUN_1007a671c();
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                  ,0x57,"%s failed with kern return code: %d, description: %s");
  }
  return param_1;
}

