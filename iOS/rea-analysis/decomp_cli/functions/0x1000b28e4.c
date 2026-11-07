// rea decompile_all
// name: FUN_1000b28e4
// address: 0x1000b28e4
// body: available
// range: 0x1000b28e4-0x1000b296b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000b28e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar11 = param_1[1];
  uVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  _swift_bridgeObjectRelease(uVar11);
  uVar9 = *(undefined1 *)(param_2 + 0xc);
  uVar11 = param_1[2];
  uVar4 = param_1[3];
  uVar12 = param_1[4];
  uVar5 = param_1[5];
  uVar1 = param_1[6];
  uVar6 = param_1[7];
  uVar2 = param_1[8];
  uVar7 = param_1[9];
  uVar3 = param_1[10];
  uVar8 = param_1[0xb];
  uVar10 = *(undefined1 *)(param_1 + 0xc);
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar13;
  param_1[5] = uVar15;
  param_1[4] = uVar14;
  uVar13 = param_2[6];
  uVar15 = param_2[9];
  uVar14 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar13;
  param_1[9] = uVar15;
  param_1[8] = uVar14;
  uVar13 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar13;
  *(undefined1 *)(param_1 + 0xc) = uVar9;
  FUN_10008f558(uVar11,uVar4,uVar12,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar10);
  return param_1;
}

