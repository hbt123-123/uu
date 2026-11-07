// rea decompile_all
// name: FUN_100011fa4
// address: 0x100011fa4
// body: available
// range: 0x100011fa4-0x10001213b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011fa4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  *(long *)(unaff_x20 + 0x108) = *(long *)(unaff_x20 + 0x108) + 1;
  lVar3 = *(long *)(unaff_x20 + 0x128);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_retain(lVar3);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x128);
  }
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  _swift_release(uVar2);
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined1 *)(unaff_x20 + 0x120) = 1;
  FUN_10001213c();
  FUN_100011c10(0x426e6f6973736573,0xec0000006e696765);
  _swift_beginAccess(unaff_x20 + 200,auStack_58,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined **)(unaff_x20 + 200) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_70,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined **)(unaff_x20 + 0xd0) = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100011e08(0x426e6f6973736573,0xec0000006e696765);
  *(long *)(unaff_x20 + 0xa0) = *(long *)(unaff_x20 + 0xa0) + 1;
  FUN_100012258();
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100018c78,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001f,
                0x800000010087ae20,0x265,0);
  _swift_beginAccess(unaff_x20 + 0xa8,auStack_88,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined **)(unaff_x20 + 0xa8) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100011448();
  return;
}

