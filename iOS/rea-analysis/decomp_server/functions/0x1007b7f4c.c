// rea decompile_all
// name: FUN_1007b7f4c
// address: 0x1007b7f4c
// body: available
// range: 0x1007b7f4c-0x1007b825b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1007b7f4c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_d0 [32];
  long local_b0;
  long lStack_a8;
  undefined *local_98;
  
  puVar3 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x6567617373656d;
  *(undefined8 *)(puVar3 + 0x28) = 0xe700000000000000;
  puVar2 = PTR___sSSN_1009957f8;
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message);
  uVar1 = ((undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message))[1];
  *(undefined **)(puVar3 + 0x48) = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x38) = uVar1;
  _swift_bridgeObjectRetain();
  puVar4 = puVar3;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar3);
  uVar7 = *(undefined8 *)(puVar3 + 0x10);
  puVar5 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar3 + 0x20,uVar7,puVar5);
  lVar8 = ((long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name))[1];
  if (lVar8 != 0) {
    local_b0 = *(long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name);
    local_98 = puVar2;
    lStack_a8 = lVar8;
    FUN_10007f3d4(&local_b0,auStack_d0);
    _swift_bridgeObjectRetain(lVar8);
    puVar3 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    lVar8 = 0x656d616e;
    uVar6 = 0;
    FUN_1007b8564(0x656d616e,0xe400000000000000,puVar3,FUN_100063670,FUN_1000675f0);
    if ((uVar6 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x38) + lVar8 * 0x20;
      FUN_10003f094(lVar8);
      FUN_10007f3d4(auStack_d0,lVar8);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  lVar8 = ((long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email))[1];
  if (lVar8 != 0) {
    local_b0 = *(long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email);
    local_98 = puVar2;
    lStack_a8 = lVar8;
    FUN_10007f3d4(&local_b0,auStack_d0);
    _swift_bridgeObjectRetain(lVar8);
    puVar3 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    lVar8 = 0x6c69616d65;
    uVar6 = 0;
    FUN_1007b8564(0x6c69616d65,0xe500000000000000,puVar3,FUN_100063670,FUN_1000675f0);
    if ((uVar6 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x38) + lVar8 * 0x20;
      FUN_10003f094(lVar8);
      FUN_10007f3d4(auStack_d0,lVar8);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  lVar8 = *(long *)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments);
  if (lVar8 != 0) {
    puVar3 = &DAT_100abc948;
    FUN_1007b4550();
    local_b0 = lVar8;
    local_98 = puVar3;
    FUN_10007f3d4(&local_b0,auStack_d0);
    _swift_bridgeObjectRetain(lVar8);
    puVar3 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    lVar8 = 0x656d686361747461;
    uVar6 = 0;
    FUN_1007b8564(0x656d686361747461,0xeb0000000073746e,puVar3,FUN_100063670,FUN_1000675f0);
    if ((uVar6 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x38) + lVar8 * 0x20;
      FUN_10003f094(lVar8);
      FUN_10007f3d4(auStack_d0,lVar8);
    }
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  return puVar4;
}

