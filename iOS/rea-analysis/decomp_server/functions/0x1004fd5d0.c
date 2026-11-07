// rea decompile_all
// name: FUN_1004fd5d0
// address: 0x1004fd5d0
// body: available
// range: 0x1004fd5d0-0x1004fd6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004fd5d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  param_1[5] = param_2[5];
  if (param_1[9] != 0) {
    FUN_10003f094(param_1 + 6);
  }
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    uVar2 = param_2[0x11];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x10];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar2;
      FUN_100006cdc(uVar1);
      goto LAB_1004fd698;
    }
    FUN_100008d0c(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
LAB_1004fd698:
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar2 = param_2[0x13];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar2;
      FUN_100006cdc(uVar1);
      return param_1;
    }
    FUN_100008d0c(param_1 + 0x12);
  }
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  return param_1;
}

