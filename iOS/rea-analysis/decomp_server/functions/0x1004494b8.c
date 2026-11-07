// rea decompile_all
// name: FUN_1004494b8
// address: 0x1004494b8
// body: available
// range: 0x1004494b8-0x1004495b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004494b8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint5 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (((*(byte *)((long)param_1 + 0x34) >> 1 != 0 || (ulong)param_1[5] >> 0x21 != 0) ||
      (param_1[3] & 0x3000000000000000) != 0x3000000000000000) ||
      (param_1[4] & 0xfffffffe00000000) != 0x7ffffffe00000000) {
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar6 = param_2[5];
    uVar3 = *(uint5 *)(param_2 + 6);
    if (((uVar3 >> 0x21 != 0 || uVar6 >> 0x21 != 0) ||
        (uVar1 & 0x3000000000000000) != 0x3000000000000000) ||
        (uVar2 & 0xfffffffe00000000) != 0x7ffffffe00000000) {
      uVar5 = param_2[2];
      uVar7 = *param_1;
      uVar9 = param_1[1];
      uVar4 = param_1[2];
      uVar8 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar8;
      param_1[2] = uVar5;
      param_1[3] = uVar1;
      param_1[4] = uVar2;
      param_1[5] = uVar6;
      *(int *)(param_1 + 6) = (int)uVar3;
      *(char *)((long)param_1 + 0x34) = (char)(uVar3 >> 0x20);
      FUN_100040834(uVar7,uVar9,uVar4);
      goto LAB_100449594;
    }
    FUN_100449478(param_1);
  }
  uVar7 = *param_2;
  uVar4 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar9;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
LAB_100449594:
  uVar7 = param_1[7];
  uVar9 = param_1[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  FUN_100006cdc(uVar7,uVar9);
  return param_1;
}

