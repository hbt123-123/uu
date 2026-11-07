// rea decompile_all
// name: FUN_1000b26d4
// address: 0x1000b26d4
// body: available
// range: 0x1000b26d4-0x1000b27ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000b26d4(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar12;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar1 = param_2[2];
  uVar7 = param_2[3];
  uVar2 = param_2[4];
  uVar8 = param_2[5];
  uVar3 = param_2[6];
  uVar9 = param_2[7];
  uVar4 = param_2[8];
  uVar10 = param_2[9];
  uVar5 = param_2[10];
  uVar11 = param_2[0xb];
  uVar12 = *(undefined1 *)(param_2 + 0xc);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  FUN_10008f374(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar12);
  param_1[2] = uVar1;
  param_1[3] = uVar7;
  param_1[4] = uVar2;
  param_1[5] = uVar8;
  param_1[6] = uVar3;
  param_1[7] = uVar9;
  param_1[8] = uVar4;
  param_1[9] = uVar10;
  param_1[10] = uVar5;
  param_1[0xb] = uVar11;
  *(undefined1 *)(param_1 + 0xc) = uVar12;
  return param_1;
}

