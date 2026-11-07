// rea decompile_all
// name: FUN_1004325e0
// address: 0x1004325e0
// body: available
// range: 0x1004325e0-0x1004326c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004325e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = param_2[4];
  uVar3 = param_2[6];
  uVar6 = param_2[8];
  if (((uVar4 & uVar3 & uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar7 = param_2[4];
    uVar9 = param_2[7];
    uVar8 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar7;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    param_1[8] = param_2[8];
    uVar9 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
  }
  else {
    uVar7 = *param_2;
    uVar9 = param_2[1];
    uVar8 = param_2[2];
    uVar1 = param_2[3];
    uVar5 = param_2[5];
    uVar2 = param_2[7];
    FUN_10042d158(uVar7,uVar9,uVar8,uVar1,uVar4,uVar5,uVar3,uVar2,uVar6);
    *param_1 = uVar7;
    param_1[1] = uVar9;
    param_1[2] = uVar8;
    param_1[3] = uVar1;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    param_1[8] = uVar6;
  }
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  FUN_100008184(uVar7,uVar8);
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  return param_1;
}

