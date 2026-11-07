// rea decompile_all
// name: FUN_1004bf2f4
// address: 0x1004bf2f4
// body: available
// range: 0x1004bf2f4-0x1004bf437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004bf2f4(undefined8 *param_1,undefined8 *param_2)

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
  char cVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar14 = param_2[0xc];
  cVar12 = *(char *)(param_2 + 0x10);
  if ((((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar12 == -1)) {
    uVar15 = param_2[0xc];
    uVar17 = param_2[0xf];
    uVar16 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar15;
    param_1[0xf] = uVar17;
    param_1[0xe] = uVar16;
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    uVar15 = param_2[4];
    uVar17 = param_2[7];
    uVar16 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar15;
    param_1[7] = uVar17;
    param_1[6] = uVar16;
    uVar17 = param_2[8];
    uVar16 = param_2[0xb];
    uVar15 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar17;
    param_1[0xb] = uVar16;
    param_1[10] = uVar15;
    uVar17 = *param_2;
    uVar16 = param_2[3];
    uVar15 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar17;
    param_1[3] = uVar16;
    param_1[2] = uVar15;
  }
  else {
    uVar15 = *param_2;
    uVar5 = param_2[1];
    uVar16 = param_2[2];
    uVar6 = param_2[3];
    uVar17 = param_2[4];
    uVar7 = param_2[5];
    uVar1 = param_2[6];
    uVar8 = param_2[7];
    uVar2 = param_2[8];
    uVar9 = param_2[9];
    uVar3 = param_2[10];
    uVar10 = param_2[0xb];
    uVar4 = param_2[0xd];
    uVar11 = param_2[0xe];
    uVar13 = param_2[0xf];
    FUN_100481b34(uVar15,uVar5,uVar16,uVar6,uVar17,uVar7,uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar14
                  ,uVar4,uVar11,uVar13,cVar12);
    *param_1 = uVar15;
    param_1[1] = uVar5;
    param_1[2] = uVar16;
    param_1[3] = uVar6;
    param_1[4] = uVar17;
    param_1[5] = uVar7;
    param_1[6] = uVar1;
    param_1[7] = uVar8;
    param_1[8] = uVar2;
    param_1[9] = uVar9;
    param_1[10] = uVar3;
    param_1[0xb] = uVar10;
    param_1[0xc] = uVar14;
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar11;
    param_1[0xf] = uVar13;
    *(char *)(param_1 + 0x10) = cVar12;
  }
  uVar15 = param_2[0x11];
  uVar16 = param_2[0x12];
  FUN_100008184(uVar15,uVar16);
  param_1[0x11] = uVar15;
  param_1[0x12] = uVar16;
  return param_1;
}

