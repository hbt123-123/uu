// rea decompile_all
// name: FUN_1002daa68
// address: 0x1002daa68
// body: available
// range: 0x1002daa68-0x1002dab9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002daa68(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_4 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar6);
  lVar3 = lVar6;
  _swift_getEnumCaseMultiPayload(lVar6,param_4);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar4);
    (*param_2)(param_1,puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar4);
    lVar3 = *(long *)(param_4 + 0x18);
  }
  else {
    lVar3 = *(long *)(param_4 + 0x18);
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,lVar6,lVar3);
  }
  uVar2 = 0;
  __ss6ResultOMa(0,param_5,lVar3,*(undefined8 *)(param_4 + 0x20));
  _swift_storeEnumTagMultiPayload(param_1,uVar2,!bVar1);
  return;
}

