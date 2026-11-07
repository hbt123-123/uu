// rea decompile_all
// name: FUN_100632a4c
// address: 0x100632a4c
// body: available
// range: 0x100632a4c-0x1006337a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined * FUN_100632a4c(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong in_x4;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  size_t sVar16;
  long unaff_x20;
  long unaff_x21;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  size_t sVar21;
  undefined *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *local_100;
  undefined *puStack_f8;
  ulong local_f0;
  undefined *local_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *local_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined *local_58;
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_80,1,0);
  _swift_unknownObjectRetain(param_1);
  FUN_100628bc8();
  if ((in_x4 & 1) == 0) {
    lVar18 = *(long *)(*(long *)(unaff_x20 + 0x48) + 0x10);
    lVar23 = *(long *)(unaff_x20 + 0x10);
    _swift_beginAccess(unaff_x20 + 0x20,auStack_c0,0,0);
    FUN_1000b142c(unaff_x20 + 0x20,auStack_a8);
    lVar20 = lStack_88;
    puVar4 = local_90;
    FUN_10003f030(auStack_a8,local_90);
    (**(code **)(lVar20 + 0x10))(puVar4,lVar20);
    if (SCARRY8(lVar23,(long)puVar4)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10063373c);
      (*pcVar17)();
    }
    FUN_10003f094(auStack_a8);
    if (lVar18 < (long)(puVar4 + lVar23)) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_d8,0,0);
  FUN_1000b142c(unaff_x20 + 0x20,auStack_a8);
  lVar20 = lStack_88;
  puVar4 = local_90;
  FUN_10003f030(auStack_a8,local_90);
  (**(code **)(lVar20 + 0x10))(puVar4,lVar20);
  FUN_10003f094(auStack_a8);
  puVar15 = *(undefined **)(unaff_x20 + 0x48);
  puVar8 = puVar15;
  if ((long)puVar4 < 1) {
    _swift_bridgeObjectRetain(puVar15);
  }
  else {
    lVar18 = *(long *)(puVar15 + 0x10);
    FUN_1000b142c(unaff_x20 + 0x20,auStack_a8);
    lVar20 = lStack_88;
    puVar4 = local_90;
    FUN_10003f030(auStack_a8,local_90);
    pcVar17 = *(code **)(lVar20 + 0x10);
    _swift_bridgeObjectRetain(puVar15);
    (*pcVar17)(puVar4,lVar20);
    uVar19 = lVar18 - (long)puVar4;
    if (SBORROW8(lVar18,(long)puVar4)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100633740);
      (*pcVar17)();
    }
    FUN_10003f094(auStack_a8);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100633744);
      (*pcVar17)();
    }
    uVar26 = *(ulong *)(puVar15 + 0x10);
    if (uVar19 <= *(ulong *)(puVar15 + 0x10)) {
      uVar26 = uVar19;
    }
    uVar24 = 1;
    if (uVar19 != 0) {
      uVar24 = uVar26 * 2 + 1;
    }
    uVar3 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = puVar15;
    _swift_unknownObjectRetain_n(puVar15,2);
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar15);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    uVar19 = *(ulong *)(puVar4 + 0x10);
    _swift_release();
    if (uVar19 == uVar24 >> 1) {
      _swift_dynamicCastClass(puVar15,uVar3);
      _swift_unknownObjectRelease(puVar15);
      if (puVar8 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar15);
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
    }
    else {
      _swift_unknownObjectRelease();
      thunk_FUN_100629d98(puVar15,puVar15 + 0x20,0,uVar24);
      _swift_unknownObjectRelease(puVar15);
    }
  }
  uVar3 = *(undefined8 *)(puVar8 + 0x10);
  _swift_bridgeObjectRetain(puVar8);
  puVar4 = (undefined *)0x0;
  FUN_1006295a0(0,uVar3,0,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar26 = *(ulong *)(unaff_x20 + 0x10);
  uVar19 = *(ulong *)(puVar8 + 0x10);
  if ((long)uVar26 < 1) {
    if (uVar19 == 0) {
      if (uVar26 != 0) goto LAB_100632cdc;
    }
    else if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100633730);
      (*pcVar17)();
    }
    uVar24 = 0;
  }
  else {
    uVar24 = uVar26;
    if (uVar26 <= uVar19) goto LAB_100632ce0;
LAB_100632cdc:
    uVar24 = uVar19;
  }
