// rea decompile_all
// name: FUN_1000c36ac
// address: 0x1000c36ac
// body: available
// range: 0x1000c36ac-0x1000c3a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000c36ac(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c0 [16];
  int local_b0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar10 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  if ((param_2 >> 0x20 & 1) != 0) {
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::overlays,auStack_78,0,0
                      );
    lVar10 = *(long *)(unaff_x20 + lVar10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar6 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar10 + 0x40);
    _swift_bridgeObjectRetain(lVar10);
    lVar13 = 0;
    while( true ) {
      while (uVar6 != 0) {
        uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        lVar11 = *(long *)(*(long *)(lVar10 + 0x38) +
                          (lVar13 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
        puVar8 = auStack_90;
        _swift_beginAccess(lVar11 + 0x20,puVar8,0x21,0);
        lVar7 = param_1;
        thunk_FUN_1001a2c34();
        if (((ulong)puVar8 & 1) == 0) {
          _swift_endAccess(auStack_90);
        }
        else {
          _swift_retain(lVar11);
          iVar5 = (int)*(undefined8 *)(lVar11 + 0x20);
          _swift_isUniquelyReferenced_nonNull_native();
          local_98 = *(long *)(lVar11 + 0x20);
          *(undefined8 *)(lVar11 + 0x20) = 0x8000000000000000;
          if (iVar5 == 0) {
            FUN_1000640e8();
          }
          lVar2 = local_98;
          uVar12 = *(undefined8 *)(*(long *)(local_98 + 0x38) + lVar7 * 0x20);
          FUN_10006c5f8(lVar7,local_98);
          *(long *)(lVar11 + 0x20) = lVar2;
          _swift_endAccess(auStack_90);
          _swift_bridgeObjectRelease(uVar12);
          uVar12 = *(undefined8 *)(lVar11 + 0x20);
          _swift_bridgeObjectRetain(uVar12);
          FUN_1000c4904();
          _swift_release(lVar11);
          _swift_bridgeObjectRelease(uVar12);
        }
      }
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) break;
      if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
        _swift_release(lVar10);
        return;
      }
      uVar6 = ((ulong *)(lVar10 + 0x40))[lVar13];
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c3a14);
    (*pcVar3)();
  }
  if ((int)param_2 < 1) {
LAB_1000c370c:
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    thunk_FUN_1003d7218();
    uVar9 = param_2;
    if (uVar6 == 0) goto LAB_1000c374c;
  }
  else {
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    uVar6 = param_2;
    FUN_1003d56bc();
    if (uVar6 == 0) goto LAB_1000c370c;
  }
  FUN_1003d541c();
  uVar9 = uVar6;
LAB_1000c374c:
  lVar10 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  puVar8 = auStack_78;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::overlays,puVar8,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if ((*(long *)(lVar10 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar8 & 1) == 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b0 = (int)param_2;
    FUN_1003fb48c(FUN_1000c4734,auStack_c0,0xd00000000000009b,0x80000001008841c0,0xd00000000000001f,
                  0x8000000100884440,0x84,0);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + uVar9 * 8);
    _swift_beginAccess(lVar10 + 0x20,auStack_90,0x21,0);
    _swift_retain(lVar10);
    FUN_1001de060(param_1);
    _swift_endAccess(auStack_90);
    _swift_bridgeObjectRelease(param_1);
    uVar12 = *(undefined8 *)(lVar10 + 0x20);
    _swift_bridgeObjectRetain(uVar12);
    FUN_1000c4904();
    _swift_release(lVar10);
    _swift_bridgeObjectRelease(uVar12);
  }
  return;
}

