// rea decompile_all
// name: FUN_100264988
// address: 0x100264988
// body: available
// range: 0x100264988-0x100264a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100264988(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = &DAT_1009a8d28;
    _swift_allocObject(&DAT_1009a8d28,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
    FUN_100265294(0);
    _swift_retain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    FUN_1002a9640();
    _swift_release(puVar1);
  }
  else {
    puVar1 = &DAT_1009a8d50;
    _swift_allocObject(&DAT_1009a8d50,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
    _swift_retain(param_4);
    FUN_1002a9640(param_2,thunk_FUN_10026527c,puVar1);
    _swift_release(puVar1);
    param_4 = param_2;
  }
  *param_1 = param_4;
  return;
}

