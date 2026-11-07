// rea decompile_all
// name: FUN_1003a6d9c
// address: 0x1003a6d9c
// body: available
// range: 0x1003a6d9c-0x1003a6e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003a6d9c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar7 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  lVar8 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
  bVar6 = (int)lVar7 != 1;
  if (bVar6) {
    puVar9 = &DAT_100a7c630;
    FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
    puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(puVar9 + 0x30));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x40));
    puVar2 = (undefined8 *)(param_2 + *(int *)(puVar9 + 0x40));
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    _swift_bridgeObjectRetain(uVar4);
    FUN_100008184(uVar3,uVar5);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar6);
  return param_1;
}

