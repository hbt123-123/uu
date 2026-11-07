// rea decompile_all
// name: FUN_1004bd630
// address: 0x1004bd630
// body: available
// range: 0x1004bd630-0x1004bd743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1004bd630(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_100008184(uVar3,uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  FUN_100006cdc(uVar4,uVar2);
  if (*(ulong *)(param_1 + 0x40) >> 0x3c < 0xf) {
    if (*(ulong *)(param_2 + 0x40) >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      uVar1 = *(undefined8 *)(param_2 + 0x40);
      FUN_100008184(uVar3,uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      *(undefined8 *)(param_1 + 0x40) = uVar1;
      FUN_100006cdc(uVar4,uVar2);
    }
    else {
      FUN_100495fdc(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = uVar3;
    }
  }
  else if (*(ulong *)(param_2 + 0x40) >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    FUN_100008184(uVar3,uVar4);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  return param_1;
}

