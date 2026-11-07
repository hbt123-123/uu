// rea decompile_all
// name: FUN_1000b8d04
// address: 0x1000b8d04
// body: available
// range: 0x1000b8d04-0x1000b983b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000b9828) */

undefined8 FUN_1000b8d04(double param_1,double param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long extraout_x12;
  char *pcVar20;
  code *pcVar21;
  long unaff_x20;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  double dVar28;
  undefined1 auStack_1b0 [16];
  ID IStack_1a0;
  ulong uStack_198;
  ID aIStack_190 [2];
  undefined1 auStack_180 [8];
  char *local_178;
  char *local_170;
  char *local_168;
  ID local_160;
  ulong local_158;
  char *local_150;
  char *local_148;
  ulong local_140;
  long local_138;
  ulong local_130;
  ulong local_128;
  long local_120;
  ulong local_118;
  long local_110;
  ID local_108;
  undefined *local_d8 [4];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  puVar18 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar15 = (long)puVar18 - extraout_x12;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  uVar16 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar16 >> 0x3e == 0) {
    uVar22 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar22 = uVar16 & 0xffffffffffffff8;
    if ((long)uVar16 < 0) {
      uVar22 = uVar16;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_3 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar16 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if ((uVar22 == uVar16) &&
     (_swift_beginAccess(unaff_x20 + 0x18,auStack_b8,0,0),
     *(ulong *)(*(long *)(unaff_x20 + 0x18) + 0x10) == uVar22)) {
    local_d8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    local_120 = lVar5;
    local_110 = lVar25;
    FUN_10006fae0(0,0,0);
    puVar13 = local_d8[0];
    if (param_3 >> 0x3e == 0) {
      uVar16 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar16 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar16 != 0) {
      uVar22 = 0;
      do {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b97e0);
            (*pcVar21)();
          }
          uVar6 = *(ulong *)(param_3 + uVar22 * 8 + 0x20);
        }
        else {
          uVar6 = uVar22;
          FUN_100169c00(uVar22,param_3);
        }
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b97dc);
          (*pcVar21)();
        }
        uVar27 = uVar22 + 1;
        uVar8 = uVar22;
        FUN_1000c0aa8();
        uVar24 = *(ulong *)(puVar13 + 0x10);
        local_d8[0] = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar24) {
          FUN_10006fae0(1 < *(ulong *)(puVar13 + 0x18),uVar24 + 1,1);
        }
        *(ulong *)(local_d8[0] + 0x10) = uVar24 + 1;
        *(ulong *)(local_d8[0] + uVar24 * 0x10 + 0x20) = uVar6;
        *(ulong *)(local_d8[0] + uVar24 * 0x10 + 0x28) = uVar8;
        uVar22 = uVar22 + 1;
        puVar13 = local_d8[0];
      } while (uVar27 != uVar16);
    }
    lVar25 = *(long *)(unaff_x20 + 0x18);
    lVar5 = *(long *)(lVar25 + 0x10);
    puVar23 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar5 != 0) {
      local_d8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
      _swift_bridgeObjectRetain(lVar25);
      FUN_10006fae0(0,lVar5,0);
      puVar17 = (undefined8 *)(lVar25 + 0x30);
      puVar23 = local_d8[0];
      do {
        uVar14 = puVar17[-1];
        uVar2 = *puVar17;
        uVar22 = *(ulong *)(puVar23 + 0x10);
        uVar6 = *(ulong *)(puVar23 + 0x18);
        local_d8[0] = puVar23;
        _swift_bridgeObjectRetain(uVar2);
        if (uVar6 >> 1 <= uVar22) {
          FUN_10006fae0(1 < uVar6,uVar22 + 1,1);
          puVar23 = local_d8[0];
        }
        *(ulong *)(puVar23 + 0x10) = uVar22 + 1;
        *(undefined8 *)(puVar23 + uVar22 * 0x10 + 0x20) = uVar14;
        *(undefined8 *)(puVar23 + uVar22 * 0x10 + 0x28) = uVar2;
        puVar17 = puVar17 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease(lVar25);
    }
    local_d8[0] = puVar13;
    _swift_bridgeObjectRetain(puVar13);
    FUN_1000bfeb4(local_d8);
    _swift_release(puVar13);
    puVar13 = local_d8[0];
    local_d8[0] = puVar23;
    _swift_bridgeObjectRetain(puVar23);
    FUN_1000bfeb4(local_d8);
    _swift_bridgeObjectRelease(puVar23);
    puVar23 = local_d8[0];
    puVar7 = puVar13;
    FUN_1000e408c(puVar13,local_d8[0]);
    _swift_release(puVar13);
    _swift_release(puVar23);
    if (((ulong)puVar7 & 1) != 0) {
      if (uVar16 == 0) {
        return 1;
      }
      uVar22 = param_3 & 0xc000000000000001;
      local_130 = param_3 & 0xffffffffffffff8;
      local_138 = param_3 + 0x20;
      local_148 = "$_windowLevelProtector";
      local_150 = " rebuilding overlay";
      local_178 = "privacy_screen_image_mac";
      local_168 = "applyCachedImage(for:)";
      local_170 = " updated overlay in place";
      uVar6 = 0;
      uVar24 = 0;
      local_158 = uVar22;
      while( true ) {
        if (uVar22 == 0) {
          if (*(ulong *)(local_130 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b9818);
            (*pcVar21)();
          }
          uVar8 = *(ID *)(local_138 + uVar6 * 8);
          dVar28 = param_2;
        }
        else {
          uVar8 = uVar6;
          FUN_100169c00(uVar6,param_3);
          dVar28 = param_2;
        }
        uVar22 = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b9814);
          (*pcVar21)();
        }
        IVar9 = uVar8;
        FUN_1000c0aa8();
        lVar5 = *(long *)(unaff_x20 + 0x18);
        uVar27 = *(ulong *)(lVar5 + 0x10);
        if (uVar27 == 0) break;
        lVar25 = 0;
        uVar26 = 0;
        local_118 = uVar22;
        while( true ) {
          lVar1 = lVar5 + lVar25;
          IVar10 = *(ID *)(lVar1 + 0x28);
          uVar3 = *(ulong *)(lVar1 + 0x30);
          if ((IVar10 == IVar9 && uVar3 == uVar6) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (IVar10,uVar3,IVar9,uVar6,0), (IVar10 & 1) != 0)) break;
          uVar26 = uVar26 + 1;
          lVar25 = lVar25 + 0x20;
          if (uVar27 == uVar26) goto LAB_1000b9794;
        }
        uVar27 = *(ulong *)(unaff_x20 + 0x10);
        local_140 = uVar22;
        if (uVar27 >> 0x3e != 0) {
          uVar22 = uVar27 & 0xffffffffffffff8;
          if ((long)uVar27 < 0) {
            uVar22 = uVar27;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b981c);
            (*pcVar21)();
          }
          if (uVar26 < uVar22) goto LAB_1000b9198;
          break;
        }
        if (*(ulong *)((uVar27 & 0xffffffffffffff8) + 0x10) <= uVar26) break;
