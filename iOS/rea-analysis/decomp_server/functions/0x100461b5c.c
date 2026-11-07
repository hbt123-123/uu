// rea decompile_all
// name: FUN_100461b5c
// address: 0x100461b5c
// body: available
// range: 0x100461b5c-0x100461d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100461b5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar6 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar6;
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar9 = param_2[9];
  uVar8 = param_2[0xb];
  uVar7 = uVar9 & uVar8 & 0x3000000000000000;
  if (((param_1[9] & param_1[0xb] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar7 == 0x3000000000000000) {
      uVar14 = param_2[5];
      uVar6 = param_2[4];
      uVar16 = param_2[7];
      uVar15 = param_2[6];
      uVar10 = param_2[8];
      uVar17 = param_2[0xb];
      uVar12 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar10;
      param_1[0xb] = uVar17;
      param_1[10] = uVar12;
      param_1[5] = uVar14;
      param_1[4] = uVar6;
      param_1[7] = uVar16;
      param_1[6] = uVar15;
    }
    else {
      uVar6 = param_2[4];
      uVar15 = param_2[5];
      uVar14 = param_2[6];
      uVar16 = param_2[7];
      uVar10 = param_2[8];
      uVar12 = param_2[10];
      FUN_100461a34(uVar6,uVar15,uVar14,uVar16,uVar10,uVar9,uVar12,uVar8,FUN_100008184);
      param_1[4] = uVar6;
      param_1[5] = uVar15;
      param_1[6] = uVar14;
      param_1[7] = uVar16;
      param_1[8] = uVar10;
      param_1[9] = uVar9;
      param_1[10] = uVar12;
      param_1[0xb] = uVar8;
    }
  }
  else if (uVar7 == 0x3000000000000000) {
    FUN_100461d20(param_1 + 4);
    uVar6 = param_2[8];
    uVar15 = param_2[0xb];
    uVar14 = param_2[10];
    uVar17 = param_2[5];
    uVar12 = param_2[4];
    uVar10 = param_2[7];
    uVar16 = param_2[6];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar15;
    param_1[10] = uVar14;
    param_1[5] = uVar17;
    param_1[4] = uVar12;
    param_1[7] = uVar10;
    param_1[6] = uVar16;
  }
  else {
    uVar6 = param_2[4];
    uVar17 = param_2[5];
    uVar14 = param_2[6];
    uVar1 = param_2[7];
    uVar11 = param_2[8];
    uVar13 = param_2[10];
    FUN_100461a34(uVar6,uVar17,uVar14,uVar1,uVar11,uVar9,uVar13,uVar8,FUN_100008184);
    uVar15 = param_1[4];
    uVar2 = param_1[5];
    uVar16 = param_1[6];
    uVar3 = param_1[7];
    uVar10 = param_1[8];
    uVar4 = param_1[9];
    uVar12 = param_1[10];
    uVar5 = param_1[0xb];
    param_1[4] = uVar6;
    param_1[5] = uVar17;
    param_1[6] = uVar14;
    param_1[7] = uVar1;
    param_1[8] = uVar11;
    param_1[9] = uVar9;
    param_1[10] = uVar13;
    param_1[0xb] = uVar8;
    FUN_100461a34(uVar15,uVar2,uVar16,uVar3,uVar10,uVar4,uVar12,uVar5,FUN_100006cdc);
  }
  uVar6 = param_2[0xc];
  uVar15 = param_2[0xd];
  FUN_100008184(uVar6,uVar15);
  uVar14 = param_1[0xc];
  uVar16 = param_1[0xd];
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar15;
  FUN_100006cdc(uVar14,uVar16);
  return param_1;
}

