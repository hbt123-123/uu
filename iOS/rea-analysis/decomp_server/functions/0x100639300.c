// rea decompile_all
// name: FUN_100639300
// address: 0x100639300
// body: available
// range: 0x100639300-0x100639a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100639538 to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100639300(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *unaff_x20;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 local_e0;
  undefined1 auStack_90 [48];
  
  pcVar3 = (code *)*unaff_x20;
  puVar4 = (undefined *)unaff_x20[9];
  puVar9 = param_1;
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined *)unaff_x20[4];
      uVar23 = unaff_x20[5];
      uVar8 = unaff_x20[6];
      uVar25 = unaff_x20[7];
      _swift_unknownObjectRetain(puVar6);
      puVar4 = (undefined *)0x0;
    }
    else {
      uVar8 = unaff_x20[0xb];
      uVar25 = unaff_x20[0xc];
      uVar23 = unaff_x20[10];
      puVar6 = puVar4;
    }
    _swift_unknownObjectRetain();
    puVar5 = puVar6;
    (*pcVar3)(puVar6,uVar23,uVar8,uVar25);
    _swift_unknownObjectRelease(puVar6);
    if (puVar5 != (undefined *)0x0) {
      param_4 = param_4 >> 1;
      puVar9 = (undefined *)(param_4 - param_3);
      if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a04);
        (*pcVar3)();
      }
      puVar19 = *(undefined **)(puVar5 + 0x10);
      puVar6 = puVar19;
      if ((long)puVar9 <= (long)puVar19) {
        puVar6 = puVar9;
      }
      puVar7 = puVar6;
      _swift_slowAlloc(puVar6,0xffffffffffffffff);
      if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a0c);
        (*pcVar3)();
      }
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar6 != (undefined *)0x0) {
        _bzero(puVar7,(size_t)puVar6);
        puVar9 = puVar5 + 0x20;
        uVar21 = param_3;
        if ((long)param_3 <= (long)param_4) {
          uVar21 = param_4;
        }
        puVar10 = (undefined *)(uVar21 - param_3);
        lVar22 = param_2 + param_3;
        puVar17 = puVar6 + -1;
        if (puVar19 <= puVar6 + -1) {
          puVar17 = puVar19;
        }
        if (puVar10 <= puVar17) {
          puVar17 = puVar10;
        }
        puVar13 = puVar7;
        puVar15 = puVar6;
        if (puVar17 < (undefined *)0x20) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = (undefined *)0x0;
          if ((0x1f < (ulong)((long)puVar7 - lVar22)) &&
             ((undefined *)0x1f < puVar7 + (-0x20 - (long)puVar5))) {
            uVar21 = (ulong)(puVar17 + 1) & 0x1f;
            uVar20 = 0x20;
            if (uVar21 != 0) {
              uVar20 = uVar21;
            }
            puVar11 = puVar17 + 1 + -uVar20;
            puVar12 = (undefined8 *)(param_3 + param_2 + 0x10);
            puVar14 = (undefined8 *)(puVar7 + 0x10);
            puVar16 = (undefined8 *)(puVar5 + 0x30);
            puVar17 = puVar11;
            do {
              uVar25 = puVar12[-1];
              uVar8 = puVar12[-2];
              uVar26 = puVar12[1];
              uVar23 = *puVar12;
              uVar28 = puVar16[-1];
              uVar27 = puVar16[-2];
              uVar30 = puVar16[1];
              uVar29 = *puVar16;
              puVar14[-1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                              (byte)((ulong)uVar25 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                       (byte)((ulong)uVar25 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                (byte)((ulong)uVar25 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar28 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar25 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar28 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar25)))))));
              puVar14[-2] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                              (byte)((ulong)uVar8 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                       (byte)((ulong)uVar8 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                                (byte)((ulong)uVar8 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar27 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar8 >> 0x18
                                                                               ),CONCAT12((byte)((
                                                  ulong)uVar27 >> 0x10) ^
                                                  (byte)((ulong)uVar8 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar27 >> 8) ^
                                                           (byte)((ulong)uVar8 >> 8),
                                                           (byte)uVar27 ^ (byte)uVar8)))))));
              puVar14[1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                             (byte)((ulong)uVar26 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                      (byte)((ulong)uVar26 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                               (byte)((ulong)uVar26 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar30 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar26 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                           (byte)((ulong)uVar26 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                                    (byte)((ulong)uVar26 >> 8),
                                                                    (byte)uVar30 ^ (byte)uVar26)))))
                                            ));
              *puVar14 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                           (byte)((ulong)uVar23 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                    (byte)((ulong)uVar23 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                             (byte)((ulong)uVar23 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar29 >> 0x18)
                                                                      ^ (byte)((ulong)uVar23 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar29
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar23
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar29 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar23)))))));
              puVar12 = puVar12 + 4;
              puVar14 = puVar14 + 4;
              puVar16 = puVar16 + 4;
              puVar17 = puVar17 + -0x20;
            } while (puVar17 != (undefined *)0x0);
          }
        }
        do {
          if (puVar11 == puVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006399fc);
            (*pcVar3)();
          }
          if (puVar11 == puVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a00);
            (*pcVar3)();
          }
          puVar13[(long)puVar11] = puVar9[(long)puVar11] ^ puVar11[lVar22];
          lVar22 = lVar22 + 1;
          puVar19 = puVar19 + -1;
          puVar10 = puVar10 + -1;
          puVar15 = puVar15 + -1;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (puVar11 != puVar15);
        puVar9 = puVar6;
        FUN_100630840(puVar6,0);
        _memcpy(puVar9 + 0x20,puVar7,(size_t)puVar6);
      }
      _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      _swift_bridgeObjectRelease(puVar5);
      lVar22 = *(long *)(puVar9 + 0x10);
      uVar21 = lVar22 << 1 | 1;
      _swift_unknownObjectRetain(puVar9);
      _swift_unknownObjectRelease(puVar4);
      unaff_x20[9] = puVar9;
      unaff_x20[10] = puVar9 + 0x20;
      unaff_x20[0xb] = 0;
      unaff_x20[0xc] = uVar21;
      if (*(long *)(puVar9 + 0x10) == lVar22) {
        return puVar9;
      }
      puVar4 = puVar9;
      thunk_FUN_100629d98(puVar9,puVar9 + 0x20,0,uVar21);
      _swift_release(puVar9);
      return puVar4;
    }
    if ((param_4 & 1) != 0) {
      uVar8 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar4 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar4 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar22 = *(long *)(puVar4 + 0x10);
      _swift_release();
      if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a40);
        (*pcVar3)();
      }
      if (lVar22 == (param_4 >> 1) - param_3) {
        _swift_dynamicCastClass(param_1,uVar8);
joined_r0x0001006399b8:
        if (puVar9 == (undefined *)0x0) {
          _swift_unknownObjectRelease(param_1);
          puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        return puVar9;
      }
      _swift_unknownObjectRelease(param_1);
    }
