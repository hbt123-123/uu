// rea decompile_all
// name: FUN_1003a6f64
// address: 0x1003a6f64
// body: available
// range: 0x1003a6f64-0x1003a700f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003a6f64(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  bVar3 = (int)lVar4 != 1;
  if (bVar3) {
    puVar6 = &DAT_100a7c630;
    FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
    puVar1 = (undefined8 *)(param_2 + *(int *)(puVar6 + 0x30));
    uVar7 = *puVar1;
    puVar2 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x30));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
    puVar1 = (undefined8 *)(param_2 + *(int *)(puVar6 + 0x40));
    uVar7 = *puVar1;
    puVar2 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x40));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar3);
  return param_1;
}

