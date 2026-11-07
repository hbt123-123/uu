// rea decompile_all
// name: FUN_1002fed28
// address: 0x1002fed28
// body: available
// range: 0x1002fed28-0x1002fee1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002fee08) */

void FUN_1002fed28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_1009afce0;
  _swift_allocObject(&DAT_1009afce0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long *)(puVar1 + 0x20) = param_3;
  plVar4 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar4[2] + 0x10);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _os_unfair_lock_lock(uVar3);
  lVar2 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar2,auStack_58,0x21,0);
  FUN_1002d0ae0((long)plVar4 + lVar2,FUN_10030df28,puVar1);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar3);
  FUN_1002cbca4();
  _swift_release(puVar1);
  return;
}

