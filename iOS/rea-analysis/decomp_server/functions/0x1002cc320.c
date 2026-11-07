// rea decompile_all
// name: FUN_1002cc320
// address: 0x1002cc320
// body: available
// range: 0x1002cc320-0x1002cc40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cc320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  
  plVar5 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
  _swift_retain(param_3);
  _os_unfair_lock_lock(uVar4);
  lVar1 = (long)plVar5 + *(long *)(*plVar5 + 0x60);
  _swift_beginAccess(lVar1,auStack_78,1,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  _swift_retain(param_3);
  FUN_10028abac(uVar2,uVar3,uVar6);
  _os_unfair_lock_unlock(uVar4);
  _swift_release(param_3);
  _swift_retain();
  return;
}

