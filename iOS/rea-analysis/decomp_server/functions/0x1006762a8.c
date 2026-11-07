// rea decompile_all
// name: FUN_1006762a8
// address: 0x1006762a8
// body: available
// range: 0x1006762a8-0x100678f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100678eb0) */

undefined8 **** FUN_1006762a8(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined8 ***pppuVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  void *pvVar21;
  void *pvVar22;
  long lVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  size_t sVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  double *pdVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  undefined *puVar41;
  undefined1 *puVar42;
  undefined8 *puVar43;
  long lVar44;
  ulong uVar45;
  undefined8 ****ppppuVar46;
  uint *puVar47;
  long unaff_x20;
  long lVar48;
  long unaff_x21;
  long lVar49;
  ulong uVar50;
  ulong uVar51;
  undefined8 ****ppppuVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  double dVar55;
  double dVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 *local_218;
  long local_1b8;
  undefined1 auStack_108 [64];
  undefined8 ***local_c8 [2];
  undefined1 *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  long lStack_a0;
  undefined8 ****local_98;
  undefined8 ***local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 *puStack_78;
  undefined8 ****local_70;
  
  uVar45 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar45 + 0xff00000000000000 >> 0x39 < 0x7f) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f34);
    (*pcVar13)();
  }
  sVar28 = uVar45 * 0x80;
  lVar37 = *(long *)(unaff_x20 + 0x48);
  pvVar21 = (void *)(sVar28 * lVar37);
  if (SUB168(SEXT816((long)sVar28) * SEXT816(lVar37),8) != (long)pvVar21 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f38);
    (*pcVar13)();
  }
  _swift_slowAlloc(pvVar21,0x3f);
  if (uVar45 + 0xff80000000000000 >> 0x38 < 0xff) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f3c);
    (*pcVar13)();
  }
  pvVar22 = (void *)(uVar45 << 8 | 0x40);
  _swift_slowAlloc(pvVar22,0x3f);
  lVar38 = *(long *)(unaff_x20 + 0x38);
  lVar23 = sVar28 * lVar38;
  if (SUB168(SEXT816((long)sVar28) * SEXT816(lVar38),8) != lVar23 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f40);
    (*pcVar13)();
  }
  _swift_slowAlloc(lVar23,0x3f);
  lVar49 = *(long *)(unaff_x20 + 0x18);
  ppppuVar46 = *(undefined8 *****)(lVar49 + 0x18);
  ppppuVar24 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar46 != (undefined8 ****)0x0) {
    ppppuVar24 = ppppuVar46;
    FUN_100630840(ppppuVar46,0);
    ppppuVar52 = local_c8;
    FUN_1006413c4(ppppuVar52,ppppuVar24 + 4,ppppuVar46);
    pppuVar12 = local_c8[0];
    _swift_retain(lVar49);
    _swift_release(pppuVar12);
    if (ppppuVar52 != ppppuVar46) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1006763c0);
      (*pcVar13)();
    }
  }
  lVar48 = *(long *)(unaff_x20 + 0x10);
  ppppuVar52 = *(undefined8 *****)(lVar48 + 0x18);
  ppppuVar46 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar52 != (undefined8 ****)0x0) {
    ppppuVar46 = ppppuVar52;
    FUN_100630840(ppppuVar52,0);
    ppppuVar25 = local_c8;
    FUN_1006413c4(ppppuVar25,ppppuVar46 + 4,ppppuVar52);
    pppuVar12 = local_c8[0];
    _swift_retain(lVar48);
    _swift_release(pppuVar12);
    if (ppppuVar25 != ppppuVar52) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100676418);
      (*pcVar13)();
    }
  }
  if (lVar37 + 0xff00000000000000U >> 0x39 < 0x7f) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f44);
    (*pcVar13)();
  }
  puVar42 = (undefined1 *)(lVar37 * 0x80 * uVar45);
  if (SUB168(SEXT816(lVar37 * 0x80) * SEXT816((long)uVar45),8) != (long)puVar42 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f48);
    (*pcVar13)();
  }
  uVar26 = 0;
  FUN_100668800();
  _swift_initStackObject();
  FUN_100668564(ppppuVar24,1);
  if (ppppuVar46[2] == (undefined8 ***)0x0) {
    ppppuVar52 = (undefined8 ****)0x0;
LAB_100676500:
    _swift_release();
    FUN_10066a25c();
    _swift_allocError(&DAT_1009e4fa0,ppppuVar46,0,0);
    *(char *)ppppuVar46 = (char)ppppuVar52;
    _swift_willThrow();
  }
  else {
    cVar11 = *(char *)(ppppuVar24 + 3);
    uVar29 = (ulong)cVar11;
    uVar16 = (uint)(int)cVar11 >> 6 & 3;
    if (uVar16 == 0) {
      puVar41 = &DAT_10084cdc0;
LAB_1006764dc:
      pdVar36 = (double *)(puVar41 + uVar29 * 8);
LAB_1006764e0:
      dVar55 = *pdVar36;
    }
    else {
      if (uVar16 != 1) {
        uVar29 = uVar29 ^ 0x1fffffffffffff80;
        puVar41 = &DAT_10084cd60;
        goto LAB_1006764dc;
      }
      uVar16 = (int)cVar11 & 0x3f;
      if (uVar16 < 7) {
        pdVar36 = (double *)(&DAT_10084cd88 + (ulong)uVar16 * 8);
        goto LAB_1006764e0;
      }
      dVar55 = 64.0;
    }
    if (dVar55 * 4294967295.0 < (double)(long)puVar42) {
      ppppuVar52 = (undefined8 ****)0x1;
      goto LAB_100676500;
    }
    dVar55 = (double)(long)((double)(long)puVar42 / dVar55);
    if (0x7fefffffffffffff < (ulong)ABS(dVar55)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f4c);
      (*pcVar13)();
    }
    if (dVar55 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f50);
      (*pcVar13)();
    }
    if (9.223372036854776e+18 <= dVar55) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f54);
      (*pcVar13)();
    }
    local_80 = (long)dVar55;
    uStack_88 = 1;
    ppppuVar52 = &local_90;
    ppppuVar25 = ppppuVar24;
    local_90 = ppppuVar46;
    puStack_78 = puVar42;
    local_70 = ppppuVar24;
    FUN_10066a29c();
    if (unaff_x21 != 0) {
      _swift_release(ppppuVar24);
      _swift_release(ppppuVar46);
      goto LAB_1006765c0;
    }
    _swift_release(ppppuVar24);
    _swift_release(ppppuVar46);
    _memmove(pvVar21,ppppuVar25 + 4,(size_t)ppppuVar25[2]);
    _swift_bridgeObjectRelease(ppppuVar25);
    if (lVar37 < 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f60);
      (*pcVar13)();
    }
    if (lVar37 != 0) {
      if ((long)uVar45 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f68);
        (*pcVar13)();
      }
      pvVar3 = (void *)((long)pvVar22 + uVar45 * 0x80);
      lVar44 = uVar45 * 0x20;
      piVar4 = (int *)((long)pvVar22 + uVar45 * 0x100);
      uVar30 = uVar45 << 1;
      lVar48 = sVar28 - 0x40;
      puVar5 = (undefined8 *)((long)pvVar22 + lVar48);
      puVar6 = (undefined8 *)((long)pvVar3 + lVar48);
      lVar31 = (uVar45 & 0x1ffffffffffffff) << 4;
      uVar39 = lVar44 - 1;
      uVar29 = uVar39;
      if (0x1fffffffffffffff < uVar39) {
        uVar29 = 0x2000000000000000;
      }
      uVar51 = uVar29 + 1 & 7;
      uVar8 = 8;
      if (uVar51 != 0) {
        uVar8 = uVar51;
      }
      puVar1 = (undefined8 *)((long)pvVar22 + 0x10);
      local_218 = (undefined8 *)((long)pvVar21 + 0x10);
      lVar32 = 0;
      local_1b8 = (long)pvVar21 + 4;
      do {
        if (lVar32 == 0x100000000000000) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f58);
          (*pcVar13)();
        }
        lVar33 = lVar32 * 0x80 * uVar45;
        if (SUB168(SEXT816(lVar32 * 0x80) * SEXT816((long)uVar45),8) != lVar33 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f5c);
          (*pcVar13)();
        }
        pvVar7 = (void *)((long)pvVar21 + lVar33);
        if (pvVar22 != pvVar7 || (void *)((long)pvVar7 + uVar45 * 0x80) <= pvVar22) {
          _memcpy(pvVar22,pvVar7,sVar28);
        }
        if (0 < lVar38) {
          if ((long)sVar28 < 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f64);
            (*pcVar13)();
          }
          lVar33 = 0;
          do {
            bVar14 = SCARRY8(lVar33,2);
            lVar40 = lVar33 + 2;
            if (SUB168(SEXT816(lVar33) * SEXT816(lVar44),8) != lVar33 * lVar44 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f18);
              (*pcVar13)();
            }
            _memcpy((void *)(lVar23 + lVar33 * lVar44 * 4),pvVar22,sVar28);
            uVar53 = *puVar5;
            uVar57 = puVar5[3];
            uVar54 = puVar5[2];
            *(undefined8 *)(piVar4 + 2) = puVar5[1];
            *(undefined8 *)piVar4 = uVar53;
            *(undefined8 *)(piVar4 + 6) = uVar57;
            *(undefined8 *)(piVar4 + 4) = uVar54;
            uVar53 = puVar5[4];
            uVar57 = puVar5[7];
            uVar54 = puVar5[6];
            *(undefined8 *)(piVar4 + 10) = puVar5[5];
            *(undefined8 *)(piVar4 + 8) = uVar53;
            *(undefined8 *)(piVar4 + 0xe) = uVar57;
            *(undefined8 *)(piVar4 + 0xc) = uVar54;
            if (uVar45 != 0) {
              uVar51 = 0;
              do {
                if (uVar51 + 0xf800000000000000 >> 0x3c < 0xf) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100678cf8);
                  (*pcVar13)();
                }
                uVar2 = uVar51 + 2;
                puVar35 = (undefined8 *)((long)pvVar22 + uVar51 * 0x40);
                uVar54 = puVar35[1];
                uVar53 = *puVar35;
                uVar58 = puVar35[3];
                uVar57 = puVar35[2];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[5];
                uVar53 = puVar35[4];
                uVar58 = puVar35[7];
                uVar57 = puVar35[6];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                puVar47 = *(uint **)(unaff_x20 + 0x28);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar50 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar50 = uVar50 + 2;
                } while (uVar50 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = (undefined8 *)((long)pvVar3 + uVar51 * 0x20);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar54 = puVar35[9];
                uVar53 = puVar35[8];
                uVar58 = puVar35[0xb];
                uVar57 = puVar35[10];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[0xd];
                uVar53 = puVar35[0xc];
                uVar58 = puVar35[0xf];
                uVar57 = puVar35[0xe];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar51 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar51 = uVar51 + 2;
                } while (uVar51 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = puVar43 + uVar45 * 8;
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar51 = uVar2;
              } while (uVar2 < uVar30);
            }
            lVar34 = (lVar33 + 1) * lVar44;
            if (SUB168(SEXT816(lVar33 + 1) * SEXT816(lVar44),8) != lVar34 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f1c);
              (*pcVar13)();
            }
            _memcpy((void *)(lVar23 + lVar34 * 4),pvVar3,sVar28);
            uVar53 = *puVar6;
            uVar57 = puVar6[3];
            uVar54 = puVar6[2];
            *(undefined8 *)(piVar4 + 2) = puVar6[1];
            *(undefined8 *)piVar4 = uVar53;
            *(undefined8 *)(piVar4 + 6) = uVar57;
            *(undefined8 *)(piVar4 + 4) = uVar54;
            uVar53 = puVar6[4];
            uVar57 = puVar6[7];
            uVar54 = puVar6[6];
            *(undefined8 *)(piVar4 + 10) = puVar6[5];
            *(undefined8 *)(piVar4 + 8) = uVar53;
            *(undefined8 *)(piVar4 + 0xe) = uVar57;
            *(undefined8 *)(piVar4 + 0xc) = uVar54;
            if (uVar45 != 0) {
              uVar51 = 0;
              do {
                if (uVar51 + 0xf800000000000000 >> 0x3c < 0xf) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100678cfc);
                  (*pcVar13)();
                }
                uVar2 = uVar51 + 2;
                puVar35 = (undefined8 *)((long)pvVar3 + uVar51 * 0x40);
                uVar54 = puVar35[1];
                uVar53 = *puVar35;
                uVar58 = puVar35[3];
                uVar57 = puVar35[2];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[5];
                uVar53 = puVar35[4];
                uVar58 = puVar35[7];
                uVar57 = puVar35[6];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                puVar47 = *(uint **)(unaff_x20 + 0x28);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar50 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar50 = uVar50 + 2;
                } while (uVar50 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = (undefined8 *)((long)pvVar22 + uVar51 * 0x20);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar54 = puVar35[9];
                uVar53 = puVar35[8];
                uVar58 = puVar35[0xb];
                uVar57 = puVar35[10];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[0xd];
                uVar53 = puVar35[0xc];
                uVar58 = puVar35[0xf];
                uVar57 = puVar35[0xe];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar51 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar51 = uVar51 + 2;
                } while (uVar51 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = puVar43 + uVar45 * 8;
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar51 = uVar2;
              } while (uVar2 < uVar30);
            }
            lVar33 = lVar40;
          } while (lVar40 < lVar38 && !bVar14);
          lVar33 = 0;
          do {
            bVar14 = SCARRY8(lVar33,2);
            lVar33 = lVar33 + 2;
            uVar51 = *(ulong *)((long)pvVar22 + lVar48) & lVar38 - 1U;
            if (uVar51 + 0xfc00000000000000 >> 0x3b < 0x1f) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f24);
              (*pcVar13)();
            }
            if (SUB168(SEXT816((long)(uVar51 * 0x20)) * SEXT816((long)uVar45),8) !=
                (long)(uVar51 * 0x20 * uVar45) >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f28);
              (*pcVar13)();
            }
            if (sVar28 != 0) {
              puVar35 = (undefined8 *)(lVar23 + 0x10 + sVar28 * uVar51);
              lVar40 = lVar31;
              puVar43 = puVar1;
              do {
                uVar54 = puVar35[-1];
                uVar53 = puVar35[-2];
                uVar58 = puVar35[1];
                uVar57 = *puVar35;
                uVar60 = puVar43[-1];
                uVar59 = puVar43[-2];
                uVar62 = puVar43[1];
                uVar61 = *puVar43;
                puVar43[-1] = CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar60 >> 0x30) ^
                                                 (byte)((ulong)uVar54 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                          (byte)((ulong)uVar54 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                                   (byte)((ulong)uVar54 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar60 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar60 >> 0x10) ^ (byte)((ulong)uVar54 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar60 >> 8) ^
                                                           (byte)((ulong)uVar54 >> 8),
                                                           (byte)uVar60 ^ (byte)uVar54)))))));
                puVar43[-2] = CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar59 >> 0x30) ^
                                                 (byte)((ulong)uVar53 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                          (byte)((ulong)uVar53 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                                   (byte)((ulong)uVar53 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar59 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar59 >> 0x10) ^ (byte)((ulong)uVar53 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar59 >> 8) ^
                                                           (byte)((ulong)uVar53 >> 8),
                                                           (byte)uVar59 ^ (byte)uVar53)))))));
                puVar43[1] = CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar62 >> 0x30) ^
                                               (byte)((ulong)uVar58 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                        (byte)((ulong)uVar58 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                                 (byte)((ulong)uVar58 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar62 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar58 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar62 >> 0x10) ^ (byte)((ulong)uVar58 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar62 >> 8) ^
                                                           (byte)((ulong)uVar58 >> 8),
                                                           (byte)uVar62 ^ (byte)uVar58)))))));
                *puVar43 = CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar61 >> 0x30) ^
                                             (byte)((ulong)uVar57 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                      (byte)((ulong)uVar57 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                               (byte)((ulong)uVar57 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar61 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar57 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar61 >> 0x10) ^
                                                           (byte)((ulong)uVar57 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar61 >> 8) ^
                                                                    (byte)((ulong)uVar57 >> 8),
                                                                    (byte)uVar61 ^ (byte)uVar57)))))
                                            ));
                puVar35 = puVar35 + 4;
                puVar43 = puVar43 + 4;
                lVar40 = lVar40 + -4;
              } while (lVar40 != 0);
            }
            uVar53 = *puVar5;
            uVar57 = puVar5[3];
            uVar54 = puVar5[2];
            *(undefined8 *)(piVar4 + 2) = puVar5[1];
            *(undefined8 *)piVar4 = uVar53;
            *(undefined8 *)(piVar4 + 6) = uVar57;
            *(undefined8 *)(piVar4 + 4) = uVar54;
            uVar53 = puVar5[4];
            uVar57 = puVar5[7];
            uVar54 = puVar5[6];
            *(undefined8 *)(piVar4 + 10) = puVar5[5];
            *(undefined8 *)(piVar4 + 8) = uVar53;
            *(undefined8 *)(piVar4 + 0xe) = uVar57;
            *(undefined8 *)(piVar4 + 0xc) = uVar54;
            if (uVar45 != 0) {
              uVar51 = 0;
              do {
                if (uVar51 + 0xf800000000000000 >> 0x3c < 0xf) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100678dcc);
                  (*pcVar13)();
                }
                uVar2 = uVar51 + 2;
                puVar35 = (undefined8 *)((long)pvVar22 + uVar51 * 0x40);
                uVar54 = puVar35[1];
                uVar53 = *puVar35;
                uVar58 = puVar35[3];
                uVar57 = puVar35[2];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[5];
                uVar53 = puVar35[4];
                uVar58 = puVar35[7];
                uVar57 = puVar35[6];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                puVar47 = *(uint **)(unaff_x20 + 0x28);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar50 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  puVar47[1] = uVar16;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  puVar47[2] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  puVar47[3] = uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar50 = uVar50 + 2;
                } while (uVar50 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = (undefined8 *)((long)pvVar3 + uVar51 * 0x20);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar54 = puVar35[9];
                uVar53 = puVar35[8];
                uVar58 = puVar35[0xb];
                uVar57 = puVar35[10];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[0xd];
                uVar53 = puVar35[0xc];
                uVar58 = puVar35[0xf];
                uVar57 = puVar35[0xe];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar51 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  puVar47[1] = uVar16;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  puVar47[2] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  puVar47[3] = uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar51 = uVar51 + 2;
                } while (uVar51 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = puVar43 + uVar45 * 8;
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar51 = uVar2;
              } while (uVar2 < uVar30);
            }
            uVar51 = *(ulong *)((long)pvVar3 + lVar48) & lVar38 - 1U;
            if (uVar51 + 0xfc00000000000000 >> 0x3b < 0x1f) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f2c);
              (*pcVar13)();
            }
            if (SUB168(SEXT816((long)(uVar51 * 0x20)) * SEXT816((long)uVar45),8) !=
                (long)(uVar51 * 0x20 * uVar45) >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f30);
              (*pcVar13)();
            }
            if (sVar28 != 0) {
              puVar35 = (undefined8 *)(lVar23 + 0x10 + sVar28 * uVar51);
              lVar40 = lVar31;
              puVar43 = puVar1 + uVar45 * 0x10;
              do {
                uVar54 = puVar35[-1];
                uVar53 = puVar35[-2];
                uVar58 = puVar35[1];
                uVar57 = *puVar35;
                uVar60 = puVar43[-1];
                uVar59 = puVar43[-2];
                uVar62 = puVar43[1];
                uVar61 = *puVar43;
                puVar43[-1] = CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar60 >> 0x30) ^
                                                 (byte)((ulong)uVar54 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                          (byte)((ulong)uVar54 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                                   (byte)((ulong)uVar54 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar60 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar60 >> 0x10) ^ (byte)((ulong)uVar54 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar60 >> 8) ^
                                                           (byte)((ulong)uVar54 >> 8),
                                                           (byte)uVar60 ^ (byte)uVar54)))))));
                puVar43[-2] = CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar59 >> 0x30) ^
                                                 (byte)((ulong)uVar53 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                          (byte)((ulong)uVar53 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                                   (byte)((ulong)uVar53 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar59 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar59 >> 0x10) ^ (byte)((ulong)uVar53 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar59 >> 8) ^
                                                           (byte)((ulong)uVar53 >> 8),
                                                           (byte)uVar59 ^ (byte)uVar53)))))));
                puVar43[1] = CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar62 >> 0x30) ^
                                               (byte)((ulong)uVar58 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                        (byte)((ulong)uVar58 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                                 (byte)((ulong)uVar58 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar62 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar58 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar62 >> 0x10) ^ (byte)((ulong)uVar58 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar62 >> 8) ^
                                                           (byte)((ulong)uVar58 >> 8),
                                                           (byte)uVar62 ^ (byte)uVar58)))))));
                *puVar43 = CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar61 >> 0x30) ^
                                             (byte)((ulong)uVar57 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                      (byte)((ulong)uVar57 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                               (byte)((ulong)uVar57 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar61 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar57 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar61 >> 0x10) ^
                                                           (byte)((ulong)uVar57 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar61 >> 8) ^
                                                                    (byte)((ulong)uVar57 >> 8),
                                                                    (byte)uVar61 ^ (byte)uVar57)))))
                                            ));
                puVar35 = puVar35 + 4;
                puVar43 = puVar43 + 4;
                lVar40 = lVar40 + -4;
              } while (lVar40 != 0);
            }
            uVar53 = *puVar6;
            uVar57 = puVar6[3];
            uVar54 = puVar6[2];
            *(undefined8 *)(piVar4 + 2) = puVar6[1];
            *(undefined8 *)piVar4 = uVar53;
            *(undefined8 *)(piVar4 + 6) = uVar57;
            *(undefined8 *)(piVar4 + 4) = uVar54;
            uVar53 = puVar6[4];
            uVar57 = puVar6[7];
            uVar54 = puVar6[6];
            *(undefined8 *)(piVar4 + 10) = puVar6[5];
            *(undefined8 *)(piVar4 + 8) = uVar53;
            *(undefined8 *)(piVar4 + 0xe) = uVar57;
            *(undefined8 *)(piVar4 + 0xc) = uVar54;
            if (uVar45 != 0) {
              uVar51 = 0;
              do {
                if (uVar51 + 0xf800000000000000 >> 0x3c < 0xf) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100678dd0);
                  (*pcVar13)();
                }
                uVar2 = uVar51 + 2;
                puVar35 = (undefined8 *)((long)pvVar3 + uVar51 * 0x40);
                uVar54 = puVar35[1];
                uVar53 = *puVar35;
                uVar58 = puVar35[3];
                uVar57 = puVar35[2];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[5];
                uVar53 = puVar35[4];
                uVar58 = puVar35[7];
                uVar57 = puVar35[6];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                puVar47 = *(uint **)(unaff_x20 + 0x28);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar50 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  puVar47[1] = uVar16;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  puVar47[2] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  puVar47[3] = uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar50 = uVar50 + 2;
                } while (uVar50 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = (undefined8 *)((long)pvVar22 + uVar51 * 0x20);
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar54 = puVar35[9];
                uVar53 = puVar35[8];
                uVar58 = puVar35[0xb];
                uVar57 = puVar35[10];
                uVar60 = *(undefined8 *)(piVar4 + 2);
                uVar59 = *(undefined8 *)piVar4;
                uVar62 = *(undefined8 *)(piVar4 + 6);
                uVar61 = *(undefined8 *)(piVar4 + 4);
                *(ulong *)(piVar4 + 2) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)piVar4 =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 6) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 4) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = puVar35[0xd];
                uVar53 = puVar35[0xc];
                uVar58 = puVar35[0xf];
                uVar57 = puVar35[0xe];
                uVar60 = *(undefined8 *)(piVar4 + 10);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar62 = *(undefined8 *)(piVar4 + 0xe);
                uVar61 = *(undefined8 *)(piVar4 + 0xc);
                *(ulong *)(piVar4 + 10) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar60 >> 0x28) ^
                                                 (byte)((ulong)uVar54 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar60 >> 0x20) ^
                                                          (byte)((ulong)uVar54 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar60 >> 0x18) ^
                                                                   (byte)((ulong)uVar54 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar60 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar60 ^ (byte)uVar54)))))));
                *(ulong *)(piVar4 + 8) =
                     CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar59 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar59 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar59 ^ (byte)uVar53)))))));
                *(ulong *)(piVar4 + 0xe) =
                     CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar58 >> 0x38),
                              CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar58 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                 (byte)((ulong)uVar58 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                          (byte)((ulong)uVar58 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                                   (byte)((ulong)uVar58 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar58 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) ^ (byte)((ulong)uVar58 >> 8),
                                                  (byte)uVar62 ^ (byte)uVar58)))))));
                *(ulong *)(piVar4 + 0xc) =
                     CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ (byte)((ulong)uVar57 >> 0x38),
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ (byte)((ulong)uVar57 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar61 >> 0x28) ^
                                                 (byte)((ulong)uVar57 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar61 >> 0x20) ^
                                                          (byte)((ulong)uVar57 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                                   (byte)((ulong)uVar57 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) ^ (byte)((ulong)uVar57 >> 8),
                                                  (byte)uVar61 ^ (byte)uVar57)))))));
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                *(undefined8 *)(puVar47 + 10) = *(undefined8 *)(piVar4 + 10);
                *(undefined8 *)(puVar47 + 8) = uVar59;
                *(undefined8 *)(puVar47 + 0xe) = uVar61;
                *(undefined8 *)(puVar47 + 0xc) = uVar60;
                *(undefined8 *)(puVar47 + 2) = uVar54;
                *(undefined8 *)puVar47 = uVar53;
                *(undefined8 *)(puVar47 + 6) = uVar58;
                *(undefined8 *)(puVar47 + 4) = uVar57;
                uVar51 = 0xfffffffffffffffe;
                do {
                  uVar17 = *puVar47;
                  uVar18 = puVar47[0xc];
                  uVar15 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar15,7);
                  uVar15 = puVar47[4] ^ uVar15;
                  puVar47[4] = uVar15;
                  uVar16 = uVar15 + uVar17;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = puVar47[8] ^ uVar16;
                  puVar47[8] = uVar16;
                  uVar15 = uVar16 + uVar15;
                  FUN_10067d3f4(uVar15,0xd);
                  uVar15 = uVar15 ^ uVar18;
                  puVar47[0xc] = uVar15;
                  uVar15 = uVar15 + uVar16;
                  FUN_10067d3f4(uVar15,0x12);
                  uVar15 = uVar15 ^ uVar17;
                  *puVar47 = uVar15;
                  uVar18 = puVar47[5];
                  uVar19 = puVar47[1];
                  uVar16 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar16,7);
                  uVar16 = puVar47[9] ^ uVar16;
                  puVar47[9] = uVar16;
                  uVar17 = uVar16 + uVar18;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar16 = uVar17 + uVar16;
                  FUN_10067d3f4(uVar16,0xd);
                  uVar16 = uVar16 ^ uVar19;
                  puVar47[1] = uVar16;
                  uVar17 = uVar16 + uVar17;
                  FUN_10067d3f4(uVar17,0x12);
                  puVar47[5] = uVar17 ^ uVar18;
                  uVar19 = puVar47[10];
                  uVar20 = puVar47[6];
                  uVar18 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xe] ^ uVar18;
                  puVar47[0xe] = uVar18;
                  uVar17 = uVar18 + uVar19;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[2] ^ uVar17;
                  puVar47[2] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar20;
                  puVar47[6] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar19;
                  uVar9 = puVar47[0xf];
                  uVar10 = puVar47[0xb];
                  uVar18 = uVar10 + uVar9;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[3] ^ uVar18;
                  puVar47[3] = uVar18;
                  uVar19 = uVar18 + uVar9;
                  FUN_10067d3f4(uVar19,9);
                  uVar19 = puVar47[7] ^ uVar19;
                  puVar47[7] = uVar19;
                  uVar20 = uVar19 + uVar18;
                  FUN_10067d3f4(uVar20,0xd);
                  uVar20 = uVar20 ^ uVar10;
                  puVar47[0xb] = uVar20;
                  uVar20 = uVar20 + uVar19;
                  FUN_10067d3f4(uVar20,0x12);
                  puVar47[0xf] = uVar20 ^ uVar9;
                  uVar19 = uVar18 + uVar15;
                  FUN_10067d3f4(uVar19,7);
                  uVar19 = uVar19 ^ uVar16;
                  puVar47[1] = uVar19;
                  uVar16 = uVar19 + uVar15;
                  FUN_10067d3f4(uVar16,9);
                  uVar16 = uVar16 ^ uVar17;
                  puVar47[2] = uVar16;
                  uVar19 = uVar16 + uVar19;
                  FUN_10067d3f4(uVar19,0xd);
                  puVar47[3] = uVar19 ^ uVar18;
                  uVar16 = (uVar19 ^ uVar18) + uVar16;
                  FUN_10067d3f4(uVar16,0x12);
                  *puVar47 = uVar16 ^ uVar15;
                  uVar19 = puVar47[4];
                  uVar20 = puVar47[5];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[6] ^ uVar18;
                  puVar47[6] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[7] ^ uVar17;
                  puVar47[7] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[4] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[5] = uVar18 ^ uVar20;
                  uVar19 = puVar47[9];
                  uVar20 = puVar47[10];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xb] ^ uVar18;
                  puVar47[0xb] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[8] ^ uVar17;
                  puVar47[8] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[9] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[10] = uVar18 ^ uVar20;
                  uVar19 = puVar47[0xe];
                  uVar20 = puVar47[0xf];
                  uVar18 = uVar19 + uVar20;
                  FUN_10067d3f4(uVar18,7);
                  uVar18 = puVar47[0xc] ^ uVar18;
                  puVar47[0xc] = uVar18;
                  uVar17 = uVar18 + uVar20;
                  FUN_10067d3f4(uVar17,9);
                  uVar17 = puVar47[0xd] ^ uVar17;
                  puVar47[0xd] = uVar17;
                  uVar18 = uVar17 + uVar18;
                  FUN_10067d3f4(uVar18,0xd);
                  uVar18 = uVar18 ^ uVar19;
                  puVar47[0xe] = uVar18;
                  uVar18 = uVar18 + uVar17;
                  FUN_10067d3f4(uVar18,0x12);
                  puVar47[0xf] = uVar18 ^ uVar20;
                  uVar51 = uVar51 + 2;
                } while (uVar51 < 6);
                *piVar4 = *piVar4 + (uVar16 ^ uVar15);
                piVar4[1] = puVar47[1] + piVar4[1];
                piVar4[2] = puVar47[2] + piVar4[2];
                piVar4[3] = puVar47[3] + piVar4[3];
                piVar4[4] = puVar47[4] + piVar4[4];
                piVar4[5] = puVar47[5] + piVar4[5];
                piVar4[6] = puVar47[6] + piVar4[6];
                piVar4[7] = puVar47[7] + piVar4[7];
                piVar4[8] = puVar47[8] + piVar4[8];
                piVar4[9] = puVar47[9] + piVar4[9];
                piVar4[10] = puVar47[10] + piVar4[10];
                piVar4[0xb] = puVar47[0xb] + piVar4[0xb];
                piVar4[0xc] = puVar47[0xc] + piVar4[0xc];
                piVar4[0xd] = puVar47[0xd] + piVar4[0xd];
                piVar4[0xe] = puVar47[0xe] + piVar4[0xe];
                piVar4[0xf] = puVar47[0xf] + piVar4[0xf];
                puVar43 = puVar43 + uVar45 * 8;
                uVar54 = *(undefined8 *)(piVar4 + 2);
                uVar53 = *(undefined8 *)piVar4;
                uVar58 = *(undefined8 *)(piVar4 + 6);
                uVar57 = *(undefined8 *)(piVar4 + 4);
                uVar59 = *(undefined8 *)(piVar4 + 8);
                uVar61 = *(undefined8 *)(piVar4 + 0xe);
                uVar60 = *(undefined8 *)(piVar4 + 0xc);
                puVar43[5] = *(undefined8 *)(piVar4 + 10);
                puVar43[4] = uVar59;
                puVar43[7] = uVar61;
                puVar43[6] = uVar60;
                puVar43[1] = uVar54;
                *puVar43 = uVar53;
                puVar43[3] = uVar58;
                puVar43[2] = uVar57;
                uVar51 = uVar2;
              } while (uVar2 < uVar30);
            }
          } while (lVar33 < lVar38 && !bVar14);
        }
        lVar33 = (uVar29 + 1) - uVar8;
        puVar35 = puVar1;
        puVar43 = local_218;
        if (uVar45 != 0) {
          do {
            uVar53 = puVar35[-2];
            uVar57 = puVar35[1];
            uVar54 = *puVar35;
            puVar43[-1] = puVar35[-1];
            puVar43[-2] = uVar53;
            puVar43[1] = uVar57;
            *puVar43 = uVar54;
            lVar33 = lVar33 + -8;
            uVar51 = uVar29 - uVar8;
            puVar35 = puVar35 + 4;
            puVar43 = puVar43 + 4;
          } while (lVar33 != 0);
          do {
            if (uVar51 == 0x1fffffffffffffff) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f20);
              (*pcVar13)();
            }
            *(undefined4 *)(local_1b8 + uVar51 * 4) =
                 *(undefined4 *)((long)pvVar22 + uVar51 * 4 + 4);
            uVar51 = uVar51 + 1;
          } while (uVar39 != uVar51);
        }
        lVar32 = lVar32 + 1;
        local_218 = local_218 + uVar45 * 0x10;
        local_1b8 = local_1b8 + sVar28;
      } while (lVar32 != lVar37);
    }
    puVar27 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar42 != (undefined1 *)0x0) {
      puVar27 = puVar42;
      FUN_100630840(puVar42,0);
      _memcpy(puVar27 + 0x20,pvVar21,(size_t)puVar42);
    }
    ppppuVar46 = *(undefined8 *****)(lVar49 + 0x18);
    ppppuVar24 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
    if (ppppuVar46 != (undefined8 ****)0x0) {
      ppppuVar24 = ppppuVar46;
      FUN_100630840(ppppuVar46,0);
      ppppuVar52 = local_c8;
      FUN_1006413c4(ppppuVar52,ppppuVar24 + 4,ppppuVar46);
      _swift_retain(lVar49);
      _swift_release(local_c8[0]);
      if (ppppuVar52 != ppppuVar46) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100678d58);
        (*pcVar13)();
      }
    }
    lVar37 = *(long *)(unaff_x20 + 0x30);
    _swift_initStackObject(uVar26,auStack_108);
    FUN_100668564(ppppuVar24,1);
    if (*(long *)(puVar27 + 0x10) == 0) {
      ppppuVar52 = (undefined8 ****)0x0;
    }
    else {
      dVar55 = (double)lVar37;
      cVar11 = *(char *)(ppppuVar24 + 3);
      uVar45 = (ulong)cVar11;
      uVar16 = (uint)(int)cVar11 >> 6 & 3;
      if (uVar16 == 0) {
        puVar41 = &DAT_10084cdc0;
LAB_100678de8:
        pdVar36 = (double *)(puVar41 + uVar45 * 8);
LAB_100678dec:
        dVar56 = *pdVar36;
      }
      else {
        if (uVar16 != 1) {
          uVar45 = uVar45 ^ 0x1fffffffffffff80;
          puVar41 = &DAT_10084cd60;
          goto LAB_100678de8;
        }
        uVar16 = (int)cVar11 & 0x3f;
        if (uVar16 < 7) {
          pdVar36 = (double *)(&DAT_10084cd88 + (ulong)uVar16 * 8);
          goto LAB_100678dec;
        }
        dVar56 = 64.0;
      }
      if (dVar55 <= dVar56 * 4294967295.0) {
        dVar55 = (double)(long)(dVar55 / dVar56);
        if (0x7fefffffffffffff < (ulong)ABS(dVar55)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f6c);
          (*pcVar13)();
        }
        if (-9.223372036854778e+18 < dVar55) {
          if (dVar55 < 9.223372036854776e+18) {
            local_a8 = (long)dVar55;
            uStack_b0 = 1;
            ppppuVar46 = ppppuVar24;
            local_b8 = puVar27;
            lStack_a0 = lVar37;
            local_98 = ppppuVar24;
            FUN_10066a29c();
            _swift_release(ppppuVar24);
            _swift_release(puVar27);
            _swift_slowDealloc(pvVar21,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(pvVar22,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(lVar23,0xffffffffffffffff,0xffffffffffffffff);
            return ppppuVar46;
          }
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f74);
          (*pcVar13)();
        }
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100678f70);
        (*pcVar13)();
      }
      ppppuVar52 = (undefined8 ****)0x1;
    }
    _swift_release();
    FUN_10066a25c();
    _swift_allocError(&DAT_1009e4fa0,puVar27,0,0);
    *puVar27 = (char)ppppuVar52;
    _swift_willThrow();
  }
  _swift_release(ppppuVar24);
LAB_1006765c0:
  _swift_slowDealloc(pvVar21,0xffffffffffffffff,0xffffffffffffffff);
  _swift_slowDealloc(pvVar22,0xffffffffffffffff,0xffffffffffffffff);
  _swift_slowDealloc(lVar23,0xffffffffffffffff,0xffffffffffffffff);
  return ppppuVar52;
}

