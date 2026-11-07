// rea decompile_all
// name: FUN_10016d614
// address: 0x10016d614
// body: available
// range: 0x10016d614-0x10016d717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016d614(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  lVar1 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName) = 0;
  (*pcVar3)(unaff_x20 +
            _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl,1,1,lVar2)
  ;
  (*pcVar3)(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl,1,1,
            lVar2);
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskStartTime)
       = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userHasPaste)
       = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskIsStart) =
       0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result) = 0;
  return;
}

