// rea decompile_all
// name: FUN_1004be1c8
// address: 0x1004be1c8
// body: available
// range: 0x1004be1c8-0x1004be2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004be1c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  FUN_100008184(uVar3,uVar1);
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  FUN_100006cdc(uVar4,uVar2);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    if ((ulong)param_2[5] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
      uVar3 = param_2[4];
      uVar1 = param_2[5];
      FUN_100008184(uVar3,uVar1);
      uVar4 = param_1[4];
      uVar2 = param_1[5];
      param_1[4] = uVar3;
      param_1[5] = uVar1;
      FUN_100006cdc(uVar4,uVar2);
    }
    else {
      FUN_100495fdc(param_1 + 3);
      uVar3 = param_2[5];
      uVar4 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[5] = uVar3;
    }
  }
  else if ((ulong)param_2[5] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    FUN_100008184(uVar3,uVar4);
    param_1[4] = uVar3;
    param_1[5] = uVar4;
  }
  else {
    uVar4 = param_2[4];
    uVar3 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[3] = uVar3;
  }
  return param_1;
}

