// rea decompile_all
// name: FUN_1004bfeb4
// address: 0x1004bfeb4
// body: available
// range: 0x1004bfeb4-0x1004c00cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004bfeb4(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  cVar17 = *(char *)(param_2 + 0xc);
  if (*(char *)(param_1 + 0xc) == -1) {
    if (cVar17 == -1) {
      uVar22 = param_2[1];
      uVar20 = *param_2;
      uVar23 = param_2[2];
      uVar25 = param_2[5];
      uVar24 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar23;
      param_1[5] = uVar25;
      param_1[4] = uVar24;
      param_1[1] = uVar22;
      *param_1 = uVar20;
      uVar22 = param_2[7];
      uVar20 = param_2[6];
      uVar24 = param_2[9];
      uVar23 = param_2[8];
      uVar26 = param_2[0xb];
      uVar25 = param_2[10];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      param_1[9] = uVar24;
      param_1[8] = uVar23;
      param_1[0xb] = uVar26;
      param_1[10] = uVar25;
      param_1[7] = uVar22;
      param_1[6] = uVar20;
    }
    else {
      uVar20 = *param_2;
      uVar1 = param_2[1];
      uVar22 = param_2[2];
      uVar2 = param_2[3];
      uVar23 = param_2[4];
      uVar3 = param_2[5];
      uVar24 = param_2[6];
      uVar4 = param_2[7];
      uVar25 = param_2[8];
      uVar5 = param_2[9];
      uVar26 = param_2[10];
      uVar6 = param_2[0xb];
      FUN_100481f28(uVar20,uVar1,uVar22,uVar2,uVar23,uVar3,uVar24,uVar4,uVar25,uVar5,uVar26,uVar6,
                    cVar17);
      *param_1 = uVar20;
      param_1[1] = uVar1;
      param_1[2] = uVar22;
      param_1[3] = uVar2;
      param_1[4] = uVar23;
      param_1[5] = uVar3;
      param_1[6] = uVar24;
      param_1[7] = uVar4;
      param_1[8] = uVar25;
      param_1[9] = uVar5;
      param_1[10] = uVar26;
      param_1[0xb] = uVar6;
      *(char *)(param_1 + 0xc) = cVar17;
    }
  }
  else if (cVar17 == -1) {
    FUN_1004c00cc(param_1);
    uVar24 = param_2[3];
    uVar23 = param_2[2];
    uVar22 = param_2[5];
    uVar20 = param_2[4];
    uVar25 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar25;
    param_1[3] = uVar24;
    param_1[2] = uVar23;
    param_1[5] = uVar22;
    param_1[4] = uVar20;
    uVar24 = param_2[9];
    uVar23 = param_2[8];
    uVar22 = param_2[0xb];
    uVar20 = param_2[10];
    uVar26 = param_2[7];
    uVar25 = param_2[6];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[9] = uVar24;
    param_1[8] = uVar23;
    param_1[0xb] = uVar22;
    param_1[10] = uVar20;
    param_1[7] = uVar26;
    param_1[6] = uVar25;
  }
  else {
    uVar20 = *param_2;
    uVar6 = param_2[1];
    uVar22 = param_2[2];
    uVar7 = param_2[3];
    uVar23 = param_2[4];
    uVar8 = param_2[5];
    uVar24 = param_2[6];
    uVar9 = param_2[7];
    uVar25 = param_2[8];
    uVar10 = param_2[9];
    uVar26 = param_2[10];
    uVar11 = param_2[0xb];
    FUN_100481f28(uVar20,uVar6,uVar22,uVar7,uVar23,uVar8,uVar24,uVar9,uVar25,uVar10,uVar26,uVar11,
                  cVar17);
    uVar1 = *param_1;
    uVar12 = param_1[1];
    uVar2 = param_1[2];
    uVar13 = param_1[3];
    uVar3 = param_1[4];
    uVar14 = param_1[5];
    uVar4 = param_1[6];
    uVar15 = param_1[7];
    uVar21 = param_1[9];
    uVar19 = param_1[8];
    uVar5 = param_1[10];
    uVar16 = param_1[0xb];
    uVar18 = *(undefined1 *)(param_1 + 0xc);
    *param_1 = uVar20;
    param_1[1] = uVar6;
    param_1[2] = uVar22;
    param_1[3] = uVar7;
    param_1[4] = uVar23;
    param_1[5] = uVar8;
    param_1[6] = uVar24;
    param_1[7] = uVar9;
    param_1[8] = uVar25;
    param_1[9] = uVar10;
    param_1[10] = uVar26;
    param_1[0xb] = uVar11;
    *(char *)(param_1 + 0xc) = cVar17;
    FUN_1002183f4(uVar1,uVar12,uVar2,uVar13,uVar3,uVar14,uVar4,uVar15,uVar19,uVar21,uVar5,uVar16,
                  uVar18);
  }
  uVar20 = param_2[0xd];
  uVar23 = param_2[0xe];
  FUN_100008184(uVar20,uVar23);
  uVar22 = param_1[0xd];
  uVar24 = param_1[0xe];
  param_1[0xd] = uVar20;
  param_1[0xe] = uVar23;
  FUN_100006cdc(uVar22,uVar24);
  return param_1;
}

