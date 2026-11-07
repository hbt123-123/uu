// rea decompile_all
// name: FUN_1006701ec
// address: 0x1006701ec
// body: available
// range: 0x1006701ec-0x1006710fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1006701ec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  byte bVar37;
  byte bVar38;
  uint uVar39;
  ulong uVar40;
  undefined *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  ulong uVar47;
  ulong uVar48;
  undefined1 uVar49;
  uint uVar50;
  ulong uVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  long lVar57;
  uint uVar58;
  undefined8 uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  undefined1 *puVar64;
  long unaff_x21;
  undefined1 *puVar65;
  ulong uVar66;
  ulong uVar67;
  undefined1 *unaff_x28;
  undefined1 *local_160;
  undefined1 *local_148;
  undefined1 auStack_90 [48];
  
  thunk_FUN_1006654ec();
  lVar11 = 0;
  FUN_10062fb24();
  puVar26 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar11 + 0x18) = param_2;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x10) = param_1;
  lVar12 = lVar11;
  FUN_10062eaac();
  if (unaff_x21 != 0) {
    _swift_setDeallocating(lVar11);
    FUN_100006cdc(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18));
    return unaff_x28;
  }
  _swift_setDeallocating(lVar11);
  uVar54 = *(undefined8 *)(lVar11 + 0x10);
  FUN_100006cdc(uVar54,*(undefined8 *)(lVar11 + 0x18));
  if (((uint)((ulong)puVar26 >> 0x3c) & 3) != 0 || (param_3 & 1) != 0) {
    FUN_100671170();
    _swift_allocError(&DAT_1009e4c10,uVar54,0,0);
    _swift_willThrow();
    goto LAB_100670720;
  }
  if (*(long *)(lVar12 + 0x10) == 9) {
    uVar66 = *(ulong *)(lVar12 + 0x28);
    cVar1 = *(char *)(lVar12 + 0x30);
    uVar50 = 4;
    uVar58 = uVar50;
    if (cVar1 == '\0') {
      uVar58 = 0;
    }
    if (((uint)(uVar66 >> 0x3c) & 3 | uVar58) == 1) {
      uVar67 = *(ulong *)(lVar12 + 0x40);
      cVar2 = *(char *)(lVar12 + 0x48);
      if (cVar2 == '\0') {
        uVar50 = 0;
      }
      if (((uint)(uVar67 >> 0x3c) & 3 | uVar50) == 1) {
        uVar60 = *(ulong *)(lVar12 + 0x58);
        bVar3 = *(byte *)(lVar12 + 0x60);
        unaff_x28 = (undefined1 *)(ulong)bVar3;
        uVar50 = 4;
        uVar58 = uVar50;
        if (bVar3 == 0) {
          uVar58 = 0;
        }
        if (((uint)(uVar60 >> 0x3c) & 3 | uVar58) == 1) {
          uVar61 = *(ulong *)(lVar12 + 0x70);
          cVar4 = *(char *)(lVar12 + 0x78);
          if (cVar4 == '\0') {
            uVar50 = 0;
          }
          if (((uint)(uVar61 >> 0x3c) & 3 | uVar50) == 1) {
            uVar62 = *(ulong *)(lVar12 + 0x88);
            cVar5 = *(char *)(lVar12 + 0x90);
            uVar50 = 4;
            uVar58 = uVar50;
            if (cVar5 == '\0') {
              uVar58 = 0;
            }
            if (((uint)(uVar62 >> 0x3c) & 3 | uVar58) == 1) {
              uVar63 = *(ulong *)(lVar12 + 0xa0);
              cVar6 = *(char *)(lVar12 + 0xa8);
              if (cVar6 == '\0') {
                uVar50 = 0;
              }
              if (((uint)(uVar63 >> 0x3c) & 3 | uVar50) == 1) {
                uVar27 = *(ulong *)(lVar12 + 0xb8);
                cVar7 = *(char *)(lVar12 + 0xc0);
                uVar50 = 4;
                uVar58 = uVar50;
                if (cVar7 == '\0') {
                  uVar58 = 0;
                }
                if (((uint)(uVar27 >> 0x3c) & 3 | uVar58) == 1) {
                  uVar48 = *(ulong *)(lVar12 + 0xd0);
                  cVar8 = *(char *)(lVar12 + 0xd8);
                  if (cVar8 == '\0') {
                    uVar50 = 0;
                  }
                  if (((uint)(uVar48 >> 0x3c) & 3 | uVar50) == 1) {
                    uVar47 = *(ulong *)(lVar12 + 0xe8);
                    cVar9 = *(char *)(lVar12 + 0xf0);
                    uVar58 = 4;
                    if (cVar9 == '\0') {
                      uVar58 = 0;
                    }
                    if (((uint)(uVar47 >> 0x3c) & 3 | uVar58) == 1) {
                      uVar13 = *(ulong *)(lVar12 + 0x20);
                      uVar51 = *(ulong *)(lVar12 + 0x38);
                      uVar59 = *(undefined8 *)(lVar12 + 0x50);
                      puVar52 = *(undefined1 **)(lVar12 + 0x68);
                      lVar11 = *(long *)(lVar12 + 0x80);
                      puVar53 = *(undefined1 **)(lVar12 + 0x98);
                      uVar54 = *(undefined8 *)(lVar12 + 0xb0);
                      uVar55 = *(undefined8 *)(lVar12 + 200);
                      uVar56 = *(undefined8 *)(lVar12 + 0xe0);
                      FUN_10062e3d0(uVar13,uVar66);
                      FUN_10062e3d0(uVar51,uVar67,cVar2);
                      FUN_10062e3d0(uVar59,uVar60,unaff_x28);
                      FUN_10062e3d0(puVar52,uVar61,cVar4);
                      FUN_10062e3d0(lVar11,uVar62,cVar5);
                      FUN_10062e3d0(puVar53,uVar63,cVar6);
                      FUN_10062e3d0(uVar54,uVar27,cVar7);
                      FUN_10062e3d0(uVar55,uVar48,cVar8);
                      FUN_10062e3d0(uVar56,uVar47,cVar9);
                      puVar14 = (undefined1 *)0x30307830;
                      unaff_x28 = (undefined1 *)0xe400000000000000;
                      FUN_100630930();
                      thunk_FUN_1006654ec();
                      uVar15 = uVar13;
                      puVar16 = puVar14;
                      puVar21 = unaff_x28;
                      FUN_1000094a4(uVar13,uVar66 & 0xcfffffffffffffff);
                      bVar37 = (byte)puVar16;
                      FUN_100006cdc(puVar14,unaff_x28);
                      if ((uVar15 & 1) == 0) {
                        FUN_10066cb9c();
                        _swift_allocError(&DAT_1009e5530,puVar14,0,0);
                        uVar49 = 2;
                      }
                      else {
                        FUN_100008184(lVar11,uVar62 & 0xcfffffffffffffff);
                        uVar28 = uVar62 & 0xcfffffffffffffff;
                        lVar57 = lVar11;
                        FUN_10064c630();
                        uVar15 = 1;
                        puVar41 = PTR___swiftEmptyArrayStorage_100995ea0;
                        FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
                        if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006710e8);
                          (*pcVar10)();
                        }
                        FUN_100008184(puVar53,uVar63 & 0xcfffffffffffffff);
                        FUN_10064c630();
                        uVar15 = 1;
                        FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
                        if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006710ec);
                          (*pcVar10)();
                        }
                        uVar58 = (uint)bVar37;
                        puVar16 = puVar21;
                        FUN_1006527dc();
                        puVar22 = puVar16;
                        _swift_bridgeObjectRelease(puVar21);
                        _swift_bridgeObjectRelease(puVar41);
                        FUN_100008184(uVar59,uVar60 & 0xcfffffffffffffff);
                        FUN_10064c630(uVar59,uVar60 & 0xcfffffffffffffff);
                        uVar15 = (ulong)uVar58;
                        puVar14 = puVar16;
                        FUN_100650d48();
                        uVar19 = uVar15;
                        puVar21 = puVar14;
                        _swift_bridgeObjectRelease(puVar22);
                        _swift_bridgeObjectRelease();
                        unaff_x28 = puVar14;
                        if (puVar14 != (undefined1 *)0x0) {
                          FUN_100008184(puVar52,uVar61 & 0xcfffffffffffffff);
                          unaff_x28 = puVar52;
                          FUN_10064c630(puVar52,uVar61 & 0xcfffffffffffffff);
                          puVar16 = puVar21;
                          FUN_10064b1b4();
                          _swift_bridgeObjectRelease(puVar21);
                          if (unaff_x28 == (undefined1 *)0x0) {
                            FUN_100008184(puVar53,uVar63 & 0xcfffffffffffffff);
                            FUN_10064c630();
                            puVar21 = puVar16;
                            FUN_100008184(lVar11,uVar62 & 0xcfffffffffffffff);
                            uVar29 = uVar62 & 0xcfffffffffffffff;
                            lVar17 = lVar11;
                            FUN_10064c630();
                            unaff_x28 = puVar21;
                            FUN_100650d48();
                            uVar31 = uVar19;
                            puVar22 = unaff_x28;
                            _swift_bridgeObjectRelease(puVar16);
                            _swift_bridgeObjectRelease(puVar21);
                            if (unaff_x28 == (undefined1 *)0x0) {
                              _swift_bridgeObjectRelease();
                              FUN_10066cb9c();
                              _swift_allocError(&DAT_1009e5530,puVar14,0,0);
                              uVar49 = 5;
                              goto LAB_100670774;
                            }
                            FUN_100008184(uVar56,uVar47 & 0xcfffffffffffffff);
                            uVar30 = uVar47 & 0xcfffffffffffffff;
                            uVar18 = uVar56;
                            FUN_10064c630(uVar56,uVar30);
                            puVar16 = unaff_x28;
                            FUN_10064b1b4(lVar17,uVar29,uVar19,unaff_x28,uVar18,uVar30,uVar31,
                                          puVar22);
                            bVar37 = (byte)uVar19;
                            _swift_bridgeObjectRelease(puVar22);
                            _swift_bridgeObjectRelease(unaff_x28);
                            if (lVar17 == 0) {
                              FUN_100008184(lVar11,uVar62 & 0xcfffffffffffffff);
                              uVar31 = uVar62 & 0xcfffffffffffffff;
                              lVar17 = lVar11;
                              FUN_10064c630();
                              uVar19 = 1;
                              FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
                              if ((uVar19 & 1) != 0) {
                    /* WARNING: Does not return */
                                pcVar10 = (code *)SoftwareBreakpoint(1,0x1006710f0);
                                (*pcVar10)();
                              }
                              bVar38 = (byte)uVar15;
                              lVar20 = lVar17;
                              FUN_10065fef8();
                              _swift_bridgeObjectRetain(puVar14);
                              uVar58 = (uint)bVar37;
                              puVar21 = puVar16;
                              FUN_10064fbe0();
                              _swift_bridgeObjectRelease(puVar16);
                              uVar19 = (ulong)uVar58;
                              unaff_x28 = puVar21;
                              FUN_10064d170(lVar17,uVar31,uVar19,puVar21,lVar20);
                              _swift_bridgeObjectRelease(puVar21);
                              FUN_100008184(uVar54,uVar27 & 0xcfffffffffffffff);
                              uVar31 = uVar27 & 0xcfffffffffffffff;
                              uVar18 = uVar54;
                              FUN_10064c630(uVar54,uVar31);
                              lVar17 = lVar57;
                              puVar16 = puVar14;
                              FUN_10064b1b4(lVar57,uVar28,bVar38,puVar14,uVar18,uVar31,uVar19,
                                            unaff_x28);
                              _swift_bridgeObjectRelease(puVar14);
                              _swift_bridgeObjectRelease(unaff_x28);
                              if (lVar17 == 0) {
                                FUN_100008184(puVar53,uVar63 & 0xcfffffffffffffff);
                                uVar31 = uVar63 & 0xcfffffffffffffff;
                                puVar21 = puVar53;
                                FUN_10064c630();
                                uVar19 = 1;
                                FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
                                if ((uVar19 & 1) != 0) {
                    /* WARNING: Does not return */
                                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1006710f4);
                                  (*pcVar10)();
                                }
                                uVar58 = (uint)bVar38;
                                puVar22 = puVar21;
                                FUN_10065fef8(puVar21,uVar31,bVar38,puVar16);
                                puVar23 = puVar16;
                                FUN_10064fbe0();
                                _swift_bridgeObjectRelease(puVar16);
                                uVar19 = (ulong)uVar58;
                                unaff_x28 = puVar23;
                                FUN_10064d170(puVar21,uVar31,uVar19,puVar23,puVar22);
                                _swift_bridgeObjectRelease(puVar23);
                                FUN_100008184(uVar55,uVar48 & 0xcfffffffffffffff);
                                uVar31 = uVar48 & 0xcfffffffffffffff;
                                uVar18 = uVar55;
                                FUN_10064c630(uVar55,uVar31);
                                uVar15 = uVar15 & 0xff;
                                puVar21 = puVar14;
                                FUN_10064b1b4(lVar57,uVar28,uVar15,puVar14,uVar18,uVar31,uVar19,
                                              unaff_x28);
                                _swift_bridgeObjectRelease(puVar14);
                                puVar16 = unaff_x28;
                                _swift_bridgeObjectRelease();
                                if (lVar57 == 0) {
                                  FUN_100008184(uVar51,uVar67 & 0xcfffffffffffffff);
                                  uVar32 = uVar67 & 0xcfffffffffffffff;
                                  uVar19 = uVar51;
                                  FUN_10064c630();
                                  uVar30 = uVar15;
                                  puVar42 = puVar21;
                                  FUN_100008184(uVar59,uVar60 & 0xcfffffffffffffff);
                                  uVar33 = uVar60 & 0xcfffffffffffffff;
                                  uVar18 = uVar59;
                                  FUN_10064c630();
                                  uVar40 = uVar30;
                                  puVar43 = puVar42;
                                  FUN_100008184(puVar52,uVar61 & 0xcfffffffffffffff);
                                  uVar34 = uVar61 & 0xcfffffffffffffff;
                                  puVar14 = puVar52;
                                  FUN_10064c630();
                                  uVar28 = uVar40;
                                  puVar44 = puVar43;
                                  FUN_100008184(lVar11,uVar62 & 0xcfffffffffffffff);
                                  uVar50 = (uint)uVar28;
                                  uVar35 = uVar62 & 0xcfffffffffffffff;
                                  lVar57 = lVar11;
                                  FUN_10064c630();
                                  puVar45 = puVar44;
                                  uVar58 = uVar50;
                                  FUN_100008184(puVar53,uVar63 & 0xcfffffffffffffff);
                                  uVar36 = uVar63 & 0xcfffffffffffffff;
                                  puVar16 = puVar53;
                                  FUN_10064c630();
                                  puVar22 = puVar16;
                                  FUN_100671140();
                                  puVar23 = puVar22;
                                  _swift_allocObject();
                                  uVar28 = (ulong)uVar50;
                                  lVar17 = lVar57;
                                  uVar29 = uVar35;
                                  puVar24 = puVar44;
                                  FUN_1006527dc(lVar57,uVar35,uVar28,puVar44,puVar16,uVar36,uVar58,
                                                puVar45);
                                  uVar31 = uVar19;
                                  FUN_10064b1b4(uVar19,uVar32,uVar15 & 0xffffffff,puVar21,lVar17,
                                                uVar29,uVar28,puVar24);
                                  _swift_bridgeObjectRelease(puVar24);
                                  puVar24 = puVar21;
                                  puVar64 = puVar43;
                                  puVar65 = puVar42;
                                  local_160 = puVar45;
                                  local_148 = puVar44;
                                  if (uVar31 == 0) {
                                    _swift_bridgeObjectRetain();
                                    uVar28 = 1;
                                    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
                                    if ((uVar28 & 1) != 0) {
                    /* WARNING: Does not return */
                                      pcVar10 = (code *)SoftwareBreakpoint(1,0x1006710f8);
                                      (*pcVar10)();
                                    }
                                    _swift_bridgeObjectRetain();
                                    uVar28 = 1;
                                    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
                                    if ((uVar28 & 1) != 0) {
                    /* WARNING: Does not return */
                                      pcVar10 = (code *)SoftwareBreakpoint(1,0x1006710fc);
                                      (*pcVar10)();
                                    }
                                    uVar39 = uVar50 & 0xff;
                                    lVar17 = lVar57;
                                    uVar28 = uVar35;
                                    puVar24 = puVar44;
                                    FUN_1006527dc();
                                    _swift_bridgeObjectRelease(puVar44);
                                    _swift_bridgeObjectRelease(puVar45);
                                    uVar31 = (ulong)uVar39;
                                    puVar46 = puVar24;
                                    FUN_100650d48();
                                    _swift_bridgeObjectRelease(puVar24);
                                    puVar24 = puVar43;
                                    puVar64 = puVar45;
                                    puVar65 = puVar44;
                                    local_160 = puVar42;
                                    local_148 = puVar21;
                                    if (puVar46 != (undefined1 *)0x0) {
                                      puVar25 = puVar14;
                                      FUN_10064b1b4(puVar14,uVar34,uVar40,puVar43,lVar17,uVar28,
                                                    uVar31,puVar46);
                                      _swift_bridgeObjectRelease(puVar46);
                                      puVar24 = puVar44;
                                      puVar64 = puVar21;
                                      puVar65 = puVar45;
                                      local_160 = puVar43;
                                      local_148 = puVar42;
                                      if (puVar25 == (undefined1 *)0x0) {
                                        *(ulong *)(puVar23 + 0x10) = uVar19;
                                        *(ulong *)(puVar23 + 0x18) = uVar32;
                                        puVar23[0x20] = (char)uVar15;
                                        *(undefined1 **)(puVar23 + 0x28) = puVar21;
                                        *(undefined8 *)(puVar23 + 0x30) = uVar18;
                                        *(ulong *)(puVar23 + 0x38) = uVar33;
                                        puVar23[0x40] = (char)uVar30;
                                        *(undefined1 **)(puVar23 + 0x48) = puVar42;
                                        *(undefined1 **)(puVar23 + 0x50) = puVar14;
                                        *(ulong *)(puVar23 + 0x58) = uVar34;
                                        *(ulong *)(puVar23 + 0x60) = uVar40 & 0xff;
                                        *(undefined1 **)(puVar23 + 0x68) = puVar43;
                                        *(long *)(puVar23 + 0x80) = lVar57;
                                        *(ulong *)(puVar23 + 0x88) = uVar35;
                                        puVar23[0x90] = (char)uVar50;
                                        *(undefined1 **)(puVar23 + 0x98) = puVar44;
                                        *(undefined1 **)(puVar23 + 0xa0) = puVar16;
                                        *(ulong *)(puVar23 + 0xa8) = uVar36;
                                        puVar23[0xb0] = (char)uVar58;
                                        *(undefined1 **)(puVar23 + 0xb8) = puVar45;
                                        uVar28 = uVar19;
                                        FUN_10065f798(uVar19,uVar32,uVar15 & 0xffffffff,puVar21);
                                        *(ulong *)(puVar23 + 0x70) = uVar28;
                                        uVar31 = uVar19;
                                        FUN_10065f798(uVar19,uVar32,uVar15 & 0xffffffff,puVar21);
                                        uVar28 = uVar31 + 7;
                                        if (-1 < (long)uVar31) {
                                          uVar28 = uVar31;
                                        }
                                        lVar57 = (long)uVar28 >> 3;
                                        FUN_10065f798(uVar19,uVar32,uVar15 & 0xffffffff,puVar21);
                                        _swift_bridgeObjectRetain(puVar21);
                                        FUN_10062e434(uVar13,uVar66,cVar1);
                                        FUN_10062e434(uVar51,uVar67,cVar2);
                                        FUN_10062e434(uVar55,uVar48,cVar8);
                                        FUN_10062e434(uVar54,uVar27,cVar7);
                                        FUN_10062e434(uVar56,uVar47,cVar9);
                                        FUN_10062e434(puVar52,uVar61,cVar4);
                                        FUN_10062e434(uVar59,uVar60,bVar3);
                                        FUN_10062e434(puVar53,uVar63,cVar6);
                                        FUN_10062e434(lVar11,uVar62,cVar5);
                                        FUN_10062e434(lVar12,puVar26,param_3 & 1);
                                        _swift_bridgeObjectRelease(puVar21);
                                        if ((uVar19 & 7) != 0) {
                                          lVar57 = lVar57 + 1;
                                        }
                                        *(long *)(puVar23 + 0x78) = lVar57;
                                        return puVar23;
                                      }
                                    }
                                  }
                                  _swift_bridgeObjectRelease(puVar24);
                                  _swift_bridgeObjectRelease(puVar65);
                                  _swift_bridgeObjectRelease(puVar64);
                                  _swift_bridgeObjectRelease(local_148);
                                  _swift_bridgeObjectRelease();
                                  FUN_10066cb9c();
                                  _swift_allocError(&DAT_1009e5530,local_160,0,0);
                                  *local_160 = 3;
                                  _swift_willThrow();
                                  FUN_10062e434(uVar13,uVar66,cVar1);
                                  FUN_10062e434(uVar51,uVar67,cVar2);
                                  FUN_10062e434(uVar55,uVar48,cVar8);
                                  FUN_10062e434(uVar54,uVar27,cVar7);
                                  FUN_10062e434(uVar56,uVar47,cVar9);
                                  FUN_10062e434(puVar52,uVar61,cVar4);
                                  FUN_10062e434(uVar59,uVar60,bVar3);
                                  FUN_10062e434(puVar53,uVar63,cVar6);
                                  FUN_10062e434(lVar11,uVar62,cVar5);
                                  FUN_10062e434(lVar12,puVar26,param_3 & 1);
                                  _swift_deallocPartialClassInstance(puVar23,puVar22,0xc0,7);
                                  return puVar23;
                                }
                                goto LAB_1006706c8;
                              }
                            }
                          }
                          _swift_bridgeObjectRelease();
                          puVar16 = puVar14;
                        }
LAB_1006706c8:
                        FUN_10066cb9c();
                        _swift_allocError(&DAT_1009e5530,puVar16,0,0);
                        uVar49 = 3;
                        puVar14 = puVar16;
                      }
LAB_100670774:
                      *puVar14 = uVar49;
                      _swift_willThrow();
                      FUN_10062e434(uVar56,uVar47,cVar9);
                      FUN_10062e434(uVar55,uVar48,cVar8);
                      FUN_10062e434(uVar54,uVar27,cVar7);
                      FUN_10062e434(puVar53,uVar63,cVar6);
                      FUN_10062e434(lVar11,uVar62,cVar5);
                      FUN_10062e434(puVar52,uVar61,cVar4);
                      FUN_10062e434(uVar59,uVar60,bVar3);
                      FUN_10062e434(uVar51,uVar67,cVar2);
                      FUN_10062e434(uVar13,uVar66,cVar1);
                      goto LAB_100670720;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_100671170();
  _swift_allocError(&DAT_1009e4c10,uVar54,0,0);
  _swift_willThrow();
LAB_100670720:
  FUN_10062e434(lVar12,puVar26,param_3 & 1);
  return unaff_x28;
}

