// rea decompile_all
// name: FUN_1001dbd60
// address: 0x1001dbd60
// body: available
// range: 0x1001dbd60-0x1001dc777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001dbd60(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  ulong uVar16;
  long extraout_x8;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 auStack_140 [2];
  uint auStack_130 [2];
  undefined8 uStack_128;
  undefined *local_120;
  long local_118;
  undefined8 *local_110;
  long local_108;
  undefined8 *local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  int local_ac;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar8 = 0;
  local_120 = param_1;
  FUN_1000aaa7c();
  local_118 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_118 + 0x40));
  puVar17 = (undefined8 *)((long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_100 = puVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar19 = (long)puVar17 - extraout_x12;
  local_108 = lVar19;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = _TtC14UURemoteServer15TerminalManager::sessions;
  puVar17 = (undefined8 *)(lVar19 - extraout_x12_00);
  local_e0 = _TtC14UURemoteServer15TerminalManager::sessions;
  puVar13 = auStack_80;
  uVar16 = 0;
  local_110 = puVar17;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,puVar13,0,0);
  lVar19 = *(long *)(unaff_x20 + lVar8);
  lVar8 = *(long *)(lVar19 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar8 != 0) {
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRetain_n(lVar19,2);
    uVar16 = 0;
    FUN_10007018c(0,lVar8);
    puVar15 = local_a8;
    uVar25 = lVar19 + 0x40;
    uVar9 = uVar25;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar25,~(-1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f)));
    lVar24 = 0;
    local_f8 = lVar19 + 0x48;
    local_f0 = lVar8;
    local_e8 = uVar25;
    do {
      if (((long)uVar9 < 0) || (1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f) <= (long)uVar9)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc75c);
        (*pcVar6)();
      }
      uVar26 = uVar9 >> 6;
      uVar27 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar25 + uVar26 * 8) & uVar27) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc760);
        (*pcVar6)();
      }
      iVar7 = *(int *)(lVar19 + 0x24);
      lVar8 = *(long *)(*(long *)(lVar19 + 0x38) + uVar9 * 8);
      uVar3 = *(undefined4 *)(lVar8 + 0x10);
      lVar20 = *(long *)(lVar8 + _TtC14UURemoteServer15TerminalSession::tmuxController);
      uVar1 = *(undefined8 *)(lVar8 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
      uVar2 = ((undefined8 *)(lVar8 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
      uVar22 = *(ulong *)(puVar15 + 0x10);
      uVar25 = *(ulong *)(puVar15 + 0x18);
      local_a8 = puVar15;
      _swift_bridgeObjectRetain(uVar2);
      if (uVar25 >> 1 <= uVar22) {
        uVar16 = 1;
        FUN_10007018c(1 < uVar25,uVar22 + 1);
        puVar15 = local_a8;
      }
      uVar25 = local_e8;
      *(ulong *)(puVar15 + 0x10) = uVar22 + 1;
      *(undefined4 *)(puVar15 + uVar22 * 0x18 + 0x20) = uVar3;
      puVar15[uVar22 * 0x18 + 0x24] = lVar20 != 0;
      *(undefined8 *)(puVar15 + uVar22 * 0x18 + 0x28) = uVar1;
      *(undefined8 *)(puVar15 + uVar22 * 0x18 + 0x30) = uVar2;
      uVar22 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
      if ((long)uVar22 <= (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc764);
        (*pcVar6)();
      }
      uVar18 = *(ulong *)(local_e8 + uVar26 * 8);
      if ((uVar18 & uVar27) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc768);
        (*pcVar6)();
      }
      if (iVar7 != *(int *)(lVar19 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc76c);
        (*pcVar6)();
      }
      uVar18 = uVar18 & -2L << (uVar9 & 0x3f);
      if (uVar18 == 0) {
        lVar8 = uVar26 << 6;
        puVar21 = (ulong *)(local_f8 + uVar26 * 8);
        do {
          uVar26 = uVar26 + 1;
          if (uVar22 + 0x3f >> 6 <= uVar26) {
            uVar16 = 0;
            FUN_10003f79c(uVar9);
            goto LAB_1001dbeb0;
          }
          uVar27 = *puVar21;
          lVar8 = lVar8 + 0x40;
          puVar21 = puVar21 + 1;
        } while (uVar27 == 0);
        uVar16 = 0;
        FUN_10003f79c(uVar9);
        uVar9 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar22 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar8;
      }
      else {
        uVar26 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
        uVar22 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
LAB_1001dbeb0:
      lVar24 = lVar24 + 1;
      uVar9 = uVar22;
    } while (lVar24 != local_f0);
    puVar13 = (undefined1 *)0x2;
    _swift_bridgeObjectRelease_n(lVar19);
  }
  lVar8 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalManager::tmuxController);
  puVar10 = PTR___swiftEmptySetSingleton_100995eb0;
  if (lVar8 != 0) {
    lVar19 = lVar8;
    _swift_retain();
    FUN_1000a38a8();
    if ((uVar16 & 1) != 0) {
      _swift_bridgeObjectRelease(puVar15);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar17[-2] = lVar19;
      puVar17[-1] = puVar13;
      FUN_1003fb4bc(FUN_1001e44b8,puVar17 + -4,0xd000000000000095,0x8000000100889250,
                    0xd000000000000025,0x800000010089ed90,0x2c9,0);
      puVar15 = local_120;
      _swift_bridgeObjectRetain(local_120);
      FUN_1000aacb4(lVar19,puVar13,1);
      _swift_release(lVar8);
      return puVar15;
    }
    uVar16 = *(ulong *)(lVar19 + 0x10);
    lVar24 = local_118;
    puVar23 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar16 != 0) {
      uVar25 = 0;
      do {
        puVar5 = local_110;
        if (*(ulong *)(lVar19 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc778);
          (*pcVar6)();
        }
        uVar26 = (ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff);
        lVar20 = *(long *)(lVar24 + 0x48);
        FUN_1000aac2c(lVar19 + uVar26 + lVar20 * uVar25,local_110);
        uVar9 = 0x65746f6d65727575;
        __sSS9hasPrefixySbSSF(0x65746f6d65727575,0xe90000000000002d,*puVar5,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          FUN_1000aac70(puVar5);
        }
        else {
          FUN_1000aaad0(puVar5,local_108);
          puVar10 = puVar23;
          _swift_isUniquelyReferenced_nonNull_native();
          local_a8 = puVar23;
          if (((ulong)puVar10 & 1) == 0) {
            FUN_10006fd00(0,*(long *)(puVar23 + 0x10) + 1,1);
            lVar24 = local_118;
          }
          uVar9 = *(ulong *)(local_a8 + 0x10);
          if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar9) {
            FUN_10006fd00(1 < *(ulong *)(local_a8 + 0x18),uVar9 + 1,1);
            lVar24 = local_118;
          }
          puVar23 = local_a8;
          *(ulong *)(local_a8 + 0x10) = uVar9 + 1;
          FUN_1000aaad0(local_108,local_a8 + uVar9 * lVar20 + uVar26);
        }
        uVar25 = uVar25 + 1;
      } while (uVar16 != uVar25);
    }
    FUN_1000aacb4(lVar19,puVar13,0);
    lVar19 = *(long *)(puVar23 + 0x10);
    if (lVar19 == 0) {
      _swift_release(puVar23);
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fae0(0,lVar19,0);
      puVar13 = puVar23 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff));
      lVar24 = *(long *)(lVar24 + 0x48);
      do {
        puVar12 = local_a8;
        puVar5 = local_100;
        FUN_1000aac2c(puVar13,local_100);
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        _swift_bridgeObjectRetain(uVar2);
        FUN_1000aac70(puVar5);
        uVar16 = *(ulong *)(puVar12 + 0x10);
        local_a8 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar16) {
          FUN_10006fae0(1 < *(ulong *)(puVar12 + 0x18),uVar16 + 1,1);
        }
        puVar12 = local_a8;
        *(ulong *)(local_a8 + 0x10) = uVar16 + 1;
        *(undefined8 *)(local_a8 + uVar16 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(local_a8 + uVar16 * 0x10 + 0x28) = uVar2;
        puVar13 = puVar13 + lVar24;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      _swift_release(puVar23);
    }
    puVar10 = puVar12;
    FUN_100074e04(puVar12);
    _swift_release(lVar8);
    _swift_bridgeObjectRelease(puVar12);
  }
  puVar23 = local_120;
  puVar13 = puVar15;
  FUN_1001e42a0(puVar15,puVar10);
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(puVar15);
  lVar8 = *(long *)(puVar13 + 0x10);
  puVar10 = puVar13;
  if (lVar8 == 0) {
    _swift_bridgeObjectRetain(puVar23);
  }
  else {
    FUN_100401b14();
    lVar19 = 0x20;
    do {
      uVar4 = *(uint *)(puVar13 + lVar19);
      uVar16 = (ulong)uVar4;
      ppuVar14 = &local_a8;
      _swift_beginAccess(unaff_x20 + local_e0,ppuVar14,0x21,0);
      thunk_FUN_1001a2c34();
      lVar24 = local_e0;
      if (((ulong)ppuVar14 & 1) != 0) {
        iVar7 = (int)*(undefined8 *)(unaff_x20 + local_e0);
        _swift_isUniquelyReferenced_nonNull_native();
        local_88 = *(undefined **)(unaff_x20 + lVar24);
        *(undefined8 *)(unaff_x20 + lVar24) = 0x8000000000000000;
        if (iVar7 == 0) {
          FUN_100064e48();
        }
        puVar15 = local_88;
        _swift_release(*(undefined8 *)(*(long *)(local_88 + 0x38) + uVar16 * 8));
        thunk_FUN_10006cc48(uVar16,puVar15);
        *(undefined **)(unaff_x20 + lVar24) = puVar15;
      }
      _swift_endAccess(&local_a8);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(puVar17 + -2) = uVar4;
      FUN_1003fb48c(FUN_1001e44b0,puVar17 + -4,0xd000000000000095,0x8000000100889250,
                    0xd000000000000025,0x800000010089ed90,0x2d5,0);
      lVar19 = lVar19 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_a8 = (undefined *)0x0;
    local_a0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x12);
    _swift_bridgeObjectRelease(local_a0);
    local_a8 = &DAT_d000000000000010;
    local_a0 = 0x800000010089edc0;
    puVar15 = PTR___ss6UInt32VN_100995dc0;
    __sSa11descriptionSSvg(puVar13,PTR___ss6UInt32VN_100995dc0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar15);
    uVar1 = local_a0;
    FUN_1001e03b8(local_a8,local_a0);
    _swift_bridgeObjectRelease(uVar1);
    FUN_100074e98();
    _swift_bridgeObjectRelease(puVar13);
    puVar15 = local_120;
    uVar16 = *(ulong *)(local_120 + 0x10);
    puVar23 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar16 != 0) {
      uVar25 = 0;
      do {
        if (uVar16 <= uVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc770);
          (*pcVar6)();
        }
        uVar9 = uVar25 + 1;
        if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001dc774);
          (*pcVar6)();
        }
        lVar19 = *(long *)(puVar15 + uVar25 * 8 + 0x20);
        lVar8 = *(long *)(lVar19 + 0x10);
        _swift_bridgeObjectRetain(lVar19);
        if (lVar8 != 0) {
          _swift_bridgeObjectRetain(lVar19);
          uVar25 = 0xea00000000006469;
          lVar8 = 0x5f6e6f6973736573;
          FUN_1001a2c70(0x5f6e6f6973736573);
          if ((uVar25 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar19);
          }
          else {
            FUN_10003e8bc(*(long *)(lVar19 + 0x38) + lVar8 * 0x20,&local_a8);
            _swift_bridgeObjectRelease(lVar19);
            piVar11 = &local_ac;
            _swift_dynamicCast(piVar11,&local_a8,PTR___sypN_100995e88 + 8,
                               PTR___ss6UInt32VN_100995dc0,6);
            iVar7 = local_ac;
            if ((((ulong)piVar11 & 1) != 0) && (*(long *)(puVar10 + 0x10) != 0)) {
              uVar25 = *(ulong *)(puVar10 + 0x28);
              __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar25,local_ac,4);
              uVar26 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
              uVar25 = uVar25 & (uVar26 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar10 + (uVar25 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar25 & 0x3f)
                  & 1) != 0) {
                do {
                  if (*(int *)(*(long *)(puVar10 + 0x30) + uVar25 * 4) == iVar7) {
                    _swift_bridgeObjectRelease(lVar19);
                    goto joined_r0x0001001dc6ec;
                  }
                  uVar25 = uVar25 + 1 & ~uVar26;
                } while ((*(ulong *)(puVar10 + (uVar25 >> 3 & 0xffffffffffffff8) + 0x38) >>
                          (uVar25 & 0x3f) & 1) != 0);
              }
            }
          }
        }
        puVar12 = puVar23;
        _swift_isUniquelyReferenced_nonNull_native();
        local_88 = puVar23;
        if (((ulong)puVar12 & 1) == 0) {
          FUN_10006fef4(0,*(long *)(puVar23 + 0x10) + 1,1);
        }
        uVar25 = *(ulong *)(local_88 + 0x10);
        if (*(ulong *)(local_88 + 0x18) >> 1 <= uVar25) {
          FUN_10006fef4(1 < *(ulong *)(local_88 + 0x18),uVar25 + 1,1);
        }
        *(ulong *)(local_88 + 0x10) = uVar25 + 1;
        *(long *)(local_88 + uVar25 * 8 + 0x20) = lVar19;
        puVar23 = local_88;
joined_r0x0001001dc6ec:
        uVar25 = uVar9;
      } while (uVar9 != uVar16);
    }
  }
  _swift_bridgeObjectRelease(puVar10);
  return puVar23;
}

