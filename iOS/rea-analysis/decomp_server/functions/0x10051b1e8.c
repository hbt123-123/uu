// rea decompile_all
// name: FUN_10051b1e8
// address: 0x10051b1e8
// body: available
// range: 0x10051b1e8-0x10051b23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10051b1e8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (long)param_2 * 1000000000;
  __ss8DurationV16secondsComponent011attosecondsC0ABs5Int64V_AFtcfC(param_1,lVar1);
  FUN_100006cdc(param_3,param_4);
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}

