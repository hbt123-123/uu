// rea decompile_all
// name: FUN_100104518
// address: 0x100104518
// body: available
// range: 0x100104518-0x100104643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100104640 to 0x1001078d4 FUN_1001078d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100104518(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  FUN_100401b14(0);
  pcVar2 = FUN_10010787c;
  FUN_1003fb48c(FUN_10010787c,0,0xd000000000000097,0x8000000100889170,0x29287472617473,
                0xe700000000000000,0x1c7,0);
  FUN_1003b2838();
  lVar4 = *(long *)pcVar2;
  lVar3 = lVar4;
  _swift_retain();
  FUN_1003a99e4();
  _swift_release(lVar4);
  plVar1 = (long *)(unaff_x20 + _TtC14UURemoteServer16WallpaperManager::currentWallpaperHash);
  if (lVar3 != 0) {
    *plVar1 = lVar3;
    *(undefined1 *)(plVar1 + 1) = 0;
    FUN_1003fb48c(FUN_1001078a8,0,0xd000000000000097,0x8000000100889170,0x29287472617473,
                  0xe700000000000000,0x1ca,0);
    return;
  }
  *plVar1 = 0;
  *(undefined1 *)(plVar1 + 1) = 1;
  FUN_1001078d4(0x100000000000001e,0x800000010088b570);
  return;
}

