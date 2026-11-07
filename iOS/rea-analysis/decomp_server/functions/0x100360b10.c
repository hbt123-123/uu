// rea decompile_all
// name: _TtC10Filepicker25FilePickerSessionDelegate::init
// address: 0x100360b10
// body: available
// range: 0x100360b10-0x100360bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID _TtC10Filepicker25FilePickerSessionDelegate::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  class_t *pcVar4;
  ID IVar5;
  objc_super local_40;
  
  puVar1 = (undefined8 *)(param_1 + retrier);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  _swift_unknownObjectWeakInit(param_1 + sessionManager,0);
  puVar1 = (undefined8 *)(param_1 + sessionDidFinishEventsForBackgroundURLSession);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = requests;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10035fef0();
  *(undefined **)(param_1 + lVar2) = puVar3;
  lVar2 = lock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  pcVar4 = (class_t *)_objc_msgSend((ID)puVar3,"init");
  *(class_t **)(param_1 + lVar2) = pcVar4;
  FUN_100361a80();
  local_40.receiver = param_1;
  local_40.super_class = pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_40,"init");
  return IVar5;
}

