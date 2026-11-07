// rea decompile_all
// name: _TtC6Sentry21SentryReplayRecording::initWithSegmentId:size:start:duration:frameCount:frameRate:height:width:extraEvents:
// address: 0x1007c1360
// body: available
// range: 0x1007c1360-0x1007c1453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x58 bytes */

ID _TtC6Sentry21SentryReplayRecording::
   initWithSegmentId_size_start_duration_frameCount_frameRate_height_width_extraEvents_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4,ID param_5,double param_6,
             long_long param_7,long_long param_8,long_long param_9,long_long param_10,ID param_11)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
            (&stack0xffffffffffffff90 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  if (param_11 != 0) {
    puVar2 = &DAT_100abcdd8;
    FUN_1007b4550(&DAT_100abcdd8);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_11,puVar2);
  }
  FUN_1007c1e2c(param_6,param_3,param_4,
                &stack0xffffffffffffff90 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_7,param_8,
                param_9,param_10,param_11);
  _swift_bridgeObjectRelease(param_11);
  return param_3;
}

