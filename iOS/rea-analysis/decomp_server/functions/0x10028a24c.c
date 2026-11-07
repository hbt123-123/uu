// rea decompile_all
// name: FUN_10028a24c
// address: 0x10028a24c
// body: available
// range: 0x10028a24c-0x10028a35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010028a34c) */

void FUN_10028a24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_68 [24];
  
  _swift_allocObject(param_5,0x38,7);
  *(undefined8 *)(param_5 + 0x10) = param_2;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined8 *)(param_5 + 0x28) = param_4;
  *(long *)(param_5 + 0x30) = unaff_x20;
  plVar3 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar1 = *(undefined8 *)(plVar3[2] + 0x10);
  _swift_retain(param_2);
  _swift_retain(param_4);
  _swift_retain();
  _os_unfair_lock_lock(uVar1);
  lVar2 = *(long *)(*plVar3 + 0x60);
  _swift_beginAccess((long)plVar3 + lVar2,auStack_68,0x21,0);
  FUN_1002d02a4((long)plVar3 + lVar2,param_6,param_5);
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar1);
  _swift_release(param_5);
  return;
}

