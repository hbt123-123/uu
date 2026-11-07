// rea decompile_all
// name: _TtC6Sentry18SentryFileContents::initWithPath:contents:
// address: 0x1007b64a4
// body: available
// range: 0x1007b64a4-0x1007b6547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry18SentryFileContents::initWithPath_contents_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  class_t *pcVar2;
  ID IVar3;
  SEL pcVar4;
  objc_super local_50;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  pcVar4 = param_2;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  pcVar2 = (class_t *)0x0;
  pIVar1 = (ID *)(param_1 + path);
  *pIVar1 = param_3;
  pIVar1[1] = (ID)param_2;
  pIVar1 = (ID *)(param_1 + contents);
  *pIVar1 = param_4;
  pIVar1[1] = (ID)pcVar4;
  FUN_1007b65e4();
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_50,"init");
  return IVar3;
}

