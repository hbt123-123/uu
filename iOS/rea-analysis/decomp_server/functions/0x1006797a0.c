// rea decompile_all
// name: FUN_1006797a0
// address: 0x1006797a0
// body: available
// range: 0x1006797a0-0x10067a1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_1006797a0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t sVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  undefined1 *puVar21;
  ulong uVar22;
  size_t sVar23;
  long unaff_x21;
  code *pcVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined1 auStack_180 [8];
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  undefined *local_58;
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_80,1,0);
  _swift_unknownObjectRetain(param_1);
  FUN_100628bc8();
  lVar19 = *(long *)(unaff_x20 + 0x48);
  lVar26 = *(long *)(lVar19 + 0x10);
  uVar15 = 0;
  _swift_beginAccess(unaff_x20 + 0x18,auStack_98,0);
  uVar31 = *(ulong *)(unaff_x20 + 0x30);
  lVar13 = *(long *)(unaff_x20 + 0x38);
  lVar14 = unaff_x20 + 0x18;
  FUN_10003f030(lVar14,uVar31);
  lVar28 = *(long *)(uVar31 - 8);
  puVar21 = auStack_180 + -(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = uVar31;
  (**(code **)(lVar28 + 0x10))(puVar21,lVar14);
  pcVar24 = *(code **)(lVar13 + 0x10);
  _swift_bridgeObjectRetain(lVar19);
  uVar20 = uVar31;
  (*pcVar24)(uVar31,lVar13);
  (**(code **)(lVar28 + 8))(puVar21,uVar31);
  uVar31 = lVar26 - uVar20;
  if (SBORROW8(lVar26,uVar20)) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1b0);
    (*pcVar24)();
  }
  puVar4 = (undefined *)(uVar31 & ((long)uVar31 >> 0x3f ^ 0xffffffffffffffffU));
  thunk_FUN_1006337a8();
  FUN_1000b142c(unaff_x20 + 0x18,auStack_e8);
  puVar5 = &DAT_100ab7f00;
  FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
  puVar7 = &DAT_100ab8250;
  FUN_100004bb4(&DAT_100ab8250,&DAT_100849448);
  puVar6 = &local_110;
  _swift_dynamicCast(puVar6,auStack_e8,puVar5,puVar7,6);
  if (((ulong)puVar6 & 1) == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_100040bb4(&local_110,&DAT_100ab8258,&DAT_100849450);
  }
  else {
    FUN_1000a0074(&local_110,auStack_c0);
    lVar14 = lStack_a0;
    if ((param_5 & 1) == 0) {
      FUN_10003f094(auStack_c0);
    }
    else {
      puVar30 = *(undefined **)(unaff_x20 + 0x48);
      FUN_1000ce034(auStack_c0,local_a8);
      pcVar24 = *(code **)(lVar14 + 0x10);
      puVar8 = puVar30;
      _swift_bridgeObjectRetain(puVar30);
      (*pcVar24)();
      if (unaff_x21 != 0) goto LAB_10067a030;
      _swift_bridgeObjectRelease(puVar30);
      _swift_unknownObjectRelease(puVar8);
      FUN_10003f094(auStack_c0);
    }
  }
  lVar14 = (param_4 >> 1) - param_3;
  if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1b4);
    (*pcVar24)();
  }
  lVar19 = *(long *)(unaff_x20 + 0x30);
  lVar26 = *(long *)(unaff_x20 + 0x38);
  lVar13 = unaff_x20 + 0x18;
  local_170 = puVar7;
  FUN_10003f030(lVar13,lVar19);
  lVar25 = *(long *)(lVar19 + -8);
  lVar28 = (long)puVar21 - (*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar25 + 0x10))(lVar28,lVar13,lVar19);
  lVar13 = lVar19;
  (**(code **)(lVar26 + 0x10))(lVar19,lVar26);
  (**(code **)(lVar25 + 8))(lVar28,lVar19);
  uVar31 = lVar14 + lVar13;
  if (SCARRY8(lVar14,lVar13)) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1b8);
    (*pcVar24)();
  }
  puVar7 = (undefined *)0x0;
  local_178 = puVar5;
  FUN_1006295a0(0,uVar31 & ((long)uVar31 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  uVar15 = uVar15 >> 1;
  uVar31 = uVar15 - uVar12;
  if (SBORROW8(uVar15,uVar12)) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1bc);
    (*pcVar24)();
  }
  uVar22 = *(ulong *)(unaff_x20 + 0x10);
  uVar20 = uVar15;
  if ((long)uVar22 < 1) {
    if (0 < (long)uVar31 || (long)uVar31 <= (long)uVar22) goto LAB_100679b18;
  }
  else if (((long)uVar31 < 0) || (uVar22 <= uVar31)) {
LAB_100679b18:
    uVar20 = uVar12 + uVar22;
    if (SCARRY8(uVar12,uVar22)) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1c4);
      (*pcVar24)();
    }
  }
  if ((long)uVar20 < (long)uVar12) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1c0);
    (*pcVar24)();
  }
  _swift_unknownObjectRetain(puVar4);
  uVar31 = 0;
  uVar29 = uVar12;
  while (uVar27 = uVar20, uVar29 != uVar15) {
    if ((long)uVar29 < (long)uVar12) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a180);
      (*pcVar24)();
    }
    lVar14 = uVar15 - uVar27;
    if (((long)uVar15 < (long)uVar27) || ((long)uVar15 < (long)uVar29)) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a184);
      (*pcVar24)();
    }
    if ((long)uVar27 < (long)uVar12) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a188);
      (*pcVar24)();
    }
    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a18c);
      (*pcVar24)();
    }
    if ((long)uVar22 < 1) {
      if ((0 < lVar14) || (uVar20 = uVar15, lVar14 <= (long)uVar22)) goto LAB_100679bb4;
    }
    else if ((lVar14 < 0) || (uVar20 = uVar15, (long)uVar22 <= lVar14)) {
LAB_100679bb4:
      uVar20 = uVar27 + uVar22;
      if (SCARRY8(uVar27,uVar22)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1a8);
        (*pcVar24)();
      }
    }
    if ((long)uVar20 < (long)uVar27) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a190);
      (*pcVar24)();
    }
    _swift_beginAccess(unaff_x20 + 0x18,auStack_c0,0x21,0);
    lVar14 = *(long *)(unaff_x20 + 0x38);
    FUN_1000ce034(unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x30));
    pcVar24 = *(code **)(lVar14 + 0x20);
    puVar5 = puVar4;
    _swift_unknownObjectRetain();
    (*pcVar24)();
    _swift_endAccess(auStack_c0);
    sVar23 = *(size_t *)(puVar5 + 0x10);
    uVar16 = *(ulong *)(puVar7 + 0x10);
    uVar1 = uVar16 + sVar23;
    if (SCARRY8(uVar16,sVar23)) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a194);
      (*pcVar24)();
    }
    uVar17 = *(ulong *)(puVar7 + 0x18) >> 1;
    sVar18 = sVar23;
    if ((long)uVar17 < (long)uVar1) {
      if (uVar16 <= uVar1) {
        uVar16 = uVar1;
      }
      puVar8 = (undefined *)0x1;
      FUN_1006295a0(1,uVar16,1,puVar7);
      uVar16 = *(ulong *)(puVar8 + 0x10);
      uVar17 = *(ulong *)(puVar8 + 0x18) >> 1;
      sVar18 = *(size_t *)(puVar5 + 0x10);
      puVar7 = puVar8;
    }
    if (sVar18 == 0) {
      _swift_bridgeObjectRelease(puVar5);
      if (sVar23 != 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a198);
        (*pcVar24)();
      }
    }
    else {
      if ((long)(uVar17 - uVar16) < (long)sVar23) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1a4);
        (*pcVar24)();
      }
      _memcpy(puVar7 + uVar16 + 0x20,puVar5 + 0x20,sVar23);
      _swift_bridgeObjectRelease(puVar5);
      if (sVar23 != 0) {
        if (SCARRY8(*(long *)(puVar7 + 0x10),sVar23)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1ac);
          (*pcVar24)();
        }
        *(size_t *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + sVar23;
      }
    }
    _swift_unknownObjectRelease(puVar4);
    if (SBORROW8(uVar27,uVar29)) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a19c);
      (*pcVar24)();
    }
    bVar3 = SCARRY8(uVar31,uVar27 - uVar29);
    uVar31 = uVar31 + (uVar27 - uVar29);
    uVar29 = uVar27;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1a0);
      (*pcVar24)();
    }
  }
  _swift_unknownObjectRelease(puVar4);
  FUN_1000b142c(unaff_x20 + 0x18,auStack_e8);
  puVar5 = local_170;
  puVar8 = local_178;
  puVar6 = &local_110;
  _swift_dynamicCast(puVar6,auStack_e8,local_178,local_170,6);
  if (((ulong)puVar6 & 1) == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_100040bb4(&local_110,&DAT_100ab8258,&DAT_100849450);
    cVar2 = *(char *)(unaff_x20 + 0x40);
  }
  else {
    FUN_1000a0074(&local_110,auStack_c0);
    lVar14 = lStack_a0;
    puVar30 = local_a8;
    if ((param_5 & 1) != 0) {
      uVar20 = *(long *)(puVar7 + 0x10) << 1 | 1;
      FUN_1000ce034(auStack_c0,local_a8);
      puVar11 = puVar7 + 0x20;
      lVar13 = 0;
      puVar9 = puVar7;
      (**(code **)(lVar14 + 0x18))(puVar7,puVar11,0,uVar20,puVar30,lVar14);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar7);
        _swift_unknownObjectRelease(puVar4);
        FUN_10003f094(auStack_c0);
        return puVar30;
      }
      _swift_bridgeObjectRelease(puVar7);
      if ((uVar20 & 1) == 0) {
LAB_100679e58:
        puVar30 = puVar9;
        thunk_FUN_100629d98(puVar9,puVar11,lVar13,uVar20);
      }
      else {
        uVar10 = 0;
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar5 = puVar9;
        _swift_unknownObjectRetain_n(puVar9,3);
        _swift_dynamicCastClass();
        if (puVar5 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar9);
          puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        lVar14 = *(long *)(puVar5 + 0x10);
        _swift_release();
        if (SBORROW8(uVar20 >> 1,lVar13)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1d4);
          (*pcVar24)();
        }
        if (lVar14 != (uVar20 >> 1) - lVar13) {
          _swift_unknownObjectRelease_n(puVar9,2);
          puVar5 = local_170;
          goto LAB_100679e58;
        }
        puVar7 = puVar9;
        _swift_dynamicCastClass(puVar9,uVar10);
        _swift_unknownObjectRelease_n(puVar9,2);
        puVar5 = local_170;
        puVar30 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (puVar7 != (undefined *)0x0) goto LAB_100679f0c;
      }
      _swift_unknownObjectRelease(puVar9);
      puVar7 = puVar30;
    }
