// rea decompile_all
// name: FUN_100668e34
// address: 0x100668e34
// body: available
// range: 0x100668e34-0x1006692c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100668e34(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong in_x4;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
  _swift_unknownObjectRetain(param_1);
  FUN_100628bc8();
  if ((in_x4 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    lVar4 = *(long *)(unaff_x20 + 0x18) + lVar8;
    if (SCARRY8(*(long *)(unaff_x20 + 0x18),lVar8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100669280);
      (*pcVar2)();
    }
    if (lVar4 + 0xf000000000000000U >> 0x3d < 7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100669284);
      (*pcVar2)();
    }
    lVar4 = lVar4 * 8;
    thunk_FUN_10066690c(lVar4,8);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_b8,0x21,0);
    uVar11 = *(ulong *)(unaff_x20 + 0x10);
    uVar9 = *(ulong *)(uVar11 + 0x10);
    uVar5 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar11;
    uVar17 = uVar11;
    if ((uVar5 & 1) == 0) {
      uVar17 = 0;
      FUN_1006295a0(0,uVar9 + 1,1,uVar11);
      *(ulong *)(unaff_x20 + 0x10) = uVar17;
    }
    uVar5 = *(ulong *)(uVar17 + 0x10);
    uVar11 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar5) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      FUN_1006295a0(uVar11,uVar5 + 1,1,uVar17);
    }
    *(ulong *)(uVar11 + 0x10) = uVar5 + 1;
    *(undefined1 *)(uVar11 + uVar5 + 0x20) = 0x80;
    *(ulong *)(unaff_x20 + 0x10) = uVar11;
    uVar9 = uVar9 & 0x3f;
    if (uVar9 < 0x38) {
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar9 != 0x37) {
        puVar12 = (undefined *)(0x37 - uVar9);
        puVar6 = puVar12;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar12,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar6 + 0x10) = puVar12;
        _bzero(puVar6 + 0x20,(size_t)puVar12);
      }
    }
    else {
      puVar12 = (undefined *)(0x77 - uVar9);
      puVar6 = puVar12;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar12,PTR___ss5UInt8VN_100995d40);
      *(undefined **)(puVar6 + 0x10) = puVar12;
      _bzero(puVar6 + 0x20,(size_t)puVar12);
    }
    FUN_100628ae0(puVar6);
    FUN_1006290cc(lVar4);
    _swift_endAccess(auStack_b8);
  }
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar17 = *(ulong *)(lVar4 + 0x10);
  uVar5 = uVar17;
  if (0x3f < uVar17) {
    uVar5 = 0x40;
  }
  _swift_bridgeObjectRetain(lVar4);
  uVar9 = 0;
  uVar11 = 0;
  uVar18 = uVar5;
  uVar15 = 0;
LAB_100668ff4:
  do {
    if (uVar11 == uVar17) {
      _swift_bridgeObjectRelease(lVar4);
      if (uVar9 != 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100669278);
          (*pcVar2)();
        }
        if (*(ulong *)(*(long *)(unaff_x20 + 0x10) + 0x10) < uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066927c);
          (*pcVar2)();
        }
        FUN_100634d84(0,uVar9);
      }
      if (SCARRY8(*(long *)(unaff_x20 + 0x18),uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100669274);
        (*pcVar2)();
      }
      *(ulong *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + uVar9;
      lVar8 = 0;
      FUN_1006295a0(0,0x10,0,PTR___swiftEmptyArrayStorage_100995ea0);
      lVar14 = *(long *)(unaff_x20 + 0x20);
      lVar4 = *(long *)(lVar14 + 0x10);
      if (lVar4 != 0) {
        _swift_bridgeObjectRetain(lVar14);
        lVar20 = 0x20;
        lVar13 = lVar8;
        do {
          uVar1 = *(undefined4 *)(lVar14 + lVar20);
          puVar6 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_initStackObject();
          *(undefined8 *)(puVar6 + 0x18) = 8;
          *(undefined8 *)(puVar6 + 0x10) = 4;
          puVar6[0x20] = (char)uVar1;
          puVar6[0x21] = (char)((uint)uVar1 >> 8);
          puVar6[0x22] = (char)((uint)uVar1 >> 0x10);
          puVar6[0x23] = (char)((uint)uVar1 >> 0x18);
          uVar17 = *(ulong *)(lVar13 + 0x10);
          uVar5 = uVar17 + 4;
          if (SCARRY8(uVar17,4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100669264);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(lVar13 + 0x18) >> 1;
          lVar8 = lVar13;
          if ((long)uVar9 < (long)uVar5) {
            if (uVar17 <= uVar5) {
              uVar17 = uVar5;
            }
            lVar8 = 1;
            FUN_1006295a0(1,uVar17,1,lVar13);
            uVar17 = *(ulong *)(lVar8 + 0x10);
            uVar9 = *(ulong *)(lVar8 + 0x18) >> 1;
          }
          if ((long)(uVar9 - uVar17) < 4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100669268);
            (*pcVar2)();
          }
          *(undefined4 *)(lVar8 + uVar17 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
          _swift_bridgeObjectRelease();
          if (SCARRY8(*(long *)(lVar8 + 0x10),4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10066926c);
            (*pcVar2)();
          }
          *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 4;
          lVar20 = lVar20 + 4;
          lVar4 = lVar4 + -1;
          lVar13 = lVar8;
        } while (lVar4 != 0);
        _swift_bridgeObjectRelease(lVar14);
      }
      if ((in_x4 & 1) != 0) {
        puVar6 = &DAT_100ab7cb8;
        FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
        _swift_initStaticObject();
        uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
        *(undefined **)(unaff_x20 + 0x20) = puVar6;
        _swift_bridgeObjectRelease(uVar7);
      }
      return lVar8;
    }
    uVar19 = *(ulong *)(lVar4 + 0x10);
    if ((long)uVar19 < (long)uVar11 || (long)uVar19 < (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100669258);
      (*pcVar2)();
    }
    if ((0x3f < uVar19 - uVar5) && (uVar19 = uVar5 + 0x40, SCARRY8(uVar5,0x40))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100669270);
      (*pcVar2)();
    }
    if ((long)uVar19 < (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066925c);
      (*pcVar2)();
    }
    uVar10 = uVar15;
    uVar16 = uVar18;
    if ((in_x4 & 1) == 0) {
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      if (SBORROW8(lVar8,uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100669260);
        (*pcVar2)();
      }
      uVar10 = uVar11;
      uVar16 = uVar5;
      uVar11 = uVar5;
      uVar5 = uVar19;
      if ((long)(lVar8 - uVar9) < 0x40) goto LAB_100668ff4;
    }
    _swift_bridgeObjectRetain(lVar4);
    FUN_1006693b8(lVar4 + 0x20,uVar10,uVar16 << 1 | 1,unaff_x20 + 0x20);
    _swift_bridgeObjectRelease(lVar4);
    bVar3 = SCARRY8(uVar9,uVar16 - uVar10);
    uVar9 = uVar9 + (uVar16 - uVar10);
    uVar11 = uVar16;
    uVar5 = uVar19;
    uVar18 = uVar19;
    uVar15 = uVar16;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066909c);
      (*pcVar2)();
    }
  } while( true );
}

