// rea decompile_all
// name: FUN_100637930
// address: 0x100637930
// body: available
// range: 0x100637930-0x100637e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100637da0) */
/* WARNING: Removing unreachable block (ram,0x000100637dd0) */
/* WARNING: Removing unreachable block (ram,0x000100637df8) */
/* WARNING: Removing unreachable block (ram,0x000100637e08) */
/* WARNING: Removing unreachable block (ram,0x000100637e18) */
/* WARNING: Removing unreachable block (ram,0x000100637e2c) */
/* WARNING: Removing unreachable block (ram,0x000100637e84) */
/* WARNING: Removing unreachable block (ram,0x000100637db8) */

long FUN_100637930(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  long lVar20;
  long unaff_x20;
  size_t sVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_78 [24];
  
  param_4 = param_4 >> 1;
  uVar3 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e84);
    (*pcVar4)();
  }
  lVar6 = 0;
  FUN_1006295a0(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
  if (0 < (long)uVar3) {
    lVar20 = 0;
    lVar25 = *(long *)(unaff_x20 + 0x10);
    lVar22 = lVar6;
    do {
      if ((*(long *)(*(long *)(unaff_x20 + 0x80) + 0x10) == 0) ||
         (lVar6 = *(long *)(unaff_x20 + 0x50), lVar6 == 0x10)) {
        bVar5 = SCARRY8(lVar25,1);
        lVar25 = lVar25 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e78);
          (*pcVar4)();
        }
        lVar6 = lVar25;
        FUN_100636eb0(lVar25,*(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x40));
        pcVar4 = *(code **)(unaff_x20 + 0x18);
        lVar7 = lVar6;
        _swift_bridgeObjectRetain();
        (*pcVar4)();
        _swift_bridgeObjectRelease(lVar6);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e98);
          (*pcVar4)();
        }
        _swift_bridgeObjectRelease(lVar6);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
        *(long *)(unaff_x20 + 0x80) = lVar7;
        _swift_bridgeObjectRelease(uVar8);
        lVar6 = 0;
        *(undefined8 *)(unaff_x20 + 0x50) = 0;
      }
      lVar7 = param_3 + lVar20;
      if (SCARRY8(param_3,lVar20)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e4c);
        (*pcVar4)();
      }
      if ((long)param_4 < lVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e50);
        (*pcVar4)();
      }
      if (lVar7 < param_3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e54);
        (*pcVar4)();
      }
      lVar24 = *(long *)(unaff_x20 + 0x80);
      lVar23 = *(long *)(lVar24 + 0x10);
      pvVar19 = (void *)(lVar23 - lVar6);
      if (lVar23 < lVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e58);
        (*pcVar4)();
      }
      if (lVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e5c);
        (*pcVar4)();
      }
      if (SBORROW8(param_4,lVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e60);
        (*pcVar4)();
      }
      pvVar2 = pvVar19;
      if ((long)(param_4 - lVar7) <= (long)pvVar19) {
        pvVar2 = (void *)(param_4 - lVar7);
      }
      pvVar9 = pvVar2;
      _swift_slowAlloc(pvVar2,0xffffffffffffffff);
      if ((long)pvVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e64);
        (*pcVar4)();
      }
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (pvVar2 != (void *)0x0) {
        _bzero(pvVar9,(size_t)pvVar2);
        pvVar12 = (void *)(param_4 - (lVar20 + param_3));
        if (pvVar19 <= pvVar12) {
          pvVar12 = pvVar19;
        }
        if ((void *)((long)pvVar2 - 1U) <= pvVar12) {
          pvVar12 = (void *)((long)pvVar2 - 1U);
        }
        uVar1 = (long)pvVar12 + 1;
        if (uVar1 < 0x21) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          if ((0x1f < (ulong)((long)pvVar9 - (param_2 + param_3 + lVar20))) &&
             (0x1f < (ulong)((long)pvVar9 + (-0x20 - (lVar6 + lVar24))))) {
            uVar14 = 0x20;
            if ((uVar1 & 0x1f) != 0) {
              uVar14 = uVar1 & 0x1f;
            }
            lVar13 = uVar1 - uVar14;
            lVar15 = ~(ulong)pvVar12 + uVar14;
            puVar16 = (undefined8 *)(param_2 + param_3 + 0x10 + lVar20);
            puVar17 = (undefined8 *)((long)pvVar9 + 0x10);
            puVar18 = (undefined8 *)(lVar24 + lVar6 + 0x30);
            do {
              uVar26 = puVar16[-1];
              uVar8 = puVar16[-2];
              uVar28 = puVar16[1];
              uVar27 = *puVar16;
              uVar30 = puVar18[-1];
              uVar29 = puVar18[-2];
              uVar32 = puVar18[1];
              uVar31 = *puVar18;
              puVar17[-1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
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
              puVar17[-2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
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
              puVar17[1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
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
              *puVar17 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
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
              puVar16 = puVar16 + 4;
              puVar17 = puVar17 + 4;
              puVar18 = puVar18 + 4;
              lVar15 = lVar15 + 0x20;
            } while (lVar15 != 0);
          }
        }
        lVar15 = 0;
        lVar7 = param_2 + lVar7;
        lVar24 = lVar24 + lVar6 + 0x20;
        pvVar19 = pvVar9;
        do {
          if (lVar13 + (param_3 - param_4) + lVar20 + lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e44);
            (*pcVar4)();
          }
          if (lVar13 + (lVar6 - lVar23) + lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e48);
            (*pcVar4)();
          }
          *(byte *)((long)pvVar19 + lVar13) = *(byte *)(lVar24 + lVar13) ^ *(byte *)(lVar7 + lVar13)
          ;
          lVar24 = lVar24 + 1;
          lVar7 = lVar7 + 1;
          lVar15 = lVar15 + 1;
          pvVar19 = (void *)((long)pvVar19 + 1);
        } while ((lVar13 - (long)pvVar2) + lVar15 != 0);
        puVar10 = &DAT_100ab7e50;
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
        _swift_allocObject();
        puVar11 = puVar10;
        _malloc_size();
        *(void **)(puVar10 + 0x10) = pvVar2;
        *(long *)(puVar10 + 0x18) = (long)puVar11 * 2 + -0x40;
        _memcpy(puVar10 + 0x20,pvVar9,(size_t)pvVar2);
      }
      _swift_slowDealloc(pvVar9,0xffffffffffffffff,0xffffffffffffffff);
      sVar21 = *(size_t *)(puVar10 + 0x10);
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),sVar21)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e68);
        (*pcVar4)();
      }
      *(size_t *)(unaff_x20 + 0x50) = *(long *)(unaff_x20 + 0x50) + sVar21;
      bVar5 = SCARRY8(lVar20,sVar21);
      lVar20 = lVar20 + sVar21;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e6c);
        (*pcVar4)();
      }
      uVar14 = *(ulong *)(lVar22 + 0x10);
      uVar1 = uVar14 + sVar21;
      if (SCARRY8(uVar14,sVar21)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e70);
        (*pcVar4)();
      }
      if ((long)(*(ulong *)(lVar22 + 0x18) >> 1) < (long)uVar1) {
        if (uVar14 <= uVar1) {
          uVar14 = uVar1;
        }
        lVar6 = 1;
        FUN_1006295a0(1,uVar14,1,lVar22);
        uVar14 = *(ulong *)(lVar6 + 0x10);
        if (*(long *)(puVar10 + 0x10) == 0) goto LAB_1006379e0;
LAB_100637cf8:
        if ((long)((*(ulong *)(lVar6 + 0x18) >> 1) - uVar14) < (long)sVar21) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e7c);
          (*pcVar4)();
        }
        _memcpy((void *)(lVar6 + uVar14 + 0x20),puVar10 + 0x20,sVar21);
        _swift_release(puVar10);
        if (sVar21 != 0) {
          if (SCARRY8(*(long *)(lVar6 + 0x10),sVar21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e80);
            (*pcVar4)();
          }
          *(size_t *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + sVar21;
        }
      }
      else {
        lVar6 = lVar22;
        if (*(long *)(puVar10 + 0x10) != 0) goto LAB_100637cf8;
LAB_1006379e0:
        _swift_release(puVar10);
        if (sVar21 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100637e74);
          (*pcVar4)();
        }
      }
      *(long *)(unaff_x20 + 0x10) = lVar25;
      lVar22 = lVar6;
    } while (lVar20 < (long)uVar3);
  }
  _swift_bridgeObjectRetain(lVar6);
  FUN_100628ae0();
  return lVar6;
}

