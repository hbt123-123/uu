// rea decompile_all
// name: FUN_1004e09ac
// address: 0x1004e09ac
// body: available
// range: 0x1004e09ac-0x1004e0a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e09ac(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar9 = param_2[0x12];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar20 = param_1[0x11];
  uVar19 = param_1[0x10];
  uVar10 = param_1[0x12];
  uVar21 = *param_2;
  uVar23 = param_2[3];
  uVar22 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar21;
  param_1[3] = uVar23;
  param_1[2] = uVar22;
  uVar21 = param_2[4];
  uVar23 = param_2[7];
  uVar22 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar21;
  param_1[7] = uVar23;
  param_1[6] = uVar22;
  uVar21 = param_2[8];
  uVar23 = param_2[0xb];
  uVar22 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar21;
  param_1[0xb] = uVar23;
  param_1[10] = uVar22;
  uVar21 = param_2[0xc];
  uVar23 = param_2[0xf];
  uVar22 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar21;
  param_1[0xf] = uVar23;
  param_1[0xe] = uVar22;
  uVar21 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar21;
  param_1[0x12] = uVar9;
  FUN_100482834(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar19,uVar20,uVar10);
  return param_1;
}

