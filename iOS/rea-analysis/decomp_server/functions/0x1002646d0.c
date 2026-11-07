// rea decompile_all
// name: FUN_1002646d0
// address: 0x1002646d0
// body: available
// range: 0x1002646d0-0x1002647eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002646d0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  long *plVar2;
  code *pcVar3;
  
  plVar2 = (long *)*unaff_x20;
  if (param_2 == 0) {
    puVar1 = &DAT_1009a8d78;
    _swift_allocObject(&DAT_1009a8d78,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
    FUN_100265294(0);
    _swift_retain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    (**(code **)(*plVar2 + 0x3b0))();
    _swift_release(puVar1);
  }
  else {
    puVar1 = &DAT_1009a8da0;
    _swift_allocObject(&DAT_1009a8da0,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
    pcVar3 = *(code **)(*plVar2 + 0x3b0);
    _swift_retain(param_4);
    (*pcVar3)(param_2,thunk_FUN_100265360,puVar1);
    _swift_release(puVar1);
    param_4 = param_2;
  }
  *param_1 = param_4;
  return;
}

