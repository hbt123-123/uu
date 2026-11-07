// rea decompile_all
// name: FUN_1000065d8
// address: 0x1000065d8
// body: available
// range: 0x1000065d8-0x1000066d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000065d8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar2 = _TtC14UURemoteServer13CursorManager::shapeCache;
  lVar3 = 0;
  FUN_100009ab8();
  _swift_allocObject();
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)puVar4,"init");
  puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  *(ID *)(lVar3 + 0x18) = IVar5;
  *(undefined **)(lVar3 + 0x20) = puVar4;
  *(undefined8 *)(lVar3 + 0x10) = 0x40;
  *(long *)(unaff_x20 + lVar2) = lVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::baseline);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 2;
  puVar1[7] = 0xf000000000000000;
  puVar1[6] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedNonUniqueIdentity) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedEncodeFailure) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::refreshTimer) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::isSuspend) = 1;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}

