// rea decompile_all
// name: FUN_1004e1080
// address: 0x1004e1080
// body: available
// range: 0x1004e1080-0x1004e11cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e1080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar9 = param_1[0xc];
  uVar10 = param_1[0xe];
  if (uVar9 >> 8 != 0xffffffff || (uVar10 & 0x3000000000000000) != 0) {
    uVar12 = param_2[0xc];
    uVar11 = param_2[0xe];
    if (uVar12 >> 8 != 0xffffffff || (uVar11 & 0x3000000000000000) != 0) {
      uVar13 = param_2[0xd];
      uVar8 = *param_1;
      uVar3 = param_1[1];
      uVar17 = param_1[2];
      uVar4 = param_1[3];
      uVar16 = param_1[4];
      uVar5 = param_1[5];
      uVar1 = param_1[6];
      uVar6 = param_1[7];
      uVar18 = param_1[9];
      uVar15 = param_1[8];
      uVar2 = param_1[10];
      uVar7 = param_1[0xb];
      uVar14 = param_1[0xd];
      uVar19 = *param_2;
      uVar21 = param_2[3];
      uVar20 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar19;
      param_1[3] = uVar21;
      param_1[2] = uVar20;
      uVar19 = param_2[4];
      uVar21 = param_2[7];
      uVar20 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar19;
      param_1[7] = uVar21;
      param_1[6] = uVar20;
      uVar19 = param_2[8];
      uVar21 = param_2[0xb];
      uVar20 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar19;
      param_1[0xb] = uVar21;
      param_1[10] = uVar20;
      param_1[0xc] = uVar12;
      param_1[0xd] = uVar13;
      param_1[0xe] = uVar11;
      switchD_100482ab4::caseD_6e
                (uVar8,uVar3,uVar17,uVar4,uVar16,uVar5,uVar1,uVar6,uVar15,uVar18,uVar2,uVar7,uVar9,
                 uVar14,uVar10);
      goto LAB_1004e1158;
    }
    FUN_1004e1028(param_1);
  }
  uVar8 = param_2[8];
  uVar16 = param_2[0xb];
  uVar17 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar8;
  param_1[0xb] = uVar16;
  param_1[10] = uVar17;
  uVar8 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar8;
  param_1[0xe] = param_2[0xe];
  uVar8 = *param_2;
  uVar16 = param_2[3];
  uVar17 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar16;
  param_1[2] = uVar17;
  uVar8 = param_2[4];
  uVar16 = param_2[7];
  uVar17 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar16;
  param_1[6] = uVar17;
LAB_1004e1158:
  uVar8 = param_1[0xf];
  uVar17 = param_1[0x10];
  uVar16 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar16;
  FUN_100006cdc(uVar8,uVar17);
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar9 = param_2[0x13];
    if (uVar9 >> 0x3c < 0xf) {
      uVar8 = param_1[0x12];
      uVar17 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar17;
      param_1[0x13] = uVar9;
      FUN_100006cdc(uVar8);
      return param_1;
    }
    FUN_100495fdc(param_1 + 0x11);
  }
  uVar8 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar8;
  param_1[0x13] = param_2[0x13];
  return param_1;
}

