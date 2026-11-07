// rea decompile_all
// name: FUN_1003003d0
// address: 0x1003003d0
// body: available
// range: 0x1003003d0-0x1003004f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003004e0) */

void FUN_1003003d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar2);
  _swift_beginAccess(lVar4 + 0x18,auStack_68,0x21,0);
  lVar1 = *(long *)(lVar4 + 0x28);
  if (lVar1 != 0) {
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
  }
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _swift_endAccess(auStack_68);
  _swift_release(lVar1);
  _os_unfair_lock_unlock(uVar2);
  plVar3 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar2 = *(undefined8 *)(plVar3[2] + 0x10);
  _os_unfair_lock_lock(uVar2);
  lVar1 = *(long *)(*plVar3 + 0x60);
  _swift_beginAccess((long)plVar3 + lVar1,auStack_68,0x21,0);
  FUN_1002fc23c((long)plVar3 + lVar1,param_1,param_2,param_3);
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar2);
  return;
}

