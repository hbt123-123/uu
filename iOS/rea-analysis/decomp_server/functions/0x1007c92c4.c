// rea decompile_all
// name: FUN_1007c92c4
// address: 0x1007c92c4
// body: available
// range: 0x1007c92c4-0x1007c9ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1007c92c4(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_300;
  long local_2f8;
  long local_2f0;
  undefined *local_2c0 [3];
  undefined8 local_2a8 [4];
  undefined *local_288;
  undefined8 uStack_280;
  undefined *local_270;
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [400];
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  local_2f0 = *(long *)(lVar5 + -8);
  local_2f8 = (long)&local_300 - (*(long *)(local_2f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 0xe;
  *(undefined8 *)(puVar6 + 0x10) = 7;
  *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(puVar6 + 0x28) = 0x80000001008db320;
  puVar1 = (undefined4 *)(param_2 + _TtC6Sentry19SentryReplayOptions::sessionSampleRate);
  _swift_beginAccess(puVar1,auStack_1f0,0,0);
  puVar8 = PTR___sSfN_100995928;
  *(undefined4 *)(puVar6 + 0x30) = *puVar1;
  *(undefined **)(puVar6 + 0x48) = puVar8;
  *(undefined8 *)(puVar6 + 0x50) = 0x6d6153726f727265;
  *(undefined8 *)(puVar6 + 0x58) = 0xef65746152656c70;
  puVar1 = (undefined4 *)(param_2 + _TtC6Sentry19SentryReplayOptions::onErrorSampleRate);
  _swift_beginAccess(puVar1,auStack_208,0,0);
  *(undefined4 *)(puVar6 + 0x60) = *puVar1;
  *(undefined **)(puVar6 + 0x78) = puVar8;
  *(undefined8 *)(puVar6 + 0x80) = 0x546c6c416b73616d;
  *(undefined8 *)(puVar6 + 0x88) = 0xeb00000000747865;
  puVar12 = (undefined1 *)(param_2 + _TtC6Sentry19SentryReplayOptions::maskAllText);
  _swift_beginAccess(puVar12,auStack_220,0,0);
  puVar8 = PTR___sSbN_1009958c8;
  puVar6[0x90] = *puVar12;
  *(undefined **)(puVar6 + 0xa8) = puVar8;
  *(undefined8 *)(puVar6 + 0xb0) = 0x496c6c416b73616d;
  *(undefined8 *)(puVar6 + 0xb8) = 0xed0000736567616d;
  puVar12 = (undefined1 *)(param_2 + _TtC6Sentry19SentryReplayOptions::maskAllImages);
  _swift_beginAccess(puVar12,auStack_238,0,0);
  puVar6[0xc0] = *puVar12;
  *(undefined **)(puVar6 + 0xd8) = puVar8;
  *(undefined8 *)(puVar6 + 0xe0) = 0x7974696c617571;
  *(undefined8 *)(puVar6 + 0xe8) = 0xe700000000000000;
  puVar2 = (ulong *)(param_2 + _TtC6Sentry19SentryReplayOptions::quality);
  _swift_beginAccess(puVar2,auStack_250,0,0);
  puVar8 = PTR___sSSN_1009957f8;
  puVar15 = (undefined *)*puVar2;
  if ((undefined *)0x2 < puVar15) {
    local_288 = puVar15;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&DAT_1009ebe10,&local_288,&DAT_1009ebe10,PTR___sSiN_100995968);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c9ad4);
    (*pcVar4)();
  }
  uVar16 = *(undefined8 *)(&DAT_100852ec8 + (long)puVar15 * 8);
  *(undefined8 *)(puVar6 + 0xf0) = *(undefined8 *)(&DAT_100852eb0 + (long)puVar15 * 8);
  *(undefined8 *)(puVar6 + 0xf8) = uVar16;
  *(undefined **)(puVar6 + 0x108) = puVar8;
  *(undefined8 *)(puVar6 + 0x110) = 0x645365766974616e;
  *(undefined8 *)(puVar6 + 0x118) = 0xed0000656d614e6b;
  pcVar13 = "sdkName";
  IVar7 = _objc_msgSend((ID)&objc::class_t::SentryMeta,"sdkName");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(ID *)(puVar6 + 0x120) = IVar7;
  *(char **)(puVar6 + 0x128) = pcVar13;
  *(undefined **)(puVar6 + 0x138) = puVar8;
  *(undefined1 **)(puVar6 + 0x140) = &DAT_d000000000000010;
  *(undefined8 *)(puVar6 + 0x148) = 0x80000001008db340;
  pcVar13 = "versionString";
  IVar7 = _objc_msgSend((ID)&objc::class_t::SentryMeta,"versionString");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined **)(puVar6 + 0x168) = puVar8;
  *(ID *)(puVar6 + 0x150) = IVar7;
  *(char **)(puVar6 + 0x158) = pcVar13;
  puVar15 = puVar6;
  FUN_1007c7d18();
  _swift_setDeallocating(puVar6);
  uVar16 = *(undefined8 *)(puVar6 + 0x10);
  puVar8 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar6 + 0x20,uVar16,puVar8);
  plVar3 = (long *)(param_2 + _TtC6Sentry19SentryReplayOptions::maskedViewClasses);
  local_300 = param_2;
  _swift_beginAccess(plVar3,auStack_268,0,0);
  lVar18 = *plVar3;
  lVar20 = *(long *)(lVar18 + 0x10);
  lVar17 = local_300;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar20 != 0) {
    local_288 = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRetain(lVar18);
    FUN_10006fae0(0,lVar20,0);
    lVar17 = 0;
    puVar6 = local_288;
    do {
      local_2a8[0] = *(undefined8 *)(lVar18 + lVar17 * 8 + 0x20);
      puVar8 = &DAT_100abcf40;
      FUN_1007b4550();
      puVar9 = local_2a8;
      __sSS10describingSSx_tclufC();
      puVar10 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        FUN_10006fae0(0,*(long *)(puVar6 + 0x10) + 1,1);
        puVar6 = local_288;
      }
      uVar14 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar14) {
        FUN_10006fae0(1 < *(ulong *)(puVar6 + 0x18),uVar14 + 1,1);
        puVar6 = local_288;
      }
      lVar17 = lVar17 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar14 + 1;
      *(undefined8 **)(puVar6 + uVar14 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puVar6 + uVar14 * 0x10 + 0x28) = puVar8;
    } while (lVar20 != lVar17);
    _swift_bridgeObjectRelease(lVar18);
    puVar8 = &DAT_100abc7b8;
    local_288 = puVar6;
    FUN_1007b4550(&DAT_100abc7b8);
    puVar10 = puVar8;
    FUN_10013048c();
    puVar11 = (undefined *)0x202c;
    uVar16 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar8,puVar10);
    _swift_release(puVar6);
    local_270 = PTR___sSSN_1009957f8;
    local_288 = puVar11;
    uStack_280 = uVar16;
    FUN_10007f3d4(&local_288,local_2a8);
    puVar6 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(puVar15);
    uVar14 = 0;
    lVar17 = -0x2fffffffffffffef;
    local_2c0[0] = puVar15;
    FUN_1007b853c(0xd000000000000011,0x80000001008db360,puVar6);
    puVar15 = local_2c0[0];
    if ((uVar14 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar17 = *(long *)(local_2c0[0] + 0x38) + lVar17 * 0x20;
      FUN_10003f094(lVar17);
      FUN_10007f3d4(local_2a8,lVar17);
    }
    lVar17 = local_300;
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  plVar3 = (long *)(lVar17 + _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses);
  _swift_beginAccess(plVar3,local_2c0,0,0);
  lVar20 = *plVar3;
  lVar19 = *(long *)(lVar20 + 0x10);
  lVar18 = local_2f0;
  lVar17 = local_2f8;
  if (lVar19 != 0) {
    local_288 = puVar6;
    _swift_bridgeObjectRetain(lVar20);
    FUN_10006fae0(0,lVar19,0);
    lVar17 = 0;
    puVar6 = local_288;
    do {
      local_2a8[0] = *(undefined8 *)(lVar20 + lVar17 * 8 + 0x20);
      puVar8 = &DAT_100abcf40;
      FUN_1007b4550();
      puVar9 = local_2a8;
      __sSS10describingSSx_tclufC();
      puVar10 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        FUN_10006fae0(0,*(long *)(puVar6 + 0x10) + 1,1);
        puVar6 = local_288;
      }
      uVar14 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar14) {
        FUN_10006fae0(1 < *(ulong *)(puVar6 + 0x18),uVar14 + 1,1);
        puVar6 = local_288;
      }
      lVar17 = lVar17 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar14 + 1;
      *(undefined8 **)(puVar6 + uVar14 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puVar6 + uVar14 * 0x10 + 0x28) = puVar8;
    } while (lVar19 != lVar17);
    _swift_bridgeObjectRelease(lVar20);
    puVar8 = &DAT_100abc7b8;
    local_288 = puVar6;
    FUN_1007b4550(&DAT_100abc7b8);
    puVar10 = puVar8;
    FUN_10013048c();
    puVar11 = (undefined *)0x202c;
    uVar16 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar8,puVar10);
    _swift_release(puVar6);
    local_270 = PTR___sSSN_1009957f8;
    local_288 = puVar11;
    uStack_280 = uVar16;
    FUN_10007f3d4(&local_288,local_2a8);
    puVar6 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(puVar15);
    puVar12 = &DAT_d000000000000013;
    uVar14 = 0;
    FUN_1007b853c(&DAT_d000000000000013,0x80000001008db380,puVar6);
    if ((uVar14 & 1) == 0) {
      FUN_100060330();
    }
    else {
      lVar17 = *(long *)(puVar15 + 0x38) + (long)puVar12 * 0x20;
      FUN_10003f094(lVar17);
      FUN_10007f3d4(local_2a8,lVar17);
    }
    lVar18 = local_2f0;
    lVar17 = local_2f8;
    _swift_bridgeObjectRelease(0x8000000000000000);
  }
  (**(code **)(lVar18 + 0x10))(lVar17,param_1,lVar5);
  _swift_bridgeObjectRetain(puVar15);
  FUN_1007cf0e4(lVar17,0x736e6f6974706f,0xe700000000000000,puVar15);
  _swift_bridgeObjectRelease(puVar15);
  (**(code **)(lVar18 + 8))(param_1,lVar5);
  _swift_bridgeObjectRelease(puVar15);
  return lVar17;
}

