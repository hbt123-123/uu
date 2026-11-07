// rea decompile_all
// name: FUN_1007cf0e4
// address: 0x1007cf0e4
// body: available
// range: 0x1007cf0e4-0x1007cf2d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_1007cf0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_100;
  
  lVar2 = 0;
  local_100 = param_1;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = (long)&local_100 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry22SentryRRWebCustomEvent::tag);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  pcVar7 = *(code **)(lVar10 + 0x10);
  (*pcVar7)(lVar8,param_1,lVar2);
  puVar3 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x20) = 0x676174;
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar3 + 0x28) = 0xe300000000000000;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined **)(puVar3 + 0x48) = puVar4;
  *(undefined8 *)(puVar3 + 0x50) = 0x64616f6c796170;
  *(undefined8 *)(puVar3 + 0x58) = 0xe700000000000000;
  puVar4 = &DAT_100abc780;
  FUN_1007b4550();
  *(undefined **)(puVar3 + 0x78) = puVar4;
  *(undefined8 *)(puVar3 + 0x60) = param_4;
  _swift_bridgeObjectRetain_n(param_3,2);
  _swift_bridgeObjectRetain(param_4);
  puVar5 = puVar3;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar3);
  uVar9 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar3 + 0x20,uVar9,puVar4);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::type) = 5;
  (*pcVar7)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::timestamp,lVar8,lVar2);
  *(undefined **)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::data) = puVar5;
  FUN_1007b4438();
  _swift_bridgeObjectRetain(puVar5);
  IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff08,"init");
  pcVar7 = *(code **)(lVar10 + 8);
  (*pcVar7)(lVar8,lVar2);
  _swift_bridgeObjectRelease(puVar5);
  (*pcVar7)(local_100,lVar2);
  return IVar6;
}

