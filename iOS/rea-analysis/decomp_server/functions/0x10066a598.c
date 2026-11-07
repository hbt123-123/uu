// rea decompile_all
// name: FUN_10066a598
// address: 0x10066a598
// body: available
// range: 0x10066a598-0x10066a7f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010066a7ac) */

ulong FUN_10066a598(ulong param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long unaff_x21;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar6 = 4;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (4,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar6 + 0x10) = 4;
  *(char *)(lVar6 + 0x20) = (char)((ulong)param_2 >> 0x18);
  *(char *)(lVar6 + 0x21) = (char)((ulong)param_2 >> 0x10);
  *(char *)(lVar6 + 0x22) = (char)((ulong)param_2 >> 8);
  *(char *)(lVar6 + 0x23) = (char)param_2;
  _swift_bridgeObjectRetain(param_1);
  FUN_100628ae0(lVar6);
  uVar13 = param_1;
  FUN_100667eb0();
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (1 < param_3) {
      _swift_bridgeObjectRetain(uVar13);
      lVar6 = 2;
      uVar14 = uVar13;
      while( true ) {
        uVar7 = uVar14;
        FUN_100667eb0();
        _swift_bridgeObjectRelease(uVar14);
        uVar14 = *(ulong *)(uVar13 + 0x10);
        if (uVar14 != 0) {
          if (*(ulong *)(uVar7 + 0x10) < uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10066a7f8);
            (*pcVar4)();
          }
          uVar8 = uVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar8 & 1) == 0) {
            FUN_1006541b8();
          }
          uVar9 = *(ulong *)(uVar13 + 0x10);
          uVar10 = uVar14 - 1;
          uVar8 = uVar9;
          if (uVar10 <= uVar9) {
            uVar8 = uVar10;
          }
          if (uVar8 < 0x20) {
            uVar10 = 0;
          }
          else {
            uVar3 = uVar9;
            if (uVar10 <= uVar9) {
              uVar3 = uVar10;
            }
            if (uVar13 + 0x20 < uVar7 + uVar3 + 0x21 && uVar7 + 0x20 < uVar13 + uVar3 + 0x21) {
              uVar10 = 0;
            }
            else {
              uVar3 = uVar8 + 1 & 0x1f;
              uVar10 = 0x20;
              if (uVar3 != 0) {
                uVar10 = uVar3;
              }
              uVar10 = (uVar8 + 1) - uVar10;
              puVar11 = (undefined8 *)(uVar13 + 0x30);
              puVar12 = (undefined8 *)(uVar7 + 0x30);
              uVar8 = uVar10;
              do {
                uVar16 = puVar11[-1];
                uVar15 = puVar11[-2];
                uVar18 = puVar11[1];
                uVar17 = *puVar11;
                uVar20 = puVar12[-1];
                uVar19 = puVar12[-2];
                uVar22 = puVar12[1];
                uVar21 = *puVar12;
                puVar11[-1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                                 (byte)((ulong)uVar16 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                          (byte)((ulong)uVar16 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                                   (byte)((ulong)uVar16 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar20 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) ^ (byte)((ulong)uVar16 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((ulong)uVar16 >> 8),
                                                           (byte)uVar20 ^ (byte)uVar16)))))));
                puVar11[-2] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                                 (byte)((ulong)uVar15 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                          (byte)((ulong)uVar15 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                                   (byte)((ulong)uVar15 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar19 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar19 >> 0x10) ^ (byte)((ulong)uVar15 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                           (byte)((ulong)uVar15 >> 8),
                                                           (byte)uVar19 ^ (byte)uVar15)))))));
                puVar11[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                               (byte)((ulong)uVar18 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                        (byte)((ulong)uVar18 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                                 (byte)((ulong)uVar18 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar22 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar18 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar22 >> 0x10) ^ (byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar22 >> 8) ^
                                                           (byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar22 ^ (byte)uVar18)))))));
                *puVar11 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                             (byte)((ulong)uVar17 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                      (byte)((ulong)uVar17 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                               (byte)((ulong)uVar17 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar21 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar17 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                           (byte)((ulong)uVar17 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                                    (byte)((ulong)uVar17 >> 8),
                                                                    (byte)uVar21 ^ (byte)uVar17)))))
                                            ));
                puVar11 = puVar11 + 4;
                puVar12 = puVar12 + 4;
                uVar8 = uVar8 - 0x20;
              } while (uVar8 != 0);
            }
          }
          do {
            if (uVar9 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10066a7f0);
              (*pcVar4)();
            }
            lVar2 = uVar13 + uVar10;
            pbVar1 = (byte *)(uVar7 + 0x20 + uVar10);
            uVar10 = uVar10 + 1;
            *(byte *)(lVar2 + 0x20) = *pbVar1 ^ *(byte *)(lVar2 + 0x20);
          } while (uVar14 != uVar10);
        }
        if (lVar6 == param_3) break;
        bVar5 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        uVar14 = uVar7;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066a7f4);
          (*pcVar4)();
        }
      }
      _swift_bridgeObjectRelease(uVar7);
    }
  }
  else {
    _swift_errorRelease();
    _swift_bridgeObjectRelease(param_1);
    uVar13 = 0;
  }
  return uVar13;
}

