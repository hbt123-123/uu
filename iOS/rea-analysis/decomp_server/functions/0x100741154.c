// rea decompile_all
// name: FUN_100741154
// address: 0x100741154
// body: available
// range: 0x100741154-0x1007411cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100741154(char *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  size_t local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0x10;
  iVar2 = _sysctlbyname(param_1,&local_30,&local_38,(void *)0x0,0);
  if (iVar2 != 0) {
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xbe,"Could not get timeval value for %s: %s");
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

