// rea decompile_all
// name: _TtC14UURemoteServer21DrawOverlayCanvasView::initWithFrame:
// address: 0x1000c47f0
// body: available
// range: 0x1000c47f0-0x1000c488b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID _TtC14UURemoteServer21DrawOverlayCanvasView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  class_t *pcVar2;
  ID self;
  objc_super local_50;
  
  lVar1 = strokeLayers;
  pcVar2 = (class_t *)PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000ccb60(PTR___swiftEmptyArrayStorage_100995ea0,param_2,param_3.field0_0x0.field0_0x0,
                param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8);
  *(class_t **)(param_1 + lVar1) = pcVar2;
  FUN_1000c5000();
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  self = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  _objc_msgSend(self,"setWantsLayer:",1);
  return self;
}

