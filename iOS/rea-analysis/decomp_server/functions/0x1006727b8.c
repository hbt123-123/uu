// rea decompile_all
// name: FUN_1006727b8
// address: 0x1006727b8
// body: available
// range: 0x1006727b8-0x100672c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006727b8(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ulong in_x4;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
  _swift_unknownObjectRetain(param_1);
  FUN_100628bc8();
  if ((in_x4 & 1) != 0) {
    _swift_beginAccess(unaff_x20 + 0x18,auStack_c0,0,0);
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    lVar5 = *(long *)(unaff_x20 + 0x18) + lVar9;
    if (SCARRY8(*(long *)(unaff_x20 + 0x18),lVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bf4);
      (*pcVar3)();
    }
    if (lVar5 + 0xf000000000000000U >> 0x3d < 7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bf8);
      (*pcVar3)();
    }
    lVar5 = lVar5 * 8;
    thunk_FUN_10066690c(lVar5,8);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0x21,0);
    uVar17 = *(ulong *)(unaff_x20 + 0x10);
    uVar15 = *(ulong *)(uVar17 + 0x10);
    uVar7 = uVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar17;
    uVar19 = uVar17;
    if ((uVar7 & 1) == 0) {
      uVar19 = 0;
      FUN_1006295a0(0,uVar15 + 1,1,uVar17);
      *(ulong *)(unaff_x20 + 0x10) = uVar19;
    }
    uVar7 = *(ulong *)(uVar19 + 0x10);
    uVar17 = uVar19;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar7) {
      uVar17 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      FUN_1006295a0(uVar17,uVar7 + 1,1,uVar19);
    }
    *(ulong *)(uVar17 + 0x10) = uVar7 + 1;
    *(undefined1 *)(uVar17 + uVar7 + 0x20) = 0x80;
    *(ulong *)(unaff_x20 + 0x10) = uVar17;
    uVar15 = uVar15 & 0x3f;
    if (uVar15 < 0x38) {
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar15 != 0x37) {
        puVar18 = (undefined *)(0x37 - uVar15);
        puVar6 = puVar18;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar18,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar6 + 0x10) = puVar18;
        _bzero(puVar6 + 0x20,(size_t)puVar18);
      }
    }
    else {
      puVar18 = (undefined *)(0x77 - uVar15);
      puVar6 = puVar18;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar18,PTR___ss5UInt8VN_100995d40);
      *(undefined **)(puVar6 + 0x10) = puVar18;
      _bzero(puVar6 + 0x20,(size_t)puVar18);
    }
    FUN_100628ae0(puVar6);
    FUN_100628ae0(lVar5);
    _swift_endAccess(auStack_90);
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(ulong *)(lVar5 + 0x10);
  if (0x3f < uVar7) {
    uVar7 = 0x40;
  }
  _swift_bridgeObjectRetain(lVar5);
  uVar19 = 0;
  uVar15 = 0;
  do {
    uVar8 = *(ulong *)(lVar5 + 0x10);
    uVar2 = uVar15;
    uVar17 = uVar7;
    do {
      uVar16 = uVar17;
      uVar10 = uVar2;
      if (uVar10 == uVar8) {
        _swift_bridgeObjectRelease(lVar5);
        if (uVar19 != 0) {
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bec);
            (*pcVar3)();
          }
          if (*(ulong *)(*(long *)(unaff_x20 + 0x10) + 0x10) < uVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bf0);
            (*pcVar3)();
          }
          FUN_100634d84(0,uVar19);
        }
        _swift_beginAccess(unaff_x20 + 0x18,auStack_90,1,0);
        if (SCARRY8(*(long *)(unaff_x20 + 0x18),uVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100672be8);
          (*pcVar3)();
        }
        *(ulong *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + uVar19;
        lVar5 = 0x14;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (0x14,PTR___ss5UInt8VN_100995d40);
        *(undefined8 *)(lVar5 + 0x10) = 0x14;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined4 *)(lVar5 + 0x30) = 0;
        _swift_beginAccess(unaff_x20 + 0x20,auStack_a8,1,0);
        lVar20 = *(long *)(unaff_x20 + 0x20);
        lVar9 = *(long *)(lVar20 + 0x10);
        if (lVar9 != 0) {
          puVar12 = (undefined1 *)(lVar5 + 0x23);
          lVar13 = 0x1fffffffffffffff;
          lVar14 = 0x23;
          puVar11 = (undefined4 *)(lVar20 + 0x20);
          do {
            uVar7 = *(ulong *)(lVar5 + 0x10);
            if (uVar7 <= lVar14 - 0x23U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bd0);
              (*pcVar3)();
            }
            uVar1 = *puVar11;
            puVar12[-3] = (char)((uint)uVar1 >> 0x18);
            if (uVar7 <= lVar14 - 0x22U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bd4);
              (*pcVar3)();
            }
            puVar12[-2] = (char)((uint)uVar1 >> 0x10);
            if (uVar7 <= lVar14 - 0x21U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bd8);
              (*pcVar3)();
            }
            puVar12[-1] = (char)((uint)uVar1 >> 8);
            if (uVar7 <= lVar14 - 0x20U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bdc);
              (*pcVar3)();
            }
            *puVar12 = (char)uVar1;
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100672be0);
              (*pcVar3)();
            }
            lVar13 = lVar13 + -1;
            lVar14 = lVar14 + 4;
            puVar12 = puVar12 + 4;
            lVar9 = lVar9 + -1;
            puVar11 = puVar11 + 1;
          } while (lVar9 != 0);
        }
        if ((in_x4 & 1) != 0) {
          puVar6 = &DAT_100ab7cb8;
          FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
          _swift_initStaticObject();
          *(undefined **)(unaff_x20 + 0x20) = puVar6;
          _swift_release(lVar20);
        }
        return lVar5;
      }
      if (((long)uVar8 < (long)uVar10) || ((long)uVar8 < (long)uVar16)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bc4);
        (*pcVar3)();
      }
      uVar17 = uVar8;
      if ((0x3f < uVar8 - uVar16) && (uVar17 = uVar16 + 0x40, SCARRY8(uVar16,0x40))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100672be4);
        (*pcVar3)();
      }
      if ((long)uVar17 < (long)uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bc8);
        (*pcVar3)();
      }
      uVar21 = uVar15;
      uVar2 = uVar7;
      if ((in_x4 & 1) != 0) break;
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      if (SBORROW8(lVar9,uVar19)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100672bcc);
        (*pcVar3)();
      }
      uVar2 = uVar16;
      uVar21 = uVar10;
    } while ((long)(lVar9 - uVar19) < 0x40);
    uVar15 = uVar2;
    _swift_beginAccess(unaff_x20 + 0x20,auStack_90,0x21,0);
    _swift_bridgeObjectRetain(lVar5);
    FUN_100672d34(lVar5 + 0x20,uVar21,uVar15 << 1 | 1,unaff_x20 + 0x20);
    _swift_endAccess(auStack_90);
    _swift_bridgeObjectRelease(lVar5);
    bVar4 = SCARRY8(uVar19,uVar15 - uVar21);
    uVar19 = uVar19 + (uVar15 - uVar21);
    uVar7 = uVar17;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100672a54);
      (*pcVar3)();
    }
  } while( true );
}

