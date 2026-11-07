// rea decompile_all
// name: FUN_1000f404c
// address: 0x1000f404c
// body: available
// range: 0x1000f404c-0x1000f418b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000f404c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined1 *)(param_4 + 0x14) = 1;
  *(undefined4 *)(param_4 + 0x18) = 0x2715;
  *(undefined8 *)(param_4 + 0x28) = 0;
  _swift_unknownObjectWeakInit(param_4 + 0x20,0);
  *(undefined8 *)(param_4 + 0x50) = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cbb5c();
  *(undefined **)(param_4 + 0x58) = puVar3;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined8 *)(param_4 + 0x88) = 0;
  *(undefined8 *)(param_4 + 0x80) = 0;
  *(undefined4 *)(param_4 + 0x90) = 0;
  __s10Foundation4UUIDVACycfC
            (param_4 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration);
  *(undefined8 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::settingsRevision) = 0;
  puVar1 = (undefined4 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem) = 0;
  puVar2 = (undefined8 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth)
       = 0;
  puVar1 = (undefined4 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::coalescedSyncRequest)
  ;
  *(undefined1 *)(puVar1 + 1) = 2;
  *puVar1 = 0;
  *(undefined1 *)(param_4 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings) =
       0;
  puVar2 = (undefined8 *)
           (param_4 + _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality);
  *(undefined2 *)(puVar2 + 1) = 0x100;
  *puVar2 = 0;
  *(undefined8 *)(param_4 + 0x40) = param_1;
  *(undefined ***)(param_4 + 0x48) = &PTR_PTR_100998538;
  *(undefined8 *)(param_4 + 0x30) = param_2;
  *(undefined ***)(param_4 + 0x38) = &PTR_PTR_100998208;
  *(undefined8 *)(param_4 + 0x60) = param_3;
  *(undefined ***)(param_4 + 0x68) = &PTR_PTR_100998558;
  return param_4;
}

