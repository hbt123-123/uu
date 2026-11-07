// rea decompile_all
// name: FUN_100641ef8
// address: 0x100641ef8
// body: available
// range: 0x100641ef8-0x100642493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006423d4) */

long FUN_100641ef8(ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  ulong *puVar17;
  long unaff_x21;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  
  lVar6 = param_2;
  _swift_getObjectType();
  puVar7 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar8 = puVar7;
  _swift_initStaticObject();
  pcVar19 = *(code **)(param_3 + 0x18);
  (*pcVar19)();
  if (unaff_x21 == 0) {
    puVar9 = puVar8;
    FUN_100641b18();
    if (*(long *)(puVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100642434);
      (*pcVar19)();
    }
    puVar10 = puVar9;
    if ((char)puVar8[0x20] < '\0') {
      puVar10 = puVar7;
      _swift_initStaticObject(puVar7,&DAT_100ab0b80);
      FUN_10063610c();
      _swift_bridgeObjectRelease(puVar9);
    }
    puVar9 = puVar10;
    FUN_100641b18(puVar10);
    if (*(long *)(puVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100642438);
      (*pcVar19)();
    }
    if ((char)puVar10[0x20] < '\0') {
      _swift_initStaticObject(puVar7,&DAT_100ab0b80);
      FUN_10063610c();
      _swift_bridgeObjectRelease(puVar9);
      puVar9 = puVar7;
    }
    uVar22 = *(ulong *)(param_1 + 0x10);
    if (SCARRY8(uVar22,0x10)) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x10064243c);
      (*pcVar19)();
    }
    bVar4 = 0xffffffffffffffe0 < uVar22 - 1;
    uVar18 = uVar22 & 0xf;
    _swift_bridgeObjectRetain(param_1);
    if (uVar18 != 0 || bVar4) {
      uVar11 = param_1;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar14 = param_1;
      if ((uVar11 & 1) == 0) {
        uVar14 = 0;
        FUN_1006295a0(0,uVar22 + 1,1,param_1);
      }
      uVar22 = *(ulong *)(uVar14 + 0x10);
      param_1 = uVar14;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar22) {
        param_1 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        FUN_1006295a0(param_1,uVar22 + 1,1,uVar14);
      }
      *(ulong *)(param_1 + 0x10) = uVar22 + 1;
      *(undefined1 *)(param_1 + uVar22 + 0x20) = 0x80;
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar18 != 0xf) {
        puVar16 = (undefined *)(uVar18 ^ 0xf);
        puVar7 = puVar16;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar16,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar7 + 0x10) = puVar16;
        _bzero(puVar7 + 0x20,(size_t)puVar16);
      }
      FUN_100628ae0(puVar7);
      uVar22 = *(ulong *)(param_1 + 0x10);
    }
    uVar11 = uVar22;
    if (0xf < uVar22) {
      uVar11 = 0x10;
    }
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar22 == 0) {
      lVar23 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    }
    else {
      lVar23 = 0;
      uVar14 = uVar11;
      do {
        puVar16 = (undefined *)(lVar23 + 1);
        if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100642414);
          (*pcVar19)();
        }
        uVar20 = uVar22;
        if ((0xf < uVar22 - uVar14) && (uVar20 = uVar14 + 0x10, SCARRY8(uVar14,0x10))) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100642428);
          (*pcVar19)();
        }
        if ((long)uVar20 < (long)uVar14) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100642418);
          (*pcVar19)();
        }
        lVar23 = lVar23 + 1;
        bVar5 = uVar22 != uVar14;
        uVar14 = uVar20;
      } while (bVar5);
      if (puVar16 == (undefined *)0x0) {
        lVar23 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
      }
      else {
        puVar7 = puVar16;
        FUN_1006308b0(puVar16,0);
        if ((long)puVar16 < 1) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10064242c);
          (*pcVar19)();
        }
        puVar17 = (ulong *)(puVar7 + 0x38);
        uVar14 = 0;
        do {
          if (uVar14 == uVar22) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100642494);
            (*pcVar19)();
          }
          uVar20 = *(ulong *)(param_1 + 0x10);
          if ((long)uVar20 < (long)uVar14 || (long)uVar20 < (long)uVar11) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x10064241c);
            (*pcVar19)();
          }
          if ((0xf < uVar20 - uVar11) && (uVar20 = uVar11 + 0x10, SCARRY8(uVar11,0x10))) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100642430);
            (*pcVar19)();
          }
          if ((long)uVar20 < (long)uVar11) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100642420);
            (*pcVar19)();
          }
          puVar17[-3] = param_1;
          puVar17[-2] = param_1 + 0x20;
          puVar17[-1] = uVar14;
          *puVar17 = uVar11 << 1 | 1;
          _swift_bridgeObjectRetain(param_1);
          puVar17 = puVar17 + 4;
          lVar23 = lVar23 + -1;
          uVar14 = uVar11;
          uVar11 = uVar20;
        } while (lVar23 != 0);
        lVar23 = *(long *)(puVar7 + 0x10);
      }
    }
    if (lVar23 == 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100642410);
      (*pcVar19)();
    }
    puVar16 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar16 & 1) == 0) {
      FUN_1006541f4();
      lVar23 = *(long *)(puVar7 + 0x10);
    }
    else {
      lVar23 = *(long *)(puVar7 + 0x10);
    }
    if (lVar23 == 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100642454);
      (*pcVar19)();
    }
    puVar21 = (undefined8 *)(puVar7 + lVar23 * 0x20);
    uVar1 = *puVar21;
    lVar12 = puVar21[1];
    uVar2 = puVar21[2];
    uVar3 = puVar21[3];
    *(long *)(puVar7 + 0x10) = lVar23 + -1;
    _swift_bridgeObjectRelease(puVar8);
    _swift_bridgeObjectRelease(param_1);
    puVar8 = puVar10;
    if (uVar18 != 0 || bVar4) {
      puVar8 = puVar9;
      puVar9 = puVar10;
    }
    _swift_bridgeObjectRelease(puVar9);
    FUN_100636298(lVar12,uVar2,uVar3,puVar8);
    _swift_bridgeObjectRelease(puVar8);
    _swift_unknownObjectRelease(uVar1);
    puVar8 = PTR___ss5UInt8VN_100995d40;
    lVar15 = *(long *)(lVar12 + 0x10);
    lVar23 = 0x10;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x10,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar23 + 0x10) = 0x10;
    *(undefined8 *)(lVar23 + 0x20) = 0;
    *(undefined8 *)(lVar23 + 0x28) = 0;
    lVar13 = 0x10;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(0x10,puVar8);
    *(undefined8 *)(lVar13 + 0x10) = 0x10;
    *(undefined8 *)(lVar13 + 0x20) = 0;
    *(undefined8 *)(lVar13 + 0x28) = 0;
    _swift_bridgeObjectRelease();
    uVar22 = *(ulong *)(puVar7 + 0x10);
    if (uVar22 != 0) {
      uVar18 = 0;
      puVar21 = (undefined8 *)(puVar7 + 0x38);
      do {
        if (*(ulong *)(puVar7 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100642424);
          (*pcVar19)();
        }
        uVar1 = puVar21[-1];
        uVar3 = *puVar21;
        uVar2 = puVar21[-3];
        lVar13 = puVar21[-2];
        _swift_unknownObjectRetain(uVar2);
        FUN_100636298(lVar13,uVar1,uVar3,lVar23);
        _swift_bridgeObjectRelease(lVar23);
        lVar23 = lVar13;
        (*pcVar19)(lVar13,lVar6,param_3);
        _swift_bridgeObjectRelease(lVar13);
        _swift_unknownObjectRelease(uVar2);
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 4;
      } while (uVar22 != uVar18);
    }
    _swift_bridgeObjectRelease(puVar7);
    lVar13 = lVar12 + 0x20;
    FUN_100636298(lVar13,0,lVar15 << 1 | 1,lVar23);
    _swift_bridgeObjectRelease(lVar23);
    param_2 = lVar13;
    (*pcVar19)(lVar13,lVar6,param_3);
    _swift_bridgeObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
  }
  return param_2;
}