LAB_1000b9198:
        _swift_beginAccess(unaff_x20 + 0x10,local_d8,0x20,0);
        uVar22 = *(ulong *)(unaff_x20 + 0x10);
        if ((uVar22 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b9820);
            (*pcVar21)();
          }
          uVar22 = *(ID *)(uVar22 + uVar26 * 8 + 0x20);
        }
        else {
          uVar22 = uVar26;
          FUN_10016a00c();
        }
        _swift_endAccess(local_d8);
        IVar10 = uVar8;
        FUN_1000c1180();
        local_128 = CONCAT44(local_128._4_4_,(int)IVar10);
        FUN_1000bc6e8(uVar22,uVar8);
        IVar10 = _objc_msgSend(uVar22,"contentView");
        if (IVar10 != 0) {
          _objc_msgSend(IVar10,"setWantsLayer:",1);
        }
        local_108 = uVar22;
        IVar10 = _objc_msgSend(uVar22,"contentView");
        if ((IVar10 != 0) && (IVar10 = _objc_msgSend(IVar10,"layer"), IVar10 != 0)) {
          IVar11 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor,"blackColor");
          IVar11 = NSColor::CGColor(IVar11,"CGColor");
          _objc_msgSend(IVar10,"setBackgroundColor:",IVar11);
        }
        if (*(ulong *)(*(long *)(unaff_x20 + 0x18) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b9824);
          (*pcVar21)();
        }
        IVar10 = *(ID *)(*(long *)(unaff_x20 + 0x18) + lVar25 + 0x20);
        _objc_msgSend(uVar8,"frame");
        param_2 = 0.0;
        _objc_msgSend(IVar10,"setFrame:",0);
        param_1 = ABS(param_1 - dVar28);
        uVar14 = 3;
        if (param_1 <= 0.1) {
          uVar14 = 1;
        }
        uVar2 = 3;
        if (*(char *)(unaff_x20 + 0x68) == '\0') {
          uVar2 = uVar14;
        }
        _objc_msgSend(IVar10,"setImageScaling:",uVar2);
        _swift_beginAccess(unaff_x20 + 0x18,local_d8,0x21,0);
        uVar27 = *(ulong *)(unaff_x20 + 0x18);
        uVar22 = uVar27;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x18) = uVar27;
        if ((uVar22 & 1) == 0) {
          FUN_10006f974();
        }
        uVar22 = local_128;
        if (*(ulong *)(uVar27 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1000b9828);
          (*pcVar21)();
        }
        uVar4 = (uint)local_128;
        *(char *)(uVar27 + lVar25 + 0x38) = (char)local_128;
        *(ulong *)(unaff_x20 + 0x18) = uVar27;
        ppuVar12 = local_d8;
        _swift_endAccess();
        FUN_1003b2720();
        puVar23 = *ppuVar12;
        puVar13 = puVar23;
        _swift_retain();
        FUN_10039a5f0();
        _swift_release(puVar23);
        if (puVar13 == (undefined *)0x2) {
          FUN_1003b2558();
          lVar5 = local_120;
          (**(code **)(local_110 + 0x10))(puVar18,puVar23,local_120);
          if ((uVar22 & 0xff) == 0) {
            puVar19 = (undefined1 *)0xd00000000000001d;
            pcVar20 = local_178;
          }
          else {
            puVar19 = &DAT_d000000000000018;
            pcVar20 = local_168;
            if ((uVar4 & 0xff) != 1) {
              puVar19 = (undefined1 *)0xd00000000000001d;
              pcVar20 = local_170;
            }
          }
          local_160 = IVar10;
          __s10Foundation3URLV22appendingPathComponentyACSSF
                    (uVar15,puVar19,(ulong)pcVar20 | 0x8000000000000000);
          _swift_bridgeObjectRelease((ulong)pcVar20 | 0x8000000000000000);
          pcVar21 = *(code **)(local_110 + 8);
          (*pcVar21)(puVar18,lVar5);
          uVar14 = 0;
          uVar22 = uVar15;
          __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC
                    (uVar15,0);
          if (uVar24 == 0) {
            (*pcVar21)(uVar15,lVar5);
            uVar27 = uVar22;
            FUN_1000bd850(uVar22,uVar14,local_128 & 0xffffffff);
            if ((uVar27 & 1) == 0) {
              FUN_100006cdc(uVar22,uVar14);
              IVar10 = 0;
            }
            else {
              puVar13 = &_OBJC_CLASS___NSImage;
              _objc_allocWithZone();
              uVar27 = uVar22;
              __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar22,uVar14);
              IVar10 = _objc_msgSend((ID)puVar13,"initWithData:",uVar27);
              FUN_100006cdc(uVar22,uVar14);
            }
          }
          else {
            _swift_errorRelease(uVar24);
            (*pcVar21)(uVar15,lVar5);
            IVar10 = 0;
            uVar24 = 0;
          }
          uVar22 = local_158;
          _objc_msgSend(local_160,"setImage:",IVar10);
        }
        else {
          _objc_msgSend(IVar10,"setImage:",0);
          uVar22 = local_158;
        }
        local_128 = uVar24;
        IVar10 = _objc_msgSend(local_108,"orderFrontRegardless");
        FUN_1000b6da8();
        if (*(char *)(IVar10 + 0x50) == '\x01') {
          puVar17 = &DAT_100a77208;
          if (DAT_100a73b50 != -1) {
            _swift_once(&DAT_100a73b50,FUN_1000c5570);
            puVar17 = &DAT_100a77208;
          }
        }
        else {
          puVar17 = &DAT_100a77200;
          if (DAT_100a73b48 != -1) {
            _swift_once(&DAT_100a73b48,FUN_1000c554c);
            puVar17 = &DAT_100a77200;
          }
        }
        uVar14 = *puVar17;
        _swift_release();
        IVar10 = local_108;
        _objc_msgSend(local_108,"setLevel:",uVar14);
        _objc_msgSend(IVar10,"setSharingType:",0);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)(uVar15 - 0x20) = IVar9;
        *(ulong *)(uVar15 - 0x18) = uVar6;
        *(ulong *)(uVar15 - 0x10) = uVar8;
        *(ID *)(uVar15 - 8) = IVar10;
        FUN_1003fb48c(FUN_1000c1320,uVar15 - 0x30,0xd00000000000009f,
                      (ulong)local_148 | 0x8000000000000000,0xd000000000000021,
                      (ulong)local_150 | 0x8000000000000000,0x284,0);
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = local_118;
        uVar24 = local_128;
        if (local_140 == uVar16) {
          return 1;
        }
      }
LAB_1000b9794:
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  return 0;
}

