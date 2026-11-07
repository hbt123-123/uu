// rea decompile_all
// name: FUN_10036080c
// address: 0x10036080c
// body: available
// range: 0x10036080c-0x10036090b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10036080c(undefined8 *param_1,ID param_2)

{
  void *pvVar1;
  ID IVar2;
  void *pvVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  ID self;
  undefined1 auVar6 [16];
  
  pvVar1 = (void *)0x58;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0x197a);
  }
  *param_1 = pvVar1;
  *(ID *)((long)pvVar1 + 0x38) = param_2;
  *(long *)((long)pvVar1 + 0x40) = unaff_x20;
  self = *(ID *)(unaff_x20 + _TtC10Filepicker25FilePickerSessionDelegate::lock);
  *(ID *)((long)pvVar1 + 0x48) = self;
  _objc_msgSend(self,"lock");
  IVar2 = _objc_msgSend(param_2,"taskIdentifier");
  lVar4 = _TtC10Filepicker25FilePickerSessionDelegate::requests;
  *(long *)((long)pvVar1 + 0x50) = _TtC10Filepicker25FilePickerSessionDelegate::requests;
  pvVar3 = pvVar1;
  _swift_beginAccess(unaff_x20 + lVar4,pvVar1,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if ((*(long *)(lVar4 + 0x10) == 0) || (FUN_1003618e4(), ((ulong)pvVar3 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + IVar2 * 8);
  }
  _objc_msgSend(self,"unlock");
  *(undefined8 *)((long)pvVar1 + 0x30) = uVar5;
  auVar6._8_8_ = (long)pvVar1 + 0x30;
  auVar6._0_8_ = FUN_10036090c;
  return auVar6;
}

