// rea decompile_all
// name: FUN_10002a948
// address: 0x10002a948
// body: available
// range: 0x10002a948-0x10002b18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010002b178) */

void FUN_10002a948(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  class_t *self;
  undefined *puVar11;
  undefined *puVar12;
  ID IVar13;
  ID IVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined **ppuVar23;
  ulong uVar24;
  undefined1 auStack_150 [16];
  uint local_140 [2];
  undefined *local_138;
  undefined *local_c0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  uVar8 = (uint)param_1;
  uVar15 = param_1;
  FUN_10001920c();
  thunk_FUN_10004b080();
  uVar9 = uVar15;
  FUN_100045da4();
  _swift_bridgeObjectRelease(uVar15);
  uVar15 = *(ulong *)(uVar9 + 0x10);
  if (uVar15 == 0) {
    _swift_bridgeObjectRelease(uVar9);
    local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x88,auStack_80,0,0);
    uVar17 = 0;
    local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      if (*(ulong *)(uVar9 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10002b034);
        (*pcVar7)();
      }
      uVar1 = *(uint *)(uVar9 + 0x20 + uVar17 * 4);
      lVar18 = *(long *)(unaff_x20 + 0x88);
      ppuVar23 = *(undefined ***)(lVar18 + 0x10);
      if (ppuVar23 == (undefined **)0x0) {
        _swift_bridgeObjectRetain(lVar18);
        puVar21 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        puVar21 = &DAT_100a759b8;
        FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
        _swift_allocObject();
        puVar12 = puVar21;
        _malloc_size();
        puVar11 = puVar12 + -0x1d;
        if (0x1f < (long)puVar12) {
          puVar11 = puVar12 + -0x20;
        }
        *(undefined ***)(puVar21 + 0x10) = ppuVar23;
        *(long *)(puVar21 + 0x18) = ((long)puVar11 >> 2) << 1;
        ppuVar10 = &local_a8;
        thunk_FUN_100074010(ppuVar10,puVar21 + 0x20,ppuVar23,lVar18);
        uVar6 = local_88;
        uVar5 = uStack_90;
        uVar4 = local_98;
        uVar20 = uStack_a0;
        puVar11 = local_a8;
        _swift_bridgeObjectRetain_n(lVar18,2);
        FUN_10003f638(puVar11,uVar20,uVar4,uVar5,uVar6);
        if (ppuVar10 != ppuVar23) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10002b038);
          (*pcVar7)();
        }
      }
      local_a8 = puVar21;
      FUN_100046958(&local_a8);
      _swift_bridgeObjectRelease(lVar18);
      puVar21 = local_a8;
      lVar18 = *(long *)(local_a8 + 0x10);
      if (lVar18 != 0) {
        lVar22 = 0x20;
        do {
          uVar2 = *(uint *)(puVar21 + lVar22);
          uVar24 = (ulong)uVar2;
          ppuVar23 = &local_a8;
          _swift_beginAccess(unaff_x20 + 0x80,ppuVar23,0x20,0);
          lVar19 = *(long *)(unaff_x20 + 0x80);
          if ((*(long *)(lVar19 + 0x10) == 0) ||
             (uVar16 = uVar24, thunk_FUN_1001a2c34(), ((ulong)ppuVar23 & 1) == 0)) {
            _swift_endAccess(&local_a8);
          }
          else {
            uVar3 = *(uint *)(*(long *)(lVar19 + 0x38) + uVar16 * 4);
            _swift_endAccess(&local_a8);
            if (uVar3 == uVar1) {
              _swift_release(puVar21);
              uVar20 = *(undefined8 *)(unaff_x20 + 0x10);
              self = &objc::class_t::StartVideoCaptureConfig;
              _objc_allocWithZone();
              puVar11 = (undefined *)_objc_msgSend((ID)self,"init");
              FUN_100039cd0(uVar20,puVar11);
              _objc_msgSend((ID)puVar11,"setScreenId:",uVar24);
              FUN_10001aa0c(uVar24);
              _objc_msgSend((ID)puVar11,"setVideoTrackIndex:",uVar24);
              FUN_10001ab44(puVar11);
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              local_140[0] = uVar2;
              local_138 = puVar11;
              FUN_1003fb48c(thunk_FUN_10003ea0c,auStack_150,0xd0000000000000a9,0x8000000100877660,
                            0xd00000000000001a,0x8000000100877a20,0x2a8,0);
              _objc_msgSend((ID)puVar11,"setVideoTrackIndex:",(ulong)uVar1);
              puVar21 = local_c0;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              if ((((int)puVar21 == 0) || ((long)local_c0 < 0)) ||
                 (((ulong)local_c0 >> 0x3e & 1) != 0)) {
                if ((ulong)local_c0 >> 0x3e == 0) {
                  puVar21 = *(undefined **)(((ulong)local_c0 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar21 = (undefined *)((ulong)local_c0 & 0xffffffffffffff8);
                  if ((long)local_c0 < 0) {
                    puVar21 = local_c0;
                  }
                  __ss18_CocoaArrayWrapperV8endIndexSivg(puVar21);
                }
                puVar12 = (undefined *)0x0;
                FUN_100035590(0,puVar21 + 1,1,local_c0,FUN_10006d620,&DAT_100a75a88,
                              &PTR_StartVideoCaptureConfig_100a65818);
                local_c0 = puVar12;
              }
              uVar16 = (ulong)local_c0 & 0xffffffffffffff8;
              uVar24 = *(ulong *)(uVar16 + 0x10);
              if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar24) {
                puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
                FUN_100035590(puVar21,uVar24 + 1,1,local_c0,FUN_10006d620,&DAT_100a75a88,
                              &PTR_StartVideoCaptureConfig_100a65818);
                uVar16 = (ulong)puVar21 & 0xffffffffffffff8;
                local_c0 = puVar21;
              }
              *(ulong *)(uVar16 + 0x10) = uVar24 + 1;
              *(undefined **)(uVar16 + uVar24 * 8 + 0x20) = puVar11;
              goto LAB_10002aa00;
            }
          }
          lVar22 = lVar22 + 4;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      _swift_release(puVar21);
LAB_10002aa00:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar15);
    _swift_bridgeObjectRelease(uVar9);
  }
  if ((ulong)local_c0 >> 0x3e == 0) {
    puVar21 = *(undefined **)(((ulong)local_c0 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar21 = (undefined *)((ulong)local_c0 & 0xffffffffffffff8);
    if ((long)local_c0 < 0) {
      puVar21 = local_c0;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar21 == (undefined *)0x0) {
    _swift_bridgeObjectRelease();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f684,local_140,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                  0x8000000100878030,0x3bb,0);
    FUN_10001adc4(param_1 & 0xffffffff,*(undefined8 *)(unaff_x20 + 0x10),1);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f690,local_140,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                  0x8000000100878030,0x3bd,0);
    FUN_100022b6c(param_1 & 0xffffffff);
  }
  else {
    FUN_100401b14();
    if ((long)puVar21 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10002b178);
      (*pcVar7)();
    }
    puVar11 = (undefined *)0x0;
    lVar18 = *(long *)(unaff_x20 + 0x18);
    do {
      if (((ulong)local_c0 & 0xc000000000000001) == 0) {
        puVar12 = *(undefined **)(local_c0 + (long)puVar11 * 8 + 0x20);
      }
      else {
        puVar12 = puVar11;
        FUN_100169fd0();
      }
      IVar13 = _objc_msgSend((ID)puVar12,"videoTrackIndex");
      uVar15 = param_1 & 0xffffffff;
      _objc_msgSend(*(ID *)(*(long *)(lVar18 + 0x10) +
                           _TtC14UURemoteServer15StreamerManager::controlled),
                    "ControlledStopVideoCapture:videoIndex:",uVar15,IVar13);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(FUN_10003f65c,local_140,0xd000000000000095,0x8000000100877f50,0xd00000000000001f
                    ,0x8000000100877ff0,0x18d,0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_140[0] = uVar8;
      local_138 = puVar12;
      FUN_1003fb48c(FUN_10003f664,auStack_150,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000019,0x8000000100878010,0x9c3,0);
      FUN_10001adc4(uVar15,puVar12,0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_140[0] = uVar8;
      local_138 = puVar12;
      FUN_1003fb48c(FUN_10003f674,auStack_150,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000019,0x8000000100878010,0x9c5,0);
      if ((int)uVar15 != 0) {
        IVar13 = _objc_msgSend((ID)puVar12,"screenId");
        IVar14 = _objc_msgSend((ID)puVar12,"videoTrackIndex");
        FUN_100020c04(IVar13,IVar14);
      }
      puVar11 = puVar11 + 1;
    } while (puVar21 != puVar11);
    _swift_bridgeObjectRelease(local_c0);
    FUN_100022b6c(uVar8);
    FUN_1000162bc(uVar8,0);
  }
  return;
}

