// rea decompile_all
// name: _TtC14UURemoteServer13HotkeyManager::init
// address: 0x10019b604
// body: available
// range: 0x10019b604-0x10019b697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID _TtC14UURemoteServer13HotkeyManager::init(ID param_1,SEL param_2)

{
  long lVar1;
  class_t *pcVar2;
  undefined8 uVar3;
  ID IVar4;
  objc_super local_40;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  lVar1 = controller;
  uVar3 = 0;
  FUN_10011b154();
  _swift_allocObject();
  FUN_10011b21c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined **)(param_1 + hotKeys) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined1 *)(param_1 + isSuspend) = 1;
  local_40.receiver = param_1;
  local_40.super_class = pcVar2;
  IVar4 = _objc_msgSendSuper2(&local_40,"init");
  return IVar4;
}

