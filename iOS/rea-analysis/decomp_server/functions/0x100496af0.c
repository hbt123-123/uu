// rea decompile_all
// name: FUN_100496af0
// address: 0x100496af0
// body: available
// range: 0x100496af0-0x100496bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100496af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = param_2[4];
  uVar5 = param_2[6];
  if (((uVar6 & uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar8 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar8;
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar1 = param_2[1];
    uVar9 = param_2[2];
    uVar2 = param_2[3];
    uVar7 = param_2[5];
    uVar10 = param_2[7];
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    FUN_1004816e0(uVar8,uVar1,uVar9,uVar2,uVar6,uVar7,uVar5,uVar10,uVar3,uVar4);
    *param_1 = uVar8;
    param_1[1] = uVar1;
    param_1[2] = uVar9;
    param_1[3] = uVar2;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[6] = uVar5;
    param_1[7] = uVar10;
    param_1[8] = uVar3;
    param_1[9] = uVar4;
  }
  uVar8 = param_2[10];
  uVar9 = param_2[0xb];
  FUN_100008184(uVar8,uVar9);
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  return param_1;
}

