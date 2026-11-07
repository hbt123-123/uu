// rea decompile_all
// name: FUN_10063f290
// address: 0x10063f290
// body: available
// range: 0x10063f290-0x10063f737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063f63c to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10063f290(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x20;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  pcVar2 = (code *)*unaff_x20;
  lVar23 = unaff_x20[8];
  if (lVar23 == 0) {
    lVar17 = unaff_x20[4];
    lVar20 = unaff_x20[5];
    uVar21 = unaff_x20[6];
    uVar22 = unaff_x20[7];
    _swift_unknownObjectRetain(lVar17);
  }
  else {
    uVar21 = unaff_x20[10];
    uVar22 = unaff_x20[0xb];
    lVar20 = unaff_x20[9];
    lVar17 = lVar23;
  }
  uVar22 = uVar22 >> 1;
  if (SBORROW8(uVar22,uVar21)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f720);
    (*pcVar2)();
  }
  uVar19 = param_4 >> 1;
  puVar6 = (undefined *)(uVar19 - param_3);
  if (SBORROW8(uVar19,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f724);
    (*pcVar2)();
  }
  puVar18 = puVar6;
  if ((long)(uVar22 - uVar21) <= (long)puVar6) {
    puVar18 = (undefined *)(uVar22 - uVar21);
  }
  _swift_unknownObjectRetain(lVar23);
  puVar3 = puVar18;
  _swift_slowAlloc(puVar18,0xffffffffffffffff);
  if ((long)puVar18 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f728);
    (*pcVar2)();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar18 != (undefined *)0x0) {
    _bzero(puVar3,(size_t)puVar18);
    uVar1 = uVar21;
    if ((long)uVar21 <= (long)uVar22) {
      uVar1 = uVar22;
    }
    puVar7 = (undefined *)(uVar1 - uVar21);
    uVar22 = param_3;
    if ((long)param_3 <= (long)uVar19) {
      uVar22 = uVar19;
    }
    puVar8 = (undefined *)(uVar22 - param_3);
    lVar9 = param_2 + param_3;
    puVar4 = puVar18 + -1;
    if (puVar8 <= puVar18 + -1) {
      puVar4 = puVar8;
    }
    if (puVar7 <= puVar4) {
      puVar4 = puVar7;
    }
    puVar4 = puVar4 + 1;
    if (puVar4 < (undefined *)0x21) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = (undefined *)0x0;
      if ((0x1f < (long)puVar3 - (uVar21 + lVar20)) && (0x1f < (ulong)((long)puVar3 - lVar9))) {
        uVar22 = 0x20;
        if (((ulong)puVar4 & 0x1f) != 0) {
          uVar22 = (ulong)puVar4 & 0x1f;
        }
        puVar10 = puVar4 + -uVar22;
        puVar12 = (undefined8 *)(uVar21 + lVar20 + 0x10);
        puVar13 = (undefined8 *)(puVar3 + 0x10);
        puVar16 = (undefined8 *)(param_3 + param_2 + 0x10);
        puVar4 = puVar10;
        do {
          uVar24 = puVar12[-1];
          uVar5 = puVar12[-2];
          uVar26 = puVar12[1];
          uVar25 = *puVar12;
          uVar28 = puVar16[-1];
          uVar27 = puVar16[-2];
          uVar30 = puVar16[1];
          uVar29 = *puVar16;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                          (byte)((ulong)uVar24 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                   (byte)((ulong)uVar24 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                            (byte)((ulong)uVar24 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                     (byte)((ulong)uVar24 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar28
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar24
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                          (byte)((ulong)uVar5 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                   (byte)((ulong)uVar5 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                            (byte)((ulong)uVar5 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                     (byte)((ulong)uVar5 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar27
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar5 >>
                                                                                    0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar27 >> 8) ^ (byte)((ulong)uVar5 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar5)))))));
          puVar13[1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                         (byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                  (byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                           (byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                    (byte)((ulong)uVar26 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar30 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar26 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
          *puVar13 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                              CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                 (byte)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                          (byte)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                   (byte)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar29 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar25)))))));
          puVar12 = puVar12 + 4;
          puVar13 = puVar13 + 4;
          puVar16 = puVar16 + 4;
          puVar4 = puVar4 + -0x20;
        } while (puVar4 != (undefined *)0x0);
      }
    }
    lVar20 = lVar20 + uVar21;
    puVar4 = puVar3;
    puVar15 = puVar18;
    do {
      if (puVar10 == puVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f710);
        (*pcVar2)();
      }
      if (puVar10 == puVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f714);
        (*pcVar2)();
      }
      puVar4[(long)puVar10] = puVar10[lVar9] ^ puVar10[lVar20];
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      lVar20 = lVar20 + 1;
      puVar15 = puVar15 + -1;
      puVar4 = puVar4 + 1;
    } while (puVar10 != puVar15);
    puVar7 = puVar18;
    FUN_100630840(puVar18,0);
    _memcpy(puVar7 + 0x20,puVar3,(size_t)puVar18);
  }
  _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
  _swift_unknownObjectRelease(lVar17);
  puVar18 = puVar7;
  (*pcVar2)(puVar7,puVar7 + 0x20,0,*(long *)(puVar7 + 0x10) << 1 | 1);
  _swift_release(puVar7);
  if (puVar18 == (undefined *)0x0) {
    if ((param_4 & 1) != 0) {
      uVar5 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar18 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar18 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar18 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      puVar18 = *(undefined **)(puVar18 + 0x10);
      _swift_release();
      if (puVar18 == puVar6) {
        puVar6 = param_1;
        _swift_dynamicCastClass(param_1,uVar5);
        if (puVar6 != (undefined *)0x0) {
          return puVar6;
        }
        _swift_unknownObjectRelease(param_1);
        return PTR___swiftEmptyArrayStorage_100995ea0;
      }
      _swift_unknownObjectRelease();
    }
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    return param_1;
  }
  puVar7 = *(undefined **)(puVar18 + 0x10);
  puVar3 = puVar7;
  if ((long)puVar6 <= (long)puVar7) {
    puVar3 = puVar6;
  }
  puVar4 = puVar3;
  _swift_slowAlloc(puVar3,0xffffffffffffffff);
  if (-1 < (long)puVar6) {
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar3 != (undefined *)0x0) {
      _bzero(puVar4,(size_t)puVar3);
      puVar6 = puVar18 + 0x20;
      uVar21 = param_3;
      if ((long)param_3 <= (long)uVar19) {
        uVar21 = uVar19;
      }
      puVar10 = (undefined *)(uVar21 - param_3);
      lVar20 = param_2 + param_3;
      puVar8 = puVar3 + -1;
      if (puVar7 <= puVar3 + -1) {
        puVar8 = puVar7;
      }
      if (puVar10 <= puVar8) {
        puVar8 = puVar10;
      }
      puVar11 = (undefined *)0x0;
      puVar15 = puVar4;
      puVar14 = puVar3;
      if ((((undefined *)0x1f < puVar8) && (0x1f < (ulong)((long)puVar4 - lVar20))) &&
         ((undefined *)0x1f < puVar4 + (-0x20 - (long)puVar18))) {
        uVar21 = (ulong)(puVar8 + 1) & 0x1f;
        uVar22 = 0x20;
        if (uVar21 != 0) {
          uVar22 = uVar21;
        }
        puVar11 = puVar8 + 1 + -uVar22;
        puVar12 = (undefined8 *)(param_3 + param_2 + 0x10);
        puVar13 = (undefined8 *)(puVar4 + 0x10);
        puVar16 = (undefined8 *)(puVar18 + 0x30);
        puVar8 = puVar11;
        do {
          uVar24 = puVar12[-1];
          uVar5 = puVar12[-2];
          uVar26 = puVar12[1];
          uVar25 = *puVar12;
          uVar28 = puVar16[-1];
          uVar27 = puVar16[-2];
          uVar30 = puVar16[1];
          uVar29 = *puVar16;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                          (byte)((ulong)uVar24 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                   (byte)((ulong)uVar24 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                            (byte)((ulong)uVar24 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                     (byte)((ulong)uVar24 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar28
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar24
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                          (byte)((ulong)uVar5 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                   (byte)((ulong)uVar5 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                            (byte)((ulong)uVar5 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                     (byte)((ulong)uVar5 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar27
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar5 >>
                                                                                    0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar27 >> 8) ^ (byte)((ulong)uVar5 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar5)))))));
          puVar13[1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                         (byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                  (byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                           (byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                    (byte)((ulong)uVar26 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar30 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar26 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
          *puVar13 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                              CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                 (byte)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                          (byte)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                   (byte)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar29 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar25)))))));
          puVar12 = puVar12 + 4;
          puVar13 = puVar13 + 4;
          puVar16 = puVar16 + 4;
          puVar8 = puVar8 + -0x20;
        } while (puVar8 != (undefined *)0x0);
      }
      do {
        if (puVar11 == puVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f718);
          (*pcVar2)();
        }
        if (puVar11 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f71c);
          (*pcVar2)();
        }
        puVar15[(long)puVar11] = puVar6[(long)puVar11] ^ puVar11[lVar20];
        lVar20 = lVar20 + 1;
        puVar7 = puVar7 + -1;
        puVar10 = puVar10 + -1;
        puVar14 = puVar14 + -1;
        puVar6 = puVar6 + 1;
        puVar15 = puVar15 + 1;
      } while (puVar11 != puVar14);
      puVar6 = puVar3;
      FUN_100630840(puVar3,0);
      _memcpy(puVar6 + 0x20,puVar4,(size_t)puVar3);
    }
    _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    lVar20 = *(long *)(puVar6 + 0x10);
    _swift_unknownObjectRelease(lVar23);
    unaff_x20[8] = puVar6;
    unaff_x20[9] = puVar6 + 0x20;
    unaff_x20[10] = 0;
    unaff_x20[0xb] = lVar20 << 1 | 1;
    return puVar18;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10063f72c);
  (*pcVar2)();
}

