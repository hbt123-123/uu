// rea decompile_all
// name: FUN_1002cd6d0
// address: 0x1002cd6d0
// body: available
// range: 0x1002cd6d0-0x1002cd78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cd6d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  FUN_10007f314(param_1,auStack_58,&DAT_100a83d20,0x1008188a8);
  plVar3 = *(long **)(*param_2 + _TtC9Alamofire7Request::mutableState);
  uVar2 = *(undefined8 *)(plVar3[2] + 0x10);
  _os_unfair_lock_lock(uVar2);
  lVar1 = (long)plVar3 + *(long *)(*plVar3 + 0x60);
  _swift_beginAccess(lVar1,auStack_70,0x21,0);
  FUN_1002d8964(auStack_58,lVar1 + 0x38,&DAT_100a83d20,0x1008188a8);
  _swift_endAccess(auStack_70);
  _os_unfair_lock_unlock(uVar2);
  FUN_100040bb4(auStack_58,&DAT_100a83d20,0x1008188a8);
  return;
}

