// rea decompile_all
// name: FUN_1004e0148
// address: 0x1004e0148
// body: available
// range: 0x1004e0148-0x1004e048f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e0148(undefined8 *param_1,undefined8 *param_2)

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
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
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
  undefined8 uVar39;
  undefined8 uVar40;
  
  uVar24 = param_2[0x10];
  uVar23 = param_2[0x12];
  bVar17 = (uVar23 & 0x3000000000000000) != 0;
  bVar18 = uVar24 >> 8 != 0xffffffff;
  if ((ulong)param_1[0x10] >> 8 == 0xffffffff && (param_1[0x12] & 0x3000000000000000) == 0) {
    if (bVar17 || bVar18) {
      uVar22 = *param_2;
      uVar2 = param_2[1];
      uVar26 = param_2[2];
      uVar3 = param_2[3];
      uVar28 = param_2[4];
      uVar4 = param_2[5];
      uVar30 = param_2[6];
      uVar5 = param_2[7];
      uVar33 = param_2[8];
      uVar6 = param_2[9];
      uVar34 = param_2[10];
      uVar7 = param_2[0xb];
      uVar37 = param_2[0xc];
      uVar8 = param_2[0xd];
      uVar1 = param_2[0xe];
      uVar9 = param_2[0xf];
      uVar21 = param_2[0x11];
      FUN_10048191c(uVar22,uVar2,uVar26,uVar3,uVar28,uVar4,uVar30,uVar5,uVar33,uVar6,uVar34,uVar7,
                    uVar37,uVar8,uVar1,uVar9,uVar24,uVar21,uVar23);
      *param_1 = uVar22;
      param_1[1] = uVar2;
      param_1[2] = uVar26;
      param_1[3] = uVar3;
      param_1[4] = uVar28;
      param_1[5] = uVar4;
      param_1[6] = uVar30;
      param_1[7] = uVar5;
      param_1[8] = uVar33;
      param_1[9] = uVar6;
      param_1[10] = uVar34;
      param_1[0xb] = uVar7;
      param_1[0xc] = uVar37;
      param_1[0xd] = uVar8;
      param_1[0xe] = uVar1;
      param_1[0xf] = uVar9;
      param_1[0x10] = uVar24;
      param_1[0x11] = uVar21;
      param_1[0x12] = uVar23;
    }
    else {
      uVar22 = *param_2;
      uVar28 = param_2[3];
      uVar26 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar22;
      param_1[3] = uVar28;
      param_1[2] = uVar26;
      uVar26 = param_2[5];
      uVar22 = param_2[4];
      uVar30 = param_2[7];
      uVar28 = param_2[6];
      uVar33 = param_2[8];
      uVar37 = param_2[0xb];
      uVar34 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar33;
      param_1[0xb] = uVar37;
      param_1[10] = uVar34;
      param_1[5] = uVar26;
      param_1[4] = uVar22;
      param_1[7] = uVar30;
      param_1[6] = uVar28;
      uVar26 = param_2[0xd];
      uVar22 = param_2[0xc];
      uVar30 = param_2[0xf];
      uVar28 = param_2[0xe];
      uVar34 = param_2[0x11];
      uVar33 = param_2[0x10];
      param_1[0x12] = param_2[0x12];
      param_1[0xf] = uVar30;
      param_1[0xe] = uVar28;
      param_1[0x11] = uVar34;
      param_1[0x10] = uVar33;
      param_1[0xd] = uVar26;
      param_1[0xc] = uVar22;
    }
  }
  else if (bVar17 || bVar18) {
    uVar22 = *param_2;
    uVar6 = param_2[1];
    uVar26 = param_2[2];
    uVar7 = param_2[3];
    uVar28 = param_2[4];
    uVar8 = param_2[5];
    uVar30 = param_2[6];
    uVar9 = param_2[7];
    uVar33 = param_2[8];
    uVar21 = param_2[9];
    uVar34 = param_2[10];
    uVar10 = param_2[0xb];
    uVar37 = param_2[0xc];
    uVar11 = param_2[0xd];
    uVar1 = param_2[0xe];
    uVar12 = param_2[0xf];
    uVar19 = param_2[0x11];
    FUN_10048191c(uVar22,uVar6,uVar26,uVar7,uVar28,uVar8,uVar30,uVar9,uVar33,uVar21,uVar34,uVar10,
                  uVar37,uVar11,uVar1,uVar12,uVar24,uVar19,uVar23);
    uVar2 = *param_1;
    uVar13 = param_1[1];
    uVar3 = param_1[2];
    uVar14 = param_1[3];
    uVar4 = param_1[4];
    uVar15 = param_1[5];
    uVar5 = param_1[6];
    uVar16 = param_1[7];
    uVar27 = param_1[9];
    uVar25 = param_1[8];
    uVar31 = param_1[0xb];
    uVar29 = param_1[10];
    uVar35 = param_1[0xd];
    uVar32 = param_1[0xc];
    uVar38 = param_1[0xf];
    uVar36 = param_1[0xe];
    uVar40 = param_1[0x11];
    uVar39 = param_1[0x10];
    uVar20 = param_1[0x12];
    *param_1 = uVar22;
    param_1[1] = uVar6;
    param_1[2] = uVar26;
    param_1[3] = uVar7;
    param_1[4] = uVar28;
    param_1[5] = uVar8;
    param_1[6] = uVar30;
    param_1[7] = uVar9;
    param_1[8] = uVar33;
    param_1[9] = uVar21;
    param_1[10] = uVar34;
    param_1[0xb] = uVar10;
    param_1[0xc] = uVar37;
    param_1[0xd] = uVar11;
    param_1[0xe] = uVar1;
    param_1[0xf] = uVar12;
    param_1[0x10] = uVar24;
    param_1[0x11] = uVar19;
    param_1[0x12] = uVar23;
    FUN_100482834(uVar2,uVar13,uVar3,uVar14,uVar4,uVar15,uVar5,uVar16,uVar25,uVar27,uVar29,uVar31,
                  uVar32,uVar35,uVar36,uVar38,uVar39,uVar40,uVar20);
  }
  else {
    FUN_1004e0490(param_1);
    uVar28 = *param_2;
    uVar26 = param_2[3];
    uVar22 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar28;
    param_1[3] = uVar26;
    param_1[2] = uVar22;
    uVar22 = param_2[8];
    uVar28 = param_2[0xb];
    uVar26 = param_2[10];
    uVar37 = param_2[5];
    uVar34 = param_2[4];
    uVar33 = param_2[7];
    uVar30 = param_2[6];
    param_1[9] = param_2[9];
    param_1[8] = uVar22;
    param_1[0xb] = uVar28;
    param_1[10] = uVar26;
    param_1[5] = uVar37;
    param_1[4] = uVar34;
    param_1[7] = uVar33;
    param_1[6] = uVar30;
    uVar30 = param_2[0xf];
    uVar28 = param_2[0xe];
    uVar26 = param_2[0x11];
    uVar22 = param_2[0x10];
    uVar34 = param_2[0xd];
    uVar33 = param_2[0xc];
    param_1[0x12] = param_2[0x12];
    param_1[0xf] = uVar30;
    param_1[0xe] = uVar28;
    param_1[0x11] = uVar26;
    param_1[0x10] = uVar22;
    param_1[0xd] = uVar34;
    param_1[0xc] = uVar33;
  }
  uVar22 = param_2[0x13];
  uVar28 = param_2[0x14];
  FUN_100008184(uVar22,uVar28);
  uVar26 = param_1[0x13];
  uVar30 = param_1[0x14];
  param_1[0x13] = uVar22;
  param_1[0x14] = uVar28;
  FUN_100006cdc(uVar26,uVar30);
  if ((ulong)param_1[0x17] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x17] >> 0x3c < 0xf) {
      param_1[0x15] = param_2[0x15];
      uVar22 = param_2[0x16];
      uVar28 = param_2[0x17];
      FUN_100008184(uVar22,uVar28);
      uVar26 = param_1[0x16];
      uVar30 = param_1[0x17];
      param_1[0x16] = uVar22;
      param_1[0x17] = uVar28;
      FUN_100006cdc(uVar26,uVar30);
    }
    else {
      FUN_100495fdc(param_1 + 0x15);
      uVar22 = param_2[0x17];
      uVar26 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar26;
      param_1[0x17] = uVar22;
    }
  }
  else if ((ulong)param_2[0x17] >> 0x3c < 0xf) {
    param_1[0x15] = param_2[0x15];
    uVar22 = param_2[0x16];
    uVar26 = param_2[0x17];
    FUN_100008184(uVar22,uVar26);
    param_1[0x16] = uVar22;
    param_1[0x17] = uVar26;
  }
  else {
    uVar26 = param_2[0x16];
    uVar22 = param_2[0x15];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar26;
    param_1[0x15] = uVar22;
  }
  return param_1;
}

