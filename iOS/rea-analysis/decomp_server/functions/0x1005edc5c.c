// rea decompile_all
// name: FUN_1005edc5c
// address: 0x1005edc5c
// body: available
// range: 0x1005edc5c-0x1005edd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005edc5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  uVar9 = *(undefined1 *)(param_2 + 0x1e);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar20 = param_1[0xf];
  uVar19 = param_1[0xe];
  uVar22 = param_1[0x11];
  uVar21 = param_1[0x10];
  uVar24 = param_1[0x13];
  uVar23 = param_1[0x12];
  uVar26 = param_1[0x15];
  uVar25 = param_1[0x14];
  uVar28 = param_1[0x17];
  uVar27 = param_1[0x16];
  uVar30 = param_1[0x19];
  uVar29 = param_1[0x18];
  uVar32 = param_1[0x1b];
  uVar31 = param_1[0x1a];
  uVar4 = param_1[0x1c];
  uVar8 = param_1[0x1d];
  uVar10 = *(undefined1 *)(param_1 + 0x1e);
  uVar33 = *param_2;
  uVar35 = param_2[3];
  uVar34 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar33;
  param_1[3] = uVar35;
  param_1[2] = uVar34;
  uVar33 = param_2[4];
  uVar35 = param_2[7];
  uVar34 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar33;
  param_1[7] = uVar35;
  param_1[6] = uVar34;
  uVar33 = param_2[8];
  uVar35 = param_2[0xb];
  uVar34 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar33;
  param_1[0xb] = uVar35;
  param_1[10] = uVar34;
  uVar33 = param_2[0xc];
  uVar35 = param_2[0xf];
  uVar34 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar33;
  param_1[0xf] = uVar35;
  param_1[0xe] = uVar34;
  uVar33 = param_2[0x10];
  uVar35 = param_2[0x13];
  uVar34 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar33;
  param_1[0x13] = uVar35;
  param_1[0x12] = uVar34;
  uVar33 = param_2[0x14];
  uVar35 = param_2[0x17];
  uVar34 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar33;
  param_1[0x17] = uVar35;
  param_1[0x16] = uVar34;
  uVar33 = param_2[0x18];
  uVar35 = param_2[0x1b];
  uVar34 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar33;
  param_1[0x1b] = uVar35;
  param_1[0x1a] = uVar34;
  uVar33 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar33;
  *(undefined1 *)(param_1 + 0x1e) = uVar9;
  FUN_1005d6478(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17
                ,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29
                ,uVar30,uVar31,uVar32,uVar4,uVar8,uVar10);
  return param_1;
}

