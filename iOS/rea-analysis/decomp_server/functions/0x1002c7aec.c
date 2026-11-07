// rea decompile_all
// name: FUN_1002c7aec
// address: 0x1002c7aec
// body: available
// range: 0x1002c7aec-0x1002c7baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1002c7aec(void)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  char acStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  pcVar4 = acStack_60 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar5 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar5[2] + 0x10);
  _os_unfair_lock_lock(uVar3);
  lVar2 = *(long *)(*plVar5 + 0x60);
  _swift_beginAccess((long)plVar5 + lVar2,auStack_58,0,0);
  FUN_100082394((long)plVar5 + lVar2,pcVar4,FUN_1002c76a8);
  cVar1 = *pcVar4;
  FUN_1000d27dc(pcVar4,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar3);
  return cVar1 == '\x03';
}

