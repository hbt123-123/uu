// rea decompile_all
// name: FUN_100595ce0
// address: 0x100595ce0
// body: available
// range: 0x100595ce0-0x100595df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100595ce0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = &DAT_100aad028;
  FUN_100004bb4(&DAT_100aad028,&DAT_10083cc08);
  _swift_initStaticObject();
  puVar3 = &DAT_100aabb30;
  FUN_100004bb4(&DAT_100aabb30,&DAT_100838b80);
  _swift_initStaticObject();
  lVar4 = 0;
  FUN_1005424b0();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = puVar1;
  FUN_1005b8e5c();
  puVar6 = puVar1;
  FUN_1005b9004();
  puVar7 = puVar1;
  FUN_1005b9004();
  FUN_100542580(puVar3);
  puVar8 = &DAT_100aabb38;
  FUN_100004bb4(&DAT_100aabb38,&DAT_10083ce30);
  _swift_arrayDestroy(puVar3 + 0x20,0xe,puVar8);
  DAT_100b39b88 = puVar5;
  DAT_100b39b80 = lVar4;
  DAT_100b39b98 = puVar7;
  DAT_100b39b90 = puVar6;
  DAT_100b39ba8 = puVar2;
  DAT_100b39ba0 = puVar1;
  return;
}

