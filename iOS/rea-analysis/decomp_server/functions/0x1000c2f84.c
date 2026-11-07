// rea decompile_all
// name: FUN_1000c2f84
// address: 0x1000c2f84
// body: available
// range: 0x1000c2f84-0x1000c3163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c2f84(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ID self;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined1 auStack_78 [24];
  
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::isEnabled) = 0;
  lVar7 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::overlays,auStack_78,1,0);
  lVar5 = *(long *)(unaff_x20 + lVar7);
  *(undefined **)(unaff_x20 + lVar7) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  uVar4 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((long)uVar4 < 0x40) {
    uVar8 = ~(-1L << (uVar4 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar5 + 0x40);
  _swift_bridgeObjectRetain(lVar5);
  lVar7 = 0;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar6 = *(long *)(*(long *)(lVar5 + 0x38) +
                       (lVar7 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
      self = *(ID *)(lVar6 + 0x10);
      _swift_retain(lVar6);
      _objc_msgSend(self,"orderOut:",0);
      _objc_msgSend(*(ID *)(lVar6 + 0x10),"close");
      _swift_release(lVar6);
    }
    bVar3 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar3) break;
    if ((long)(uVar4 + 0x3f >> 6) <= lVar7) {
      _swift_release(lVar5);
      if (*(long *)(lVar5 + 0x10) == 0) {
        _swift_bridgeObjectRelease(lVar5);
      }
      else {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_90 = lVar5;
        FUN_1003fb48c(FUN_1000c46e4,auStack_a0,0xd00000000000009b,0x80000001008841c0,
                      0x28656c6261736964,0xe900000000000029,0xc5,0);
        _swift_bridgeObjectRelease(lVar5);
      }
      return;
    }
    uVar8 = ((ulong *)(lVar5 + 0x40))[lVar7];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c3164);
  (*pcVar2)();
}

