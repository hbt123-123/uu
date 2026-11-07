// rea decompile_all
// name: FUN_1002ccf88
// address: 0x1002ccf88
// body: available
// range: 0x1002ccf88-0x1002cd037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002cd024) */

void FUN_1002ccf88(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  plVar2 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar1 = *(undefined8 *)(plVar2[2] + 0x10);
  _os_unfair_lock_lock(uVar1);
  lVar3 = *(long *)(*plVar2 + 0x60);
  _swift_beginAccess((long)plVar2 + lVar3,auStack_58,0x21,0);
  FUN_1002d2ad8((long)plVar2 + lVar3,param_1);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar1);
  _swift_retain();
  return;
}

