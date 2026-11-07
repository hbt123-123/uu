// rea decompile_all
// name: FUN_100188b54
// address: 0x100188b54
// body: available
// range: 0x100188b54-0x100188cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100188b54(void)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auStack_60 [16];
  ulong local_50;
  char *pcStack_48;
  
  pcVar3 = "stringForType:";
  uVar1 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"stringForType:",
                        *(undefined8 *)PTR__NSPasteboardTypeString_100995440);
  if (uVar1 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = uVar1 & 0xffffffffffff;
    if (((ulong)pcVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)pcVar3 >> 0x38 & 0xf;
    }
    if ((uVar2 != 0) &&
       ((pcVar4 = *(char **)(unaff_x20 + 0x50), pcVar4 == (char *)0x0 ||
        ((uVar1 != *(ulong *)(unaff_x20 + 0x48) || pcVar4 != pcVar3 &&
         (uVar2 = uVar1,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar1,pcVar3,*(ulong *)(unaff_x20 + 0x48),pcVar4,0), (uVar2 & 1) == 0)))))) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_50 = uVar1;
      pcStack_48 = pcVar3;
      _swift_bridgeObjectRetain(pcVar3);
      FUN_1003fb48c(FUN_10018b844,auStack_60,0xd0000000000000a2,0x8000000100893bb0,
                    0x6972745364616572,0xec0000002928676e,0x24,7);
      _swift_bridgeObjectRelease(pcVar3);
      goto LAB_100188c8c;
    }
    _swift_bridgeObjectRelease(pcVar3);
  }
  uVar1 = 0;
  pcVar3 = (char *)0x0;
LAB_100188c8c:
  auVar5._8_8_ = pcVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}

