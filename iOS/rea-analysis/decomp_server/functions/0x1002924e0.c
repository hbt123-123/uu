// rea decompile_all
// name: FUN_1002924e0
// address: 0x1002924e0
// body: available
// range: 0x1002924e0-0x1002925bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002925a8) */

void FUN_1002924e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(param_1 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar1);
  _swift_beginAccess(lVar2 + 0x18,auStack_78,0x21,0);
  FUN_1002925bc(lVar2 + 0x18,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar1);
  return;
}

