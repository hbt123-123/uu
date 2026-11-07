// rea decompile_all
// name: FUN_1000042a0
// address: 0x1000042a0
// body: available
// range: 0x1000042a0-0x10000430b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000042a0(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = "/System/Library/PrivateFrameworks/MonitorPanel.framework/MonitorPanel";
  _dlopen("/System/Library/PrivateFrameworks/MonitorPanel.framework/MonitorPanel",5);
  if (pcVar1 == (char *)0x0) {
    DAT_100abd988 = false;
  }
  else {
    pcVar2 = &cf_MPDisplay;
    _NSClassFromString();
    DAT_100abd988 = pcVar2 != (cfstringStruct *)0x0;
    if (pcVar2 != (cfstringStruct *)0x0) {
      return;
    }
  }
  _dlerror();
  FUN_100002a48(&cf_DisplayModeTrace_MonitorPanelunavailableerror__s);
  return;
}

