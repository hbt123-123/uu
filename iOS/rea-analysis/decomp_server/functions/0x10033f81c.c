// rea decompile_all
// name: FUN_10033f81c
// address: 0x10033f81c
// body: available
// range: 0x10033f81c-0x10033f8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10033f81c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_1 + iVar1);
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar5 = *puVar3;
  uVar7 = puVar3[3];
  uVar6 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  return param_1;
}

