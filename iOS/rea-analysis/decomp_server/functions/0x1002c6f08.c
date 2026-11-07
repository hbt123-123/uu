// rea decompile_all
// name: FUN_1002c6f08
// address: 0x1002c6f08
// body: available
// range: 0x1002c6f08-0x1002c6fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c6f08(undefined8 param_1,code *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(*param_4 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = auStack_80 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(*param_4 + 0x60);
  _swift_beginAccess((long)param_4 + lVar4,auStack_78,0,0);
  (**(code **)(lVar3 + 0x10))(puVar2,(long)param_4 + lVar4,lVar1);
  (*param_2)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}

