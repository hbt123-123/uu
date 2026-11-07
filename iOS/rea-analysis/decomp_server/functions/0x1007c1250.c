// rea decompile_all
// name: _TtC6Sentry21SentryReplayRecording::initWithSegmentId:video:extraEvents:
// address: 0x1007c1250
// body: available
// range: 0x1007c1250-0x1007c12b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry21SentryReplayRecording::initWithSegmentId_video_extraEvents_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100abcdd8;
  FUN_1007b4550(&DAT_100abcdd8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,puVar1);
  FUN_1007c110c(param_3,param_4,param_5);
  return param_3;
}

