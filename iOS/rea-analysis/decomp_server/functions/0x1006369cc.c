// rea decompile_all
// name: FUN_1006369cc
// address: 0x1006369cc
// body: available
// range: 0x1006369cc-0x100636cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006369cc(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  void *pvVar18;
  long unaff_x20;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  FUN_100636cd4();
  uVar19 = *(ulong *)(param_1 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar19 != 0) {
    uVar24 = uVar19;
    if (0xf < uVar19) {
      uVar24 = 0x10;
    }
    uVar23 = 0;
    do {
      uVar21 = *(ulong *)(param_1 + 0x10);
      if ((long)uVar21 < (long)uVar23 || (long)uVar21 < (long)uVar24) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cc0);
        (*pcVar4)();
      }
      if ((0xf < uVar21 - uVar24) && (uVar21 = uVar24 + 0x10, SCARRY8(uVar24,0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cd0);
        (*pcVar4)();
      }
      if ((long)uVar21 < (long)uVar24) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cc4);
        (*pcVar4)();
      }
      uVar3 = *(ulong *)(unaff_x20 + 0x70);
      uVar22 = *(ulong *)(unaff_x20 + 0x78) >> 1;
      if (SBORROW8(uVar22,uVar3)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cc8);
        (*pcVar4)();
      }
      pcVar4 = *(code **)(unaff_x20 + 0x18);
      lVar20 = *(long *)(unaff_x20 + 0x68);
      pvVar1 = (void *)(uVar22 - uVar3);
      if ((long)(uVar24 - uVar23) <= (long)(uVar22 - uVar3)) {
        pvVar1 = (void *)(uVar24 - uVar23);
      }
      _swift_bridgeObjectRetain(param_1);
      pvVar6 = pvVar1;
      _swift_slowAlloc(pvVar1,0xffffffffffffffff);
      if ((long)pvVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100636ccc);
        (*pcVar4)();
      }
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (pvVar1 != (void *)0x0) {
        _bzero(pvVar6,(size_t)pvVar1);
        uVar2 = uVar24;
        if ((long)uVar24 <= (long)uVar23) {
          uVar2 = uVar23;
        }
        pvVar10 = (void *)(uVar2 - uVar23);
        uVar2 = uVar3;
        if ((long)uVar3 <= (long)uVar22) {
          uVar2 = uVar22;
        }
        pvVar11 = (void *)(uVar2 - uVar3);
        pvVar12 = pvVar11;
        if ((void *)((long)pvVar1 - 1U) <= pvVar11) {
          pvVar12 = (void *)((long)pvVar1 - 1U);
        }
        if (pvVar10 <= pvVar12) {
          pvVar12 = pvVar10;
        }
        uVar22 = (long)pvVar12 + 1;
        if (uVar22 < 0x21) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = (void *)0x0;
          if ((0x1f < (long)pvVar6 + (-0x20 - (uVar23 + param_1))) &&
             (0x1f < (long)pvVar6 - (uVar3 + lVar20))) {
            uVar2 = 0x20;
            if ((uVar22 & 0x1f) != 0) {
              uVar2 = uVar22 & 0x1f;
            }
            pvVar12 = (void *)(uVar22 - uVar2);
            puVar13 = (undefined8 *)(param_1 + 0x30 + uVar23);
            puVar15 = (undefined8 *)((long)pvVar6 + 0x10);
            puVar16 = (undefined8 *)(lVar20 + uVar3 + 0x10);
            pvVar17 = pvVar12;
            do {
              uVar25 = puVar13[-1];
              uVar9 = puVar13[-2];
              uVar27 = puVar13[1];
              uVar26 = *puVar13;
              uVar29 = puVar16[-1];
              uVar28 = puVar16[-2];
              uVar31 = puVar16[1];
              uVar30 = *puVar16;
              puVar15[-1] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
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
              puVar15[-2] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                              (byte)((ulong)uVar9 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                       (byte)((ulong)uVar9 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                (byte)((ulong)uVar9 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar28 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar9 >> 0x18
                                                                               ),CONCAT12((byte)((
                                                  ulong)uVar28 >> 0x10) ^
                                                  (byte)((ulong)uVar9 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar9 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar9)))))));
              puVar15[1] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                             (byte)((ulong)uVar27 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                      (byte)((ulong)uVar27 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                               (byte)((ulong)uVar27 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar31 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar27 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                           (byte)((ulong)uVar27 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                                    (byte)((ulong)uVar27 >> 8),
                                                                    (byte)uVar31 ^ (byte)uVar27)))))
                                            ));
              *puVar15 = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                           (byte)((ulong)uVar26 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                    (byte)((ulong)uVar26 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                             (byte)((ulong)uVar26 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar30 >> 0x18)
                                                                      ^ (byte)((ulong)uVar26 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar30
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar26
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar30 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
              puVar13 = puVar13 + 4;
              puVar15 = puVar15 + 4;
              puVar16 = puVar16 + 4;
              pvVar17 = (void *)((long)pvVar17 - 0x20);
            } while (pvVar17 != (void *)0x0);
          }
        }
        lVar14 = param_1 + 0x20 + uVar23;
        lVar20 = lVar20 + uVar3;
        pvVar17 = pvVar6;
        pvVar18 = pvVar1;
        do {
          if (pvVar12 == pvVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cb8);
            (*pcVar4)();
          }
          if (pvVar12 == pvVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cbc);
            (*pcVar4)();
          }
          *(byte *)((long)pvVar17 + (long)pvVar12) =
               *(byte *)(lVar20 + (long)pvVar12) ^ *(byte *)(lVar14 + (long)pvVar12);
          lVar20 = lVar20 + 1;
          lVar14 = lVar14 + 1;
          pvVar11 = (void *)((long)pvVar11 - 1);
          pvVar10 = (void *)((long)pvVar10 - 1);
          pvVar18 = (void *)((long)pvVar18 - 1);
          pvVar17 = (void *)((long)pvVar17 + 1);
        } while (pvVar12 != pvVar18);
        puVar7 = &DAT_100ab7e50;
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
        _swift_allocObject();
        puVar8 = puVar7;
        _malloc_size();
        *(void **)(puVar7 + 0x10) = pvVar1;
        *(long *)(puVar7 + 0x18) = (long)puVar8 * 2 + -0x40;
        _memcpy(puVar7 + 0x20,pvVar6,(size_t)pvVar1);
      }
      _swift_slowDealloc(pvVar6,0xffffffffffffffff,0xffffffffffffffff);
      puVar8 = puVar7;
      (*pcVar4)(puVar7,puVar7 + 0x20,0,*(long *)(puVar7 + 0x10) << 1 | 1);
      _swift_release(puVar7);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100636cd4);
        (*pcVar4)();
      }
      lVar20 = *(long *)(puVar8 + 0x10);
      _swift_bridgeObjectRelease(param_1);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
      *(undefined **)(unaff_x20 + 0x60) = puVar8;
      *(undefined **)(unaff_x20 + 0x68) = puVar8 + 0x20;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
      *(ulong *)(unaff_x20 + 0x78) = lVar20 << 1 | 1;
      _swift_unknownObjectRelease(uVar9);
      bVar5 = uVar24 != uVar19;
      uVar23 = uVar24;
      uVar24 = uVar21;
    } while (bVar5);
  }
  _swift_bridgeObjectRelease_n(param_1,2);
  return;
}

