// rea decompile_all
// name: FUN_1002764f8
// address: 0x1002764f8
// body: available
// range: 0x1002764f8-0x1002765f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002764f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100276cfc();
  puVar2 = puVar7;
  FUN_100276df0();
  puVar3 = puVar7;
  FUN_100276ee8();
  puVar8 = PTR___swiftEmptySetSingleton_100995eb0;
  if (((ulong)puVar7 >> 0x3e != 0) &&
     (puVar7 = PTR___swiftEmptyArrayStorage_100995ea0, __ss18_CocoaArrayWrapperV8endIndexSivg(),
     puVar8 = PTR___swiftEmptySetSingleton_100995eb0, puVar7 != (undefined *)0x0)) {
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10034757c();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100276fe0();
  puVar7 = &DAT_100a82210;
  FUN_100004bb4(&DAT_100a82210,&DAT_100816020);
  _swift_allocObject();
  lVar5 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar6 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar5 + 0x10) = puVar6;
  *puVar6 = 0;
  *(long *)(puVar7 + 0x10) = lVar5;
  *(undefined **)(puVar7 + 0x18) = puVar1;
  *(undefined **)(puVar7 + 0x20) = puVar2;
  *(undefined **)(puVar7 + 0x28) = puVar3;
  *(undefined **)(puVar7 + 0x30) = puVar8;
  *(undefined **)(puVar7 + 0x38) = puVar4;
  return puVar7;
}

