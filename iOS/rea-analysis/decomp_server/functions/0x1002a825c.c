// rea decompile_all
// name: FUN_1002a825c
// address: 0x1002a825c
// body: available
// range: 0x1002a825c-0x1002a832b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002a8318) */

void FUN_1002a825c(ulong param_1)

{
  code *pcVar1;
  long unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  pcVar1 = FUN_100008290;
  if ((param_1 & 1) == 0) {
    pcVar1 = (code *)0x0;
  }
  plVar2 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar2[2] + 0x10);
  _os_unfair_lock_lock(uVar3);
  lVar4 = *(long *)(*plVar2 + 0x60);
  _swift_beginAccess((long)plVar2 + lVar4,auStack_58,0x21,0);
  FUN_1002a83e8((long)plVar2 + lVar4,pcVar1,0);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar3);
  FUN_10007ed2c(pcVar1,0);
  _swift_retain();
  return;
}

