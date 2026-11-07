// rea decompile_all
// name: _TtC14UURemoteServer17LockScreenManager::init
// address: 0x1000b1834
// body: available
// range: 0x1000b1834-0x1000b18cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID _TtC14UURemoteServer17LockScreenManager::init(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *self;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_40;
  
  *(undefined1 *)(param_1 + currentScreenIsLocked) = 0;
  *(undefined1 *)(param_1 + lastReportedLocked) = 2;
  *(undefined1 *)(param_1 + isSuspend) = 1;
  *(undefined1 *)(param_1 + isUnlocking) = 0;
  lVar1 = unlockingLock;
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  pcVar2 = (class_t *)_objc_msgSend((ID)self,"init");
  *(class_t **)(param_1 + lVar1) = pcVar2;
  FUN_1000b1f20();
  local_40.receiver = param_1;
  local_40.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_40,"init");
  return IVar3;
}