LAB_10063951c:
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    return param_1;
  }
  local_e0 = unaff_x20[10];
  uVar20 = unaff_x20[0xb];
  uVar24 = unaff_x20[0xc];
  puVar5 = puVar4;
  puVar6 = puVar4;
  uVar8 = local_e0;
  uVar21 = uVar20;
  uVar18 = uVar24;
  if (puVar4 == (undefined *)0x0) {
    puVar6 = (undefined *)unaff_x20[4];
    uVar8 = unaff_x20[5];
    uVar21 = unaff_x20[6];
    uVar18 = unaff_x20[7];
    _swift_unknownObjectRetain(puVar6);
    puVar5 = (undefined *)0x0;
  }
  _swift_unknownObjectRetain(puVar5);
  puVar19 = puVar6;
  (*pcVar3)(puVar6,uVar8,uVar21,uVar18);
  _swift_unknownObjectRelease(puVar6);
  if (puVar19 == (undefined *)0x0) {
    if ((param_4 & 1) != 0) {
      uVar8 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar4 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar4 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar22 = *(long *)(puVar4 + 0x10);
      _swift_release();
      if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a44);
        (*pcVar3)();
      }
      if (lVar22 == (param_4 >> 1) - param_3) {
        _swift_dynamicCastClass(param_1,uVar8);
        goto joined_r0x0001006399b8;
      }
      _swift_unknownObjectRelease();
    }
    goto LAB_10063951c;
  }
  puVar9 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar6 = puVar9;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  if ((param_4 & 1) == 0) {
LAB_1006394d0:
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    puVar7 = param_1;
  }
  else {
    uVar8 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar7 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar7 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar22 = *(long *)(puVar7 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a24);
      (*pcVar3)();
    }
    if (lVar22 != (param_4 >> 1) - param_3) {
      _swift_unknownObjectRelease();
      goto LAB_1006394d0;
    }
    puVar7 = param_1;
    _swift_dynamicCastClass(param_1,uVar8);
    if (puVar7 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  if (*(long *)(puVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a08);
    (*pcVar3)();
  }
  bVar1 = puVar7[0x20];
  _swift_release();
  if (*(long *)(puVar19 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a10);
    (*pcVar3)();
  }
  bVar2 = puVar19[0x20];
  _swift_bridgeObjectRelease(puVar19);
  puVar6[0x20] = bVar2 ^ bVar1;
  puVar19 = puVar5;
  if (puVar4 == (undefined *)0x0) {
    puVar19 = (undefined *)unaff_x20[4];
    local_e0 = unaff_x20[5];
    uVar20 = unaff_x20[6];
    uVar24 = unaff_x20[7];
    _swift_unknownObjectRetain(puVar19);
  }
  uVar21 = uVar24 >> 1;
  if (SBORROW8(uVar21,uVar20)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a14);
    (*pcVar3)();
  }
  uVar18 = uVar20;
  if (uVar21 != uVar20) {
    uVar18 = uVar20 + 1;
    if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a30);
      (*pcVar3)();
    }
    if ((long)uVar21 < (long)uVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a18);
      (*pcVar3)();
    }
    if ((long)uVar18 < (long)uVar20) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a1c);
      (*pcVar3)();
    }
  }
  if ((long)uVar21 < (long)uVar20) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a20);
    (*pcVar3)();
  }
  if ((uVar24 & 1) == 0) {
    _swift_unknownObjectRetain(puVar5);
LAB_100639650:
    puVar7 = puVar19;
    thunk_FUN_100629d98(puVar19,local_e0,uVar18,uVar24);
  }
  else {
    uVar8 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    _swift_unknownObjectRetain_n(puVar19,2);
    _swift_unknownObjectRetain(puVar5);
    puVar4 = puVar19;
    _swift_dynamicCastClass(puVar19,uVar8);
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar19);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar22 = *(long *)(puVar4 + 0x10);
    _swift_release();
    if (SBORROW8(uVar21,uVar18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100639a34);
      (*pcVar3)();
    }
    if (lVar22 != uVar21 - uVar18) {
      _swift_unknownObjectRelease();
      goto LAB_100639650;
    }
    puVar4 = puVar19;
    _swift_dynamicCastClass(puVar19,uVar8);
    _swift_unknownObjectRelease(puVar19);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar4 != (undefined *)0x0) goto LAB_1006396f8;
  }
  _swift_unknownObjectRelease(puVar19);
  puVar4 = puVar7;
LAB_1006396f8:
  puVar19 = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_initStackObject(puVar9,auStack_90);
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  puVar9[0x20] = bVar2 ^ bVar1;
  FUN_10063a0ac(*(long *)(puVar4 + 0x10) + 1,FUN_100630840);
  FUN_100634540(puVar4);
  _swift_release(puVar4);
  FUN_100634a40(puVar9,puVar9 + 0x20,0,3);
  _swift_bridgeObjectRelease(puVar9);
  _swift_unknownObjectRelease(puVar5);
  unaff_x20[10] = puVar19 + 0x20;
  unaff_x20[9] = puVar19;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 1;
  return puVar6;
}

