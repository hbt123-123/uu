// rea decompile_all
// name: FUN_100615c94
// address: 0x100615c94
// body: available
// range: 0x100615c94-0x100615d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100615c94(undefined8 param_1,undefined8 param_2,dispatch_group_t param_3,undefined8 param_4
                  )

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0xff;
  FUN_100616300(0xff,param_4);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_projectBox(param_2);
  lVar5 = *(long *)(lVar1 + -8);
  (**(code **)(lVar5 + 0x10))(puVar3,param_1,lVar1);
  (**(code **)(lVar5 + 0x38))(puVar3,0,1,lVar1);
  _swift_beginAccess(param_2,auStack_68,1,0);
  (**(code **)(lVar4 + 0x28))(param_2,puVar3,lVar2);
  _dispatch_group_leave(param_3);
  return;
}

