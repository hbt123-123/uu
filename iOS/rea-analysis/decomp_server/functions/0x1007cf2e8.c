// rea decompile_all
// name: _TtC6Sentry15SentryMXManager::initWithDisableCrashDiagnostics:
// address: 0x1007cf2e8
// body: available
// range: 0x1007cf2e8-0x1007cf347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

ID _TtC6Sentry15SentryMXManager::initWithDisableCrashDiagnostics_
             (ID param_1,SEL param_2,bool param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  pcVar1 = (class_t *)(param_1 + delegate);
  _swift_unknownObjectWeakInit(pcVar1,0);
  *(char *)(param_1 + disableCrashDiagnostics) = (char)param_3;
  FUN_1007d0338();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}

