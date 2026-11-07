// rea decompile_all
// name: FUN_1002cd5f0
// address: 0x1002cd5f0
// body: available
// range: 0x1002cd5f0-0x1002cd6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cd5f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar3 = *(long **)(*param_2 + _TtC9Alamofire7Request::mutableState);
  uVar2 = *(undefined8 *)(plVar3[2] + 0x10);
  _os_unfair_lock_lock(uVar2);
  lVar4 = *(long *)(*plVar3 + 0x60);
  _swift_beginAccess((long)plVar3 + lVar4,auStack_58,0,0);
  FUN_100082394((long)plVar3 + lVar4,auStack_60 + lVar1,FUN_1002c76a8);
  FUN_10007f314(&stack0xffffffffffffffd8 + lVar1,param_1,&DAT_100a83d20,0x1008188a8);
  FUN_1000d27dc(auStack_60 + lVar1,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar2);
  return;
}

