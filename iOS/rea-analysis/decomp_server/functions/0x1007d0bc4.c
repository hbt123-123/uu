// rea decompile_all
// name: _TtC6Sentry17SentryReplayEvent::initWithEventId:replayStartTimestamp:replayType:segmentId:
// address: 0x1007d0bc4
// body: available
// range: 0x1007d0bc4-0x1007d0c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC6Sentry17SentryReplayEvent::initWithEventId_replayStartTimestamp_replayType_segmentId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
  FUN_1007d0a78(param_3,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5,
                param_6);
  return param_3;
}

