// rea decompile_all
// name: FUN_1001040b0
// address: 0x1001040b0
// body: available
// range: 0x1001040b0-0x1001041a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001040b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = _TtC14UURemoteServer16WallpaperManager::sessionEndUploadWorkItem;
  lVar3 = *(long *)(unaff_x20 + _TtC14UURemoteServer16WallpaperManager::sessionEndUploadWorkItem);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_release(uVar2);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_40 = 0xafe89abce4b096e6;
    uStack_38 = 0xaf8ba7e580bce59d;
    FUN_1003fb48c(thunk_FUN_1001083ec,auStack_50,0xd000000000000097,0x8000000100889170,
                  0xd00000000000001f,0x800000010088aab0,0x1fc,0);
    _swift_release(lVar3);
  }
  return;
}

