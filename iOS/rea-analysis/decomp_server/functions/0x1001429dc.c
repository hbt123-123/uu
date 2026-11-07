// rea decompile_all
// name: FUN_1001429dc
// address: 0x1001429dc
// body: available
// range: 0x1001429dc-0x100142ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001429dc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  code *local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  long local_58;
  
  uVar3 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_5c = (undefined4)param_1;
  _swift_retain(uVar3);
  FUN_1003e37e8(&local_58,&local_5c);
  _swift_release(uVar3);
  if (local_58 != 0) {
    pcVar4 = *(code **)(local_58 +
                       _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount);
    if ((long)pcVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100142ba4);
      (*pcVar4)();
    }
    uVar3 = *(undefined8 *)
             (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar1 = FUN_1001446c0;
    local_70 = pcVar4;
    uStack_68 = uVar3;
    FUN_1003fb45c(FUN_1001446c0,auStack_80,0xd0000000000000ad,0x8000000100890a70,0xd000000000000023,
                  0x8000000100890b20,0x1c0,7);
    FUN_10019151c();
    if (pcVar4 < pcVar1) {
      _swift_release(local_58);
      return 1;
    }
    FUN_1003fb48c(FUN_100142ba4,0,0xd0000000000000ad,0x8000000100890750,&DAT_d000000000000018,
                  0x8000000100890b50,0x234,7);
    FUN_1001436f8(param_1,3);
    lVar2 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      _swift_release(local_58);
    }
    else {
      FUN_100167028(param_1,3);
      _swift_release(local_58);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return 0;
}