LAB_100632ce0:
  uVar19 = 0;
  puVar15 = puVar8 + 0x20;
  uVar9 = 0;
  do {
    uVar11 = *(ulong *)(puVar8 + 0x10);
    uVar25 = uVar24;
    uVar10 = uVar9;
    do {
      uVar13 = uVar25;
      if (uVar10 == uVar11) {
        _swift_bridgeObjectRelease(puVar8);
        if (uVar19 != 0) {
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100633770);
            (*pcVar17)();
          }
          if (*(ulong *)(*(long *)(unaff_x20 + 0x48) + 0x10) < uVar19) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100633774);
            (*pcVar17)();
          }
          FUN_100082518(0,uVar19,FUN_1006295a0,thunk_FUN_10055736c);
        }
        if ((in_x4 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar8);
          return puVar4;
        }
        lVar20 = *(long *)(puVar8 + 0x10);
        _swift_bridgeObjectRelease(puVar8);
        if (lVar20 != 0) goto LAB_100633548;
        FUN_1000b142c(unaff_x20 + 0x20,&local_100);
        puVar8 = &DAT_100ab7f00;
        FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
        puVar15 = &DAT_100ab8250;
        FUN_100004bb4(&DAT_100ab8250,&DAT_100849448);
        puVar6 = &local_130;
        _swift_dynamicCast(puVar6,&local_100,puVar8,puVar15,6);
        if (((ulong)puVar6 & 1) == 0) {
          local_110 = 0;
          uStack_128 = 0;
          local_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          FUN_100040bb4(&local_130,&DAT_100ab8258,&DAT_100849450);
          goto LAB_100633548;
        }
        FUN_1000a0074(&local_130,auStack_a8);
        uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
        FUN_1000b142c(unaff_x20 + 0x20,&local_100);
        puVar7 = local_e8;
        FUN_10003f030(&local_100,local_e8);
        pcVar17 = *(code **)(lStack_e0 + 0x10);
        _swift_bridgeObjectRetain(uVar3);
        (*pcVar17)(puVar7,lStack_e0);
        FUN_1006301ec();
        FUN_10003f094(&local_100);
        lVar20 = lStack_88;
        puVar22 = local_90;
        FUN_1000ce034(auStack_a8,local_90);
        puVar12 = puVar7;
        (**(code **)(lVar20 + 0x10))(puVar7,uVar3,puVar8,puVar15,puVar22,lVar20);
        if (unaff_x21 != 0) {
          _swift_unknownObjectRelease(puVar7);
          _swift_bridgeObjectRelease(puVar4);
          FUN_10003f094(auStack_a8);
          return puVar8;
        }
        _swift_unknownObjectRelease(puVar7);
        _swift_unknownObjectRelease(puVar12);
        uVar19 = *(long *)(puVar4 + 0x10) << 1 | 1;
        FUN_1000ce034(auStack_a8,local_90);
        puVar8 = puVar4 + 0x20;
        lVar20 = 0;
        puVar15 = puVar4;
        (**(code **)(lStack_88 + 0x18))(puVar4,puVar8,0,uVar19,local_90,lStack_88);
        _swift_bridgeObjectRelease(puVar4);
        if ((uVar19 & 1) == 0) {
LAB_100633628:
          puVar7 = puVar15;
          thunk_FUN_100629d98(puVar15,puVar8,lVar20,uVar19);
LAB_10063370c:
          _swift_unknownObjectRelease(puVar15);
          puVar4 = puVar7;
        }
        else {
          uVar3 = 0;
          __ss28__ContiguousArrayStorageBaseCMa(0);
          puVar4 = puVar15;
          _swift_unknownObjectRetain_n(puVar15,3);
          _swift_dynamicCastClass();
          if (puVar4 == (undefined *)0x0) {
            _swift_unknownObjectRelease(puVar15);
            puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
          }
          lVar18 = *(long *)(puVar4 + 0x10);
          _swift_release();
          if (SBORROW8(uVar19 >> 1,lVar20)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10063378c);
            (*pcVar17)();
          }
          if (lVar18 != (uVar19 >> 1) - lVar20) {
            _swift_unknownObjectRelease_n(puVar15,2);
            goto LAB_100633628;
          }
          puVar4 = puVar15;
          _swift_dynamicCastClass(puVar15,uVar3);
          _swift_unknownObjectRelease_n(puVar15,2);
          puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (puVar4 == (undefined *)0x0) goto LAB_10063370c;
        }
        FUN_10003f094(auStack_a8);
