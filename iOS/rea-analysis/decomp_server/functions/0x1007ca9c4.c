// rea decompile_all
// name: FUN_1007ca9c4
// address: 0x1007ca9c4
// body: available
// range: 0x1007ca9c4-0x1007cab3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007ca9c4(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  *(undefined1 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskAllText) = 1;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskAllImages) = 1;
  lVar3 = _TtC6Sentry19SentryReplayOptions::quality;
  if (DAT_100abba50 != -1) {
    _swift_once(&DAT_100abba50,FUN_1007c9ad4);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = DAT_100abd0a8;
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maskedViewClasses) =
       PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses) = puVar2;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::enableExperimentalViewRenderer) = 0;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::enableFastViewRendering) = 0;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::frameRate) = 1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::errorReplayDuration) =
       0x403e000000000000;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSegmentDuration) =
       0x4014000000000000;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::maximumDuration) =
       0x40ac200000000000;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sdkInfo) = 0;
  puVar1 = (undefined4 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::sessionSampleRate);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  *puVar1 = 0;
  puVar1 = (undefined4 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::onErrorSampleRate);
  _swift_beginAccess(puVar1,auStack_60,1,0);
  *puVar1 = 0;
  FUN_1007cab40();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return;
}

