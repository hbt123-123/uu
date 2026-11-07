// rea decompile_all
// name: FUN_1007b864c
// address: 0x1007b864c
// body: available
// range: 0x1007b864c-0x1007b8807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007b864c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::name);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::email);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar4 = _TtC6Sentry14SentryFeedback::attachments;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::attachments) = 0;
  lVar3 = _TtC6Sentry14SentryFeedback::associatedEventId;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::associatedEventId) = 0;
  IVar5 = 0;
  FUN_1007d6b40();
  _objc_allocWithZone();
  IVar5 = _objc_msgSend(IVar5,"init");
  *(ID *)(unaff_x20 + _TtC6Sentry14SentryFeedback::eventId) = IVar5;
  uVar6 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = puVar2[1];
  *puVar2 = param_5;
  puVar2[1] = param_6;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::message);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRetain();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryFeedback::source) = param_7;
  *(undefined8 *)(unaff_x20 + lVar3) = param_8;
  *(undefined8 *)(unaff_x20 + lVar4) = param_9;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease();
  FUN_1007b8808();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return;
}

