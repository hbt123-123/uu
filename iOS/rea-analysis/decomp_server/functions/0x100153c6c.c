// rea decompile_all
// name: _TtC14UURemoteServer18ClipboardPCManager::.cxx_destruct
// address: 0x100153c6c
// body: available
// range: 0x100153c6c-0x100153dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100153dc8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14UURemoteServer18ClipboardPCManager::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_100091734(param_1 + managerDelegate);
  _swift_release(*(undefined8 *)(param_1 + managerModel));
  FUN_10016b73c(param_1 + dragTransfer);
  _swift_release(*(undefined8 *)(param_1 + incomingDrop));
  _swift_release(*(undefined8 *)(param_1 + dropInput));
  puVar1 = (undefined8 *)(param_1 + dropTasks);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  _swift_bridgeObjectRelease(puVar1[3]);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___clipboardAbility));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___fileUploadModel));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___fileUploadProcess));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___fileReceiveProcess));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___receiveCopyModel));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___uploadCopyModel));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___receiveCopyOperationQueue));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___uploadCopyOperationQueue));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___fileUploadCopyOperationQueue));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___fileReceiveCopyOperationQueue));
  return;
}

