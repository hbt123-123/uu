// rea decompile_all
// name: FUN_100325168
// address: 0x100325168
// body: available
// range: 0x100325168-0x10032520f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003251fc) */

void FUN_100325168(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  plVar2 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar1 = *(undefined8 *)(plVar2[2] + 0x10);
  _os_unfair_lock_lock(uVar1);
  lVar3 = *(long *)(*plVar2 + 0x60);
  _swift_beginAccess((long)plVar2 + lVar3,auStack_48,0x21,0);
  FUN_1002a83e8((long)plVar2 + lVar3,0,0,param_1);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar1);
  return;
}

