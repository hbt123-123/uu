// rea decompile_all
// name: FUN_1000c3560
// address: 0x1000c3560
// body: available
// range: 0x1000c3560-0x1000c36ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c3560(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::overlays,auStack_68,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  uVar5 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar5 < 0x40) {
    uVar10 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar6 + 0x40);
  _swift_bridgeObjectRetain(lVar6);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  lVar9 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar8 = *(long *)(*(long *)(lVar6 + 0x38) +
                       (lVar9 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
      _swift_beginAccess(lVar8 + 0x20,auStack_80,1,0);
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
      *(undefined **)(lVar8 + 0x20) = puVar2;
      _swift_retain(lVar8);
      _swift_bridgeObjectRelease(uVar7);
      FUN_1000c4904(puVar2);
      _swift_release(lVar8);
    }
    bVar4 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar4) break;
    if ((long)(uVar5 + 0x3f >> 6) <= lVar9) {
      _swift_release(lVar6);
      return;
    }
    uVar10 = ((ulong *)(lVar6 + 0x40))[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c36ac);
  (*pcVar3)();
}

