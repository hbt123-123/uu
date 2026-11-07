// rea decompile_all
// name: FUN_10033e2c8
// address: 0x10033e2c8
// body: available
// range: 0x10033e2c8-0x10033e373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010033e360) */

void FUN_10033e2c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  uVar3 = *unaff_x20;
  plVar2 = (long *)unaff_x20[2];
  uVar1 = *(undefined8 *)(plVar2[2] + 0x10);
  _os_unfair_lock_lock(uVar1);
  lVar4 = *(long *)(*plVar2 + 0x60);
  _swift_beginAccess((long)plVar2 + lVar4,auStack_58,0x21,0);
  FUN_10033e664((long)plVar2 + lVar4,param_1,param_2,uVar3);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar1);
  return;
}

