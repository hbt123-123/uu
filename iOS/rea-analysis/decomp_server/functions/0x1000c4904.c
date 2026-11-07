// rea decompile_all
// name: FUN_1000c4904
// address: 0x1000c4904
// body: available
// range: 0x1000c4904-0x1000c4fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000c4904(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ID IVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ID unaff_x20;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  ID IVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *local_c8 [3];
  undefined *apuStack_b0 [4];
  
  _swift_bridgeObjectRetain();
  lVar22 = param_5;
  thunk_FUN_10004b1a8();
  lVar7 = _TtC14UURemoteServer21DrawOverlayCanvasView::strokeLayers;
  pcVar17 = (char *)apuStack_b0;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer21DrawOverlayCanvasView::strokeLayers,pcVar17,0
                     ,0);
  lVar11 = *(long *)(unaff_x20 + lVar7);
  uVar20 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar23 = 0xffffffffffffffff;
  if ((long)uVar20 < 0x40) {
    uVar23 = ~(-1L << (uVar20 & 0x3f));
  }
  uVar23 = uVar23 & *(ulong *)(lVar11 + 0x40);
  _swift_bridgeObjectRetain();
  lVar25 = 0;
  puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
joined_r0x0001000c49b4:
  do {
    while (uVar23 == 0) {
      bVar9 = SCARRY8(lVar25,1);
      lVar25 = lVar25 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1000c4fb0);
        (*pcVar8)();
      }
      if ((long)(uVar20 + 0x3f >> 6) <= lVar25) {
        _swift_release(lVar11);
        _swift_bridgeObjectRelease(lVar22);
        lVar22 = *(long *)(puVar14 + 0x10);
        if (lVar22 != 0) {
          puVar24 = (uint *)(puVar14 + 0x20);
          do {
            uVar23 = (ulong)*puVar24;
            pcVar17 = (char *)local_c8;
            _swift_beginAccess(unaff_x20 + lVar7,pcVar17,0x21,0);
            thunk_FUN_1001a2c34();
            if (((ulong)pcVar17 & 1) == 0) {
              _swift_endAccess(local_c8);
            }
            else {
              iVar10 = (int)*(undefined8 *)(unaff_x20 + lVar7);
              _swift_isUniquelyReferenced_nonNull_native();
              lVar11 = *(long *)(unaff_x20 + lVar7);
              *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
              if (iVar10 == 0) {
                FUN_100063f7c();
              }
              IVar26 = *(ID *)(*(long *)(lVar11 + 0x38) + uVar23 * 8);
              thunk_FUN_10006cc48(uVar23,lVar11);
              *(long *)(unaff_x20 + lVar7) = lVar11;
              _swift_endAccess(local_c8);
              pcVar17 = "removeFromSuperlayer";
              _objc_msgSend(IVar26,"removeFromSuperlayer");
            }
            lVar22 = lVar22 + -1;
            puVar24 = puVar24 + 1;
          } while (lVar22 != 0);
        }
        _swift_release(puVar14);
        uVar20 = 1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
        uVar23 = 0xffffffffffffffff;
        if ((long)uVar20 < 0x40) {
          uVar23 = ~(-1L << (uVar20 & 0x3f));
        }
        uVar23 = uVar23 & *(ulong *)(param_5 + 0x40);
        uVar18 = *(undefined8 *)PTR__kCALineCapRound_100995640;
        uVar19 = *(undefined8 *)PTR__kCALineJoinRound_100995648;
        _swift_bridgeObjectRetain();
        lVar22 = 0;
        while( true ) {
          for (; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
            uVar12 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar22 << 6;
            puVar1 = (undefined8 *)(*(long *)(param_5 + 0x38) + uVar12 * 0x20);
            uVar4 = *(uint *)(*(long *)(param_5 + 0x30) + uVar12 * 4);
            uVar12 = (ulong)uVar4;
            uVar28 = *puVar1;
            uVar29 = puVar1[1];
            cVar5 = *(char *)(puVar1 + 2);
            uVar3 = *(uint *)((long)puVar1 + 0x14);
            cVar6 = *(char *)(puVar1 + 3);
            lVar11 = *(long *)(unaff_x20 + lVar7);
            if ((*(long *)(lVar11 + 0x10) == 0) ||
               (thunk_FUN_1001a2c34(), ((ulong)pcVar17 & 1) == 0)) {
              puVar14 = &_OBJC_CLASS___CAShapeLayer;
              _objc_allocWithZone();
              _swift_bridgeObjectRetain(uVar28);
              IVar26 = _objc_msgSend((ID)puVar14,"init");
            }
            else {
              IVar26 = *(ID *)(*(long *)(lVar11 + 0x38) + uVar12 * 8);
              _swift_bridgeObjectRetain(uVar28);
            }
            _objc_msgSend(unaff_x20,"bounds");
            _objc_msgSend(IVar26,"setFrame:",0,0);
            _objc_msgSend(unaff_x20,"bounds");
            uVar15 = uVar28;
            FUN_1000c5020(param_3,param_4,uVar28);
            _objc_msgSend(IVar26,"setPath:",uVar15);
            uVar15 = 0x4008000000000000;
            if (cVar5 == '\0') {
              uVar15 = uVar29;
            }
            _objc_msgSend(IVar26,"setLineWidth:",uVar15);
            _swift_bridgeObjectRelease(uVar28);
            uVar2 = 0xffff4444;
            if (cVar6 == '\0') {
              uVar2 = uVar3;
            }
            param_4 = (double)(uVar2 >> 0x18) / 255.0;
            param_3 = (double)(uVar2 & 0xff) / 255.0;
            IVar16 = NSColor::colorWithSRGBRed_green_blue_alpha_
                               ((ID)&_OBJC_CLASS___NSColor,"colorWithSRGBRed:green:blue:alpha:",
                                (double)(uVar2 >> 0x10 & 0xff) / 255.0,
                                (double)(uVar2 >> 8 & 0xff) / 255.0);
            IVar16 = NSColor::CGColor(IVar16,"CGColor");
            _objc_msgSend(IVar26,"setStrokeColor:",IVar16);
            IVar16 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor,"clearColor");
            IVar16 = NSColor::CGColor(IVar16,"CGColor");
            _objc_msgSend(IVar26,"setFillColor:",IVar16);
            _objc_msgSend(IVar26,"setLineCap:",uVar18);
            pcVar17 = "setLineJoin:";
            _objc_msgSend(IVar26,"setLineJoin:",uVar19);
            ppuVar27 = (undefined **)(ulong)uVar4;
            if ((*(long *)(*(long *)(unaff_x20 + lVar7) + 0x10) == 0) ||
               (thunk_FUN_1001a2c34(ppuVar27), ((ulong)pcVar17 & 1) == 0)) {
              IVar16 = _objc_msgSend(unaff_x20,"layer");
              _objc_msgSend(IVar16,"addSublayer:",IVar26);
              _swift_beginAccess(unaff_x20 + lVar7,local_c8,0x21,0);
              uVar28 = *(undefined8 *)(unaff_x20 + lVar7);
              _swift_isUniquelyReferenced_nonNull_native(uVar28);
              uVar29 = *(undefined8 *)(unaff_x20 + lVar7);
              *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
              FUN_100061738(IVar26,ppuVar27,uVar28);
              *(undefined8 *)(unaff_x20 + lVar7) = uVar29;
              _swift_endAccess(local_c8);
              pcVar17 = (char *)ppuVar27;
            }
          }
          bVar9 = SCARRY8(lVar22,1);
          lVar22 = lVar22 + 1;
          if (bVar9) break;
          if ((long)(uVar20 + 0x3f >> 6) <= lVar22) {
            _swift_release(param_5);
            return;
          }
          uVar23 = ((ulong *)(param_5 + 0x40))[lVar22];
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1000c4fb4);
        (*pcVar8)();
      }
      uVar23 = ((ulong *)(lVar11 + 0x40))[lVar25];
    }
    uVar12 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar23 - 1 & uVar23;
    uVar3 = *(uint *)(*(long *)(lVar11 + 0x30) +
                     (lVar25 << 8 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 2));
    ppuVar27 = (undefined **)(ulong)uVar3;
    if (*(long *)(lVar22 + 0x10) != 0) {
      uVar12 = *(ulong *)(lVar22 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar12,ppuVar27,4);
      uVar21 = -1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
      uVar12 = uVar12 & (uVar21 ^ 0xffffffffffffffff);
      pcVar17 = (char *)ppuVar27;
      if ((*(ulong *)(lVar22 + 0x38 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1) !=
          0) {
        do {
          if (*(uint *)(*(long *)(lVar22 + 0x30) + uVar12 * 4) == uVar3)
          goto joined_r0x0001000c49b4;
          uVar12 = uVar12 + 1 & ~uVar21;
        } while ((*(ulong *)(lVar22 + 0x38 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) &
                 1) != 0);
      }
    }
    puVar13 = puVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    local_c8[0] = puVar14;
    if (((ulong)puVar13 & 1) == 0) {
      pcVar17 = (char *)(*(long *)(puVar14 + 0x10) + 1);
      FUN_10006fbb8(0,pcVar17,1);
    }
    uVar12 = *(ulong *)(local_c8[0] + 0x10);
    ppuVar27 = (undefined **)(uVar12 + 1);
    if (*(ulong *)(local_c8[0] + 0x18) >> 1 <= uVar12) {
      pcVar17 = (char *)ppuVar27;
      FUN_10006fbb8(1 < *(ulong *)(local_c8[0] + 0x18),ppuVar27,1);
    }
    *(undefined ***)(local_c8[0] + 0x10) = ppuVar27;
    *(uint *)(local_c8[0] + uVar12 * 4 + 0x20) = uVar3;
    puVar14 = local_c8[0];
  } while( true );
}

