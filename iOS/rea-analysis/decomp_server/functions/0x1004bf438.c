// rea decompile_all
// name: FUN_1004bf438
// address: 0x1004bf438
// body: available
// range: 0x1004bf438-0x1004bf6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004bf438(undefined8 *param_1,undefined8 *param_2)

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
  char cVar17;
  undefined1 uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
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
  
  uVar22 = param_2[0xc];
  cVar17 = *(char *)(param_2 + 0x10);
  bVar19 = ((uVar22 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  if ((((param_1[0xc] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(char *)(param_1 + 0x10) == -1)) {
    if (bVar19 || cVar17 != -1) {
      uVar23 = *param_2;
      uVar10 = param_2[1];
      uVar25 = param_2[2];
      uVar11 = param_2[3];
      uVar27 = param_2[4];
      uVar12 = param_2[5];
      uVar29 = param_2[6];
      uVar13 = param_2[7];
      uVar31 = param_2[8];
      uVar14 = param_2[9];
      uVar33 = param_2[10];
      uVar15 = param_2[0xb];
      uVar35 = param_2[0xd];
      uVar16 = param_2[0xe];
      uVar21 = param_2[0xf];
      FUN_100481b34(uVar23,uVar10,uVar25,uVar11,uVar27,uVar12,uVar29,uVar13,uVar31,uVar14,uVar33,
                    uVar15,uVar22,uVar35,uVar16,uVar21,cVar17);
      *param_1 = uVar23;
      param_1[1] = uVar10;
      param_1[2] = uVar25;
      param_1[3] = uVar11;
      param_1[4] = uVar27;
      param_1[5] = uVar12;
      param_1[6] = uVar29;
      param_1[7] = uVar13;
      param_1[8] = uVar31;
      param_1[9] = uVar14;
      param_1[10] = uVar33;
      param_1[0xb] = uVar15;
      param_1[0xc] = uVar22;
      param_1[0xd] = uVar35;
      param_1[0xe] = uVar16;
      param_1[0xf] = uVar21;
      *(char *)(param_1 + 0x10) = cVar17;
    }
    else {
      uVar23 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar23;
      uVar25 = param_2[3];
      uVar23 = param_2[2];
      uVar29 = param_2[5];
      uVar27 = param_2[4];
      uVar31 = param_2[6];
      uVar35 = param_2[9];
      uVar33 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar31;
      param_1[9] = uVar35;
      param_1[8] = uVar33;
      param_1[3] = uVar25;
      param_1[2] = uVar23;
      param_1[5] = uVar29;
      param_1[4] = uVar27;
      uVar25 = param_2[0xb];
      uVar23 = param_2[10];
      uVar29 = param_2[0xd];
      uVar27 = param_2[0xc];
      uVar33 = param_2[0xf];
      uVar31 = param_2[0xe];
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      param_1[0xd] = uVar29;
      param_1[0xc] = uVar27;
      param_1[0xf] = uVar33;
      param_1[0xe] = uVar31;
      param_1[0xb] = uVar25;
      param_1[10] = uVar23;
    }
  }
  else if (bVar19 || cVar17 != -1) {
    uVar23 = *param_2;
    uVar15 = param_2[1];
    uVar25 = param_2[2];
    uVar16 = param_2[3];
    uVar27 = param_2[4];
    uVar21 = param_2[5];
    uVar29 = param_2[6];
    uVar1 = param_2[7];
    uVar31 = param_2[8];
    uVar2 = param_2[9];
    uVar33 = param_2[10];
    uVar3 = param_2[0xb];
    uVar35 = param_2[0xd];
    uVar4 = param_2[0xe];
    uVar20 = param_2[0xf];
    FUN_100481b34(uVar23,uVar15,uVar25,uVar16,uVar27,uVar21,uVar29,uVar1,uVar31,uVar2,uVar33,uVar3,
                  uVar22,uVar35,uVar4,uVar20,cVar17);
    uVar10 = *param_1;
    uVar5 = param_1[1];
    uVar11 = param_1[2];
    uVar6 = param_1[3];
    uVar12 = param_1[4];
    uVar7 = param_1[5];
    uVar13 = param_1[6];
    uVar8 = param_1[7];
    uVar26 = param_1[9];
    uVar24 = param_1[8];
    uVar30 = param_1[0xb];
    uVar28 = param_1[10];
    uVar34 = param_1[0xd];
    uVar32 = param_1[0xc];
    uVar14 = param_1[0xe];
    uVar9 = param_1[0xf];
    uVar18 = *(undefined1 *)(param_1 + 0x10);
    *param_1 = uVar23;
    param_1[1] = uVar15;
    param_1[2] = uVar25;
    param_1[3] = uVar16;
    param_1[4] = uVar27;
    param_1[5] = uVar21;
    param_1[6] = uVar29;
    param_1[7] = uVar1;
    param_1[8] = uVar31;
    param_1[9] = uVar2;
    param_1[10] = uVar33;
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar22;
    param_1[0xd] = uVar35;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar20;
    *(char *)(param_1 + 0x10) = cVar17;
    FUN_100482a4c(uVar10,uVar5,uVar11,uVar6,uVar12,uVar7,uVar13,uVar8,uVar24,uVar26,uVar28,uVar30,
                  uVar32,uVar34,uVar14,uVar9,uVar18);
  }
  else {
    FUN_1004bf6dc(param_1);
    uVar23 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar23;
    uVar23 = param_2[6];
    uVar27 = param_2[9];
    uVar25 = param_2[8];
    uVar35 = param_2[3];
    uVar33 = param_2[2];
    uVar31 = param_2[5];
    uVar29 = param_2[4];
    param_1[7] = param_2[7];
    param_1[6] = uVar23;
    param_1[9] = uVar27;
    param_1[8] = uVar25;
    param_1[3] = uVar35;
    param_1[2] = uVar33;
    param_1[5] = uVar31;
    param_1[4] = uVar29;
    uVar29 = param_2[0xd];
    uVar27 = param_2[0xc];
    uVar25 = param_2[0xf];
    uVar23 = param_2[0xe];
    uVar33 = param_2[0xb];
    uVar31 = param_2[10];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    param_1[0xd] = uVar29;
    param_1[0xc] = uVar27;
    param_1[0xf] = uVar25;
    param_1[0xe] = uVar23;
    param_1[0xb] = uVar33;
    param_1[10] = uVar31;
  }
  uVar23 = param_2[0x11];
  uVar27 = param_2[0x12];
  FUN_100008184(uVar23,uVar27);
  uVar25 = param_1[0x11];
  uVar29 = param_1[0x12];
  param_1[0x11] = uVar23;
  param_1[0x12] = uVar27;
  FUN_100006cdc(uVar25,uVar29);
  return param_1;
}

