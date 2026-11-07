// rea decompile_all
// name: FUN_100673628
// address: 0x100673628
// body: available
// range: 0x100673628-0x100673e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_100673628(undefined8 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  size_t sVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong in_x4;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  size_t sVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auStack_d8 [24];
  undefined *local_c0 [3];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_78,1,0);
  _swift_unknownObjectRetain(param_1);
  FUN_100628bc8();
  if ((in_x4 & 1) != 0) {
    _swift_beginAccess(unaff_x20 + 0x40,auStack_d8,0,0);
    lVar13 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    lVar7 = *(long *)(unaff_x20 + 0x40) + lVar13;
    if (SCARRY8(*(long *)(unaff_x20 + 0x40),lVar13)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100673da8);
      (*pcVar5)();
    }
    if (lVar7 + 0xf000000000000000U >> 0x3d < 7) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100673dac);
      (*pcVar5)();
    }
    lVar7 = lVar7 * 8;
    lVar17 = *(long *)(unaff_x20 + 0x20);
    lVar13 = lVar17 + 7;
    if (-1 < lVar17) {
      lVar13 = lVar17;
    }
    lVar13 = lVar13 >> 3;
    thunk_FUN_10066690c(lVar7,lVar13);
    _swift_beginAccess(unaff_x20 + 0x38,auStack_90,0x21,0);
    uVar19 = *(ulong *)(unaff_x20 + 0x38);
    lVar22 = *(long *)(uVar19 + 0x10);
    uVar14 = uVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x38) = uVar19;
    uVar23 = uVar19;
    if ((uVar14 & 1) == 0) {
      uVar23 = 0;
      FUN_1006295a0(0,lVar22 + 1,1,uVar19);
      *(ulong *)(unaff_x20 + 0x38) = uVar23;
    }
    uVar14 = *(ulong *)(uVar23 + 0x10);
    uVar19 = uVar23;
    if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar14) {
      uVar19 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
      FUN_1006295a0(uVar19,uVar14 + 1,1,uVar23);
    }
    *(ulong *)(uVar19 + 0x10) = uVar14 + 1;
    *(undefined1 *)(uVar19 + uVar14 + 0x20) = 0x80;
    *(ulong *)(unaff_x20 + 0x38) = uVar19;
    lVar4 = lVar17 - lVar13;
    if (SBORROW8(lVar17,lVar13)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100673df0);
      (*pcVar5)();
    }
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100673df4);
      (*pcVar5)();
    }
    lVar13 = 0;
    if (lVar17 != 0) {
      lVar13 = lVar22 / lVar17;
    }
    uVar14 = lVar22 - lVar13 * lVar17;
    if ((long)uVar14 < lVar4) {
      puVar10 = (undefined *)(lVar4 + ~uVar14);
      if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673df8);
        (*pcVar5)();
      }
    }
    else {
      if (SCARRY8(lVar17,lVar4)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673dfc);
        (*pcVar5)();
      }
      lVar13 = lVar17 + lVar4 + -1;
      if (SBORROW8(lVar17 + lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673e00);
        (*pcVar5)();
      }
      puVar10 = (undefined *)(lVar13 - uVar14);
      if (SBORROW8(lVar13,uVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673e04);
        (*pcVar5)();
      }
      if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673e08);
        (*pcVar5)();
      }
    }
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar10 != (undefined *)0x0) {
      puVar8 = puVar10;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar10,PTR___ss5UInt8VN_100995d40);
      *(undefined **)(puVar8 + 0x10) = puVar10;
      _bzero(puVar8 + 0x20,(size_t)puVar10);
    }
    FUN_100628ae0(puVar8);
    FUN_100628ae0(lVar7);
    _swift_endAccess(auStack_90);
  }
  lVar7 = *(long *)(unaff_x20 + 0x38);
  uVar23 = *(ulong *)(unaff_x20 + 0x20);
  uVar14 = *(ulong *)(lVar7 + 0x10);
  if ((long)uVar23 < 1) {
    if (uVar14 != 0 && uVar23 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d9c);
      (*pcVar5)();
    }
    uVar14 = 0;
  }
  else if (uVar23 <= uVar14) {
    uVar14 = uVar23;
  }
  _swift_bridgeObjectRetain(lVar7);
  uVar19 = 0;
  uVar18 = 0;
  do {
    uVar12 = *(ulong *)(lVar7 + 0x10);
    uVar16 = uVar18;
    uVar24 = uVar14;
    do {
      uVar15 = uVar16;
      if (uVar15 == uVar12) {
        _swift_bridgeObjectRelease(lVar7);
        if (uVar19 != 0) {
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100673da0);
            (*pcVar5)();
          }
          if (*(ulong *)(*(long *)(unaff_x20 + 0x38) + 0x10) < uVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100673da4);
            (*pcVar5)();
          }
          FUN_100634d84(0,uVar19);
        }
        _swift_beginAccess(unaff_x20 + 0x40,auStack_90,1,0);
        if (SCARRY8(*(long *)(unaff_x20 + 0x40),uVar19)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d98);
          (*pcVar5)();
        }
        *(ulong *)(unaff_x20 + 0x40) = *(long *)(unaff_x20 + 0x40) + uVar19;
        bVar3 = *(byte *)(unaff_x20 + 0x10);
        sVar20 = *(size_t *)(&DAT_10084cad8 + (long)(char)bVar3 * 8);
        sVar9 = sVar20;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (sVar20,PTR___ss5UInt8VN_100995d40);
        *(size_t *)(sVar9 + 0x10) = sVar20;
        pvVar1 = (void *)(sVar9 + 0x20);
        _bzero(pvVar1,sVar20);
        if ((ulong)(long)(char)bVar3 < 2) {
          _swift_beginAccess(unaff_x20 + 0x48,auStack_a8,0,0);
          lVar7 = *(long *)(unaff_x20 + 0x48);
          uVar14 = *(ulong *)(lVar7 + 0x10);
          if (uVar14 != 0) {
            uVar23 = 0;
            uVar19 = 0;
            uVar18 = 7;
            if (bVar3 != 0) {
              uVar18 = 0x7fffffffffffffff;
            }
            do {
              if (uVar19 < uVar18) {
                if (*(ulong *)(lVar7 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d4c);
                  (*pcVar5)();
                }
                if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d50);
                  (*pcVar5)();
                }
                uVar16 = *(ulong *)(sVar9 + 0x10);
                if (uVar16 <= uVar23) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d54);
                  (*pcVar5)();
                }
                uVar2 = *(undefined4 *)(lVar7 + 0x20 + uVar19 * 4);
                *(char *)((long)pvVar1 + uVar23) = (char)((uint)uVar2 >> 0x18);
                if (uVar16 <= uVar23 + 1) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d58);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar23 + 1) = (char)((uint)uVar2 >> 0x10);
                if (uVar16 <= uVar23 + 2) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d5c);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar23 + 2) = (char)((uint)uVar2 >> 8);
                if (uVar16 <= uVar23 + 3) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673aac);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar23 + 3) = (char)uVar2;
                uVar23 = uVar23 + 4;
              }
              uVar19 = uVar19 + 1;
            } while (uVar14 != uVar19);
          }
        }
        else {
          _swift_beginAccess(unaff_x20 + 0x50,auStack_a8,0,0);
          lVar7 = *(long *)(unaff_x20 + 0x50);
          uVar14 = *(ulong *)(lVar7 + 0x10);
          if (uVar14 != 0) {
            uVar19 = 0;
            uVar23 = 0;
            uVar18 = 6;
            if (bVar3 != 2) {
              uVar18 = 0x7fffffffffffffff;
            }
            do {
              if (uVar23 < uVar18) {
                if (*(ulong *)(lVar7 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d64);
                  (*pcVar5)();
                }
                if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d68);
                  (*pcVar5)();
                }
                uVar16 = *(ulong *)(sVar9 + 0x10);
                if (uVar16 <= uVar19) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d6c);
                  (*pcVar5)();
                }
                uVar11 = *(undefined8 *)(lVar7 + 0x20 + uVar23 * 8);
                *(char *)((long)pvVar1 + uVar19) = (char)((ulong)uVar11 >> 0x38);
                if (uVar16 <= uVar19 + 1) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d70);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 1) = (char)((ulong)uVar11 >> 0x30);
                if (uVar16 <= uVar19 + 2) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d74);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 2) = (char)((ulong)uVar11 >> 0x28);
                if (uVar16 <= uVar19 + 3) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d78);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 3) = (char)((ulong)uVar11 >> 0x20);
                if (uVar16 <= uVar19 + 4) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d7c);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 4) = (char)((ulong)uVar11 >> 0x18);
                if (SCARRY8(uVar19,5)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d80);
                  (*pcVar5)();
                }
                if (uVar16 <= uVar19 + 5) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d84);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 5) = (char)((ulong)uVar11 >> 0x10);
                if (SCARRY8(uVar19,6)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d88);
                  (*pcVar5)();
                }
                if (uVar16 <= uVar19 + 6) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d8c);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 6) = (char)((ulong)uVar11 >> 8);
                if (SCARRY8(uVar19,7)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d90);
                  (*pcVar5)();
                }
                if (uVar16 <= uVar19 + 7) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d94);
                  (*pcVar5)();
                }
                *(char *)((long)pvVar1 + uVar19 + 7) = (char)uVar11;
                bVar6 = SCARRY8(uVar19,8);
                uVar19 = uVar19 + 8;
                if (bVar6) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673bc8);
                  (*pcVar5)();
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar14 != uVar23);
          }
        }
        if ((in_x4 & 1) != 0) {
          puVar10 = &DAT_100ab7cc8;
          FUN_100004bb4(&DAT_100ab7cc8,&DAT_100848c30);
          if (bVar3 < 2) {
            _swift_initStaticObject();
            lVar7 = *(long *)(puVar10 + 0x10);
            if (lVar7 == 0) {
              _swift_bridgeObjectRelease();
              puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
            }
            else {
              local_c0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
              thunk_FUN_100664af4(0,lVar7,0);
              lVar13 = 0x20;
              do {
                uVar14 = *(ulong *)(puVar10 + lVar13);
                if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d60);
                  (*pcVar5)();
                }
                uVar23 = *(ulong *)(local_c0[0] + 0x10);
                if (*(ulong *)(local_c0[0] + 0x18) >> 1 <= uVar23) {
                  thunk_FUN_100664af4(1 < *(ulong *)(local_c0[0] + 0x18),uVar23 + 1,1);
                }
                puVar8 = local_c0[0];
                *(ulong *)(local_c0[0] + 0x10) = uVar23 + 1;
                *(int *)(local_c0[0] + uVar23 * 4 + 0x20) = (int)uVar14;
                lVar13 = lVar13 + 8;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
              _swift_bridgeObjectRelease();
            }
            _swift_beginAccess(unaff_x20 + 0x48,local_c0,1,0);
            uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
            *(undefined **)(unaff_x20 + 0x48) = puVar8;
          }
          else {
            _swift_initStaticObject();
            _swift_beginAccess(unaff_x20 + 0x50,local_c0,1,0);
            uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
            *(undefined **)(unaff_x20 + 0x50) = puVar10;
          }
          _swift_bridgeObjectRelease(uVar11);
        }
        return sVar9;
      }
      if (((long)uVar12 < (long)uVar15) || (uVar16 = uVar12 - uVar24, (long)uVar12 < (long)uVar24))
      {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d3c);
        (*pcVar5)();
      }
      uVar25 = uVar12;
      if ((long)uVar23 < 1) {
        if ((0 < (long)uVar16) || ((long)uVar16 <= (long)uVar23)) goto LAB_10067387c;
      }
      else if (uVar23 <= uVar16) {
LAB_10067387c:
        uVar25 = uVar24 + uVar23;
        if (SCARRY8(uVar24,uVar23)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d48);
          (*pcVar5)();
        }
      }
      if ((long)uVar25 < (long)uVar24) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d40);
        (*pcVar5)();
      }
      uVar16 = uVar14;
      uVar21 = uVar18;
      if ((in_x4 & 1) != 0) break;
      lVar13 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if (SBORROW8(lVar13,uVar19)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673d44);
        (*pcVar5)();
      }
      uVar16 = uVar24;
      uVar21 = uVar15;
      uVar24 = uVar25;
    } while ((long)(lVar13 - uVar19) < (long)uVar23);
    if (*(byte *)(unaff_x20 + 0x10) < 2) {
      _swift_beginAccess(unaff_x20 + 0x48,auStack_90,0x21,0);
      _swift_bridgeObjectRetain(lVar7);
      FUN_10067425c(lVar7 + 0x20,uVar21,uVar16 << 1 | 1,unaff_x20 + 0x48);
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x50,auStack_90,0x21,0);
      _swift_bridgeObjectRetain(lVar7);
      FUN_100673e6c();
    }
    _swift_endAccess(auStack_90);
    _swift_bridgeObjectRelease(lVar7);
    bVar6 = SCARRY8(uVar19,uVar16 - uVar21);
    uVar19 = uVar19 + (uVar16 - uVar21);
    uVar18 = uVar16;
    uVar14 = uVar25;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100673958);
      (*pcVar5)();
    }
  } while( true );
}

