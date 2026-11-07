// rea decompile_all
// name: FUN_1007cc7c4
// address: 0x1007cc7c4
// body: available
// range: 0x1007cc7c4-0x1007cc9c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007cc7c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_100abd098;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 0x18;
  *(undefined8 *)(puVar1 + 0x10) = 0xc;
  *(undefined8 *)(puVar1 + 0x20) = 0x524157524f462d58;
  *(undefined8 *)(puVar1 + 0x28) = 0xef524f462d444544;
  *(undefined8 *)(puVar1 + 0x30) = 0x5a49524f48545541;
  *(undefined8 *)(puVar1 + 0x38) = 0xed00004e4f495441;
  *(undefined8 *)(puVar1 + 0x40) = 0x45494b4f4f43;
  *(undefined8 *)(puVar1 + 0x48) = 0xe600000000000000;
  *(undefined8 *)(puVar1 + 0x50) = 0x4b4f4f432d544553;
  *(undefined8 *)(puVar1 + 0x58) = 0xea00000000004549;
  *(undefined8 *)(puVar1 + 0x60) = 0x454b2d4950412d58;
  *(undefined8 *)(puVar1 + 0x68) = 0xe900000000000059;
  *(undefined8 *)(puVar1 + 0x70) = 0x492d4c4145522d58;
  *(undefined8 *)(puVar1 + 0x78) = 0xe900000000000050;
  *(undefined8 *)(puVar1 + 0x80) = 0x412d45544f4d4552;
  *(undefined8 *)(puVar1 + 0x88) = 0xeb00000000524444;
  *(undefined8 *)(puVar1 + 0x90) = 0x4544524157524f46;
  *(undefined8 *)(puVar1 + 0x98) = 0xe900000000000044;
  *(undefined1 **)(puVar1 + 0xa0) = &DAT_d000000000000013;
  *(undefined8 *)(puVar1 + 0xa8) = 0x80000001008db710;
  *(undefined8 *)(puVar1 + 0xb0) = 0x542d465253432d58;
  *(undefined8 *)(puVar1 + 0xb8) = 0xec0000004e454b4f;
  *(undefined8 *)(puVar1 + 0xc0) = 0x4f54465253432d58;
  *(undefined8 *)(puVar1 + 200) = 0xeb000000004e454b;
  *(undefined8 *)(puVar1 + 0xd0) = 0x542d465253582d58;
  *(undefined8 *)(puVar1 + 0xd8) = 0xec0000004e454b4f;
  puVar2 = puVar1;
  FUN_1007d4864();
  _swift_setDeallocating(puVar1);
  _swift_arrayDestroy(puVar1 + 0x20,0xc,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRetain(puVar2);
  uVar3 = param_1;
  _swift_bridgeObjectRetain(param_1);
  FUN_1007cc540();
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease_n(puVar2,2);
  return uVar3;
}

