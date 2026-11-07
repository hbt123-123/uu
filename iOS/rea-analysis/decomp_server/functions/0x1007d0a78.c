// rea decompile_all
// name: FUN_1007d0a78
// address: 0x1007d0a78
// body: available
// range: 0x1007d0a78-0x1007d0bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1007d0a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ID self;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::urls) = 0;
  lVar1 = unaff_x20 + _TtC6Sentry17SentryReplayEvent::replayStartTimestamp;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(lVar1,param_2,lVar2);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::replayType) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryReplayEvent::segmentId) = param_4;
  FUN_1007d12ac();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  _objc_msgSend(self,"setEventId:",param_1);
  uVar3 = 0x765f79616c706572;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x765f79616c706572,0xec0000006f656469);
  _objc_msgSend(self,"setType:",uVar3);
  (**(code **)(lVar4 + 8))(param_2,lVar2);
  return self;
}