LAB_100633548:
        puVar8 = puVar4;
        FUN_10066af14(puVar4,*(undefined1 *)(unaff_x20 + 0x18));
        _swift_bridgeObjectRelease(puVar4);
        return puVar8;
      }
      if (((long)uVar11 < (long)uVar10) || (uVar10 = uVar11 - uVar13, (long)uVar11 < (long)uVar13))
      {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100633604);
        (*pcVar17)();
      }
      uVar25 = uVar11;
      if ((long)uVar26 < 1) {
        if ((0 < (long)uVar10) || ((long)uVar10 <= (long)uVar26)) goto LAB_100632d50;
      }
      else if (uVar26 <= uVar10) {
LAB_100632d50:
        uVar25 = uVar13 + uVar26;
        if (SCARRY8(uVar13,uVar26)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100633648);
          (*pcVar17)();
        }
      }
      if ((long)uVar25 < (long)uVar13) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100633608);
        (*pcVar17)();
      }
      puVar7 = puVar15;
      local_58 = puVar8;
      if ((in_x4 & 1) != 0) {
        if (SCARRY8(uVar19,uVar24 - uVar9)) goto LAB_100633720;
        puVar22 = (undefined *)(uVar24 << 1 | 1);
        if (uVar19 + (uVar24 - uVar9) != uVar11) {
          _swift_bridgeObjectRetain(puVar8);
          bVar2 = false;
          goto LAB_100632f98;
        }
        FUN_1000b142c(unaff_x20 + 0x20,&local_100);
        _swift_bridgeObjectRetain(puVar8);
        puVar12 = &DAT_100ab7f00;
        FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
        puVar5 = &DAT_100ab8250;
        FUN_100004bb4(&DAT_100ab8250,&DAT_100849448);
        puVar6 = &local_130;
        _swift_dynamicCast(puVar6,&local_100,puVar12,puVar5,6);
        if (((ulong)puVar6 & 1) == 0) {
          local_110 = 0;
          uStack_128 = 0;
          local_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          FUN_100040bb4(&local_130,&DAT_100ab8258,&DAT_100849450);
          bVar2 = true;
          goto LAB_100632f98;
        }
        FUN_1000a0074(&local_130,auStack_a8);
        lVar18 = *(long *)(unaff_x20 + 0x48);
        FUN_1000b142c(unaff_x20 + 0x20,&local_100);
        lVar20 = lStack_e0;
        puVar7 = local_e8;
        FUN_10003f030(&local_100,local_e8);
        pcVar17 = *(code **)(lVar20 + 0x10);
        _swift_bridgeObjectRetain(lVar18);
        (*pcVar17)(puVar7,lVar20);
        if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100633780);
          (*pcVar17)();
        }
        puVar12 = *(undefined **)(lVar18 + 0x10);
        lVar20 = 0;
        if (puVar7 <= puVar12) {
          lVar20 = (long)puVar12 - (long)puVar7;
        }
        FUN_10003f094(&local_100);
        local_100 = puVar8;
        puStack_f8 = puVar15;
        local_f0 = uVar9;
        local_e8 = puVar22;
        _swift_bridgeObjectRetain(puVar8);
        FUN_100634a64(lVar18,lVar18 + 0x20,lVar20,(long)puVar12 << 1 | 1,FUN_10063a0a0,FUN_100630840
                      ,FUN_100634008,thunk_FUN_10055736c);
        _swift_bridgeObjectRelease(lVar18);
        lVar20 = lStack_88;
        puVar1 = local_90;
        puVar5 = local_e8;
        uVar9 = local_f0;
        puVar7 = puStack_f8;
        puVar12 = local_100;
        FUN_1000ce034(auStack_a8,local_90);
        local_58 = puVar12;
        puVar22 = puVar5;
        (**(code **)(lVar20 + 0x10))(puVar12,puVar7,uVar9,puVar5,puVar1,lVar20);
        if (unaff_x21 == 0) {
          _swift_unknownObjectRelease(puVar12);
          _swift_bridgeObjectRelease(puVar8);
          FUN_10003f094(auStack_a8);
          bVar2 = true;
          goto LAB_100632f98;
        }
        _swift_bridgeObjectRelease_n(puVar8,3);
        _swift_unknownObjectRelease(puVar12);
        _swift_bridgeObjectRelease(puVar4);
        goto LAB_100633684;
      }
      if (SBORROW8(uVar11,uVar19)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063360c);
        (*pcVar17)();
      }
      uVar10 = uVar13;
    } while ((long)(uVar11 - uVar19) < (long)uVar26);
    if (SCARRY8(uVar19,uVar24 - uVar9)) {
LAB_100633720:
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100633724);
      (*pcVar17)();
    }
    bVar2 = uVar19 + (uVar24 - uVar9) == uVar11;
    puVar22 = (undefined *)(uVar24 << 1 | 1);
    _swift_bridgeObjectRetain(puVar8);
