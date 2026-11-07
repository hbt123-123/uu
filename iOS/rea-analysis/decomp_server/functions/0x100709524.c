// rea decompile_all
// name: FUN_100709524
// address: 0x100709524
// body: available
// range: 0x100709524-0x100709567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100709524(long param_1)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = objc_stub::networkReachability(*(ID *)(param_1 + 0x20));
  _SCNetworkReachabilityGetFlags(IVar1,&local_24);
  if ((int)IVar1 != 0) {
    FUN_100709568(local_24,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

