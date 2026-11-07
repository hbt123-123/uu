// rea decompile_all
// name: FUN_100003278
// address: 0x100003278
// body: available
// range: 0x100003278-0x10000330f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *** FUN_100003278(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  
  local_38 = (undefined8 ***)0x0;
  pppuVar1 = &local_38;
  _CGBeginDisplayConfiguration();
  if ((int)pppuVar1 == 0) {
    _CGSConfigureDisplayMode(local_38,param_1,param_2);
    pppuVar1 = (undefined8 ***)local_38;
    _CGCompleteDisplayConfiguration(local_38,1);
    if ((int)pppuVar1 != 0) {
      FUN_100002a48(&cf_DisplayModeTrace_setfailedreason_completedisplayID__umodeNumber__derror__d);
    }
  }
  else {
    FUN_100002a48(&cf_DisplayModeTrace_setfailedreason_begindisplayID__umodeNumber__derror__d);
  }
  return pppuVar1;
}

