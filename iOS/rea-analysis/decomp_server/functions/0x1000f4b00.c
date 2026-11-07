// rea decompile_all
// name: _TtC14UURemoteServer10InputQueue::dealloc
// address: 0x1000f4b00
// body: available
// range: 0x1000f4b00-0x1000f4b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14UURemoteServer10InputQueue::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  class_t *pcVar2;
  class_t *pcVar3;
  objc_super local_48;
  undefined1 auStack_38 [24];
  
  lVar1 = displayLink;
  _swift_beginAccess(param_1 + displayLink,auStack_38,0,0);
  pcVar3 = *(class_t **)(param_1 + lVar1);
  pcVar2 = (class_t *)param_1;
  if (pcVar3 != (class_t *)0x0) {
    _CVDisplayLinkStop();
    pcVar2 = pcVar3;
  }
  FUN_1000f4bd4();
  local_48.receiver = param_1;
  local_48.super_class = pcVar2;
  _objc_msgSendSuper2(&local_48,"dealloc");
  return;
}

