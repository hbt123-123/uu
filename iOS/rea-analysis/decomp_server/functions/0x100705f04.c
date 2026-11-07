// rea decompile_all
// name: FUN_100705f04
// address: 0x100705f04
// body: available
// range: 0x100705f04-0x100706077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100705f04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10070613c();
  _swift_allocObject();
  uVar3 = 0xd000000000000040;
  uVar2 = 0x80000001008c1ab0;
  uVar1 = uVar3;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = 0x80000001008c1b00;
  uVar1 = 0xd0000000000000a8;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = 0x80000001008c1bb0;
  uVar1 = 0xd0000000000000a8;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar2 = 0x80000001008c1c60;
  uVar1 = 0xd0000000000000a8;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = 0x80000001008c1d10;
  uVar1 = 0xd0000000000000a8;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = 0x80000001008c1dc0;
  uVar1 = uVar3;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  uVar1 = 0x80000001008c1e10;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar3 = 0xd000000000000058;
  uVar2 = 0x80000001008c1e60;
  uVar1 = uVar3;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  uVar1 = 0x80000001008c1ec0;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = 0xd000000000000158;
  uVar3 = 0x80000001008c1f20;
  FUN_10070690c();
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  DAT_100b2c6e0 = param_1;
  return;
}

