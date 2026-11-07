// rea decompile_all
// name: FUN_1006748ac
// address: 0x1006748ac
// body: available
// range: 0x1006748ac-0x100674f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006748ac(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  size_t sVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong in_x4;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  size_t sVar28;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,1,0);
  _swift_unknownObjectRetain(param_1);
  FUN_100628bc8();
  uVar22 = *(ulong *)(unaff_x20 + 0x30);
  if ((in_x4 & 1) != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x18);
    if (lVar11 + 0xf000000000000000U >> 0x3d < 7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ef0);
      (*pcVar3)();
    }
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ef4);
      (*pcVar3)();
    }
    uVar20 = *(ulong *)(uVar22 + 0x10);
    lVar19 = 0;
    if (lVar11 != 0) {
      lVar19 = (long)uVar20 / lVar11;
    }
    sVar28 = lVar11 + (lVar19 * lVar11 - uVar20);
    if ((long)sVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ef8);
      (*pcVar3)();
    }
    sVar5 = sVar28;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (sVar28,PTR___ss5UInt8VN_100995d40);
    *(size_t *)(sVar5 + 0x10) = sVar28;
    _bzero((void *)(sVar5 + 0x20),sVar28);
    FUN_100628ae0(sVar5);
    bVar1 = *(byte *)(unaff_x20 + 0x28);
    uVar22 = *(ulong *)(unaff_x20 + 0x30);
    uVar12 = uVar22;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x30) = uVar22;
    if ((uVar12 & 1) == 0) {
      FUN_1006541b8();
    }
    uVar12 = *(ulong *)(uVar22 + 0x10);
    if (uVar12 <= uVar20) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674f0c);
      (*pcVar3)();
    }
    lVar11 = uVar22 + 0x20;
    *(byte *)(lVar11 + uVar20) = *(byte *)(lVar11 + uVar20) | bVar1;
    *(ulong *)(unaff_x20 + 0x30) = uVar22;
    if (*(ulong *)(uVar22 + 0x10) < uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674f10);
      (*pcVar3)();
    }
    *(byte *)(lVar11 + uVar12 + -1) = *(byte *)(lVar11 + uVar12 + -1) | 0x80;
    *(ulong *)(unaff_x20 + 0x30) = uVar22;
  }
  uVar12 = *(ulong *)(unaff_x20 + 0x18);
  uVar20 = *(ulong *)(uVar22 + 0x10);
  if ((long)uVar12 < 1) {
    if (uVar20 != 0 && uVar12 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ee4);
      (*pcVar3)();
    }
    uVar20 = 0;
  }
  else if (uVar12 <= uVar20) {
    uVar20 = uVar12;
  }
  _swift_bridgeObjectRetain(uVar22);
  uVar16 = 0;
  uVar6 = 0;
  uVar23 = in_x4;
  do {
    uVar13 = *(ulong *)(uVar22 + 0x10);
    uVar2 = uVar6;
    uVar26 = uVar20;
    do {
      uVar15 = uVar2;
      if (uVar15 == uVar13) {
        _swift_bridgeObjectRelease(uVar22);
        if (uVar16 != 0) {
          if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ee8);
            (*pcVar3)();
          }
          if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + 0x10) < uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100674eec);
            (*pcVar3)();
          }
          FUN_100634d84(0,uVar16);
        }
        _swift_beginAccess(unaff_x20 + 0x38,auStack_90,1,0);
        lVar19 = *(long *)(unaff_x20 + 0x38);
        lVar11 = *(long *)(lVar19 + 0x10);
        puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (lVar11 == 0) goto joined_r0x000100674df8;
        _swift_bridgeObjectRetain(lVar19);
        lVar24 = 0x20;
        puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
        goto LAB_100674cac;
      }
      if (((long)uVar13 < (long)uVar15) || (uVar2 = uVar13 - uVar26, (long)uVar13 < (long)uVar26)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100674eb0);
        (*pcVar3)();
      }
      uVar27 = uVar13;
      if ((long)uVar12 < 1) {
        if ((0 < (long)uVar2) || ((long)uVar2 <= (long)uVar12)) goto LAB_100674a7c;
      }
      else if (uVar12 <= uVar2) {
LAB_100674a7c:
        uVar27 = uVar26 + uVar12;
        if (SCARRY8(uVar26,uVar12)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ec4);
          (*pcVar3)();
        }
      }
      if ((long)uVar27 < (long)uVar26) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100674eb4);
        (*pcVar3)();
      }
      uVar18 = uVar6;
      uVar2 = uVar20;
      if ((uVar23 & 1) != 0) break;
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x10);
      if (SBORROW8(lVar11,uVar16)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100674eb8);
        (*pcVar3)();
      }
      uVar2 = uVar26;
      uVar18 = uVar15;
      uVar26 = uVar27;
    } while ((long)(lVar11 - uVar16) < (long)uVar12);
    uVar6 = uVar2;
    uVar20 = uVar6 - uVar18;
    if (uVar20 == 0) {
      _swift_bridgeObjectRetain(uVar22);
      lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
      uVar20 = 0;
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar6 = uVar18;
    }
    else {
      uVar2 = uVar20 + 7;
      if (-1 < (long)uVar20) {
        uVar2 = uVar20;
      }
      puVar14 = (undefined *)((long)uVar2 >> 3);
      if (0 < (long)(uVar20 & 0x8000000000000007)) {
        puVar14 = puVar14 + 1;
      }
      if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100674edc);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(uVar22);
      if (puVar14 == (undefined *)0x0) {
        puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
        if ((long)uVar6 <= (long)uVar18) goto LAB_100674bbc;
LAB_100674b38:
        lVar19 = 0;
        do {
          uVar23 = uVar22;
          _swift_bridgeObjectRetain();
          FUN_10067c9e0();
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          *(ulong *)(puVar9 + lVar19 * 8 + 0x20) = uVar23 >> 0x20 | uVar23 << 0x20;
          lVar11 = lVar19 + 1;
          if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ec8);
            (*pcVar3)();
          }
          bVar4 = SCARRY8(uVar18,8);
          uVar23 = uVar18 + 8;
          uVar18 = 0x7fffffffffffffff;
          if (!bVar4) {
            uVar18 = uVar23;
          }
          lVar19 = lVar19 + 1;
        } while ((long)uVar18 < (long)uVar6);
        uVar23 = in_x4 & 0xffffffff;
        if ((long)puVar14 < lVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ee0);
          (*pcVar3)();
        }
      }
      else {
        puVar9 = puVar14;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar14,PTR___ss6UInt64VN_100995e10);
        *(undefined **)(puVar9 + 0x10) = puVar14;
        if ((long)uVar18 < (long)uVar6) goto LAB_100674b38;
