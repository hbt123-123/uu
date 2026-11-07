// rea decompile_all
// name: FUN_1004e04bc
// address: 0x1004e04bc
// body: available
// range: 0x1004e04bc-0x1004e061f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e04bc(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar9 = param_1[0x10];
  uVar10 = param_1[0x12];
  if (uVar9 >> 8 != 0xffffffff || (uVar10 & 0x3000000000000000) != 0) {
    uVar12 = param_2[0x10];
    uVar11 = param_2[0x12];
    if (uVar12 >> 8 != 0xffffffff || (uVar11 & 0x3000000000000000) != 0) {
      uVar13 = param_2[0x11];
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
      uVar20 = param_1[0xb];
      uVar19 = param_1[10];
      uVar22 = param_1[0xd];
      uVar21 = param_1[0xc];
      uVar2 = param_1[0xe];
      uVar7 = param_1[0xf];
      uVar14 = param_1[0x11];
      uVar23 = *param_2;
      uVar25 = param_2[3];
      uVar24 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar23;
      param_1[3] = uVar25;
      param_1[2] = uVar24;
      uVar23 = param_2[4];
      uVar25 = param_2[7];
      uVar24 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar23;
      param_1[7] = uVar25;
      param_1[6] = uVar24;
      uVar23 = param_2[8];
      uVar25 = param_2[0xb];
      uVar24 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar23;
      param_1[0xb] = uVar25;
      param_1[10] = uVar24;
      uVar23 = param_2[0xc];
      uVar25 = param_2[0xf];
      uVar24 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar23;
      param_1[0xf] = uVar25;
      param_1[0xe] = uVar24;
      param_1[0x10] = uVar12;
      param_1[0x11] = uVar13;
      param_1[0x12] = uVar11;
      FUN_100482834(uVar8,uVar3,uVar17,uVar4,uVar16,uVar5,uVar1,uVar6,uVar15,uVar18,uVar19,uVar20,
                    uVar21,uVar22,uVar2,uVar7,uVar9,uVar14,uVar10);
      goto LAB_1004e05ac;
    }
    FUN_1004e0490(param_1);
  }
  uVar8 = param_2[0xc];
  uVar16 = param_2[0xf];
  uVar17 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar8;
  param_1[0xf] = uVar16;
  param_1[0xe] = uVar17;
  uVar8 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  param_1[0x12] = param_2[0x12];
  uVar8 = param_2[4];
  uVar16 = param_2[7];
  uVar17 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar16;
  param_1[6] = uVar17;
  uVar8 = param_2[8];
  uVar16 = param_2[0xb];
  uVar17 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar8;
  param_1[0xb] = uVar16;
  param_1[10] = uVar17;
  uVar8 = *param_2;
  uVar16 = param_2[3];
  uVar17 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar16;
  param_1[2] = uVar17;
LAB_1004e05ac:
  uVar8 = param_1[0x13];
  uVar17 = param_1[0x14];
  uVar16 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar16;
  FUN_100006cdc(uVar8,uVar17);
  if ((ulong)param_1[0x17] >> 0x3c < 0xf) {
    uVar9 = param_2[0x17];
    if (uVar9 >> 0x3c < 0xf) {
      uVar8 = param_1[0x16];
      uVar17 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar17;
      param_1[0x17] = uVar9;
      FUN_100006cdc(uVar8);
      return param_1;
    }
    FUN_100495fdc(param_1 + 0x15);
  }
  uVar8 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  param_1[0x17] = param_2[0x17];
  return param_1;
}

