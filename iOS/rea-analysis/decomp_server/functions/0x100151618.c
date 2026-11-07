// rea decompile_all
// name: FUN_100151618
// address: 0x100151618
// body: available
// range: 0x100151618-0x100151703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100151618(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100151704,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000012,
                0x8000000100892470,0x16d,7);
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x88);
    _swift_retain(lVar1);
    _swift_release(lVar2);
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release();
      FUN_100149dec();
      if (lVar1 != 0) {
        return false;
      }
      return lVar2 == 0;
    }
  }
  return true;
}

