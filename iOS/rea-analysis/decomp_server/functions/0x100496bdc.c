// rea decompile_all
// name: FUN_100496bdc
// address: 0x100496bdc
// body: available
// range: 0x100496bdc-0x100496d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100496bdc(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar13 = param_2[4];
  uVar12 = param_2[6];
  uVar9 = uVar13 & uVar12 & 0x3000000000000000;
  if (((param_1[4] & param_1[6] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar9 == 0x3000000000000000) {
      uVar16 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar16;
      uVar17 = param_2[3];
      uVar16 = param_2[2];
      uVar19 = param_2[5];
      uVar18 = param_2[4];
      uVar20 = param_2[6];
      uVar10 = param_2[9];
      uVar21 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar20;
      param_1[9] = uVar10;
      param_1[8] = uVar21;
      param_1[3] = uVar17;
      param_1[2] = uVar16;
      param_1[5] = uVar19;
      param_1[4] = uVar18;
    }
    else {
      uVar16 = *param_2;
      uVar19 = param_2[1];
      uVar17 = param_2[2];
      uVar20 = param_2[3];
      uVar14 = param_2[5];
      uVar18 = param_2[7];
      uVar21 = param_2[8];
      uVar10 = param_2[9];
      FUN_1004816e0(uVar16,uVar19,uVar17,uVar20,uVar13,uVar14,uVar12,uVar18,uVar21,uVar10);
      *param_1 = uVar16;
      param_1[1] = uVar19;
      param_1[2] = uVar17;
      param_1[3] = uVar20;
      param_1[4] = uVar13;
      param_1[5] = uVar14;
      param_1[6] = uVar12;
      param_1[7] = uVar18;
      param_1[8] = uVar21;
      param_1[9] = uVar10;
    }
  }
  else if (uVar9 == 0x3000000000000000) {
    FUN_100496d8c(param_1);
    uVar16 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar16;
    uVar16 = param_2[6];
    uVar18 = param_2[9];
    uVar17 = param_2[8];
    uVar10 = param_2[3];
    uVar21 = param_2[2];
    uVar20 = param_2[5];
    uVar19 = param_2[4];
    param_1[7] = param_2[7];
    param_1[6] = uVar16;
    param_1[9] = uVar18;
    param_1[8] = uVar17;
    param_1[3] = uVar10;
    param_1[2] = uVar21;
    param_1[5] = uVar20;
    param_1[4] = uVar19;
  }
  else {
    uVar16 = *param_2;
    uVar1 = param_2[1];
    uVar17 = param_2[2];
    uVar2 = param_2[3];
    uVar15 = param_2[5];
    uVar18 = param_2[7];
    uVar3 = param_2[8];
    uVar11 = param_2[9];
    FUN_1004816e0(uVar16,uVar1,uVar17,uVar2,uVar13,uVar15,uVar12,uVar18,uVar3,uVar11);
    uVar19 = *param_1;
    uVar4 = param_1[1];
    uVar20 = param_1[2];
    uVar5 = param_1[3];
    uVar21 = param_1[4];
    uVar6 = param_1[5];
    uVar10 = param_1[6];
    uVar7 = param_1[7];
    uVar14 = param_1[8];
    uVar8 = param_1[9];
    *param_1 = uVar16;
    param_1[1] = uVar1;
    param_1[2] = uVar17;
    param_1[3] = uVar2;
    param_1[4] = uVar13;
    param_1[5] = uVar15;
    param_1[6] = uVar12;
    param_1[7] = uVar18;
    param_1[8] = uVar3;
    param_1[9] = uVar11;
    FUN_100482554(uVar19,uVar4,uVar20,uVar5,uVar21,uVar6,uVar10,uVar7,uVar14,uVar8);
  }
  uVar16 = param_2[10];
  uVar18 = param_2[0xb];
  FUN_100008184(uVar16,uVar18);
  uVar17 = param_1[10];
  uVar19 = param_1[0xb];
  param_1[10] = uVar16;
  param_1[0xb] = uVar18;
  FUN_100006cdc(uVar17,uVar19);
  return param_1;
}

