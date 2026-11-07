// rea decompile_all
// name: FUN_10029161c
// address: 0x10029161c
// body: available
// range: 0x10029161c-0x100291733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100291720) */

void FUN_10029161c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_1009abca8;
  _swift_allocObject(&DAT_1009abca8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(long *)(puVar1 + 0x28) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  plVar2 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar2[2] + 0x10);
  _swift_retain();
  _swift_retain(param_3);
  _os_unfair_lock_lock(uVar3);
  lVar4 = *(long *)(*plVar2 + 0x60);
  _swift_beginAccess((long)plVar2 + lVar4,auStack_68,0x21,0);
  FUN_1002d02a4((long)plVar2 + lVar4,FUN_1002a6324,puVar1);
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar3);
  _swift_release(puVar1);
  return;
}

