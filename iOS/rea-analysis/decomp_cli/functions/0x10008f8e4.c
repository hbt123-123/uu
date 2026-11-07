// rea decompile_all
// name: FUN_10008f8e4
// address: 0x10008f8e4
// body: available
// range: 0x10008f8e4-0x10008f973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10008f8e4(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar12 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar12);
  uVar10 = *(undefined1 *)(param_2 + 0xb);
  uVar12 = param_1[1];
  uVar5 = param_1[2];
  uVar1 = param_1[3];
  uVar6 = param_1[4];
  uVar2 = param_1[5];
  uVar7 = param_1[6];
  uVar3 = param_1[7];
  uVar8 = param_1[8];
  uVar4 = param_1[9];
  uVar9 = param_1[10];
  uVar11 = *(undefined1 *)(param_1 + 0xb);
  uVar13 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar13;
  uVar13 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar13;
  uVar13 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar13;
  uVar13 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar13;
  uVar13 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar13;
  *(undefined1 *)(param_1 + 0xb) = uVar10;
  FUN_10008f558(uVar12,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar11);
  return param_1;
}

