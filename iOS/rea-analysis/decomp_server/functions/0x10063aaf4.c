// rea decompile_all
// name: FUN_10063aaf4
// address: 0x10063aaf4
// body: available
// range: 0x10063aaf4-0x10063af4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063aaf4(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  void *pvVar18;
  long lVar19;
  undefined8 *unaff_x20;
  size_t sVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  param_3 = param_3 >> 1;
  uVar3 = param_3 - param_2;
  if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af48);
    (*pcVar4)();
  }
  lVar6 = 0;
  FUN_1006295a0(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  if (0 < (long)uVar3) {
    lVar23 = 0;
    lVar10 = unaff_x20[5];
    lVar21 = unaff_x20[7];
    lVar19 = lVar6;
    do {
      if (lVar21 == lVar10) {
        lVar21 = unaff_x20[4];
        lVar6 = *(ulong *)(lVar21 + 0x18) + 1;
        if (0xfffffffffffffffe < *(ulong *)(lVar21 + 0x18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af40);
          (*pcVar4)();
        }
        *(long *)(lVar21 + 0x18) = lVar6;
        pcVar4 = (code *)*unaff_x20;
        lVar21 = *(long *)(lVar21 + 0x10);
        _swift_bridgeObjectRetain(lVar21);
        thunk_FUN_10066690c(lVar6,8);
        FUN_100628ae0();
        lVar6 = lVar21;
        (*pcVar4)(lVar21,lVar21 + 0x20,0,*(long *)(lVar21 + 0x10) << 1 | 1);
        _swift_bridgeObjectRelease(lVar21);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af4c);
          (*pcVar4)();
        }
        _swift_bridgeObjectRelease(unaff_x20[6]);
        lVar21 = 0;
        unaff_x20[6] = lVar6;
      }
      lVar6 = param_2 + lVar23;
      if (SCARRY8(param_2,lVar23)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af10);
        (*pcVar4)();
      }
      if ((long)param_3 < lVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af14);
        (*pcVar4)();
      }
      if (lVar6 < param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af18);
        (*pcVar4)();
      }
      lVar24 = unaff_x20[6];
      lVar22 = *(long *)(lVar24 + 0x10);
      pvVar18 = (void *)(lVar22 - lVar21);
      if (lVar22 < lVar21) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af1c);
        (*pcVar4)();
      }
      if (lVar21 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af20);
        (*pcVar4)();
      }
      if (SBORROW8(param_3,lVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af24);
        (*pcVar4)();
      }
      pvVar2 = pvVar18;
      if ((long)(param_3 - lVar6) <= (long)pvVar18) {
        pvVar2 = (void *)(param_3 - lVar6);
      }
      pvVar7 = pvVar2;
      _swift_slowAlloc(pvVar2,0xffffffffffffffff);
      if ((long)pvVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af28);
        (*pcVar4)();
      }
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (pvVar2 != (void *)0x0) {
        _bzero(pvVar7,(size_t)pvVar2);
        pvVar11 = (void *)(param_3 - (lVar23 + param_2));
        if (pvVar18 <= pvVar11) {
          pvVar11 = pvVar18;
        }
        if ((void *)((long)pvVar2 - 1U) <= pvVar11) {
          pvVar11 = (void *)((long)pvVar2 - 1U);
        }
        uVar1 = (long)pvVar11 + 1;
        if (uVar1 < 0x21) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          if ((0x1f < (ulong)((long)pvVar7 - (param_1 + param_2 + lVar23))) &&
             (0x1f < (ulong)((long)pvVar7 + (-0x20 - (lVar21 + lVar24))))) {
            uVar13 = 0x20;
            if ((uVar1 & 0x1f) != 0) {
              uVar13 = uVar1 & 0x1f;
            }
            lVar12 = uVar1 - uVar13;
            lVar14 = ~(ulong)pvVar11 + uVar13;
            puVar15 = (undefined8 *)(param_1 + param_2 + 0x10 + lVar23);
            puVar16 = (undefined8 *)((long)pvVar7 + 0x10);
            puVar17 = (undefined8 *)(lVar24 + lVar21 + 0x30);
            do {
              uVar26 = puVar15[-1];
              uVar25 = puVar15[-2];
              uVar28 = puVar15[1];
              uVar27 = *puVar15;
              uVar30 = puVar17[-1];
              uVar29 = puVar17[-2];
              uVar32 = puVar17[1];
              uVar31 = *puVar17;
              puVar16[-1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                              (byte)((ulong)uVar26 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                       (byte)((ulong)uVar26 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                                (byte)((ulong)uVar26 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar30 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar26 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) ^ (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                           (byte)((ulong)uVar26 >> 8),
                                                           (byte)uVar30 ^ (byte)uVar26)))))));
              puVar16[-2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                              (byte)((ulong)uVar25 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                       (byte)((ulong)uVar25 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                (byte)((ulong)uVar25 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar29 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar25 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar25)))))));
              puVar16[1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                             (byte)((ulong)uVar28 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                      (byte)((ulong)uVar28 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                               (byte)((ulong)uVar28 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar32 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar28 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                           (byte)((ulong)uVar28 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                    (byte)((ulong)uVar28 >> 8),
                                                                    (byte)uVar32 ^ (byte)uVar28)))))
                                            ));
              *puVar16 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                           (byte)((ulong)uVar27 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                    (byte)((ulong)uVar27 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                             (byte)((ulong)uVar27 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar31 >> 0x18)
                                                                      ^ (byte)((ulong)uVar27 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar31
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar27
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar31 >> 8) ^ (byte)((ulong)uVar27 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar27)))))));
              puVar15 = puVar15 + 4;
              puVar16 = puVar16 + 4;
              puVar17 = puVar17 + 4;
              lVar14 = lVar14 + 0x20;
            } while (lVar14 != 0);
          }
        }
        lVar14 = 0;
        lVar6 = param_1 + lVar6;
        lVar24 = lVar24 + lVar21 + 0x20;
        pvVar18 = pvVar7;
        do {
          if (lVar12 + (param_2 - param_3) + lVar23 + lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af08);
            (*pcVar4)();
          }
          if (lVar12 + (lVar21 - lVar22) + lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af0c);
            (*pcVar4)();
          }
          *(byte *)((long)pvVar18 + lVar12) = *(byte *)(lVar24 + lVar12) ^ *(byte *)(lVar6 + lVar12)
          ;
          lVar24 = lVar24 + 1;
          lVar6 = lVar6 + 1;
          lVar14 = lVar14 + 1;
          pvVar18 = (void *)((long)pvVar18 + 1);
        } while ((lVar12 - (long)pvVar2) + lVar14 != 0);
        puVar8 = &DAT_100ab7e50;
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
        _swift_allocObject();
        puVar9 = puVar8;
        _malloc_size();
        *(void **)(puVar8 + 0x10) = pvVar2;
        *(long *)(puVar8 + 0x18) = (long)puVar9 * 2 + -0x40;
        _memcpy(puVar8 + 0x20,pvVar7,(size_t)pvVar2);
      }
      _swift_slowDealloc(pvVar7,0xffffffffffffffff,0xffffffffffffffff);
      sVar20 = *(size_t *)(puVar8 + 0x10);
      bVar5 = SCARRY8(lVar21,sVar20);
      lVar21 = lVar21 + sVar20;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af2c);
        (*pcVar4)();
      }
      bVar5 = SCARRY8(lVar23,sVar20);
      lVar23 = lVar23 + sVar20;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af30);
        (*pcVar4)();
      }
      uVar13 = *(ulong *)(lVar19 + 0x10);
      uVar1 = uVar13 + sVar20;
      if (SCARRY8(uVar13,sVar20)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af34);
        (*pcVar4)();
      }
      if ((long)(*(ulong *)(lVar19 + 0x18) >> 1) < (long)uVar1) {
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        lVar6 = 1;
        FUN_1006295a0(1,uVar13,1,lVar19);
        uVar13 = *(ulong *)(lVar6 + 0x10);
        if (*(long *)(puVar8 + 0x10) != 0) goto LAB_10063ae68;
LAB_10063ab88:
        _swift_release(puVar8);
        if (sVar20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af38);
          (*pcVar4)();
        }
      }
      else {
        lVar6 = lVar19;
        if (sVar20 == 0) goto LAB_10063ab88;
LAB_10063ae68:
        if ((long)((*(ulong *)(lVar6 + 0x18) >> 1) - uVar13) < (long)sVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af3c);
          (*pcVar4)();
        }
        _memcpy((void *)(lVar6 + uVar13 + 0x20),puVar8 + 0x20,sVar20);
        _swift_release(puVar8);
        if (sVar20 != 0) {
          if (SCARRY8(*(long *)(lVar6 + 0x10),sVar20)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10063af44);
            (*pcVar4)();
          }
          *(size_t *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + sVar20;
        }
      }
      lVar19 = lVar6;
    } while (lVar23 < (long)uVar3);
    unaff_x20[7] = lVar21;
  }
  return lVar6;
}

