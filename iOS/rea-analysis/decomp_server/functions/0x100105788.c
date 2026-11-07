// rea decompile_all
// name: FUN_100105788
// address: 0x100105788
// body: available
// range: 0x100105788-0x1001059bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100105908 to 0x100105d14 FUN_100105d14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100105788(undefined8 *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  if (DAT_100a73b60 != -1) {
    param_1 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_100122344();
  if (((ulong)param_1 & 0xff) == 0) {
    uVar6 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
LAB_100105804:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,uVar6,0x72657375,0xe400000000000000,0);
    _swift_bridgeObjectRelease(uVar6);
    if ((uVar2 & 1) == 0) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
      FUN_100401b14(0);
      lVar4 = 0x20;
      _swift_task_alloc();
      *(char *)(lVar4 + 0x10) = (char)param_1;
      FUN_1003fb48c(FUN_100108550,lVar4,0xd000000000000097,0x8000000100889170,0xd000000000000011,
                    0x800000010088ab60,0x117,0);
      _swift_task_dealloc(lVar4);
      goto LAB_10010598c;
    }
  }
  else {
    if (((uint)param_1 & 0xff) != 1) {
      uVar6 = 0xe500000000000000;
      uVar2 = 0x7473657567;
      goto LAB_100105804;
    }
    _swift_bridgeObjectRelease(0xe400000000000000);
  }
  lVar4 = _TtC14UURemoteServer16WallpaperManager::isUploading;
  lVar5 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x30) = _TtC14UURemoteServer16WallpaperManager::isUploading;
  if ((*(byte *)(lVar5 + lVar4) & 1) == 0) {
    *(undefined1 *)(lVar5 + lVar4) = 1;
    lVar4 = _TtC14UURemoteServer16WallpaperManager::currentWallpaperHash;
    *(long *)(unaff_x22 + 0x38) = _TtC14UURemoteServer16WallpaperManager::currentWallpaperHash;
    uVar6 = *(undefined8 *)(lVar5 + lVar4);
    uVar1 = *(undefined1 *)((undefined8 *)(lVar5 + lVar4) + 1);
    plVar3 = (long *)0x1d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1001059bc;
    FUN_100105d14(uVar6,uVar1);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100105c80,0,0xd000000000000097,0x8000000100889170,0xd000000000000011,
                0x800000010088ab60,0x11b,0);
LAB_10010598c:
                    /* WARNING: Could not recover jumptable at 0x0001001059a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

