// rea decompile_all
// name: FUN_1004e0d48
// address: 0x1004e0d48
// body: available
// range: 0x1004e0d48-0x1004e1027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004e0d48(undefined8 *param_1,undefined8 *param_2)

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
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
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
  
  uVar20 = param_2[0xc];
  uVar19 = param_2[0xe];
  bVar13 = (uVar19 & 0x3000000000000000) != 0;
  bVar14 = uVar20 >> 8 != 0xffffffff;
  if ((ulong)param_1[0xc] >> 8 == 0xffffffff && (param_1[0xe] & 0x3000000000000000) == 0) {
    if (bVar13 || bVar14) {
      uVar18 = *param_2;
      uVar32 = param_2[1];
      uVar22 = param_2[2];
      uVar1 = param_2[3];
      uVar25 = param_2[4];
      uVar2 = param_2[5];
      uVar26 = param_2[6];
      uVar3 = param_2[7];
      uVar29 = param_2[8];
      uVar4 = param_2[9];
      uVar30 = param_2[10];
      uVar5 = param_2[0xb];
      uVar17 = param_2[0xd];
      switchD_100481b9c::caseD_c9
                (uVar18,uVar32,uVar22,uVar1,uVar25,uVar2,uVar26,uVar3,uVar29,uVar4,uVar30,uVar5,
                 uVar20,uVar17,uVar19);
      *param_1 = uVar18;
      param_1[1] = uVar32;
      param_1[2] = uVar22;
      param_1[3] = uVar1;
      param_1[4] = uVar25;
      param_1[5] = uVar2;
      param_1[6] = uVar26;
      param_1[7] = uVar3;
      param_1[8] = uVar29;
      param_1[9] = uVar4;
      param_1[10] = uVar30;
      param_1[0xb] = uVar5;
      param_1[0xc] = uVar20;
      param_1[0xd] = uVar17;
      param_1[0xe] = uVar19;
    }
    else {
      uVar22 = param_2[1];
      uVar18 = *param_2;
      uVar26 = param_2[3];
      uVar25 = param_2[2];
      uVar29 = param_2[4];
      uVar32 = param_2[7];
      uVar30 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar29;
      param_1[7] = uVar32;
      param_1[6] = uVar30;
      param_1[1] = uVar22;
      *param_1 = uVar18;
      param_1[3] = uVar26;
      param_1[2] = uVar25;
      uVar22 = param_2[9];
      uVar18 = param_2[8];
      uVar26 = param_2[0xb];
      uVar25 = param_2[10];
      uVar30 = param_2[0xd];
      uVar29 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xb] = uVar26;
      param_1[10] = uVar25;
      param_1[0xd] = uVar30;
      param_1[0xc] = uVar29;
      param_1[9] = uVar22;
      param_1[8] = uVar18;
    }
  }
  else if (bVar13 || bVar14) {
    uVar18 = *param_2;
    uVar4 = param_2[1];
    uVar22 = param_2[2];
    uVar5 = param_2[3];
    uVar25 = param_2[4];
    uVar17 = param_2[5];
    uVar26 = param_2[6];
    uVar6 = param_2[7];
    uVar29 = param_2[8];
    uVar7 = param_2[9];
    uVar30 = param_2[10];
    uVar8 = param_2[0xb];
    uVar15 = param_2[0xd];
    switchD_100481b9c::caseD_c9
              (uVar18,uVar4,uVar22,uVar5,uVar25,uVar17,uVar26,uVar6,uVar29,uVar7,uVar30,uVar8,uVar20
               ,uVar15,uVar19);
    uVar32 = *param_1;
    uVar9 = param_1[1];
    uVar1 = param_1[2];
    uVar10 = param_1[3];
    uVar2 = param_1[4];
    uVar11 = param_1[5];
    uVar3 = param_1[6];
    uVar12 = param_1[7];
    uVar23 = param_1[9];
    uVar21 = param_1[8];
    uVar27 = param_1[0xb];
    uVar24 = param_1[10];
    uVar31 = param_1[0xd];
    uVar28 = param_1[0xc];
    uVar16 = param_1[0xe];
    *param_1 = uVar18;
    param_1[1] = uVar4;
    param_1[2] = uVar22;
    param_1[3] = uVar5;
    param_1[4] = uVar25;
    param_1[5] = uVar17;
    param_1[6] = uVar26;
    param_1[7] = uVar6;
    param_1[8] = uVar29;
    param_1[9] = uVar7;
    param_1[10] = uVar30;
    param_1[0xb] = uVar8;
    param_1[0xc] = uVar20;
    param_1[0xd] = uVar15;
    param_1[0xe] = uVar19;
    switchD_100482ab4::caseD_6e
              (uVar32,uVar9,uVar1,uVar10,uVar2,uVar11,uVar3,uVar12,uVar21,uVar23,uVar24,uVar27,
               uVar28,uVar31,uVar16);
  }
  else {
    FUN_1004e1028(param_1);
    uVar18 = param_2[4];
    uVar25 = param_2[7];
    uVar22 = param_2[6];
    uVar32 = param_2[1];
    uVar30 = *param_2;
    uVar29 = param_2[3];
    uVar26 = param_2[2];
    param_1[5] = param_2[5];
    param_1[4] = uVar18;
    param_1[7] = uVar25;
    param_1[6] = uVar22;
    param_1[1] = uVar32;
    *param_1 = uVar30;
    param_1[3] = uVar29;
    param_1[2] = uVar26;
    uVar26 = param_2[0xb];
    uVar25 = param_2[10];
    uVar22 = param_2[0xd];
    uVar18 = param_2[0xc];
    uVar30 = param_2[9];
    uVar29 = param_2[8];
    param_1[0xe] = param_2[0xe];
    param_1[0xb] = uVar26;
    param_1[10] = uVar25;
    param_1[0xd] = uVar22;
    param_1[0xc] = uVar18;
    param_1[9] = uVar30;
    param_1[8] = uVar29;
  }
  uVar18 = param_2[0xf];
  uVar25 = param_2[0x10];
  FUN_100008184(uVar18,uVar25);
  uVar22 = param_1[0xf];
  uVar26 = param_1[0x10];
  param_1[0xf] = uVar18;
  param_1[0x10] = uVar25;
  FUN_100006cdc(uVar22,uVar26);
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x13] >> 0x3c < 0xf) {
      param_1[0x11] = param_2[0x11];
      uVar18 = param_2[0x12];
      uVar25 = param_2[0x13];
      FUN_100008184(uVar18,uVar25);
      uVar22 = param_1[0x12];
      uVar26 = param_1[0x13];
      param_1[0x12] = uVar18;
      param_1[0x13] = uVar25;
      FUN_100006cdc(uVar22,uVar26);
    }
    else {
      FUN_100495fdc(param_1 + 0x11);
      uVar18 = param_2[0x13];
      uVar22 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar22;
      param_1[0x13] = uVar18;
    }
  }
  else if ((ulong)param_2[0x13] >> 0x3c < 0xf) {
    param_1[0x11] = param_2[0x11];
    uVar18 = param_2[0x12];
    uVar22 = param_2[0x13];
    FUN_100008184(uVar18,uVar22);
    param_1[0x12] = uVar18;
    param_1[0x13] = uVar22;
  }
  else {
    uVar22 = param_2[0x12];
    uVar18 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar22;
    param_1[0x11] = uVar18;
  }
  return param_1;
}

