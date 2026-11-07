// rea decompile_all
// name: FUN_100461d90
// address: 0x100461d90
// body: available
// range: 0x100461d90-0x100461e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100461d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar11 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar11;
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = param_1[9];
  uVar6 = param_1[0xb];
  if (((uVar4 & uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar8 = param_2[9];
    uVar7 = param_2[0xb];
    if (((uVar8 & uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar9 = param_2[8];
      uVar10 = param_2[10];
      uVar11 = param_1[4];
      uVar13 = param_1[5];
      uVar2 = param_1[6];
      uVar1 = param_1[7];
      uVar3 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[4];
      uVar15 = param_2[7];
      uVar14 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar12;
      param_1[7] = uVar15;
      param_1[6] = uVar14;
      param_1[8] = uVar9;
      param_1[9] = uVar8;
      param_1[10] = uVar10;
      param_1[0xb] = uVar7;
      FUN_100461a34(uVar11,uVar13,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6,FUN_100006cdc);
      goto LAB_100461e48;
    }
    FUN_100461d20(param_1 + 4);
  }
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar2;
  uVar11 = param_2[8];
  uVar13 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  param_1[0xb] = uVar13;
  param_1[10] = uVar2;
LAB_100461e48:
  uVar11 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar13 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar13;
  FUN_100006cdc(uVar11,uVar2);
  return param_1;
}

