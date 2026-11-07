// rea decompile_all
// name: FUN_100431e30
// address: 0x100431e30
// body: available
// range: 0x100431e30-0x100432013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100431e30(undefined8 *param_1,undefined8 *param_2)

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
  byte bVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar14 = param_2[8];
  bVar10 = *(byte *)(param_2 + 9);
  bVar12 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  if ((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(char *)(param_1 + 9) == -1)) {
    if (bVar12 || bVar10 != 0xff) {
      uVar15 = *param_2;
      uVar19 = param_2[1];
      uVar16 = param_2[2];
      uVar20 = param_2[3];
      uVar17 = param_2[4];
      uVar21 = param_2[5];
      uVar18 = param_2[6];
      uVar9 = param_2[7];
      switchD_10017a950::caseD_83
                (uVar15,uVar19,uVar16,uVar20,uVar17,uVar21,uVar18,uVar9,uVar14,bVar10 & 1);
      *param_1 = uVar15;
      param_1[1] = uVar19;
      param_1[2] = uVar16;
      param_1[3] = uVar20;
      param_1[4] = uVar17;
      param_1[5] = uVar21;
      param_1[6] = uVar18;
      param_1[7] = uVar9;
      param_1[8] = uVar14;
      *(byte *)(param_1 + 9) = bVar10 & 1;
    }
    else {
      uVar15 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar15;
      uVar16 = param_2[3];
      uVar15 = param_2[2];
      uVar18 = param_2[5];
      uVar17 = param_2[4];
      uVar20 = param_2[7];
      uVar19 = param_2[6];
      uVar21 = *(undefined8 *)((long)param_2 + 0x39);
      *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
      *(undefined8 *)((long)param_1 + 0x39) = uVar21;
      param_1[5] = uVar18;
      param_1[4] = uVar17;
      param_1[7] = uVar20;
      param_1[6] = uVar19;
      param_1[3] = uVar16;
      param_1[2] = uVar15;
    }
  }
  else if (bVar12 || bVar10 != 0xff) {
    uVar15 = *param_2;
    uVar1 = param_2[1];
    uVar16 = param_2[2];
    uVar2 = param_2[3];
    uVar17 = param_2[4];
    uVar3 = param_2[5];
    uVar18 = param_2[6];
    uVar4 = param_2[7];
    switchD_10017a950::caseD_83
              (uVar15,uVar1,uVar16,uVar2,uVar17,uVar3,uVar18,uVar4,uVar14,bVar10 & 1);
    uVar19 = *param_1;
    uVar5 = param_1[1];
    uVar20 = param_1[2];
    uVar6 = param_1[3];
    uVar21 = param_1[4];
    uVar7 = param_1[5];
    uVar9 = param_1[6];
    uVar8 = param_1[7];
    uVar13 = param_1[8];
    uVar11 = *(undefined1 *)(param_1 + 9);
    *param_1 = uVar15;
    param_1[1] = uVar1;
    param_1[2] = uVar16;
    param_1[3] = uVar2;
    param_1[4] = uVar17;
    param_1[5] = uVar3;
    param_1[6] = uVar18;
    param_1[7] = uVar4;
    param_1[8] = uVar14;
    *(byte *)(param_1 + 9) = bVar10 & 1;
    switchD_10004048c::caseD_6a(uVar19,uVar5,uVar20,uVar6,uVar21,uVar7,uVar9,uVar8,uVar13,uVar11);
  }
  else {
    FUN_100432014(param_1);
    uVar15 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar15;
    uVar19 = param_2[5];
    uVar18 = param_2[4];
    uVar16 = param_2[7];
    uVar15 = param_2[6];
    uVar17 = *(undefined8 *)((long)param_2 + 0x39);
    uVar21 = param_2[3];
    uVar20 = param_2[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar17;
    param_1[5] = uVar19;
    param_1[4] = uVar18;
    param_1[7] = uVar16;
    param_1[6] = uVar15;
    param_1[3] = uVar21;
    param_1[2] = uVar20;
  }
  uVar15 = param_2[10];
  uVar17 = param_2[0xb];
  FUN_100008184(uVar15,uVar17);
  uVar16 = param_1[10];
  uVar18 = param_1[0xb];
  param_1[10] = uVar15;
  param_1[0xb] = uVar17;
  FUN_100006cdc(uVar16,uVar18);
  return param_1;
}

