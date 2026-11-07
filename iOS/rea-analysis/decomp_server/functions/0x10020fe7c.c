// rea decompile_all
// name: FUN_10020fe7c
// address: 0x10020fe7c
// body: available
// range: 0x10020fe7c-0x10020ffab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020fe7c(undefined1 *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 local_118 [20];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x48,local_118,0x20,0);
  if ((*(long *)(*(long *)(param_2 + 0x48) + 0x10) == 0) ||
     (uVar2 = param_4, FUN_1001a2d90(), (uVar2 & 1) == 0)) {
    _swift_endAccess(local_118);
    uVar3 = 0;
  }
  else {
    _swift_endAccess(local_118);
    _swift_beginAccess(param_2 + 0x40,auStack_78,0x21,0);
    FUN_1000822d8(param_5,local_118);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_118[0] = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0x8000000000000000;
    FUN_100062700(param_5,param_3 & 0xffffffff000000ff,param_4,uVar1);
    *(undefined8 *)(param_2 + 0x40) = local_118[0];
    _swift_endAccess(auStack_78);
    __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}

