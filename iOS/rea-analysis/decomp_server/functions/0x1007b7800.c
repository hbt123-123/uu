// rea decompile_all
// name: _TtC6Sentry14SentryFeedback::initWithMessage:name:email:source:associatedEventId:attachments:
// address: 0x1007b7800
// body: available
// range: 0x1007b7800-0x1007b791f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x40 bytes */

ID _TtC6Sentry14SentryFeedback::initWithMessage_name_email_source_associatedEventId_attachments_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,ID param_7,
             ID param_8)

{
  SEL pcVar1;
  SEL pcVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  pcVar2 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    pcVar1 = (SEL)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    pcVar1 = pcVar2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    pcVar2 = (SEL)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_8 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_8,PTR___s10Foundation4DataVN_1009961e8);
  }
  FUN_1007b864c(param_3,param_2,param_4,pcVar1,param_5,pcVar2,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_8);
  _swift_bridgeObjectRelease(pcVar2);
  _swift_bridgeObjectRelease(pcVar1);
  return param_3;
}

