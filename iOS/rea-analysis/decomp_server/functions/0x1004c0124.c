// rea decompile_all
// name: FUN_1004c0124
// address: 0x1004c0124
// body: available
// range: 0x1004c0124-0x1004c01e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004c0124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  cVar8 = *(char *)(param_1 + 0xc);
  if (cVar8 != -1) {
    cVar9 = *(char *)(param_2 + 0xc);
    if (cVar9 != -1) {
      uVar11 = *param_1;
      uVar3 = param_1[1];
      uVar14 = param_1[2];
      uVar4 = param_1[3];
      uVar12 = param_1[4];
      uVar5 = param_1[5];
      uVar1 = param_1[6];
      uVar6 = param_1[7];
      uVar13 = param_1[9];
      uVar10 = param_1[8];
      uVar2 = param_1[10];
      uVar7 = param_1[0xb];
      uVar15 = *param_2;
      uVar17 = param_2[3];
      uVar16 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar15;
      param_1[3] = uVar17;
      param_1[2] = uVar16;
      uVar15 = param_2[4];
      uVar17 = param_2[7];
      uVar16 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar15;
      param_1[7] = uVar17;
      param_1[6] = uVar16;
      uVar15 = param_2[8];
      uVar17 = param_2[0xb];
      uVar16 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar15;
      param_1[0xb] = uVar17;
      param_1[10] = uVar16;
      *(char *)(param_1 + 0xc) = cVar9;
      FUN_1002183f4(uVar11,uVar3,uVar14,uVar4,uVar12,uVar5,uVar1,uVar6,uVar10,uVar13,uVar2,uVar7,
                    cVar8);
      goto LAB_1004c01c4;
    }
    FUN_1004c00cc(param_1);
  }
  uVar11 = param_2[8];
  uVar12 = param_2[0xb];
  uVar14 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  param_1[0xb] = uVar12;
  param_1[10] = uVar14;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar11 = *param_2;
  uVar12 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar12;
  param_1[2] = uVar14;
  uVar12 = param_2[4];
  uVar14 = param_2[7];
  uVar11 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  param_1[7] = uVar14;
  param_1[6] = uVar11;
LAB_1004c01c4:
  uVar11 = param_1[0xd];
  uVar14 = param_1[0xe];
  uVar12 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar12;
  FUN_100006cdc(uVar11,uVar14);
  return param_1;
}

