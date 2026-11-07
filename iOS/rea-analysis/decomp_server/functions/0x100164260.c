// rea decompile_all
// name: FUN_100164260
// address: 0x100164260
// body: available
// range: 0x100164260-0x100164427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001643d4 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100164260(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined4 local_4c;
  long local_48;
  
  cVar1 = param_1[0x18];
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      FUN_1001533d4();
      puVar2 = &DAT_10099f6d8;
      _swift_allocObject(&DAT_10099f6d8,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = param_2;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      FUN_10004090c(param_2,param_3);
      FUN_10013e9a4(param_1,FUN_10016b950,puVar2);
      _swift_release(puVar2);
      return puVar2;
    }
    if (cVar1 != '\0') {
      return param_1;
    }
  }
  FUN_1001533d4();
  FUN_10013e3f8(param_1);
  if (param_1[0x18] == '\x02') {
    local_4c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14);
    uVar4 = *(undefined8 *)
             (*(long *)(unaff_x20 +
                       _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel)
             + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    _swift_retain(uVar4);
    FUN_1003e37e8(&local_48,&local_4c);
    _swift_release(uVar4);
    if ((local_48 == 0) ||
       (cVar1 = *(char *)(local_48 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result)
       , _swift_release(), cVar1 == '\0')) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x88);
      if ((lVar3 == 0) ||
         (*(char *)(lVar3 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::writeResult) !=
          '\x05')) {
        uVar4 = 2;
      }
      else {
        uVar4 = 5;
      }
      FUN_10016b144(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14),uVar4);
    }
  }
  FUN_10013fcd8(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14),0);
  return (undefined *)0x0;
}

