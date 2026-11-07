// rea decompile_all
// name: FUN_1004dffac
// address: 0x1004dffac
// body: available
// range: 0x1004dffac-0x1004e0147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004dffac(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar16 = param_2[0x10];
  uVar15 = param_2[0x12];
  if (uVar16 >> 8 == 0xffffffff && (uVar15 & 0x3000000000000000) == 0) {
    uVar17 = param_2[0xc];
    uVar19 = param_2[0xf];
    uVar18 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar17;
    param_1[0xf] = uVar19;
    param_1[0xe] = uVar18;
    uVar17 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar17;
    param_1[0x12] = param_2[0x12];
    uVar17 = param_2[4];
    uVar19 = param_2[7];
    uVar18 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar17;
    param_1[7] = uVar19;
    param_1[6] = uVar18;
    uVar17 = param_2[8];
    uVar19 = param_2[0xb];
    uVar18 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar17;
    param_1[0xb] = uVar19;
    param_1[10] = uVar18;
    uVar17 = *param_2;
    uVar19 = param_2[3];
    uVar18 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar17;
    param_1[3] = uVar19;
    param_1[2] = uVar18;
  }
  else {
    uVar17 = *param_2;
    uVar6 = param_2[1];
    uVar18 = param_2[2];
    uVar7 = param_2[3];
    uVar19 = param_2[4];
    uVar8 = param_2[5];
    uVar1 = param_2[6];
    uVar9 = param_2[7];
    uVar2 = param_2[8];
    uVar10 = param_2[9];
    uVar3 = param_2[10];
    uVar11 = param_2[0xb];
    uVar4 = param_2[0xc];
    uVar12 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar13 = param_2[0xf];
    uVar14 = param_2[0x11];
    FUN_10048191c(uVar17,uVar6,uVar18,uVar7,uVar19,uVar8,uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4
                  ,uVar12,uVar5,uVar13,uVar16,uVar14,uVar15);
    *param_1 = uVar17;
    param_1[1] = uVar6;
    param_1[2] = uVar18;
    param_1[3] = uVar7;
    param_1[4] = uVar19;
    param_1[5] = uVar8;
    param_1[6] = uVar1;
    param_1[7] = uVar9;
    param_1[8] = uVar2;
    param_1[9] = uVar10;
    param_1[10] = uVar3;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar12;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar13;
    param_1[0x10] = uVar16;
    param_1[0x11] = uVar14;
    param_1[0x12] = uVar15;
  }
  uVar17 = param_2[0x13];
  uVar18 = param_2[0x14];
  FUN_100008184(uVar17,uVar18);
  param_1[0x13] = uVar17;
  param_1[0x14] = uVar18;
  uVar15 = param_2[0x17];
  if (uVar15 >> 0x3c < 0xf) {
    uVar17 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    FUN_100008184(uVar17,uVar15);
    param_1[0x16] = uVar17;
    param_1[0x17] = uVar15;
  }
  else {
    uVar17 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar17;
    param_1[0x17] = param_2[0x17];
  }
  return param_1;
}

