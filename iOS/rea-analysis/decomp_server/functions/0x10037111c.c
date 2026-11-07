// rea decompile_all
// name: _TtC10Filepicker17FilepickerManager::dealloc
// address: 0x10037111c
// body: available
// range: 0x10037111c-0x100371177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC10Filepicker17FilepickerManager::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  objc_super local_30;
  
  pcVar1 = (class_t *)_objc_msgSend(*(ID *)(param_1 + session),"invalidateAndCancel");
  FUN_100372bc8();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

