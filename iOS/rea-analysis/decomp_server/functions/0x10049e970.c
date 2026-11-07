// rea decompile_all
// name: FUN_10049e970
// address: 0x10049e970
// body: available
// range: 0x10049e970-0x10049eb4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10049e970(undefined8 *param_1,undefined8 *param_2)

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
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar15 = param_2[4];
  uVar14 = param_2[7];
  uVar16 = param_2[9];
  bVar10 = (uVar16 & 0x3000000000000000) != 0;
  bVar11 = uVar14 >> 0x20 != 0;
  if (((ulong)param_1[4] < 0xffffffff00000000 || (ulong)param_1[7] >> 0x20 != 0) ||
      (param_1[9] & 0x3000000000000000) != 0) {
    if ((bVar10 || bVar11) || uVar15 < 0xffffffff00000000) {
      uVar17 = *param_2;
      uVar2 = param_2[1];
      uVar18 = param_2[2];
      uVar3 = param_2[3];
      uVar19 = param_2[5];
      uVar4 = param_2[6];
      uVar12 = param_2[8];
      FUN_10048270c(uVar17,uVar2,uVar18,uVar3,uVar15,uVar19,uVar4,uVar14,uVar12,uVar16,FUN_100008184
                   );
      uVar20 = *param_1;
      uVar5 = param_1[1];
      uVar21 = param_1[2];
      uVar6 = param_1[3];
      uVar22 = param_1[4];
      uVar7 = param_1[5];
      uVar13 = param_1[6];
      uVar8 = param_1[7];
      uVar1 = param_1[8];
      uVar9 = param_1[9];
      *param_1 = uVar17;
      param_1[1] = uVar2;
      param_1[2] = uVar18;
      param_1[3] = uVar3;
      param_1[4] = uVar15;
      param_1[5] = uVar19;
      param_1[6] = uVar4;
      param_1[7] = uVar14;
      param_1[8] = uVar12;
      param_1[9] = uVar16;
      FUN_10048270c(uVar20,uVar5,uVar21,uVar6,uVar22,uVar7,uVar13,uVar8,uVar1,uVar9,FUN_100006cdc);
    }
    else {
      FUN_10049eb50(param_1);
      uVar17 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar17;
      uVar17 = param_2[6];
      uVar19 = param_2[9];
      uVar18 = param_2[8];
      uVar13 = param_2[3];
      uVar22 = param_2[2];
      uVar21 = param_2[5];
      uVar20 = param_2[4];
      param_1[7] = param_2[7];
      param_1[6] = uVar17;
      param_1[9] = uVar19;
      param_1[8] = uVar18;
      param_1[3] = uVar13;
      param_1[2] = uVar22;
      param_1[5] = uVar21;
      param_1[4] = uVar20;
    }
  }
  else if ((bVar10 || bVar11) || uVar15 < 0xffffffff00000000) {
    uVar17 = *param_2;
    uVar20 = param_2[1];
    uVar18 = param_2[2];
    uVar21 = param_2[3];
    uVar19 = param_2[5];
    uVar22 = param_2[6];
    uVar13 = param_2[8];
    FUN_10048270c(uVar17,uVar20,uVar18,uVar21,uVar15,uVar19,uVar22,uVar14,uVar13,uVar16,
                  FUN_100008184);
    *param_1 = uVar17;
    param_1[1] = uVar20;
    param_1[2] = uVar18;
    param_1[3] = uVar21;
    param_1[4] = uVar15;
    param_1[5] = uVar19;
    param_1[6] = uVar22;
    param_1[7] = uVar14;
    param_1[8] = uVar13;
    param_1[9] = uVar16;
  }
  else {
    uVar17 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar17;
    uVar18 = param_2[3];
    uVar17 = param_2[2];
    uVar20 = param_2[5];
    uVar19 = param_2[4];
    uVar21 = param_2[6];
    uVar13 = param_2[9];
    uVar22 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar21;
    param_1[9] = uVar13;
    param_1[8] = uVar22;
    param_1[3] = uVar18;
    param_1[2] = uVar17;
    param_1[5] = uVar20;
    param_1[4] = uVar19;
  }
  uVar17 = param_2[10];
  uVar19 = param_2[0xb];
  FUN_100008184(uVar17,uVar19);
  uVar18 = param_1[10];
  uVar20 = param_1[0xb];
  param_1[10] = uVar17;
  param_1[0xb] = uVar19;
  FUN_100006cdc(uVar18,uVar20);
  return param_1;
}

