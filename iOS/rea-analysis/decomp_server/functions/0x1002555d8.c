// rea decompile_all
// name: FUN_1002555d8
// address: 0x1002555d8
// body: available
// range: 0x1002555d8-0x100255637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002555d8(long param_1,undefined8 param_2)

{
  ID IVar1;
  ulong uVar2;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"addObject:",param_2);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    _NSGetUncaughtExceptionHandler();
    *(ID *)(param_1 + 0x28) = IVar1;
    uVar2 = 0;
    _NSSetUncaughtExceptionHandler();
    FUN_100255f0c();
    if ((uVar2 & 1) == 0) {
      FUN_10025577c();
    }
  }
  return;
}

