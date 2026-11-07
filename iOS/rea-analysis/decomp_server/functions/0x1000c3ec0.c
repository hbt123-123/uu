// rea decompile_all
// name: FUN_1000c3ec0
// address: 0x1000c3ec0
// body: available
// range: 0x1000c3ec0-0x1000c441b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000c3ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long unaff_x20;
  ID IVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_f0 [16];
  uint local_e0;
  ulong local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0 [3];
  undefined1 auStack_98 [24];
  
  lVar2 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::overlays,auStack_98,0,0);
  lVar15 = *(long *)(unaff_x20 + lVar2);
  uVar11 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar15 + 0x40);
  _swift_bridgeObjectRetain(lVar15);
  lVar16 = 0;
  local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
  while( true ) {
    while (uVar13 != 0) {
      uVar18 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar1 = *(uint *)(*(long *)(lVar15 + 0x30) +
                       (lVar16 << 8 | LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) << 2));
      uVar18 = (ulong)uVar1;
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      FUN_1003d56bc();
      puVar3 = local_c0;
      if (uVar18 == 0) {
        puVar7 = local_c0;
        _swift_isUniquelyReferenced_nonNull_native();
        local_b0[0] = puVar3;
        if (((ulong)puVar7 & 1) == 0) {
          FUN_10006fafc(0,*(long *)(puVar3 + 0x10) + 1,1);
        }
        uVar18 = *(ulong *)(local_b0[0] + 0x10);
        local_c0 = (undefined *)(uVar18 + 1);
        if (*(ulong *)(local_b0[0] + 0x18) >> 1 <= uVar18) {
          local_c8 = uVar18;
          FUN_10006fafc(1 < *(ulong *)(local_b0[0] + 0x18),local_c0,1);
          uVar18 = local_c8;
        }
        *(undefined **)(local_b0[0] + 0x10) = local_c0;
        *(uint *)(local_b0[0] + uVar18 * 4 + 0x20) = uVar1;
        local_c0 = local_b0[0];
      }
    }
    bVar5 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000c4418);
      (*pcVar4)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar16) break;
    uVar13 = ((ulong *)(lVar15 + 0x40))[lVar16];
  }
  _swift_release(lVar15);
  lVar15 = *(long *)(local_c0 + 0x10);
  if (lVar15 != 0) {
    FUN_100401b14(0);
    puVar14 = (uint *)(local_c0 + 0x20);
    do {
      uVar1 = *puVar14;
      uVar13 = (ulong)uVar1;
      ppuVar10 = local_b0;
      _swift_beginAccess(unaff_x20 + lVar2,ppuVar10,0x21,0);
      thunk_FUN_1001a2c34();
      if (((ulong)ppuVar10 & 1) == 0) {
        _swift_endAccess(local_b0);
      }
      else {
        iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar2);
        _swift_isUniquelyReferenced_nonNull_native();
        local_b8 = *(long *)(unaff_x20 + lVar2);
        *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
        if (iVar6 == 0) {
          FUN_1000640d4();
        }
        lVar16 = local_b8;
        lVar19 = *(long *)(*(long *)(local_b8 + 0x38) + uVar13 * 8);
        thunk_FUN_10006cc48(uVar13,local_b8);
        *(long *)(unaff_x20 + lVar2) = lVar16;
        _swift_endAccess(local_b0);
        _objc_msgSend(*(ID *)(lVar19 + 0x10),"orderOut:",0);
        _objc_msgSend(*(ID *)(lVar19 + 0x10),"close");
        _swift_release(lVar19);
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_e0 = uVar1;
      FUN_1003fb48c(FUN_1000c4608,auStack_f0,0xd00000000000009b,0x80000001008841c0,
                    0xd00000000000001f,0x8000000100882e00,0xda,0);
      lVar15 = lVar15 + -1;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
  }
  _swift_release(local_c0);
  uVar11 = *(ulong *)(unaff_x20 + lVar2);
  puVar21 = (ulong *)(uVar11 + 0x40);
  uVar18 = 1L << ((ulong)*(byte *)(uVar11 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar18 < 0x40) {
    uVar13 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar13 = uVar13 & *puVar21;
  _swift_bridgeObjectRetain(uVar11);
  lVar15 = 0;
  do {
    do {
      while (uVar13 == 0) {
        bVar5 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000c441c);
          (*pcVar4)();
        }
        if ((long)(uVar18 + 0x3f >> 6) <= lVar15) {
          _swift_release(uVar11);
          return;
        }
        uVar13 = puVar21[lVar15];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar17 = (ulong)*(uint *)(*(long *)(uVar11 + 0x30) +
                               (lVar15 << 8 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 2));
      uVar9 = 0;
      FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
      uVar8 = uVar17;
      FUN_1003d56bc();
    } while ((uVar8 == 0) || (lVar16 = *(long *)(unaff_x20 + lVar2), *(long *)(lVar16 + 0x10) == 0))
    ;
    thunk_FUN_1001a2c34();
    if ((uVar9 & 1) != 0) {
      local_c0 = *(undefined **)(*(long *)(lVar16 + 0x38) + uVar17 * 8);
      IVar12 = *(ID *)(local_c0 + 0x10);
      _swift_retain();
      _objc_msgSend(IVar12,"frame");
      uVar20 = param_1;
      uVar22 = param_2;
      uVar23 = param_3;
      uVar24 = param_4;
      uVar9 = _objc_msgSend(uVar8,"frame");
      _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar20,uVar22,uVar23,uVar24);
      puVar3 = local_c0;
      if ((uVar9 & 1) == 0) {
        IVar12 = *(ID *)(local_c0 + 0x10);
        _objc_msgSend(uVar8,"frame");
        _objc_msgSend(IVar12,"setFrame:display:",1);
        IVar12 = *(ID *)(puVar3 + 0x18);
        _objc_msgSend(uVar8,"frame");
        param_1 = 0;
        param_2 = 0;
        _objc_msgSend(IVar12,"setFrame:");
        _swift_beginAccess(puVar3 + 0x20,local_b0,0,0);
        uVar20 = *(undefined8 *)(puVar3 + 0x20);
        local_c8 = uVar11;
        _swift_bridgeObjectRetain(uVar20);
        FUN_1000c4904();
        _swift_release(puVar3);
        uVar11 = local_c8;
        _swift_bridgeObjectRelease(uVar20);
      }
      else {
        _swift_release(local_c0);
      }
    }
  } while( true );
}

