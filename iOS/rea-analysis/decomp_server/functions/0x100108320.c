// rea decompile_all
// name: _TtC14UURemoteServer16WallpaperManager::init
// address: 0x100108320
// body: available
// range: 0x100108320-0x1001083cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID _TtC14UURemoteServer16WallpaperManager::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  undefined *puVar4;
  ID IVar5;
  objc_super local_40;
  
  pcVar3 = (class_t *)param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + sessionEndUploadDelay) = 0x4008000000000000;
  lVar2 = uploadCaches;
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cbc40();
  *(undefined **)(param_1 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(param_1 + currentWallpaperHash);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(param_1 + isUploading) = 0;
  *(undefined1 *)(param_1 + isSystemSleeping) = 0;
  *(undefined8 *)(param_1 + sessionEndUploadWorkItem) = 0;
  local_40.receiver = param_1;
  local_40.super_class = pcVar3;
  IVar5 = _objc_msgSendSuper2(&local_40,"init");
  return IVar5;
}

