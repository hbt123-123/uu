// rea decompile_all
// name: FUN_1002cde74
// address: 0x1002cde74
// body: available
// range: 0x1002cde74-0x1002cdf77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cde74(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar2 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar6 = auStack_60 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1,puVar6,&DAT_100a82460,&DAT_1008175c0);
  plVar5 = *(long **)(*param_2 + _TtC9Alamofire7Request::mutableState);
  uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
  _os_unfair_lock_lock(uVar4);
  lVar1 = (long)plVar5 + *(long *)(*plVar5 + 0x60);
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  lVar3 = 0;
  FUN_1002c76a8();
  FUN_1002d8964(puVar6,lVar1 + *(int *)(lVar3 + 0x5c),&DAT_100a82460,&DAT_1008175c0);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(uVar4);
  FUN_100040bb4(puVar6,&DAT_100a82460,&DAT_1008175c0);
  return;
}