LAB_100679f0c:
    FUN_10003f094(auStack_c0);
    cVar2 = *(char *)(unaff_x20 + 0x40);
  }
  if (cVar2 != '\0') {
    if (uVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1c8);
      (*pcVar24)();
    }
    lVar13 = *(long *)(puVar7 + 0x10);
    lVar14 = 0;
    if (uVar22 != 0) {
      lVar14 = lVar13 / (long)uVar22;
    }
    _swift_beginAccess(unaff_x20 + 0x50,auStack_128,1,0);
    *(ulong *)(unaff_x20 + 0x50) = lVar13 - lVar14 * uVar22;
  }
  puVar30 = puVar7;
  if ((param_5 & 1) != 0) {
    FUN_10066af14(puVar7,cVar2);
    _swift_bridgeObjectRelease(puVar7);
  }
  if (uVar31 != 0) {
    if ((long)uVar31 < 0) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1cc);
      (*pcVar24)();
    }
    if (*(ulong *)(*(long *)(unaff_x20 + 0x48) + 0x10) < uVar31) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1d0);
      (*pcVar24)();
    }
    FUN_100634d84(0,uVar31);
  }
  FUN_1000b142c(unaff_x20 + 0x18,auStack_e8);
  puVar6 = &local_110;
  _swift_dynamicCast(puVar6,auStack_e8,puVar8,puVar5,6);
  if (((ulong)puVar6 & 1) == 0) {
    _swift_unknownObjectRelease(puVar4);
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_100040bb4(&local_110,&DAT_100ab8258,&DAT_100849450);
    return puVar30;
  }
  FUN_1000a0074(&local_110,auStack_c0);
  local_58 = puVar4;
  if ((param_5 & 1) != 0) {
    uVar31 = *(long *)(puVar30 + 0x10) << 1 | 1;
    FUN_1000ce034(auStack_c0,local_a8);
    puVar5 = puVar30 + 0x20;
    lVar14 = 0;
    local_58 = puVar30;
    (**(code **)(lStack_a0 + 0x20))(puVar30,puVar5,0,uVar31,local_a8,lStack_a0);
    puVar7 = local_a8;
    if (unaff_x21 != 0) {
LAB_10067a030:
      _swift_bridgeObjectRelease(puVar30);
      _swift_unknownObjectRelease(puVar4);
      FUN_10003f094(auStack_c0);
      return puVar7;
    }
    _swift_bridgeObjectRelease(puVar30);
    if ((uVar31 & 1) != 0) {
      uVar10 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar7 = local_58;
      _swift_unknownObjectRetain_n(local_58,3);
      _swift_dynamicCastClass();
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(local_58);
        puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar13 = *(long *)(puVar7 + 0x10);
      _swift_release();
      if (SBORROW8(uVar31 >> 1,lVar14)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x10067a1ec);
        (*pcVar24)();
      }
      if (lVar13 == (uVar31 >> 1) - lVar14) {
        puVar5 = local_58;
        _swift_dynamicCastClass(local_58,uVar10);
        _swift_unknownObjectRelease(puVar4);
        _swift_unknownObjectRelease_n(local_58,2);
        puVar30 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (puVar5 != (undefined *)0x0) goto LAB_10067a14c;
        goto LAB_10067a144;
      }
      _swift_unknownObjectRelease_n(local_58,2);
    }
    puVar30 = local_58;
    thunk_FUN_100629d98(local_58,puVar5,lVar14,uVar31);
    _swift_unknownObjectRelease(local_58);
    local_58 = puVar4;
  }
LAB_10067a144:
  _swift_unknownObjectRelease(local_58);
  puVar5 = puVar30;
LAB_10067a14c:
  FUN_10003f094(auStack_c0);
  return puVar5;
}

