// rea decompile_all
// name: FUN_10013ad7c
// address: 0x10013ad7c
// body: available
// range: 0x10013ad7c-0x10013aedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013ad7c(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  undefined4 *local_60;
  undefined4 local_4c;
  long local_48;
  
  uVar3 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  uVar1 = *param_1;
  local_4c = uVar1;
  _swift_retain(uVar3);
  FUN_1003e37e8(&local_48,&local_4c);
  _swift_release(uVar3);
  if (local_48 != 0) {
    _swift_release();
    lVar2 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
    uVar3 = *(undefined8 *)
             (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_4c = uVar1;
    _swift_retain(uVar3);
    FUN_1003e37e8(&local_48,&local_4c);
    _swift_release(uVar3);
    if (local_48 != 0) {
      *(undefined4 *)(local_48 + 0x2c) = param_1[1];
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
      local_4c = uVar1;
      _swift_retain(uVar3);
      _swift_retain(local_48);
      FUN_1003e3634(&local_48,&local_4c);
      _swift_release(uVar3);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_60 = param_1;
      FUN_1003fb45c(FUN_10014578c,auStack_70,0xd0000000000000ad,0x8000000100890750,
                    0xd00000000000002b,0x80000001008914c0,100,7);
      _swift_release(local_48);
    }
  }
  return;
}

