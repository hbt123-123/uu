// rea decompile_all
// name: FUN_1005f63ec
// address: 0x1005f63ec
// body: available
// range: 0x1005f63ec-0x1005f645f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f63ec(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_1005fa2b4(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName));
  FUN_1005fa2b4(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl);
  FUN_1005fa2b4(unaff_x20 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl);
  return;
}

