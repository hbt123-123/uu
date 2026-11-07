// rea decompile_all
// name: FUN_100636fd8
// address: 0x100636fd8
// body: available
// range: 0x100636fd8-0x1006376cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100637520) */
/* WARNING: Removing unreachable block (ram,0x000100637570) */
/* WARNING: Removing unreachable block (ram,0x000100637594) */
/* WARNING: Removing unreachable block (ram,0x0001006375a4) */
/* WARNING: Removing unreachable block (ram,0x0001006376ac) */
/* WARNING: Removing unreachable block (ram,0x0001006375bc) */
/* WARNING: Removing unreachable block (ram,0x0001006375c8) */
/* WARNING: Removing unreachable block (ram,0x000100637538) */

undefined * FUN_100636fd8(undefined *param_1,long param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  void *pvVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  size_t sVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_78 [24];
  
  uVar10 = param_4 >> 1;
  uVar2 = uVar10 - param_3;
  if (SBORROW8(uVar10,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006376ac);
    (*pcVar3)();
  }
  puVar5 = (undefined *)0x0;
  FUN_1006295a0(0,uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  if (0 < (long)uVar2) {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
    lVar24 = 0;
    puVar25 = puVar5;
    do {
      if ((*(long *)(*(long *)(unaff_x20 + 0x80) + 0x10) == 0) ||
         (lVar19 = *(long *)(unaff_x20 + 0x50), lVar19 == 0x10)) {
        lVar19 = *(long *)(unaff_x20 + 0x10) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006376a0);
          (*pcVar3)();
        }
        *(long *)(unaff_x20 + 0x10) = lVar19;
        FUN_100636eb0(lVar19,*(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x40));
        pcVar3 = *(code **)(unaff_x20 + 0x18);
        lVar6 = lVar19;
        _swift_bridgeObjectRetain();
        (*pcVar3)();
        _swift_bridgeObjectRelease(lVar19);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006376cc);
          (*pcVar3)();
        }
        _swift_bridgeObjectRelease(lVar19);
        puVar5 = param_1;
        if ((param_4 & 1) == 0) {
LAB_100637130:
          thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
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
          uVar20 = *(ulong *)(puVar7 + 0x10);
          _swift_release();
          if (uVar20 != uVar2) {
            _swift_unknownObjectRelease();
            goto LAB_100637130;
          }
          _swift_dynamicCastClass(param_1,uVar8);
          if (puVar5 == (undefined *)0x0) {
            _swift_unknownObjectRelease(param_1);
            puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
          }
        }
        puVar7 = puVar5;
        FUN_1006376cc();
        _swift_release(puVar5);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
        lVar19 = *(long *)(unaff_x20 + 0x68);
        uVar26 = *(undefined8 *)(unaff_x20 + 0x70);
        uVar27 = *(undefined8 *)(unaff_x20 + 0x78);
        _swift_unknownObjectRetain(uVar8);
        FUN_100636298(lVar19,uVar26,uVar27,puVar7);
        _swift_bridgeObjectRelease(puVar7);
        _swift_unknownObjectRelease(uVar8);
        lVar22 = lVar19;
        (*pcVar3)(lVar19,lVar19 + 0x20,0,*(long *)(lVar19 + 0x10) << 1 | 1);
        _swift_bridgeObjectRelease(lVar19);
        if (lVar22 == 0) {
          _swift_bridgeObjectRelease(lVar6);
          _swift_bridgeObjectRelease(puVar25);
          if ((param_4 & 1) != 0) {
            uVar8 = 0;
            __ss28__ContiguousArrayStorageBaseCMa(0);
            puVar5 = param_1;
            _swift_unknownObjectRetain_n(param_1,2);
            _swift_dynamicCastClass();
            if (puVar5 == (undefined *)0x0) {
              _swift_unknownObjectRelease(param_1);
              puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
            }
            uVar10 = *(ulong *)(puVar5 + 0x10);
            _swift_release();
            if (uVar10 == uVar2) {
              puVar5 = param_1;
              _swift_dynamicCastClass(param_1,uVar8);
              if (puVar5 != (undefined *)0x0) {
                return puVar5;
              }
              _swift_unknownObjectRelease(param_1);
              return PTR___swiftEmptyArrayStorage_100995ea0;
            }
            _swift_unknownObjectRelease(param_1);
          }
          thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
          return param_1;
        }
        lVar19 = *(long *)(lVar22 + 0x10);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
        *(long *)(unaff_x20 + 0x60) = lVar22;
        *(long *)(unaff_x20 + 0x68) = lVar22 + 0x20;
        *(undefined8 *)(unaff_x20 + 0x70) = 0;
        *(ulong *)(unaff_x20 + 0x78) = lVar19 << 1 | 1;
        _swift_unknownObjectRelease(uVar8);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
        *(long *)(unaff_x20 + 0x80) = lVar6;
        _swift_bridgeObjectRelease(uVar8);
        lVar19 = 0;
        *(undefined8 *)(unaff_x20 + 0x50) = 0;
      }
      lVar6 = param_3 + lVar24;
      if (SCARRY8(param_3,lVar24)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637674);
        (*pcVar3)();
      }
      if ((long)uVar10 < lVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637678);
        (*pcVar3)();
      }
      if (lVar6 < param_3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10063767c);
        (*pcVar3)();
      }
      lVar23 = *(long *)(unaff_x20 + 0x80);
      lVar22 = *(long *)(lVar23 + 0x10);
      pvVar18 = (void *)(lVar22 - lVar19);
      if (lVar22 < lVar19) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637680);
        (*pcVar3)();
      }
      if (lVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637684);
        (*pcVar3)();
      }
      if (SBORROW8(uVar10,lVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637688);
        (*pcVar3)();
      }
      pvVar1 = pvVar18;
      if ((long)(uVar10 - lVar6) <= (long)pvVar18) {
        pvVar1 = (void *)(uVar10 - lVar6);
      }
      pvVar9 = pvVar1;
      _swift_slowAlloc(pvVar1,0xffffffffffffffff);
      if ((long)pvVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10063768c);
        (*pcVar3)();
      }
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (pvVar1 != (void *)0x0) {
        _bzero(pvVar9,(size_t)pvVar1);
        pvVar11 = (void *)(uVar10 - (lVar24 + param_3));
        if (pvVar18 <= pvVar11) {
          pvVar11 = pvVar18;
        }
        if ((void *)((long)pvVar1 - 1U) <= pvVar11) {
          pvVar11 = (void *)((long)pvVar1 - 1U);
        }
        uVar20 = (long)pvVar11 + 1;
        if (uVar20 < 0x21) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          if ((0x1f < (ulong)((long)pvVar9 - (param_2 + param_3 + lVar24))) &&
             (0x1f < (ulong)((long)pvVar9 + (-0x20 - (lVar19 + lVar23))))) {
            uVar13 = 0x20;
            if ((uVar20 & 0x1f) != 0) {
              uVar13 = uVar20 & 0x1f;
            }
            lVar12 = uVar20 - uVar13;
            lVar14 = ~(ulong)pvVar11 + uVar13;
            puVar15 = (undefined8 *)(param_2 + param_3 + 0x10 + lVar24);
            puVar16 = (undefined8 *)((long)pvVar9 + 0x10);
            puVar17 = (undefined8 *)(lVar23 + lVar19 + 0x30);
            do {
              uVar26 = puVar15[-1];
              uVar8 = puVar15[-2];
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
              puVar16[-2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                              (byte)((ulong)uVar8 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                       (byte)((ulong)uVar8 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                (byte)((ulong)uVar8 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar29 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar8 >> 0x18
                                                                               ),CONCAT12((byte)((
                                                  ulong)uVar29 >> 0x10) ^
                                                  (byte)((ulong)uVar8 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar8 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar8)))))));
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
        lVar6 = param_2 + lVar6;
        lVar23 = lVar23 + lVar19 + 0x20;
        pvVar18 = pvVar9;
        do {
          if (lVar12 + (param_3 - uVar10) + lVar24 + lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100637638);
            (*pcVar3)();
          }
          if (lVar12 + (lVar19 - lVar22) + lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10063763c);
            (*pcVar3)();
          }
          *(byte *)((long)pvVar18 + lVar12) = *(byte *)(lVar23 + lVar12) ^ *(byte *)(lVar6 + lVar12)
          ;
          lVar23 = lVar23 + 1;
          lVar6 = lVar6 + 1;
          lVar14 = lVar14 + 1;
          pvVar18 = (void *)((long)pvVar18 + 1);
        } while ((lVar12 - (long)pvVar1) + lVar14 != 0);
        puVar7 = &DAT_100ab7e50;
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
        _swift_allocObject();
        puVar5 = puVar7;
        _malloc_size();
        *(void **)(puVar7 + 0x10) = pvVar1;
        *(long *)(puVar7 + 0x18) = (long)puVar5 * 2 + -0x40;
        _memcpy(puVar7 + 0x20,pvVar9,(size_t)pvVar1);
      }
      _swift_slowDealloc(pvVar9,0xffffffffffffffff,0xffffffffffffffff);
      sVar21 = *(size_t *)(puVar7 + 0x10);
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),sVar21)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637690);
        (*pcVar3)();
      }
      *(size_t *)(unaff_x20 + 0x50) = *(long *)(unaff_x20 + 0x50) + sVar21;
      bVar4 = SCARRY8(lVar24,sVar21);
      lVar24 = lVar24 + sVar21;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637694);
        (*pcVar3)();
      }
      uVar13 = *(ulong *)(puVar25 + 0x10);
      uVar20 = uVar13 + sVar21;
      if (SCARRY8(uVar13,sVar21)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100637698);
        (*pcVar3)();
      }
      if ((long)(*(ulong *)(puVar25 + 0x18) >> 1) < (long)uVar20) {
        if (uVar13 <= uVar20) {
          uVar13 = uVar20;
        }
        puVar5 = (undefined *)0x1;
        FUN_1006295a0(1,uVar13,1,puVar25);
        uVar13 = *(ulong *)(puVar5 + 0x10);
        if (*(long *)(puVar7 + 0x10) != 0) goto LAB_1006374a0;
LAB_100637088:
        _swift_release(puVar7);
        if (sVar21 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10063769c);
          (*pcVar3)();
        }
      }
      else {
        puVar5 = puVar25;
        if (*(long *)(puVar7 + 0x10) == 0) goto LAB_100637088;
LAB_1006374a0:
        if ((long)((*(ulong *)(puVar5 + 0x18) >> 1) - uVar13) < (long)sVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006376a4);
          (*pcVar3)();
        }
        _memcpy(puVar5 + uVar13 + 0x20,puVar7 + 0x20,sVar21);
        _swift_release(puVar7);
        if (sVar21 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),sVar21)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006376a8);
            (*pcVar3)();
          }
          *(size_t *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + sVar21;
        }
      }
      puVar25 = puVar5;
    } while (lVar24 < (long)uVar2);
  }
  return puVar5;
}

