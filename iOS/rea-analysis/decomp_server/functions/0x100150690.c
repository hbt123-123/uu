// rea decompile_all
// name: FUN_100150690
// address: 0x100150690
// body: available
// range: 0x100150690-0x10015084b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100150690(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  undefined1 auStack_50 [16];
  
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x88);
    _swift_retain(uVar4);
    _swift_release(lVar2);
    if (uVar4 != 0) {
      pcVar5 = *(code **)(uVar4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release();
      FUN_100149dec();
      if (0xfffffffffffa87ff < uVar4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10015084c);
        (*pcVar5)();
      }
      if (pcVar5 < (code *)(uVar4 + 0x57800)) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb45c(FUN_100152468,auStack_50,0xd0000000000000b5,0x8000000100891cf0,
                      &DAT_d000000000000018,0x80000001008925d0,0x148,7);
        goto LAB_10015081c;
      }
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar3 = FUN_100152460;
  FUN_1003fb45c(FUN_100152460,auStack_50,0xd0000000000000b5,0x8000000100891cf0,&DAT_d000000000000018
                ,0x80000001008925d0,0x14d,7);
  FUN_100149dec();
  pcVar5 = pcVar3 + 0x57800;
  if ((code *)0xfffffffffffa87ff < pcVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100150848);
    (*pcVar5)();
  }
LAB_10015081c:
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::___lazy_storage___currentOffset)
  ;
  *puVar1 = pcVar5;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}

