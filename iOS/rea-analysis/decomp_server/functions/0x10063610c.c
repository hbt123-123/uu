// rea decompile_all
// name: FUN_10063610c
// address: 0x10063610c
// body: available
// range: 0x10063610c-0x10063628f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10063610c(long param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar13 = *(undefined **)(param_2 + 0x10);
  puVar1 = puVar13;
  if (puVar12 <= puVar13) {
    puVar1 = puVar12;
  }
  puVar3 = puVar1;
  _swift_slowAlloc(puVar1,0xffffffffffffffff);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar1 == (undefined *)0x0) goto LAB_100636264;
  _bzero(puVar3,(size_t)puVar1);
  if (puVar12 == (undefined *)0x0 || puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100636290);
    (*pcVar2)();
  }
  if (puVar1 < (undefined *)0x8) {
    puVar13 = (undefined *)0x0;
LAB_100636218:
    lVar7 = (long)puVar1 - (long)puVar13;
    pbVar5 = puVar13 + param_2 + 0x20;
    pbVar9 = puVar3 + (long)puVar13;
    pbVar11 = puVar13 + param_1 + 0x20;
    do {
      *pbVar9 = *pbVar5 ^ *pbVar11;
      lVar7 = lVar7 + -1;
      pbVar5 = pbVar5 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    } while (lVar7 != 0);
  }
  else if (puVar1 < (undefined *)0x20) {
    puVar12 = (undefined *)0x0;
LAB_1006361dc:
    puVar13 = (undefined *)((ulong)puVar1 & 0x7ffffffffffffff8);
    lVar7 = (long)puVar12 - (long)puVar13;
    puVar6 = (undefined8 *)(puVar12 + param_1 + 0x20);
    puVar8 = (undefined8 *)(puVar12 + param_2 + 0x20);
    puVar10 = (undefined8 *)(puVar3 + (long)puVar12);
    do {
      uVar14 = *puVar6;
      uVar16 = *puVar8;
      *puVar10 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                          CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                            (byte)((ulong)uVar14 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                     (byte)((ulong)uVar14 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                              (byte)((ulong)uVar14 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar16 >> 0x10)
                                                                       ^ (byte)((ulong)uVar14 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar16
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar14
                                                                                      >> 8),
                                                                                (byte)uVar16 ^
                                                                                (byte)uVar14)))))));
      lVar7 = lVar7 + 8;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
    if (puVar1 != puVar13) goto LAB_100636218;
  }
  else {
    puVar13 = (undefined *)((ulong)puVar1 & 0x7fffffffffffffe0);
    puVar6 = (undefined8 *)(param_1 + 0x30);
    puVar8 = (undefined8 *)(puVar3 + 0x10);
    puVar10 = (undefined8 *)(param_2 + 0x30);
    puVar12 = puVar13;
    do {
      uVar16 = puVar6[-1];
      uVar14 = puVar6[-2];
      uVar17 = puVar6[1];
      uVar15 = *puVar6;
      uVar19 = puVar10[-1];
      uVar18 = puVar10[-2];
      uVar21 = puVar10[1];
      uVar20 = *puVar10;
      puVar8[-1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                            CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                              (byte)((ulong)uVar16 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                       (byte)((ulong)uVar16 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                (byte)((ulong)uVar16 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar19 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar16 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar16)))))));
      puVar8[-2] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                            CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                              (byte)((ulong)uVar14 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                       (byte)((ulong)uVar14 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                (byte)((ulong)uVar14 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar18 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar14 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
      puVar8[1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                           CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                             (byte)((ulong)uVar17 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                      (byte)((ulong)uVar17 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                               (byte)((ulong)uVar17 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar21 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar17 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                           (byte)((ulong)uVar17 >> 8),
                                                           (byte)uVar21 ^ (byte)uVar17)))))));
      *puVar8 = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                         CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                  CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                           (byte)((ulong)uVar15 >> 0x28),
                                           CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                    (byte)((ulong)uVar15 >> 0x20),
                                                    CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                             (byte)((ulong)uVar15 >> 0x18),
                                                             CONCAT12((byte)((ulong)uVar20 >> 0x10)
                                                                      ^ (byte)((ulong)uVar15 >> 0x10
                                                                              ),
                                                                      CONCAT11((byte)((ulong)uVar20
                                                                                     >> 8) ^
                                                                               (byte)((ulong)uVar15
                                                                                     >> 8),
                                                                               (byte)uVar20 ^
                                                                               (byte)uVar15)))))));
      puVar6 = puVar6 + 4;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
      puVar12 = puVar12 + -0x20;
    } while (puVar12 != (undefined *)0x0);
    if (puVar1 != puVar13) {
      puVar12 = puVar13;
      if (((ulong)puVar1 & 0x18) == 0) goto LAB_100636218;
      goto LAB_1006361dc;
    }
  }
  puVar4 = puVar1;
  FUN_100630840(puVar1,0);
  _memcpy(puVar4 + 0x20,puVar3,(size_t)puVar1);
LAB_100636264:
  _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
  return puVar4;
}

