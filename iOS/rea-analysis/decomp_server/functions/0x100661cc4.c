// rea decompile_all
// name: FUN_100661cc4
// address: 0x100661cc4
// body: available
// range: 0x100661cc4-0x1006620cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100661cc4(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong in_x4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  size_t sVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 auStack_78 [24];
  ulong uVar23;
  
  _swift_unknownObjectRetain();
  FUN_100628bc8();
  lVar18 = *unaff_x20;
  lVar2 = 0;
  FUN_1006295a0(0,*(undefined8 *)(lVar18 + 0x10),0,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar15 = *(ulong *)(lVar18 + 0x10);
  uVar21 = uVar15;
  if (0x3f < uVar15) {
    uVar21 = 0x40;
  }
  _swift_bridgeObjectRetain(lVar18);
  uVar22 = 0;
  lVar26 = lVar18;
  uVar6 = in_x4;
  uVar23 = 0;
  uVar20 = uVar21;
  do {
    do {
      uVar17 = uVar21;
      if (uVar22 == uVar15) {
        _swift_bridgeObjectRelease(lVar18);
        return lVar2;
      }
      uVar21 = *(ulong *)(lVar18 + 0x10);
      if ((long)uVar21 < (long)uVar22 || (long)uVar21 < (long)uVar17) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620a8);
        (*pcVar1)();
      }
      if ((0x3f < uVar21 - uVar17) && (uVar21 = uVar17 + 0x40, SCARRY8(uVar17,0x40))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620b0);
        (*pcVar1)();
      }
      if ((long)uVar21 < (long)uVar17) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620ac);
        (*pcVar1)();
      }
      uVar9 = uVar23;
      uVar24 = uVar20;
    } while (((uVar6 & 1) == 0) &&
            (uVar9 = uVar22, uVar24 = uVar17, uVar22 = uVar17, *(ulong *)(lVar26 + 0x10) < 0x40));
    lVar5 = unaff_x20[1];
    lVar16 = *(long *)(lVar5 + 0x18);
    lVar25 = *(long *)(lVar16 + 0x18);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar25 != 0) {
      if (lVar25 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620d0);
        (*pcVar1)();
      }
      puVar3 = &DAT_100ab7e50;
      FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(long *)(puVar3 + 0x10) = lVar25;
      *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
      lVar16 = *(long *)(lVar16 + 0x10);
      lVar11 = *(long *)(lVar16 + 0x10);
      if (lVar11 == 0) {
LAB_1006620c0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620c4);
        (*pcVar1)();
      }
      puVar7 = (undefined8 *)(puVar3 + 0x20);
      uVar22 = lVar11 - 1U;
      if (lVar25 - 1U <= lVar11 - 1U) {
        uVar22 = lVar25 - 1U;
      }
      uVar22 = uVar22 + 1;
      if (uVar22 < 0x11 || (ulong)((long)puVar3 - lVar16) < 0x10) {
        puVar8 = puVar7;
        lVar10 = 0;
        lVar12 = 1;
      }
      else {
        uVar6 = 0x10;
        if ((uVar22 & 0xf) != 0) {
          uVar6 = uVar22 & 0xf;
        }
        lVar10 = uVar22 - uVar6;
        lVar12 = lVar10 + 1;
        puVar8 = (undefined8 *)((long)puVar7 + lVar10);
        lVar13 = lVar10;
        puVar14 = (undefined8 *)(lVar16 + 0x20);
        do {
          uVar27 = *puVar14;
          puVar7[1] = puVar14[1];
          *puVar7 = uVar27;
          lVar13 = lVar13 + -0x10;
          puVar7 = puVar7 + 2;
          puVar14 = puVar14 + 2;
        } while (lVar13 != 0);
      }
      while( true ) {
        *(undefined1 *)puVar8 = *(undefined1 *)(lVar16 + 0x20 + lVar10);
        if (lVar25 == lVar12) break;
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        lVar13 = lVar12 + 1;
        lVar10 = lVar12;
        lVar12 = lVar13;
        if (lVar11 + 1 == lVar13) goto LAB_1006620c0;
      }
    }
    _swift_beginAccess(lVar5 + 0x20,auStack_78,0x21,0);
    lVar5 = lVar18;
    _swift_bridgeObjectRetain();
    FUN_100662e80();
    _swift_endAccess(auStack_78);
    _swift_release(puVar3);
    sVar19 = *(size_t *)(lVar5 + 0x10);
    uVar6 = *(ulong *)(lVar2 + 0x10);
    uVar22 = uVar6 + sVar19;
    if (SCARRY8(uVar6,sVar19)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620b4);
      (*pcVar1)();
    }
    if ((long)(*(ulong *)(lVar2 + 0x18) >> 1) < (long)uVar22) {
      if (uVar6 <= uVar22) {
        uVar6 = uVar22;
      }
      lVar16 = 1;
      FUN_1006295a0(1,uVar6,1,lVar2);
      uVar6 = *(ulong *)(lVar16 + 0x10);
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_100661fd4;
LAB_100661f5c:
      if ((long)((*(ulong *)(lVar16 + 0x18) >> 1) - uVar6) < (long)sVar19) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620bc);
        (*pcVar1)();
      }
      _memcpy((void *)(lVar16 + uVar6 + 0x20),(void *)(lVar5 + 0x20),sVar19);
      _swift_bridgeObjectRelease(lVar5);
      if (sVar19 != 0) {
        if (SCARRY8(*(long *)(lVar16 + 0x10),sVar19)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620c0);
          (*pcVar1)();
        }
        *(size_t *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + sVar19;
      }
    }
    else {
      lVar16 = lVar2;
      if (sVar19 != 0) goto LAB_100661f5c;
LAB_100661fd4:
      _swift_bridgeObjectRelease(lVar5);
      if (sVar19 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620b8);
        (*pcVar1)();
      }
    }
    uVar6 = in_x4 & 0xffffffff;
    uVar9 = uVar24 - uVar9;
    uVar22 = uVar24;
    uVar23 = uVar24;
    uVar20 = uVar21;
    lVar2 = lVar16;
    if (uVar9 == 0) {
      _swift_bridgeObjectRelease(lVar18);
    }
    else {
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620c8);
        (*pcVar1)();
      }
      uVar17 = *(ulong *)(lVar26 + 0x10);
      if (uVar17 < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620cc);
        (*pcVar1)();
      }
      lVar5 = lVar26;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar5 == 0) || ((long)(*(ulong *)(lVar26 + 0x18) >> 1) < (long)(uVar17 - uVar9))) {
        FUN_1006295a0();
        lVar26 = lVar5;
      }
      sVar19 = *(long *)(lVar26 + 0x10) - uVar9;
      _memmove((void *)(lVar26 + 0x20),(void *)(lVar26 + 0x20 + uVar9),sVar19);
      *(size_t *)(lVar26 + 0x10) = sVar19;
      _swift_bridgeObjectRelease(lVar18);
      *unaff_x20 = lVar26;
    }
  } while( true );
}