LAB_100632f98:
    uVar13 = (ulong)puVar22 >> 1;
    uVar10 = in_x4;
    uVar11 = in_x4;
    if (uVar9 != uVar13) {
      _swift_beginAccess(unaff_x20 + 0x20,auStack_a8,0x21,0);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar20 = *(long *)(unaff_x20 + 0x40);
      FUN_1000ce034(unaff_x20 + 0x20,uVar3);
      puVar12 = local_58;
      (**(code **)(lVar20 + 0x20))(local_58,puVar7,uVar9,puVar22,uVar3,lVar20);
      _swift_endAccess(auStack_a8);
      sVar16 = *(size_t *)(puVar12 + 0x10);
      lVar20 = *(long *)(puVar4 + 0x10);
      if (SCARRY8(lVar20,sVar16)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100633734);
        (*pcVar17)();
      }
      puVar7 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar7 == 0) || ((long)(*(ulong *)(puVar4 + 0x18) >> 1) < (long)(lVar20 + sVar16)))
      {
        FUN_1006295a0();
        puVar4 = puVar7;
      }
      if (*(long *)(puVar12 + 0x10) == 0) {
        _swift_bridgeObjectRelease(puVar12);
        uVar10 = in_x4 & 0xffffffff;
        uVar11 = in_x4 & 0xffffffff;
        if (sVar16 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100633738);
          (*pcVar17)();
        }
      }
      else {
        if ((long)((*(ulong *)(puVar4 + 0x18) >> 1) - *(long *)(puVar4 + 0x10)) < (long)sVar16) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100633778);
          (*pcVar17)();
        }
        _memcpy(puVar4 + *(long *)(puVar4 + 0x10) + 0x20,puVar12 + 0x20,sVar16);
        _swift_bridgeObjectRelease(puVar12);
        uVar10 = in_x4 & 0xffffffff;
        if (sVar16 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),sVar16)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10063377c);
            (*pcVar17)();
          }
          *(size_t *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + sVar16;
        }
      }
    }
    in_x4 = uVar10;
    if (((uVar11 & 1) != 0) && (bVar2)) {
      FUN_1000b142c(unaff_x20 + 0x20,&local_100);
      puVar7 = &DAT_100ab7f00;
      FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
      puVar22 = &DAT_100ab8250;
      FUN_100004bb4(&DAT_100ab8250,&DAT_100849448);
      puVar6 = &local_130;
      _swift_dynamicCast(puVar6,&local_100,puVar7,puVar22,6);
      if (((ulong)puVar6 & 1) == 0) {
        local_110 = 0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        FUN_100040bb4(&local_130,&DAT_100ab8258,&DAT_100849450);
      }
      else {
        FUN_1000a0074(&local_130,auStack_a8);
        lVar20 = lStack_88;
        puVar5 = local_90;
        uVar11 = *(long *)(puVar4 + 0x10) << 1 | 1;
        FUN_1000ce034(auStack_a8,local_90);
        puVar7 = puVar4 + 0x20;
        uVar10 = 0;
        puVar22 = puVar4;
        (**(code **)(lVar20 + 0x18))();
        if (unaff_x21 != 0) {
          _swift_unknownObjectRelease(local_58);
          _swift_bridgeObjectRelease(puVar4);
          _swift_bridgeObjectRelease_n(puVar8,2);
LAB_100633684:
          FUN_10003f094(auStack_a8);
          return puVar5;
        }
        _swift_bridgeObjectRelease(puVar4);
        uVar14 = uVar11 >> 1;
        if ((uVar11 & 1) == 0) {
          sVar16 = uVar14 - uVar10;
          puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (SBORROW8(uVar14,uVar10)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100633784);
            (*pcVar17)();
          }
joined_r0x0001006333a4:
          PTR___swiftEmptyArrayStorage_100995ea0 = puVar12;
          if (sVar16 != 0) {
            if (0 < (long)sVar16) {
              puVar12 = &DAT_100ab7e50;
              FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
              _swift_allocObject();
              puVar4 = puVar12;
              _malloc_size();
              *(size_t *)(puVar12 + 0x10) = sVar16;
              *(long *)(puVar12 + 0x18) = (long)puVar4 * 2 + -0x40;
            }
            if (uVar10 == uVar14) {
              _swift_unknownObjectRelease(puVar22);
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x1006337a4);
              (*pcVar17)();
            }
            _memcpy(puVar12 + 0x20,puVar7 + uVar10,sVar16);
          }
LAB_10063335c:
          puVar4 = puVar12;
          _swift_unknownObjectRelease(puVar22);
        }
        else {
          uVar3 = 0;
          __ss28__ContiguousArrayStorageBaseCMa(0);
          puVar4 = puVar22;
          _swift_unknownObjectRetain_n(puVar22,3);
          _swift_dynamicCastClass();
          if (puVar4 == (undefined *)0x0) {
            _swift_unknownObjectRelease(puVar22);
            puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
          }
          sVar21 = *(size_t *)(puVar4 + 0x10);
          _swift_release();
          sVar16 = uVar14 - uVar10;
          if (SBORROW8(uVar14,uVar10)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100633788);
            (*pcVar17)();
          }
          if (sVar21 != sVar16) {
            _swift_unknownObjectRelease_n(puVar22,2);
            puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
            goto joined_r0x0001006333a4;
          }
          puVar4 = puVar22;
          _swift_dynamicCastClass(puVar22,uVar3);
          _swift_unknownObjectRelease_n(puVar22,2);
          puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (puVar4 == (undefined *)0x0) goto LAB_10063335c;
        }
        FUN_10003f094(auStack_a8);
      }
    }
    _swift_unknownObjectRelease(local_58);
    if (SBORROW8(uVar13,uVar9)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100633728);
      (*pcVar17)();
    }
    bVar2 = SCARRY8(uVar19,uVar13 - uVar9);
    uVar19 = uVar19 + (uVar13 - uVar9);
    uVar9 = uVar24;
    uVar24 = uVar25;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10063372c);
      (*pcVar17)();
    }
  } while( true );
}

