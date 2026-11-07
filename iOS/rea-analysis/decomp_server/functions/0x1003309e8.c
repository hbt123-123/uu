// rea decompile_all
// name: FUN_1003309e8
// address: 0x1003309e8
// body: available
// range: 0x1003309e8-0x100330ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100330aa0) */

void FUN_1003309e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  puVar1 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _swift_retain(param_1);
  _os_unfair_lock_lock(uVar2);
  _swift_beginAccess(lVar3 + 0x18,auStack_48,0,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  local_50 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  FUN_10032de9c(&local_50,puVar1);
  _swift_bridgeObjectRelease(uVar4);
  _os_unfair_lock_unlock(uVar2);
  _swift_release(puVar1);
  return;
}

