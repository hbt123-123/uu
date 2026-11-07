// rea decompile_all
// name: FUN_1005b33fc
// address: 0x1005b33fc
// body: available
// range: 0x1005b33fc-0x1005b34ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b33fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = &DAT_100aabb30;
  FUN_100004bb4(&DAT_100aabb30,&DAT_100838b80);
  _swift_initStaticObject();
  lVar3 = 0;
  FUN_1005424b0();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = puVar1;
  FUN_1005b8e5c();
  puVar5 = puVar1;
  FUN_1005b9004();
  puVar6 = puVar1;
  FUN_1005b9004();
  puVar7 = puVar2;
  FUN_100569f9c(puVar2);
  puVar8 = &DAT_100aabb38;
  FUN_100004bb4(&DAT_100aabb38,&DAT_10083ce30);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar8);
  FUN_100543a60(puVar7);
  _swift_bridgeObjectRelease(puVar7);
  DAT_100b3a1f8 = puVar4;
  DAT_100b3a1f0 = lVar3;
  DAT_100b3a208 = puVar6;
  DAT_100b3a200 = puVar5;
  DAT_100b3a218 = puVar1;
  DAT_100b3a210 = puVar1;
  return;
}

