// rea decompile_all
// name: FUN_1002cdd84
// address: 0x1002cdd84
// body: available
// range: 0x1002cdd84-0x1002cde73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cdd84(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_1002c76a8();
  puVar3 = auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = *(long **)(*param_2 + _TtC9Alamofire7Request::mutableState);
  uVar2 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar2);
  lVar5 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar5,auStack_68,0,0);
  FUN_100082394((long)plVar4 + lVar5,puVar3,FUN_1002c76a8);
  FUN_10007f314(puVar3 + *(int *)(lVar1 + 0x5c),param_1,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(puVar3,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar2);
  return;
}

