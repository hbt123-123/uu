// rea decompile_all
// name: FUN_100667eb0
// address: 0x100667eb0
// body: available
// range: 0x100667eb0-0x10066820b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100667eb0(undefined8 param_1)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x20;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  bVar4 = bVar3 >> 6;
  uVar14 = (uint)bVar3;
  if (bVar4 == 0) {
    uVar15 = 0x40;
    if (1 < uVar14) {
      uVar15 = 0x80;
    }
  }
  else if (bVar4 == 1) {
    if ((uVar14 & 0x3f) < 7) {
      uVar15 = *(ulong *)(&DAT_10084bf08 + (ulong)(uVar14 & 0x3f) * 8);
    }
    else {
      uVar15 = 0x48;
    }
  }
  else {
    uVar15 = *(ulong *)(&DAT_10084bee0 + ((long)(char)bVar3 ^ 0x1fffffffffffff80U) * 8);
  }
  uVar6 = uVar15;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (uVar15,PTR___ss5UInt8VN_100995d40);
  *(ulong *)(uVar6 + 0x10) = uVar15;
  pvVar1 = (void *)(uVar6 + 0x20);
  _memset(pvVar1,0x5c,uVar15);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(ulong *)(lVar9 + 0x10);
  if (uVar7 != 0) {
    uVar11 = uVar7 - 1;
    uVar8 = uVar15;
    if (uVar11 <= uVar15) {
      uVar8 = uVar11;
    }
    if (uVar7 < 0x21) {
      uVar11 = 0;
    }
    else {
      uVar12 = uVar15;
      if (uVar11 <= uVar15) {
        uVar12 = uVar11;
      }
      if (pvVar1 < (void *)(lVar9 + uVar12 + 0x21) && lVar9 + 0x20U < uVar6 + uVar12 + 0x21) {
        uVar11 = 0;
      }
      else {
        uVar12 = uVar8 + 1 & 0x1f;
        uVar11 = 0x20;
        if (uVar12 != 0) {
          uVar11 = uVar12;
        }
        uVar11 = (uVar8 + 1) - uVar11;
        puVar10 = (undefined8 *)(lVar9 + 0x30);
        puVar13 = (undefined8 *)(uVar6 + 0x30);
        uVar8 = uVar11;
        do {
          uVar17 = puVar10[-1];
          uVar16 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          uVar21 = puVar13[-1];
          uVar20 = puVar13[-2];
          uVar23 = puVar13[1];
          uVar22 = *puVar13;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                          (byte)((ulong)uVar17 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                   (byte)((ulong)uVar17 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                            (byte)((ulong)uVar17 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                     (byte)((ulong)uVar17 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar21
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar20
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
          puVar13[1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                         (byte)((ulong)uVar19 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                  (byte)((ulong)uVar19 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                           (byte)((ulong)uVar19 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                    (byte)((ulong)uVar19 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar23 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar19 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar19)))))));
          *puVar13 = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
          puVar10 = puVar10 + 4;
          puVar13 = puVar13 + 4;
          uVar8 = uVar8 - 0x20;
        } while (uVar8 != 0);
      }
    }
    do {
      if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100668208);
        (*pcVar5)();
      }
      *(byte *)((long)pvVar1 + uVar11) =
           *(byte *)((long)pvVar1 + uVar11) ^ *(byte *)(lVar9 + 0x20U + uVar11);
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  if (bVar4 == 0) {
    uVar15 = 0x40;
    if (1 < uVar14) {
      uVar15 = 0x80;
    }
  }
  else if (bVar4 == 1) {
    if ((bVar3 & 0x3f) < 7) {
      uVar15 = *(ulong *)(&DAT_10084bf08 + (ulong)(bVar3 & 0x3f) * 8);
    }
    else {
      uVar15 = 0x48;
    }
  }
  else {
    uVar15 = *(ulong *)(&DAT_10084bee0 + ((long)(char)bVar3 ^ 0x1fffffffffffff80U) * 8);
  }
  uVar7 = uVar15;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (uVar15,PTR___ss5UInt8VN_100995d40);
  *(ulong *)(uVar7 + 0x10) = uVar15;
  pvVar1 = (void *)(uVar7 + 0x20);
  _memset(pvVar1,0x36,uVar15);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(ulong *)(lVar9 + 0x10);
  if (uVar8 != 0) {
    uVar12 = uVar8 - 1;
    uVar11 = uVar15;
    if (uVar12 <= uVar15) {
      uVar11 = uVar12;
    }
    if (uVar8 < 0x21) {
      uVar12 = 0;
    }
    else {
      uVar2 = uVar15;
      if (uVar12 <= uVar15) {
        uVar2 = uVar12;
      }
      if (pvVar1 < (void *)(lVar9 + uVar2 + 0x21) && lVar9 + 0x20U < uVar7 + uVar2 + 0x21) {
        uVar12 = 0;
      }
      else {
        uVar2 = uVar11 + 1 & 0x1f;
        uVar12 = 0x20;
        if (uVar2 != 0) {
          uVar12 = uVar2;
        }
        uVar12 = (uVar11 + 1) - uVar12;
        puVar10 = (undefined8 *)(lVar9 + 0x30);
        puVar13 = (undefined8 *)(uVar7 + 0x30);
        uVar11 = uVar12;
        do {
          uVar17 = puVar10[-1];
          uVar16 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          uVar21 = puVar13[-1];
          uVar20 = puVar13[-2];
          uVar23 = puVar13[1];
          uVar22 = *puVar13;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                          (byte)((ulong)uVar17 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                   (byte)((ulong)uVar17 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                            (byte)((ulong)uVar17 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                     (byte)((ulong)uVar17 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar21
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar20
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
          puVar13[1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                         (byte)((ulong)uVar19 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                  (byte)((ulong)uVar19 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                           (byte)((ulong)uVar19 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                    (byte)((ulong)uVar19 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar23 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar19 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar19)))))));
          *puVar13 = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
          puVar10 = puVar10 + 4;
          puVar13 = puVar13 + 4;
          uVar11 = uVar11 - 0x20;
        } while (uVar11 != 0);
      }
    }
    do {
      if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10066820c);
        (*pcVar5)();
      }
      *(byte *)((long)pvVar1 + uVar12) =
           *(byte *)((long)pvVar1 + uVar12) ^ *(byte *)(lVar9 + 0x20U + uVar12);
      uVar12 = uVar12 + 1;
    } while (uVar8 != uVar12);
  }
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(param_1);
  FUN_100628ae0();
  uVar15 = uVar7;
  FUN_10066820c(uVar7,bVar3);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRetain(uVar6);
  FUN_100628ae0(uVar15);
  uVar15 = uVar6;
  FUN_10066820c(uVar6,bVar3);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar6);
  return uVar15;
}

