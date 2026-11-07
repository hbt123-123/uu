// rea decompile_all
// name: FUN_1007c8aa4
// address: 0x1007c8aa4
// body: available
// range: 0x1007c8aa4-0x1007c8c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_1007c8aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_130 [8];
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar6 = auStack_130 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)(puVar6,param_1,lVar1);
  puVar2 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0x66657268;
  puVar4 = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar2 + 0x28) = 0xe400000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
  *(undefined **)(puVar2 + 0x48) = puVar4;
  *(undefined8 *)(puVar2 + 0x50) = 0x746867696568;
  puVar4 = PTR___sSiN_100995968;
  *(undefined8 *)(puVar2 + 0x58) = 0xe600000000000000;
  *(undefined8 *)(puVar2 + 0x60) = param_2;
  *(undefined **)(puVar2 + 0x78) = puVar4;
  *(undefined8 *)(puVar2 + 0x80) = 0x6874646977;
  *(undefined **)(puVar2 + 0xa8) = puVar4;
  *(undefined8 *)(puVar2 + 0x88) = 0xe500000000000000;
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  puVar3 = puVar2;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar2);
  uVar7 = *(undefined8 *)(puVar2 + 0x10);
  puVar4 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar2 + 0x20,uVar7,puVar4);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::type) = 4;
  (*pcVar9)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::timestamp,puVar6,lVar1);
  *(undefined **)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::data) = puVar3;
  FUN_1007b4438();
  _swift_bridgeObjectRetain(puVar3);
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xfffffffffffffed8,"init");
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(puVar6,lVar1);
  _swift_bridgeObjectRelease(puVar3);
  (*pcVar9)(param_1,lVar1);
  return IVar5;
}

