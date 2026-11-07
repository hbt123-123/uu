// rea decompile_all
// name: FUN_10017af28
// address: 0x10017af28
// body: available
// range: 0x10017af28-0x10017b06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10017af28(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar25;
  
  uVar1 = *param_2;
  uVar13 = param_2[1];
  uVar2 = param_2[2];
  uVar14 = param_2[3];
  uVar3 = param_2[4];
  uVar15 = param_2[5];
  uVar4 = param_2[6];
  uVar16 = param_2[7];
  uVar5 = param_2[8];
  uVar17 = param_2[9];
  uVar6 = param_2[10];
  uVar18 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar19 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar20 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar21 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar22 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar23 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar24 = param_2[0x17];
  uVar25 = *(undefined1 *)(param_2 + 0x18);
  FUN_10017a508(uVar1,uVar13);
  *param_1 = uVar1;
  param_1[1] = uVar13;
  param_1[2] = uVar2;
  param_1[3] = uVar14;
  param_1[4] = uVar3;
  param_1[5] = uVar15;
  param_1[6] = uVar4;
  param_1[7] = uVar16;
  param_1[8] = uVar5;
  param_1[9] = uVar17;
  param_1[10] = uVar6;
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar19;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar20;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar21;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar22;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar23;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar24;
  *(undefined1 *)(param_1 + 0x18) = uVar25;
  return param_1;
}

