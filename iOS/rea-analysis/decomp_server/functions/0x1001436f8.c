// rea decompile_all
// name: FUN_1001436f8
// address: 0x1001436f8
// body: available
// range: 0x1001436f8-0x1001437bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001436f8(undefined4 param_1,char param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  uVar2 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_4c = param_1;
  _swift_retain(uVar2);
  FUN_1003e37e8(&local_48,&local_4c);
  _swift_release(uVar2);
  if (local_48 != 0) {
    lVar3 = local_48;
    if (*(char *)(local_48 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result) !=
        param_2) {
      *(char *)(local_48 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result) = param_2
      ;
      lVar3 = *(long *)(unaff_x20 + lVar1);
      local_4c = param_1;
      _swift_retain(lVar3);
      _swift_retain(local_48);
      FUN_1003e3634(&local_48,&local_4c);
      _swift_release(local_48);
    }
    _swift_release(lVar3);
  }
  return;
}

