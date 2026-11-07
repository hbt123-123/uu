// rea decompile_all
// name: FUN_1000aa99c
// address: 0x1000aa99c
// body: available
// range: 0x1000aa99c-0x1000aaa7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000aa99c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar3 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x12;
  *(undefined8 *)(puVar3 + 0x10) = 9;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
  *(undefined8 *)(puVar3 + 0x30) = 0x532d;
  *(undefined8 *)(puVar3 + 0x38) = 0xe200000000000000;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  *(undefined8 *)(puVar3 + 0x50) = 0x662d;
  *(undefined8 *)(puVar3 + 0x58) = 0xe200000000000000;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar3 + 0x68) = uVar2;
  *(undefined8 *)(puVar3 + 0x70) = 0x737365732d77656e;
  *(undefined8 *)(puVar3 + 0x78) = 0xeb000000006e6f69;
  *(undefined8 *)(puVar3 + 0x80) = 0x412d;
  *(undefined8 *)(puVar3 + 0x88) = 0xe200000000000000;
  *(undefined8 *)(puVar3 + 0x90) = 0x732d;
  *(undefined8 *)(puVar3 + 0x98) = 0xe200000000000000;
  *(undefined8 *)(puVar3 + 0xa0) = param_1;
  *(undefined8 *)(puVar3 + 0xa8) = param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(param_2);
  return puVar3;
}

