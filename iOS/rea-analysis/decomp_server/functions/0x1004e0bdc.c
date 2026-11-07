// rea decompile_all
// name: FUN_1004e0bdc
// address: 0x1004e0bdc
// body: available
// range: 0x1004e0bdc-0x1004e0d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e0bdc(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar12 = param_2[0xc];
  uVar11 = param_2[0xe];
  if (uVar12 >> 8 == 0xffffffff && (uVar11 & 0x3000000000000000) == 0) {
    uVar13 = param_2[8];
    uVar15 = param_2[0xb];
    uVar14 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar13;
    param_1[0xb] = uVar15;
    param_1[10] = uVar14;
    uVar13 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar13;
    param_1[0xe] = param_2[0xe];
    uVar13 = *param_2;
    uVar15 = param_2[3];
    uVar14 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar13;
    param_1[3] = uVar15;
    param_1[2] = uVar14;
    uVar13 = param_2[4];
    uVar15 = param_2[7];
    uVar14 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar13;
    param_1[7] = uVar15;
    param_1[6] = uVar14;
  }
  else {
    uVar13 = *param_2;
    uVar4 = param_2[1];
    uVar14 = param_2[2];
    uVar5 = param_2[3];
    uVar15 = param_2[4];
    uVar6 = param_2[5];
    uVar1 = param_2[6];
    uVar7 = param_2[7];
    uVar2 = param_2[8];
    uVar8 = param_2[9];
    uVar3 = param_2[10];
    uVar9 = param_2[0xb];
    uVar10 = param_2[0xd];
    switchD_100481b9c::caseD_c9
              (uVar13,uVar4,uVar14,uVar5,uVar15,uVar6,uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar12,
               uVar10,uVar11);
    *param_1 = uVar13;
    param_1[1] = uVar4;
    param_1[2] = uVar14;
    param_1[3] = uVar5;
    param_1[4] = uVar15;
    param_1[5] = uVar6;
    param_1[6] = uVar1;
    param_1[7] = uVar7;
    param_1[8] = uVar2;
    param_1[9] = uVar8;
    param_1[10] = uVar3;
    param_1[0xb] = uVar9;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar10;
    param_1[0xe] = uVar11;
  }
  uVar13 = param_2[0xf];
  uVar14 = param_2[0x10];
  FUN_100008184(uVar13,uVar14);
  param_1[0xf] = uVar13;
  param_1[0x10] = uVar14;
  uVar11 = param_2[0x13];
  if (uVar11 >> 0x3c < 0xf) {
    uVar13 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    FUN_100008184(uVar13,uVar11);
    param_1[0x12] = uVar13;
    param_1[0x13] = uVar11;
  }
  else {
    uVar13 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar13;
    param_1[0x13] = param_2[0x13];
  }
  return param_1;
}