LAB_100674bbc:
        lVar11 = 0;
      }
      *(long *)(puVar9 + 0x10) = lVar11;
    }
    _swift_beginAccess(unaff_x20 + 0x38,auStack_90,0x21,0);
    FUN_1006755f8(puVar9 + 0x20,0,lVar11 << 1 | 1,unaff_x20 + 0x38);
    _swift_endAccess(auStack_90);
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(puVar9);
    bVar4 = SCARRY8(uVar16,uVar20);
    uVar16 = uVar16 + uVar20;
    uVar20 = uVar27;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674c2c);
      (*pcVar3)();
    }
  } while( true );
LAB_100674cac:
  uVar22 = (*(ulong *)(lVar19 + lVar24) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(lVar19 + lVar24) & 0xff00ff00ff00ff) << 8;
  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
  puVar7 = (ulong *)0x8;
  _swift_slowAlloc(8,0xffffffffffffffff);
  *puVar7 = uVar22 >> 0x20 | uVar22 << 0x20;
  lVar8 = 8;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (8,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar8 + 0x10) = 8;
  puVar25 = (undefined8 *)(lVar8 + 0x20);
  *puVar25 = 0;
  *(char *)(lVar8 + 0x27) = (char)*puVar7;
  *(undefined1 *)(lVar8 + 0x26) = *(undefined1 *)((long)puVar7 + 1);
  *(undefined1 *)(lVar8 + 0x25) = *(undefined1 *)((long)puVar7 + 2);
  *(undefined1 *)(lVar8 + 0x24) = *(undefined1 *)((long)puVar7 + 3);
  *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)((long)puVar7 + 4);
  *(undefined1 *)(lVar8 + 0x22) = *(undefined1 *)((long)puVar7 + 5);
  *(undefined1 *)(lVar8 + 0x21) = *(undefined1 *)((long)puVar7 + 6);
  *(undefined1 *)puVar25 = *(undefined1 *)((long)puVar7 + 7);
  _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
  sVar28 = *(size_t *)(lVar8 + 0x10);
  lVar17 = *(long *)(puVar9 + 0x10);
  if (SCARRY8(lVar17,sVar28)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ebc);
    (*pcVar3)();
  }
  puVar14 = puVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((((ulong)puVar14 & 1) == 0) ||
     ((long)(*(ulong *)(puVar9 + 0x18) >> 1) < (long)(lVar17 + sVar28))) {
    FUN_1006295a0();
    puVar9 = puVar14;
    if (*(long *)(lVar8 + 0x10) != 0) goto LAB_100674d90;
LAB_100674c94:
    _swift_bridgeObjectRelease(lVar8);
    puVar14 = puVar9;
    if (sVar28 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ec0);
      (*pcVar3)();
    }
  }
  else {
    puVar14 = puVar9;
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_100674c94;
LAB_100674d90:
    if ((long)((*(ulong *)(puVar14 + 0x18) >> 1) - *(long *)(puVar14 + 0x10)) < (long)sVar28) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ecc);
      (*pcVar3)();
    }
    _memcpy(puVar14 + *(long *)(puVar14 + 0x10) + 0x20,puVar25,sVar28);
    _swift_bridgeObjectRelease(lVar8);
    if (sVar28 != 0) {
      if (SCARRY8(*(long *)(puVar14 + 0x10),sVar28)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ed0);
        (*pcVar3)();
      }
      *(size_t *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + sVar28;
    }
  }
  lVar24 = lVar24 + 8;
  lVar11 = lVar11 + -1;
  puVar9 = puVar14;
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar19);
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar23 = in_x4;
joined_r0x000100674df8:
    PTR___swiftEmptyArrayStorage_100995ea0 = puVar9;
    if ((uVar23 & 1) != 0) {
      puVar21 = *(undefined **)(unaff_x20 + 0x20);
      if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100674f14);
        (*pcVar3)();
      }
      if (puVar21 != (undefined *)0x0) {
        puVar9 = puVar21;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar21,PTR___ss6UInt64VN_100995e10);
        *(undefined **)(puVar9 + 0x10) = puVar21;
        _bzero(puVar9 + 0x20,(long)puVar21 << 3);
      }
      uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined **)(unaff_x20 + 0x38) = puVar9;
      _swift_bridgeObjectRelease(uVar10);
    }
    uVar22 = *(ulong *)(unaff_x20 + 0x20);
    if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ed4);
      (*pcVar3)();
    }
    if (uVar22 <= *(ulong *)(puVar14 + 0x10)) {
      puVar9 = puVar14;
      if (*(ulong *)(puVar14 + 0x10) != uVar22) {
        thunk_FUN_100629d98(puVar14,puVar14 + 0x20,0,uVar22 << 1 | 1);
        _swift_bridgeObjectRelease(puVar14);
      }
      return puVar9;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100674ed8);
    (*pcVar3)();
  }
  goto LAB_100674cac;
}

