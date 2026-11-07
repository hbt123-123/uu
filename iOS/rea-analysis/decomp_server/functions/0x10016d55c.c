// rea decompile_all
// name: FUN_10016d55c
// address: 0x10016d55c
// body: available
// range: 0x10016d55c-0x10016d613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10016d610 to 0x1007df19c _swift_deallocClassInstance (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016d55c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100040bb4(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl,
                &DAT_100a766c8,&DAT_10080b1d0);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 +
              _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 +
              _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName));
  FUN_100040bb4(unaff_x20 +
                _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl,
                &DAT_100a766c8,&DAT_10080b1d0);
  FUN_100040bb4(unaff_x20 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl,
                &DAT_100a766c8,&DAT_10080b1d0);
  _swift_deallocClassInstance();
  return;
}

