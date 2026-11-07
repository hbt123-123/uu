// rea decompile_all
// name: FUN_10049eb7c
// address: 0x10049eb7c
// body: available
// range: 0x10049eb7c-0x10049ec6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10049eb7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar4 = param_1[4];
  uVar5 = param_1[7];
  uVar6 = param_1[9];
  if ((uVar4 < 0xffffffff00000000 || uVar5 >> 0x20 != 0) || (uVar6 & 0x3000000000000000) != 0) {
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[9];
    if ((uVar9 < 0xffffffff00000000 || uVar8 >> 0x20 != 0) || (uVar7 & 0x3000000000000000) != 0) {
      uVar10 = param_2[8];
      uVar13 = *param_1;
      uVar1 = param_1[1];
      uVar15 = param_1[2];
      uVar2 = param_1[3];
      uVar14 = param_1[5];
      uVar3 = param_1[6];
      uVar11 = param_1[8];
      uVar12 = *param_2;
      uVar17 = param_2[3];
      uVar16 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar12;
      param_1[3] = uVar17;
      param_1[2] = uVar16;
      param_1[4] = uVar9;
      uVar12 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar12;
      param_1[7] = uVar8;
      param_1[8] = uVar10;
      param_1[9] = uVar7;
      FUN_10048270c(uVar13,uVar1,uVar15,uVar2,uVar4,uVar14,uVar3,uVar5,uVar11,uVar6,FUN_100006cdc);
      goto LAB_10049ec48;
    }
    FUN_10049eb50(param_1);
  }
  uVar13 = param_2[4];
  uVar14 = param_2[7];
  uVar15 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar14;
  param_1[6] = uVar15;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  uVar14 = *param_2;
  uVar15 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[3] = uVar15;
  param_1[2] = uVar13;
LAB_10049ec48:
  uVar13 = param_1[10];
  uVar15 = param_1[0xb];
  uVar14 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar14;
  FUN_100006cdc(uVar13,uVar15);
  return param_1;
}

