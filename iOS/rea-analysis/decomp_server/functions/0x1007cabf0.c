// rea decompile_all
// name: FUN_1007cabf0
// address: 0x1007cabf0
// body: available
// range: 0x1007cabf0-0x1007cae27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007cabf0(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4,byte param_5,
                  byte param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  pbVar1 = (byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskAllText);
  *pbVar1 = 1;
  pbVar2 = (byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskAllImages);
  *pbVar2 = 1;
  lVar7 = _TtC6Sentry19SentryReplayOptions::quality;
  if (DAT_100abba50 != -1) {
    _swift_once(&DAT_100abba50,FUN_1007c9ad4);
  }
  *(undefined8 *)(unaff_x20 + lVar7) = DAT_100abd0a8;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskedViewClasses) =
       PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses) = puVar6;
  pbVar3 = (byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::enableExperimentalViewRenderer);
  *pbVar3 = 0;
  pbVar4 = (byte *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::enableFastViewRendering);
  *pbVar4 = 0;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::frameRate) = 1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::errorReplayDuration) =
       0x403e000000000000;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration) =
       0x4014000000000000;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maximumDuration) =
       0x40ac200000000000;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sdkInfo) = 0;
  puVar5 = (undefined4 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSampleRate);
  _swift_beginAccess(puVar5,auStack_90,1,0);
  *puVar5 = param_1;
  puVar5 = (undefined4 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::onErrorSampleRate);
  _swift_beginAccess(puVar5,auStack_a8,1,0);
  *puVar5 = param_2;
  _swift_beginAccess(pbVar1,auStack_c0,1,0);
  *pbVar1 = param_3 & 1;
  _swift_beginAccess(pbVar2,auStack_d8,1,0);
  *pbVar2 = param_4 & 1;
  _swift_beginAccess(pbVar3,auStack_f0,1,0);
  *pbVar3 = param_5 & 1;
  _swift_beginAccess(pbVar4,auStack_108,1,0);
  *pbVar4 = param_6 & 1;
  FUN_1007cab40();
  _objc_msgSendSuper2((objc_super *)&stack0xfffffffffffffee8,"init");
  return;
}

