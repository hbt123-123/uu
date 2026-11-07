// rea decompile_all
// name: FUN_10006b084
// address: 0x10006b084
// body: available
// range: 0x10006b084-0x10006b177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006b084(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = 0;
  FUN_100098548(0,param_5);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  puVar3 = &DAT_1000f8648;
  _swift_allocObject(&DAT_1000f8648,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  FUN_100098b0c(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),FUN_10006b2a8,puVar3
                ,param_5);
  FUN_10006aab0(param_1,&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_5,
                param_6);
  lVar2 = 0;
  FUN_10006affc(0,param_5,param_6);
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x24)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c));
  uVar4 = puVar1[1];
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar4);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}

