// rea decompile_all
// name: FUN_100360a5c
// address: 0x100360a5c
// body: available
// range: 0x100360a5c-0x100360b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100360a5c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker25FilePickerSessionDelegate::retrier);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  _swift_unknownObjectWeakInit
            (unaff_x20 + _TtC10Filepicker25FilePickerSessionDelegate::sessionManager,0);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC10Filepicker25FilePickerSessionDelegate::
           sessionDidFinishEventsForBackgroundURLSession);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC10Filepicker25FilePickerSessionDelegate::requests;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10035fef0();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC10Filepicker25FilePickerSessionDelegate::lock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)puVar3,"init");
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  FUN_100361a80();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}

