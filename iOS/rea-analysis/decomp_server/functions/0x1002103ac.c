// rea decompile_all
// name: FUN_1002103ac
// address: 0x1002103ac
// body: available
// range: 0x1002103ac-0x1002104f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002103ac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x48,auStack_68,1,0);
  lVar7 = *(long *)(param_1 + 0x48);
  uVar6 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar9 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(lVar7 + 0x40);
  _swift_bridgeObjectRetain_n(lVar7,2);
  lVar8 = 0;
  while( true ) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF
                (*(undefined8 *)
                  (*(long *)(lVar7 + 0x38) +
                  (lVar8 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3)));
    }
    bVar4 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar4) break;
    if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
      _swift_release(lVar7);
      _swift_bridgeObjectRelease(lVar7);
      puVar2 = PTR___swiftEmptyDictionarySingleton_100995ea8;
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = PTR___swiftEmptyDictionarySingleton_100995ea8;
      _swift_bridgeObjectRelease(uVar5);
      _swift_beginAccess(param_1 + 0x40,auStack_80,1,0);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar2;
      _swift_bridgeObjectRelease(uVar5);
      return;
    }
    uVar9 = ((ulong *)(lVar7 + 0x40))[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002104f8);
  (*pcVar3)();
}

