// rea decompile_all
// name: FUN_1004492bc
// address: 0x1004492bc
// body: available
// range: 0x1004492bc-0x100449477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004492bc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  uint5 uVar6;
  bool bVar7;
  uint5 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar12 = param_2[5];
  uVar8 = *(uint5 *)(param_2 + 6);
  bVar9 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  bVar10 = uVar2 >> 0x21 != 0x3fffffff;
  bVar11 = uVar12 >> 0x21 != 0;
  bVar7 = *(byte *)((long)param_2 + 0x34) >> 1 != 0;
  uVar5 = (undefined1)(uVar8 >> 0x20);
  if (((*(byte *)((long)param_1 + 0x34) >> 1 == 0 && (ulong)param_1[5] >> 0x21 == 0) &&
      (param_1[3] & 0x3000000000000000) == 0x3000000000000000) &&
      (param_1[4] & 0xfffffffe00000000) == 0x7ffffffe00000000) {
    if (((bVar9 || bVar10) || bVar11) || bVar7) {
      uVar15 = *param_2;
      uVar16 = param_2[1];
      uVar13 = param_2[2];
      FUN_10017ac64(uVar15,uVar16,uVar13,uVar1,uVar2,uVar12,(ulong)uVar8);
      *param_1 = uVar15;
      param_1[1] = uVar16;
      param_1[2] = uVar13;
      param_1[3] = uVar1;
      param_1[4] = uVar2;
      param_1[5] = uVar12;
      *(undefined1 *)((long)param_1 + 0x34) = uVar5;
      *(int *)(param_1 + 6) = (int)uVar8;
    }
    else {
      uVar16 = param_2[1];
      uVar15 = *param_2;
      uVar17 = param_2[3];
      uVar13 = param_2[2];
      uVar19 = param_2[5];
      uVar18 = param_2[4];
      *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
      param_1[3] = uVar17;
      param_1[2] = uVar13;
      param_1[5] = uVar19;
      param_1[4] = uVar18;
      param_1[1] = uVar16;
      *param_1 = uVar15;
    }
  }
  else if (((bVar9 || bVar10) || bVar11) || bVar7) {
    uVar15 = *param_2;
    uVar18 = param_2[1];
    uVar14 = param_2[2];
    FUN_10017ac64(uVar15,uVar18,uVar14,uVar1,uVar2,uVar12,(ulong)uVar8);
    uVar16 = *param_1;
    uVar19 = param_1[1];
    uVar13 = param_1[2];
    uVar3 = param_1[3];
    uVar17 = param_1[4];
    uVar4 = param_1[5];
    uVar6 = *(uint5 *)(param_1 + 6);
    *param_1 = uVar15;
    param_1[1] = uVar18;
    param_1[2] = uVar14;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    param_1[5] = uVar12;
    *(int *)(param_1 + 6) = (int)uVar8;
    *(undefined1 *)((long)param_1 + 0x34) = uVar5;
    FUN_100040834(uVar16,uVar19,uVar13,uVar3,uVar17,uVar4,(ulong)uVar6);
  }
  else {
    FUN_100449478(param_1);
    uVar17 = param_2[3];
    uVar13 = param_2[2];
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    uVar19 = param_2[1];
    uVar18 = *param_2;
    *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    param_1[3] = uVar17;
    param_1[2] = uVar13;
    param_1[5] = uVar16;
    param_1[4] = uVar15;
    param_1[1] = uVar19;
    *param_1 = uVar18;
  }
  uVar15 = param_2[7];
  uVar13 = param_2[8];
  FUN_100008184(uVar15,uVar13);
  uVar16 = param_1[7];
  uVar17 = param_1[8];
  param_1[7] = uVar15;
  param_1[8] = uVar13;
  FUN_100006cdc(uVar16,uVar17);
  return param_1;
}

