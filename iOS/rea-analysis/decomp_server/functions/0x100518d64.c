// rea decompile_all
// name: FUN_100518d64
// address: 0x100518d64
// body: available
// range: 0x100518d64-0x1005190c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100518d64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100aab0f0;
  FUN_100004bb4(&DAT_100aab0f0,&DAT_1008370d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 0x22;
  *(undefined8 *)(puVar1 + 0x10) = 0x11;
  *(undefined1 **)(puVar1 + 0x20) = &DAT_d000000000000013;
  *(undefined8 *)(puVar1 + 0x28) = 0x80000001008bcb00;
  puVar2 = puVar1;
  FUN_1004f9c30();
  *(undefined **)(puVar1 + 0x30) = &DAT_1009d2420;
  *(undefined **)(puVar1 + 0x38) = puVar2;
  *(undefined8 *)(puVar1 + 0x40) = 0xd000000000000019;
  *(undefined8 *)(puVar1 + 0x48) = 0x80000001008bcb20;
  FUN_1005197a0();
  *(undefined **)(puVar1 + 0x50) = &DAT_1009d8328;
  *(undefined **)(puVar1 + 0x58) = puVar2;
  *(undefined8 *)(puVar1 + 0x60) = 0xd00000000000001a;
  *(undefined8 *)(puVar1 + 0x68) = 0x80000001008bcb40;
  FUN_1005197e0();
  *(undefined **)(puVar1 + 0x70) = &DAT_1009d8428;
  *(undefined **)(puVar1 + 0x78) = puVar2;
  *(undefined8 *)(puVar1 + 0x80) = 0xd00000000000001b;
  *(undefined8 *)(puVar1 + 0x88) = 0x80000001008bcb60;
  FUN_100519820();
  *(undefined **)(puVar1 + 0x90) = &DAT_1009d8028;
  *(undefined **)(puVar1 + 0x98) = puVar2;
  *(undefined1 **)(puVar1 + 0xa0) = &DAT_d000000000000018;
  *(undefined8 *)(puVar1 + 0xa8) = 0x80000001008bcb80;
  FUN_100519860();
  *(undefined **)(puVar1 + 0xb0) = &DAT_1009d6510;
  *(undefined **)(puVar1 + 0xb8) = puVar2;
  *(undefined8 *)(puVar1 + 0xc0) = 0xd000000000000015;
  *(undefined8 *)(puVar1 + 200) = 0x80000001008bcba0;
  FUN_1005198a0();
  *(undefined **)(puVar1 + 0xd0) = &DAT_1009d6698;
  *(undefined **)(puVar1 + 0xd8) = puVar2;
  *(undefined8 *)(puVar1 + 0xe0) = 0xd000000000000019;
  *(undefined8 *)(puVar1 + 0xe8) = 0x80000001008bcbc0;
  FUN_1005198e0();
  *(undefined **)(puVar1 + 0xf0) = &DAT_1009d6818;
  *(undefined **)(puVar1 + 0xf8) = puVar2;
  *(undefined8 *)(puVar1 + 0x100) = 0xd00000000000001a;
  *(undefined8 *)(puVar1 + 0x108) = 0x80000001008bcbe0;
  FUN_100519920();
  *(undefined **)(puVar1 + 0x110) = &DAT_1009d80a8;
  *(undefined **)(puVar1 + 0x118) = puVar2;
  *(undefined8 *)(puVar1 + 0x120) = 0xd00000000000001a;
  *(undefined8 *)(puVar1 + 0x128) = 0x80000001008bcc00;
  FUN_100519960();
  *(undefined **)(puVar1 + 0x130) = &DAT_1009d8228;
  *(undefined **)(puVar1 + 0x138) = puVar2;
  *(undefined8 *)(puVar1 + 0x140) = 0xd00000000000001a;
  *(undefined8 *)(puVar1 + 0x148) = 0x80000001008bcc20;
  FUN_1005199a0();
  *(undefined **)(puVar1 + 0x150) = &DAT_1009d8128;
  *(undefined **)(puVar1 + 0x158) = puVar2;
  *(undefined8 *)(puVar1 + 0x160) = 0xd000000000000019;
  *(undefined8 *)(puVar1 + 0x168) = 0x80000001008bcc40;
  FUN_1005199e0();
  *(undefined **)(puVar1 + 0x170) = &DAT_1009d6eb8;
  *(undefined **)(puVar1 + 0x178) = puVar2;
  *(undefined8 *)(puVar1 + 0x180) = 0xd00000000000001b;
  *(undefined8 *)(puVar1 + 0x188) = 0x80000001008bcc60;
  FUN_100519a20();
  *(undefined **)(puVar1 + 400) = &DAT_1009d83a8;
  *(undefined **)(puVar1 + 0x198) = puVar2;
  *(undefined8 *)(puVar1 + 0x1a0) = 0xd000000000000016;
  *(undefined8 *)(puVar1 + 0x1a8) = 0x80000001008bcc80;
  FUN_100519a60();
  *(undefined **)(puVar1 + 0x1b0) = &DAT_1009d6d28;
  *(undefined **)(puVar1 + 0x1b8) = puVar2;
  *(undefined8 *)(puVar1 + 0x1c0) = 0xd000000000000019;
  *(undefined8 *)(puVar1 + 0x1c8) = 0x80000001008bcca0;
  FUN_100519aa0();
  *(undefined **)(puVar1 + 0x1d0) = &DAT_1009d7080;
  *(undefined **)(puVar1 + 0x1d8) = puVar2;
  *(undefined8 *)(puVar1 + 0x1e0) = 0xd00000000000001b;
  *(undefined8 *)(puVar1 + 0x1e8) = 0x80000001008bccc0;
  FUN_100519ae0();
  *(undefined **)(puVar1 + 0x1f0) = &DAT_1009d82a8;
  *(undefined **)(puVar1 + 0x1f8) = puVar2;
  *(undefined8 *)(puVar1 + 0x200) = 0xd00000000000001b;
  *(undefined8 *)(puVar1 + 0x208) = 0x80000001008bcce0;
  FUN_100519b20();
  *(undefined **)(puVar1 + 0x210) = &DAT_1009d81a8;
  *(undefined **)(puVar1 + 0x218) = puVar2;
  *(undefined8 *)(puVar1 + 0x220) = 0xd000000000000015;
  *(undefined8 *)(puVar1 + 0x228) = 0x80000001008bcd00;
  FUN_100519b60();
  *(undefined **)(puVar1 + 0x230) = &DAT_1009d6da8;
  *(undefined **)(puVar1 + 0x238) = puVar2;
  puVar3 = puVar1;
  FUN_1005b9f40();
  _swift_setDeallocating(puVar1);
  puVar2 = &DAT_100aab178;
  FUN_100004bb4(&DAT_100aab178,&DAT_1008370e0);
  _swift_arrayDestroy(puVar1 + 0x20,0x11,puVar2);
  puVar1 = &DAT_100aab180;
  FUN_100004bb4(&DAT_100aab180,&DAT_1008370e8);
  _swift_allocObject();
  *(undefined **)(puVar1 + 0x10) = puVar3;
  DAT_100aab060 = puVar1;
  return;
}

