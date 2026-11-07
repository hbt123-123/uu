// rea decompile_all
// name: FUN_100635c30
// address: 0x100635c30
// body: available
// range: 0x100635c30-0x100635f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100635eec to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100635c30(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 *unaff_x20;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long local_68;
  
  pcVar2 = (code *)*unaff_x20;
  lVar19 = unaff_x20[8];
  if (lVar19 == 0) {
    local_68 = unaff_x20[4];
    lVar15 = unaff_x20[5];
    uVar18 = unaff_x20[6];
    uVar20 = unaff_x20[7];
    _swift_unknownObjectRetain(local_68);
  }
  else {
    uVar18 = unaff_x20[10];
    uVar20 = unaff_x20[0xb];
    lVar15 = unaff_x20[9];
    local_68 = lVar19;
  }
  uVar20 = uVar20 >> 1;
  if (SBORROW8(uVar20,uVar18)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100635f68);
    (*pcVar2)();
  }
  uVar16 = param_4 >> 1;
  puVar5 = (undefined *)(uVar16 - param_3);
  if (SBORROW8(uVar16,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100635f6c);
    (*pcVar2)();
  }
  puVar17 = puVar5;
  if ((long)(uVar20 - uVar18) <= (long)puVar5) {
    puVar17 = (undefined *)(uVar20 - uVar18);
  }
  _swift_unknownObjectRetain(lVar19);
  puVar3 = puVar17;
  _swift_slowAlloc(puVar17,0xffffffffffffffff);
  if (-1 < (long)puVar17) {
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar17 != (undefined *)0x0) {
      _bzero(puVar3,(size_t)puVar17);
      uVar1 = uVar18;
      if ((long)uVar18 <= (long)uVar20) {
        uVar1 = uVar20;
      }
      puVar6 = (undefined *)(uVar1 - uVar18);
      uVar20 = param_3;
      if ((long)param_3 <= (long)uVar16) {
        uVar20 = uVar16;
      }
      puVar7 = (undefined *)(uVar20 - param_3);
      lVar8 = param_2 + param_3;
      puVar12 = puVar17 + -1;
      if (puVar7 <= puVar17 + -1) {
        puVar12 = puVar7;
      }
      if (puVar6 <= puVar12) {
        puVar12 = puVar6;
      }
      puVar12 = puVar12 + 1;
      if (puVar12 < (undefined *)0x21) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = (undefined *)0x0;
        if ((0x1f < (long)puVar3 - (uVar18 + lVar15)) && (0x1f < (ulong)((long)puVar3 - lVar8))) {
          uVar20 = 0x20;
          if (((ulong)puVar12 & 0x1f) != 0) {
            uVar20 = (ulong)puVar12 & 0x1f;
          }
          puVar9 = puVar12 + -uVar20;
          puVar10 = (undefined8 *)(uVar18 + lVar15 + 0x10);
          puVar11 = (undefined8 *)(puVar3 + 0x10);
          puVar13 = (undefined8 *)(param_3 + param_2 + 0x10);
          puVar12 = puVar9;
          do {
            uVar21 = puVar10[-1];
            uVar4 = puVar10[-2];
            uVar23 = puVar10[1];
            uVar22 = *puVar10;
            uVar25 = puVar13[-1];
            uVar24 = puVar13[-2];
            uVar27 = puVar13[1];
            uVar26 = *puVar13;
            puVar11[-1] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                            (byte)((ulong)uVar21 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                     (byte)((ulong)uVar21 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                              (byte)((ulong)uVar21 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar25 >> 0x18)
                                                                       ^ (byte)((ulong)uVar21 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar25
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar21
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar25 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar21)))))));
            puVar11[-2] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                            (byte)((ulong)uVar4 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                     (byte)((ulong)uVar4 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                              (byte)((ulong)uVar4 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar24 >> 0x18)
                                                                       ^ (byte)((ulong)uVar4 >> 0x18
                                                                               ),
                                                                       CONCAT12((byte)((ulong)uVar24
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar4
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar24 >> 8) ^ (byte)((ulong)uVar4 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar4)))))));
            puVar11[1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                           (byte)((ulong)uVar23 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                    (byte)((ulong)uVar23 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                             (byte)((ulong)uVar23 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar27 >> 0x18)
                                                                      ^ (byte)((ulong)uVar23 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar27
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar23
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
            *puVar11 = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                         (byte)((ulong)uVar22 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                  (byte)((ulong)uVar22 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                           (byte)((ulong)uVar22 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                    (byte)((ulong)uVar22 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar26 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
            puVar10 = puVar10 + 4;
            puVar11 = puVar11 + 4;
            puVar13 = puVar13 + 4;
            puVar12 = puVar12 + -0x20;
          } while (puVar12 != (undefined *)0x0);
        }
      }
      lVar15 = lVar15 + uVar18;
      puVar12 = puVar3;
      puVar14 = puVar17;
      do {
        if (puVar9 == puVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100635f60);
          (*pcVar2)();
        }
        if (puVar9 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100635f64);
          (*pcVar2)();
        }
        puVar12[(long)puVar9] = puVar9[lVar8] ^ puVar9[lVar15];
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + -1;
        puVar6 = puVar6 + -1;
        lVar15 = lVar15 + 1;
        puVar14 = puVar14 + -1;
        puVar12 = puVar12 + 1;
      } while (puVar9 != puVar14);
      puVar6 = puVar17;
      FUN_100630840(puVar17,0);
      _memcpy(puVar6 + 0x20,puVar3,(size_t)puVar17);
    }
    _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    _swift_unknownObjectRelease(local_68);
    puVar17 = puVar6;
    (*pcVar2)(puVar6,puVar6 + 0x20,0,*(long *)(puVar6 + 0x10) << 1 | 1);
    _swift_release(puVar6);
    if (puVar17 != (undefined *)0x0) {
      lVar15 = *(long *)(puVar17 + 0x10);
      _swift_bridgeObjectRetain(puVar17);
      _swift_unknownObjectRelease(lVar19);
      unaff_x20[8] = puVar17;
      unaff_x20[9] = puVar17 + 0x20;
      unaff_x20[10] = 0;
      unaff_x20[0xb] = lVar15 << 1 | 1;
      return puVar17;
    }
    if ((param_4 & 1) != 0) {
      uVar4 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar17 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar17 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      puVar17 = *(undefined **)(puVar17 + 0x10);
      _swift_release();
      if (puVar17 == puVar5) {
        puVar5 = param_1;
        _swift_dynamicCastClass(param_1,uVar4);
        if (puVar5 != (undefined *)0x0) {
          return puVar5;
        }
        _swift_unknownObjectRelease(param_1);
        return PTR___swiftEmptyArrayStorage_100995ea0;
      }
      _swift_unknownObjectRelease();
    }
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100635f70);
  (*pcVar2)();
}

