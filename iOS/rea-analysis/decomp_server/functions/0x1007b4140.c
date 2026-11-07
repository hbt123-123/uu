// rea decompile_all
// name: FUN_1007b4140
// address: 0x1007b4140
// body: available
// range: 0x1007b4140-0x1007b4317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1007b4140(void)

{
  undefined *puVar1;
  class_t *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [32];
  long local_f0 [3];
  undefined *local_d8;
  
  puVar1 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = 0x65707974;
  *(undefined8 *)(puVar1 + 0x28) = 0xe400000000000000;
  puVar5 = PTR___sSiN_100995968;
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::type);
  *(undefined **)(puVar1 + 0x48) = puVar5;
  *(undefined8 *)(puVar1 + 0x50) = 0x6d617473656d6974;
  *(undefined8 *)(puVar1 + 0x58) = 0xe900000000000070;
  pcVar2 = &objc::class_t::SentryDateUtil;
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_TtC6Sentry16SentryRRWebEvent::timestamp);
  IVar3 = _objc_msgSend((ID)&objc::class_t::SentryDateUtil,"millisecondsSince1970:",pcVar2);
  *(undefined **)(puVar1 + 0x78) = puVar5;
  *(ID *)(puVar1 + 0x60) = IVar3;
  puVar4 = puVar1;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar1);
  uVar7 = *(undefined8 *)(puVar1 + 0x10);
  puVar5 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar1 + 0x20,uVar7,puVar5);
  lVar8 = *(long *)(unaff_x20 + _TtC6Sentry16SentryRRWebEvent::data);
  if (lVar8 != 0) {
    puVar1 = &DAT_100abc780;
    FUN_1007b4550();
    local_f0[0] = lVar8;
    local_d8 = puVar1;
    FUN_10007f3d4(local_f0,auStack_110);
    _swift_bridgeObjectRetain(lVar8);
    puVar1 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    lVar8 = 0x61746164;
    uVar6 = 0;
    FUN_1007b853c(0x61746164,0xe400000000000000,puVar1);
    if ((uVar6 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x38) + lVar8 * 0x20;
      FUN_10003f094(lVar8);
      FUN_10007f3d4(auStack_110,lVar8);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  return puVar4;
}

