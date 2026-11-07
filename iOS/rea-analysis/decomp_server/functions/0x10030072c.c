// rea decompile_all
// name: FUN_10030072c
// address: 0x10030072c
// body: available
// range: 0x10030072c-0x100300893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100300880) */
/* WARNING: Removing unreachable block (ram,0x00010030086c) */

void FUN_10030072c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
  uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar2);
  _swift_beginAccess(lVar3 + 0x18,auStack_58,0x21,0);
  FUN_1002fe990(lVar3 + 0x18,param_1,param_2,param_3);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar2);
  puVar1 = &DAT_1009afcb8;
  _swift_allocObject(&DAT_1009afcb8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(long *)(puVar1 + 0x20) = unaff_x20;
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar2 = *(undefined8 *)(plVar4[2] + 0x10);
  _swift_retain(param_3);
  _swift_retain();
  _os_unfair_lock_lock(uVar2);
  lVar3 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar3,auStack_58,0x21,0);
  FUN_1002d02a4((long)plVar4 + lVar3,FUN_10030df1c,puVar1);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar2);
  _swift_release(puVar1);
  return;
}

