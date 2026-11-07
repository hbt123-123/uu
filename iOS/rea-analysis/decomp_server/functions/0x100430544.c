// rea decompile_all
// name: FUN_100430544
// address: 0x100430544
// body: available
// range: 0x100430544-0x1004305df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100430544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if (((param_1[6] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar3 = param_2[6];
    if (((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar2 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar1 = param_1[5];
      uVar4 = param_2[2];
      uVar8 = param_2[5];
      uVar7 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar4;
      param_1[5] = uVar8;
      param_1[4] = uVar7;
      param_1[6] = uVar3;
      FUN_1000407bc(uVar2,uVar5,uVar6,uVar1);
      goto LAB_1004305c0;
    }
    FUN_1004304f0(param_1 + 2);
  }
  uVar2 = param_2[2];
  uVar5 = param_2[5];
  uVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar5;
  param_1[4] = uVar6;
  param_1[6] = param_2[6];
LAB_1004305c0:
  uVar2 = param_1[7];
  uVar6 = param_1[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  FUN_100006cdc(uVar2,uVar6);
  return param_1;
}

