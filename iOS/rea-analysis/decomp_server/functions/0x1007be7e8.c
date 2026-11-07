// rea decompile_all
// name: _TtC6Sentry17SentryMXCallStack::initWithThreadAttributed:rootFrames:
// address: 0x1007be7e8
// body: available
// range: 0x1007be7e8-0x1007be85f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry17SentryMXCallStack::initWithThreadAttributed_rootFrames_
             (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  objc_super local_40;
  
  uVar1 = 0;
  switchD_1007bf228::caseD_6d(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  *(char *)(param_1 + threadAttributed) = (char)param_3;
  *(ID *)(param_1 + callStackRootFrames) = param_4;
  FUN_1007be95c();
  local_40.receiver = param_1;
  local_40.super_class = (class_t *)param_4;
  IVar2 = _objc_msgSendSuper2(&local_40,"init");
  return IVar2;
}

