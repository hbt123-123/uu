// rea decompile_all
// name: FUN_1004326c8
// address: 0x1004326c8
// body: available
// range: 0x1004326c8-0x10043287f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004326c8(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar12 = param_2[4];
  uVar11 = param_2[6];
  uVar15 = param_2[8];
  uVar10 = uVar12 & uVar11 & uVar15 & 0x3000000000000000;
  if (((param_1[4] & param_1[6] & param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar10 == 0x3000000000000000) {
      uVar16 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar16;
      uVar17 = param_2[3];
      uVar16 = param_2[2];
      uVar19 = param_2[5];
      uVar18 = param_2[4];
      uVar13 = param_2[7];
      uVar7 = param_2[6];
      param_1[8] = param_2[8];
      param_1[5] = uVar19;
      param_1[4] = uVar18;
      param_1[7] = uVar13;
      param_1[6] = uVar7;
      param_1[3] = uVar17;
      param_1[2] = uVar16;
    }
    else {
      uVar16 = *param_2;
      uVar18 = param_2[1];
      uVar17 = param_2[2];
      uVar19 = param_2[3];
      uVar13 = param_2[5];
      uVar7 = param_2[7];
      FUN_10042d158(uVar16,uVar18,uVar17,uVar19,uVar12,uVar13,uVar11,uVar7,uVar15);
      *param_1 = uVar16;
      param_1[1] = uVar18;
      param_1[2] = uVar17;
      param_1[3] = uVar19;
      param_1[4] = uVar12;
      param_1[5] = uVar13;
      param_1[6] = uVar11;
      param_1[7] = uVar7;
      param_1[8] = uVar15;
    }
  }
  else if (uVar10 == 0x3000000000000000) {
    FUN_100432880(param_1);
    uVar16 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar16;
    uVar19 = param_2[5];
    uVar18 = param_2[4];
    uVar17 = param_2[7];
    uVar16 = param_2[6];
    uVar13 = param_2[3];
    uVar7 = param_2[2];
    param_1[8] = param_2[8];
    param_1[5] = uVar19;
    param_1[4] = uVar18;
    param_1[7] = uVar17;
    param_1[6] = uVar16;
    param_1[3] = uVar13;
    param_1[2] = uVar7;
  }
  else {
    uVar16 = *param_2;
    uVar1 = param_2[1];
    uVar17 = param_2[2];
    uVar2 = param_2[3];
    uVar14 = param_2[5];
    uVar8 = param_2[7];
    FUN_10042d158(uVar16,uVar1,uVar17,uVar2,uVar12,uVar14,uVar11,uVar8,uVar15);
    uVar18 = *param_1;
    uVar3 = param_1[1];
    uVar19 = param_1[2];
    uVar4 = param_1[3];
    uVar7 = param_1[4];
    uVar5 = param_1[5];
    uVar13 = param_1[6];
    uVar6 = param_1[7];
    uVar9 = param_1[8];
    *param_1 = uVar16;
    param_1[1] = uVar1;
    param_1[2] = uVar17;
    param_1[3] = uVar2;
    param_1[4] = uVar12;
    param_1[5] = uVar14;
    param_1[6] = uVar11;
    param_1[7] = uVar8;
    param_1[8] = uVar15;
    FUN_1002185b8(uVar18,uVar3,uVar19,uVar4,uVar7,uVar5,uVar13,uVar6,uVar9);
  }
  uVar16 = param_2[9];
  uVar18 = param_2[10];
  FUN_100008184(uVar16,uVar18);
  uVar17 = param_1[9];
  uVar19 = param_1[10];
  param_1[9] = uVar16;
  param_1[10] = uVar18;
  FUN_100006cdc(uVar17,uVar19);
  return param_1;
}

