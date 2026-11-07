// rea decompile_all
// name: FUN_100610b7c
// address: 0x100610b7c
// body: available
// range: 0x100610b7c-0x100610c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100610b7c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_4 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_100608530(0,param_4);
  puVar5 = (undefined8 *)
           (puVar4 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(puVar5,param_1,lVar1);
  puVar2 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar1);
  if ((int)puVar2 == 1) {
    (**(code **)(lVar6 + 0x20))(puVar4,puVar5,param_4);
    (*param_2)(puVar4);
    (**(code **)(lVar6 + 8))(puVar4,param_4);
  }
  else {
    uVar3 = *puVar5;
    FUN_100607618(param_2,param_3);
    _swift_release(uVar3);
  }
  return;
}

