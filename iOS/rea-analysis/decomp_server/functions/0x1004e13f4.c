// rea decompile_all
// name: FUN_1004e13f4
// address: 0x1004e13f4
// body: available
// range: 0x1004e13f4-0x1004e14fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e13f4(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar1 = *param_2;
  uVar12 = param_2[1];
  uVar2 = param_2[2];
  uVar13 = param_2[3];
  uVar3 = param_2[4];
  uVar14 = param_2[5];
  uVar4 = param_2[6];
  uVar15 = param_2[7];
  uVar5 = param_2[8];
  uVar16 = param_2[9];
  uVar6 = param_2[10];
  uVar17 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar18 = param_2[0xd];
  uVar24 = param_2[0xe];
  switchD_100481b9c::caseD_c9
            (uVar1,uVar12,uVar2,uVar13,uVar3,uVar14,uVar4,uVar15,uVar5,uVar16,uVar6,uVar17,uVar7,
             uVar18,uVar24);
  uVar8 = *param_1;
  uVar19 = param_1[1];
  uVar9 = param_1[2];
  uVar20 = param_1[3];
  uVar10 = param_1[4];
  uVar21 = param_1[5];
  uVar11 = param_1[6];
  uVar22 = param_1[7];
  uVar26 = param_1[9];
  uVar25 = param_1[8];
  uVar28 = param_1[0xb];
  uVar27 = param_1[10];
  uVar30 = param_1[0xd];
  uVar29 = param_1[0xc];
  uVar23 = param_1[0xe];
  *param_1 = uVar1;
  param_1[1] = uVar12;
  param_1[2] = uVar2;
  param_1[3] = uVar13;
  param_1[4] = uVar3;
  param_1[5] = uVar14;
  param_1[6] = uVar4;
  param_1[7] = uVar15;
  param_1[8] = uVar5;
  param_1[9] = uVar16;
  param_1[10] = uVar6;
  param_1[0xb] = uVar17;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar18;
  param_1[0xe] = uVar24;
  switchD_100482ab4::caseD_6e
            (uVar8,uVar19,uVar9,uVar20,uVar10,uVar21,uVar11,uVar22,uVar25,uVar26,uVar27,uVar28,
             uVar29,uVar30,uVar23);
  return param_1;
}

