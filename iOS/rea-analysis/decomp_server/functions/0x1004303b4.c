// rea decompile_all
// name: FUN_1004303b4
// address: 0x1004303b4
// body: available
// range: 0x1004303b4-0x1004304ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004303b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar7 = param_2[6];
  if (((param_1[6] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar7 & 0x3000000000000000) == 0x3000000000000000) {
      uVar8 = param_2[3];
      uVar6 = param_2[2];
      uVar10 = param_2[5];
      uVar9 = param_2[4];
      param_1[6] = param_2[6];
      param_1[3] = uVar8;
      param_1[2] = uVar6;
      param_1[5] = uVar10;
      param_1[4] = uVar9;
    }
    else {
      uVar6 = param_2[2];
      uVar9 = param_2[3];
      uVar8 = param_2[4];
      uVar10 = param_2[5];
      FUN_10012ac6c(uVar6,uVar9,uVar8,uVar10,uVar7);
      param_1[2] = uVar6;
      param_1[3] = uVar9;
      param_1[4] = uVar8;
      param_1[5] = uVar10;
      param_1[6] = uVar7;
    }
  }
  else if ((uVar7 & 0x3000000000000000) == 0x3000000000000000) {
    FUN_1004304f0(param_1 + 2);
    uVar6 = param_2[6];
    uVar10 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar10;
    param_1[5] = uVar9;
    param_1[4] = uVar8;
    param_1[6] = uVar6;
  }
  else {
    uVar6 = param_2[2];
    uVar1 = param_2[3];
    uVar8 = param_2[4];
    uVar2 = param_2[5];
    FUN_10012ac6c(uVar6,uVar1,uVar8,uVar2,uVar7);
    uVar9 = param_1[2];
    uVar3 = param_1[3];
    uVar10 = param_1[4];
    uVar4 = param_1[5];
    uVar5 = param_1[6];
    param_1[2] = uVar6;
    param_1[3] = uVar1;
    param_1[4] = uVar8;
    param_1[5] = uVar2;
    param_1[6] = uVar7;
    FUN_1000407bc(uVar9,uVar3,uVar10,uVar4,uVar5);
  }
  uVar6 = param_2[7];
  uVar9 = param_2[8];
  FUN_100008184(uVar6,uVar9);
  uVar8 = param_1[7];
  uVar10 = param_1[8];
  param_1[7] = uVar6;
  param_1[8] = uVar9;
  FUN_100006cdc(uVar8,uVar10);
  return param_1;
}

