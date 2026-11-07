// rea decompile_all
// name: FUN_100662130
// address: 0x100662130
// body: available
// range: 0x100662130-0x1006625ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100662130(undefined8 param_1)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint in_w4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  size_t sVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  size_t local_78 [3];
  long local_58;
  
  sVar22 = unaff_x20[1];
  if ((long)sVar22 < 1) {
    _swift_unknownObjectRetain(param_1);
    FUN_100628bc8();
  }
  else {
    sVar2 = sVar22;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (sVar22,PTR___ss5UInt8VN_100995d40);
    *(size_t *)(sVar2 + 0x10) = sVar22;
    _bzero((void *)(sVar2 + 0x20),sVar22);
    local_78[0] = sVar2;
    _swift_unknownObjectRetain(param_1);
    FUN_100628bc8();
    FUN_100628ae0(local_78[0]);
    unaff_x20[1] = 0;
    unaff_x20[2] = sVar22;
  }
  lVar15 = *unaff_x20;
  local_58 = 0;
  FUN_1006295a0(0,*(undefined8 *)(lVar15 + 0x10),0,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar14 = *(ulong *)(lVar15 + 0x10);
  uVar16 = uVar14;
  if (0x3f < uVar14) {
    uVar16 = 0x40;
  }
  _swift_bridgeObjectRetain(lVar15);
  uVar21 = 0;
  lVar25 = lVar15;
  uVar6 = 0;
  uVar19 = uVar16;
  do {
    do {
      uVar18 = uVar16;
      if (uVar21 == uVar14) {
        _swift_bridgeObjectRelease(lVar15);
        return local_58;
      }
      uVar16 = *(ulong *)(lVar15 + 0x10);
      if ((long)uVar16 < (long)uVar21 || (long)uVar16 < (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625d4);
        (*pcVar1)();
      }
      if ((0x3f < uVar16 - uVar18) && (uVar16 = uVar18 + 0x40, SCARRY8(uVar18,0x40))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625dc);
        (*pcVar1)();
      }
      if ((long)uVar16 < (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625d8);
        (*pcVar1)();
      }
      uVar20 = uVar6;
      uVar23 = uVar19;
    } while (((in_w4 & 1) == 0) &&
            (uVar20 = uVar21, uVar23 = uVar18, uVar21 = uVar18, *(ulong *)(lVar25 + 0x10) < 0x40));
    lVar5 = unaff_x20[3];
    lVar17 = *(long *)(lVar5 + 0x18);
    lVar24 = *(long *)(lVar17 + 0x18);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar24 != 0) {
      if (lVar24 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100662600);
        (*pcVar1)();
      }
      puVar3 = &DAT_100ab7e50;
      FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(long *)(puVar3 + 0x10) = lVar24;
      *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
      lVar17 = *(long *)(lVar17 + 0x10);
      lVar10 = *(long *)(lVar17 + 0x10);
      if (lVar10 == 0) {
LAB_1006625f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625f4);
        (*pcVar1)();
      }
      puVar7 = (undefined8 *)(puVar3 + 0x20);
      uVar21 = lVar10 - 1U;
      if (lVar24 - 1U <= lVar10 - 1U) {
        uVar21 = lVar24 - 1U;
      }
      uVar21 = uVar21 + 1;
      if (uVar21 < 0x11 || (ulong)((long)puVar3 - lVar17) < 0x10) {
        puVar8 = puVar7;
        lVar9 = 0;
        lVar11 = 1;
      }
      else {
        uVar6 = 0x10;
        if ((uVar21 & 0xf) != 0) {
          uVar6 = uVar21 & 0xf;
        }
        lVar9 = uVar21 - uVar6;
        lVar11 = lVar9 + 1;
        puVar8 = (undefined8 *)((long)puVar7 + lVar9);
        lVar12 = lVar9;
        puVar13 = (undefined8 *)(lVar17 + 0x20);
        do {
          uVar26 = *puVar13;
          puVar7[1] = puVar13[1];
          *puVar7 = uVar26;
          lVar12 = lVar12 + -0x10;
          puVar7 = puVar7 + 2;
          puVar13 = puVar13 + 2;
        } while (lVar12 != 0);
      }
      while( true ) {
        *(undefined1 *)puVar8 = *(undefined1 *)(lVar17 + 0x20 + lVar9);
        if (lVar24 == lVar11) break;
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        lVar12 = lVar11 + 1;
        lVar9 = lVar11;
        lVar11 = lVar12;
        if (lVar10 + 1 == lVar12) goto LAB_1006625f0;
      }
    }
    _swift_beginAccess(lVar5 + 0x20,local_78,0x21,0);
    lVar5 = lVar15;
    _swift_bridgeObjectRetain();
    FUN_100662e80();
    _swift_endAccess(local_78);
    _swift_release(puVar3);
    sVar22 = *(size_t *)(lVar5 + 0x10);
    uVar6 = *(ulong *)(local_58 + 0x10);
    uVar21 = uVar6 + sVar22;
    if (SCARRY8(uVar6,sVar22)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625e0);
      (*pcVar1)();
    }
    if ((long)(*(ulong *)(local_58 + 0x18) >> 1) < (long)uVar21) {
      if (uVar6 <= uVar21) {
        uVar6 = uVar21;
      }
      local_58 = 1;
      FUN_1006295a0(1,uVar6,1);
      uVar6 = *(ulong *)(local_58 + 0x10);
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_100662498;
LAB_10066241c:
      if ((long)((*(ulong *)(local_58 + 0x18) >> 1) - uVar6) < (long)sVar22) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625e8);
        (*pcVar1)();
      }
      _memcpy((void *)(local_58 + uVar6 + 0x20),(void *)(lVar5 + 0x20),sVar22);
      _swift_bridgeObjectRelease(lVar5);
      if (sVar22 != 0) {
        if (SCARRY8(*(long *)(local_58 + 0x10),sVar22)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625f0);
          (*pcVar1)();
        }
        *(size_t *)(local_58 + 0x10) = *(long *)(local_58 + 0x10) + sVar22;
      }
    }
    else {
      if (sVar22 != 0) goto LAB_10066241c;
LAB_100662498:
      _swift_bridgeObjectRelease(lVar5);
      if (sVar22 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625e4);
        (*pcVar1)();
      }
    }
    uVar21 = unaff_x20[2];
    if (0 < (long)uVar21) {
      uVar6 = *(ulong *)(local_58 + 0x10);
      uVar19 = uVar6 - uVar21;
      if (uVar6 < uVar21) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625ec);
        (*pcVar1)();
      }
      if ((long)(*(ulong *)(local_58 + 0x18) >> 1) < (long)uVar19) {
        if (uVar6 <= uVar19) {
          uVar6 = uVar19;
        }
        local_58 = 1;
        FUN_1006295a0(1,uVar6,1);
        uVar19 = *(long *)(local_58 + 0x10) - uVar21;
      }
      _memmove((void *)(local_58 + 0x20),(void *)(local_58 + 0x20 + uVar21),uVar19);
      *(ulong *)(local_58 + 0x10) = uVar19;
      unaff_x20[2] = 0;
    }
    uVar20 = uVar23 - uVar20;
    uVar21 = uVar23;
    uVar6 = uVar23;
    uVar19 = uVar16;
    if (uVar20 == 0) {
      _swift_bridgeObjectRelease(lVar15);
    }
    else {
      if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625f8);
        (*pcVar1)();
      }
      uVar18 = *(ulong *)(lVar25 + 0x10);
      if (uVar18 < uVar20) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006625fc);
        (*pcVar1)();
      }
      lVar5 = lVar25;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar5 == 0) || ((long)(*(ulong *)(lVar25 + 0x18) >> 1) < (long)(uVar18 - uVar20))) {
        FUN_1006295a0();
        lVar25 = lVar5;
      }
      sVar22 = *(long *)(lVar25 + 0x10) - uVar20;
      _memmove((void *)(lVar25 + 0x20),(void *)(lVar25 + 0x20 + uVar20),sVar22);
      *(size_t *)(lVar25 + 0x10) = sVar22;
      _swift_bridgeObjectRelease(lVar15);
      *unaff_x20 = lVar25;
    }
  } while( true );
}

