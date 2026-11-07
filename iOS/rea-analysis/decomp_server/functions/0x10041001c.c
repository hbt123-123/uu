// rea decompile_all
// name: FUN_10041001c
// address: 0x10041001c
// body: available
// range: 0x10041001c-0x10041006f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041001c(byte *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_4 & 1;
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_6;
  *(undefined8 *)(param_1 + 0x18) = param_7;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  uVar1 = param_8[8];
  uVar3 = param_8[0xb];
  uVar2 = param_8[10];
  *(undefined8 *)(param_1 + 0x70) = param_8[9];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar1 = param_8[0xc];
  *(undefined8 *)(param_1 + 0x90) = param_8[0xd];
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((long)param_8 + 0x69);
  *(undefined8 *)(param_1 + 0x99) = *(undefined8 *)((long)param_8 + 0x71);
  *(undefined8 *)(param_1 + 0x91) = uVar1;
  uVar1 = *param_8;
  uVar3 = param_8[3];
  uVar2 = param_8[2];
  *(undefined8 *)(param_1 + 0x30) = param_8[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar1 = param_8[4];
  uVar3 = param_8[7];
  uVar2 = param_8[6];
  *(undefined8 *)(param_1 + 0x50) = param_8[5];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = param_9;
  *(undefined8 *)(param_1 + 0xb0) = param_10;
  return;
}

