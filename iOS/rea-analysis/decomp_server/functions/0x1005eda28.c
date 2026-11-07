// rea decompile_all
// name: FUN_1005eda28
// address: 0x1005eda28
// body: available
// range: 0x1005eda28-0x1005edc0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005eda28(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar17;
  undefined1 uVar18;
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
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  uVar1 = *param_2;
  uVar10 = param_2[1];
  uVar2 = param_2[2];
  uVar11 = param_2[3];
  uVar3 = param_2[4];
  uVar12 = param_2[5];
  uVar4 = param_2[6];
  uVar19 = param_2[7];
  uVar5 = param_2[8];
  uVar24 = param_2[9];
  uVar23 = param_2[10];
  uVar25 = param_2[0xb];
  uVar27 = param_2[0xc];
  uVar29 = param_2[0xd];
  uVar28 = param_2[0xe];
  uVar30 = param_2[0xf];
  uVar31 = param_2[0x10];
  uVar33 = param_2[0x11];
  uVar32 = param_2[0x12];
  uVar34 = param_2[0x13];
  uVar35 = param_2[0x14];
  uVar37 = param_2[0x15];
  uVar36 = param_2[0x16];
  uVar38 = param_2[0x17];
  uVar6 = param_2[0x18];
  uVar13 = param_2[0x19];
  uVar7 = param_2[0x1a];
  uVar14 = param_2[0x1b];
  uVar8 = param_2[0x1c];
  uVar15 = param_2[0x1d];
  uVar17 = *(undefined1 *)(param_2 + 0x1e);
  FUN_1005ed4c8(uVar1,uVar10,uVar2,uVar11,uVar3,uVar12,uVar4,uVar19,uVar5,uVar24,uVar23,uVar25,
                uVar27,uVar29,uVar28,uVar30,uVar31,uVar33,uVar32,uVar34,uVar35,uVar37,uVar36,uVar38,
                uVar6,uVar13,uVar7,uVar14,uVar8,uVar15,uVar17);
  uVar9 = *param_1;
  uVar16 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar10;
  uVar1 = param_1[2];
  uVar10 = param_1[3];
  param_1[2] = uVar2;
  param_1[3] = uVar11;
  uVar2 = param_1[4];
  uVar11 = param_1[5];
  param_1[4] = uVar3;
  param_1[5] = uVar12;
  uVar3 = param_1[6];
  uVar12 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar19;
  uVar20 = param_1[9];
  uVar19 = param_1[8];
  uVar22 = param_1[0xb];
  uVar21 = param_1[10];
  param_1[8] = uVar5;
  param_1[9] = uVar24;
  param_1[10] = uVar23;
  param_1[0xb] = uVar25;
  uVar24 = param_1[0xd];
  uVar23 = param_1[0xc];
  uVar26 = param_1[0xf];
  uVar25 = param_1[0xe];
  param_1[0xc] = uVar27;
  param_1[0xd] = uVar29;
  param_1[0xe] = uVar28;
  param_1[0xf] = uVar30;
  uVar28 = param_1[0x11];
  uVar27 = param_1[0x10];
  uVar30 = param_1[0x13];
  uVar29 = param_1[0x12];
  param_1[0x10] = uVar31;
  param_1[0x11] = uVar33;
  param_1[0x12] = uVar32;
  param_1[0x13] = uVar34;
  uVar32 = param_1[0x15];
  uVar31 = param_1[0x14];
  uVar34 = param_1[0x17];
  uVar33 = param_1[0x16];
  param_1[0x14] = uVar35;
  param_1[0x15] = uVar37;
  param_1[0x16] = uVar36;
  param_1[0x17] = uVar38;
  uVar36 = param_1[0x19];
  uVar35 = param_1[0x18];
  uVar38 = param_1[0x1b];
  uVar37 = param_1[0x1a];
  param_1[0x18] = uVar6;
  param_1[0x19] = uVar13;
  param_1[0x1a] = uVar7;
  param_1[0x1b] = uVar14;
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  param_1[0x1c] = uVar8;
  param_1[0x1d] = uVar15;
  uVar18 = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x1e) = uVar17;
  FUN_1005d6478(uVar9,uVar16,uVar1,uVar10,uVar2,uVar11,uVar3,uVar12,uVar19,uVar20,uVar21,uVar22,
                uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,
                uVar35,uVar36,uVar37,uVar38,uVar4,uVar5,uVar18);
  return param_1;
}

