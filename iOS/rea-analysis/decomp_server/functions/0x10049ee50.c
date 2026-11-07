// rea decompile_all
// name: FUN_10049ee50
// address: 0x10049ee50
// body: available
// range: 0x10049ee50-0x10049ef1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10049ee50(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar1 = *param_2;
  uVar11 = param_2[1];
  uVar2 = param_2[2];
  uVar12 = param_2[3];
  uVar3 = param_2[4];
  uVar13 = param_2[5];
  uVar4 = param_2[6];
  uVar14 = param_2[7];
  uVar5 = param_2[8];
  uVar15 = param_2[9];
  FUN_10048270c(uVar1,uVar11,uVar2,uVar12,uVar3,uVar13,uVar4,uVar14,uVar5,uVar15,FUN_100008184);
  uVar6 = *param_1;
  uVar16 = param_1[1];
  uVar7 = param_1[2];
  uVar17 = param_1[3];
  uVar8 = param_1[4];
  uVar18 = param_1[5];
  uVar9 = param_1[6];
  uVar19 = param_1[7];
  uVar10 = param_1[8];
  uVar20 = param_1[9];
  *param_1 = uVar1;
  param_1[1] = uVar11;
  param_1[2] = uVar2;
  param_1[3] = uVar12;
  param_1[4] = uVar3;
  param_1[5] = uVar13;
  param_1[6] = uVar4;
  param_1[7] = uVar14;
  param_1[8] = uVar5;
  param_1[9] = uVar15;
  FUN_10048270c(uVar6,uVar16,uVar7,uVar17,uVar8,uVar18,uVar9,uVar19,uVar10,uVar20,FUN_100006cdc);
  return param_1;
}

