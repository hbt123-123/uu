// rea decompile_all
// name: FUN_100150b88
// address: 0x100150b88
// body: available
// range: 0x100150b88-0x100150d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100150b88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_50 [16];
  
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0x88);
    _swift_retain(uVar3);
    _swift_release(lVar2);
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(uVar3 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release();
      FUN_100149dec();
      if (0xfffffffffffa87ff < uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100150d48);
        (*pcVar1)();
      }
      if (uVar4 < uVar3 + 0x57800) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb45c(FUN_100152458,auStack_50,0xd0000000000000b5,0x8000000100891cf0,
                      0xd000000000000014,0x8000000100892530,0x155,7);
        uVar3 = uVar4 - *(ulong *)(unaff_x20 +
                                  _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
                                  ___lazy_storage___currentOffset);
        if (uVar4 < *(ulong *)(unaff_x20 +
                              _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
                              ___lazy_storage___currentOffset)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100150d4c);
          (*pcVar1)();
        }
        if (uVar3 >> 0x20 == 0) {
          return uVar3;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100150ca8);
        (*pcVar1)();
      }
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb45c(FUN_100152450,auStack_50,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000014,
                0x8000000100892530,0x159,7);
  return 0x57800;
}

