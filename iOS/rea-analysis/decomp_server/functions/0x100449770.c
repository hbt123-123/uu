// rea decompile_all
// name: FUN_100449770
// address: 0x100449770
// body: available
// range: 0x100449770-0x100449817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100449770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  uint5 uVar14;
  uint5 uVar15;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar13 = *(undefined1 *)((long)param_2 + 0x34);
  uVar15 = *(uint5 *)(param_2 + 6);
  FUN_10017ac64(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,(ulong)*(uint5 *)(param_2 + 6));
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  uVar14 = *(uint5 *)(param_1 + 6);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  *(int *)(param_1 + 6) = (int)uVar15;
  *(undefined1 *)((long)param_1 + 0x34) = uVar13;
  FUN_100040834(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,(ulong)uVar14);
  return param_1;
}

