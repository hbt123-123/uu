// rea decompile_all
// name: FUN_10063dad4
// address: 0x10063dad4
// body: available
// range: 0x10063dad4-0x10063df4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063dad4(void)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long local_70;
  
  local_70 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(local_70 + 0x10) = 0x10;
  *(undefined8 *)(local_70 + 0x20) = 0;
  *(undefined8 *)(local_70 + 0x28) = 0;
  lVar6 = *(long *)(unaff_x20 + 0x60);
  if (lVar6 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x70);
    uVar2 = *(ulong *)(unaff_x20 + 0x78);
    lVar7 = *(long *)(unaff_x20 + 0x68);
    _swift_unknownObjectRetain(lVar6);
    lVar4 = 0x10;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x10,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar4 + 0x10) = 0x10;
    uVar15 = uVar2 >> 1;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    if (SBORROW8(uVar15,uVar1)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df38);
      (*pcVar17)();
    }
    uVar12 = uVar15;
    if ((0xf < uVar15 - uVar1) && (uVar12 = uVar1 + 0x10, SCARRY8(uVar1,0x10))) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df40);
      (*pcVar17)();
    }
    if ((long)uVar12 < (long)uVar1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df3c);
      (*pcVar17)();
    }
    uVar16 = 1;
    uVar18 = uVar1;
    while (uVar11 = uVar12, uVar18 != uVar15) {
      if ((long)uVar18 < (long)uVar1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df08);
        (*pcVar17)();
      }
      if (((long)uVar15 < (long)uVar11) || ((long)uVar15 < (long)uVar18)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df0c);
        (*pcVar17)();
      }
      if ((long)uVar11 < (long)uVar1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df10);
        (*pcVar17)();
      }
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df14);
        (*pcVar17)();
      }
      uVar12 = uVar15;
      if ((0xf < uVar15 - uVar11) && (uVar12 = uVar11 + 0x10, SCARRY8(uVar11,0x10))) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df24);
        (*pcVar17)();
      }
      if ((long)uVar12 < (long)uVar11) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df18);
        (*pcVar17)();
      }
      uVar9 = uVar11 - uVar18;
      if (SBORROW8(uVar11,uVar18)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df1c);
        (*pcVar17)();
      }
      uVar20 = uVar2 & 1 | uVar11 << 1;
      lVar5 = lVar4;
      if (uVar9 == 0x10) {
        if ((uVar16 & 1) == 0) {
          lVar8 = 0;
          uVar9 = uVar16;
          do {
            lVar14 = lVar8 + 1;
            if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df04);
              (*pcVar17)();
            }
            lVar8 = lVar8 + 1;
            uVar10 = (uint)uVar9;
            uVar9 = uVar9 >> 1;
          } while ((uVar10 >> 1 & 1) == 0);
        }
        else {
          lVar14 = 0;
        }
        _swift_unknownObjectRetain();
        FUN_10063d80c(lVar14);
        FUN_10063610c(lVar4,lVar14);
        _swift_bridgeObjectRelease(lVar14);
        _swift_bridgeObjectRelease(lVar4);
        pcVar17 = *(code **)(unaff_x20 + 0x20);
        if (pcVar17 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df44);
          (*pcVar17)();
        }
        uVar19 = *(undefined8 *)(unaff_x20 + 0x28);
        _swift_retain(uVar19);
        lVar14 = lVar7;
        FUN_100636298(lVar7,uVar18,uVar20,lVar5);
        lVar4 = lVar14;
        (*pcVar17)();
        _swift_bridgeObjectRelease(lVar14);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df48);
          (*pcVar17)();
        }
        FUN_10007ed2c(pcVar17,uVar19);
LAB_10063dbb0:
        lVar14 = local_70;
        FUN_10063610c(local_70,lVar4);
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(local_70);
        _swift_unknownObjectRelease(lVar6);
        lVar4 = lVar5;
        local_70 = lVar14;
      }
      else if (uVar18 != uVar11) {
        uVar19 = *(undefined8 *)(unaff_x20 + 0x90);
        _swift_unknownObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
        FUN_10063610c(lVar4,uVar19);
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(uVar19);
        lVar4 = 0x10;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (0x10,PTR___ss5UInt8VN_100995d40);
        *(undefined8 *)(lVar4 + 0x10) = 0x10;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df28);
          (*pcVar17)();
        }
        if (0x10 < uVar9) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df2c);
          (*pcVar17)();
        }
        if ((undefined8 *)(lVar4 + 0x20) == (undefined8 *)(lVar7 + uVar18)) {
          if ((long)uVar11 < (long)uVar18) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df34);
            (*pcVar17)();
          }
          if ((uVar18 != 0) || (uVar9 != uVar11)) goto LAB_10063dd0c;
          if (0xf < uVar9) goto LAB_10063df2c;
        }
        else {
LAB_10063dd0c:
          uVar13 = *(ulong *)(lVar4 + 0x18);
          _swift_unknownObjectRetain(lVar6);
          lVar14 = lVar4;
          if (uVar13 < 0x20) {
            lVar14 = 1;
            FUN_1006295a0(1,0x10,1,lVar4);
          }
          FUN_1006504e8(0,uVar9,uVar9,lVar6,lVar7,uVar18,uVar20);
          _swift_unknownObjectRelease(lVar6);
          lVar4 = lVar14;
          if (*(ulong *)(lVar14 + 0x10) <= uVar9) {
LAB_10063df2c:
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df30);
            (*pcVar17)();
          }
        }
        *(byte *)(lVar4 + uVar9 + 0x20) = *(byte *)(lVar4 + uVar9 + 0x20) | 0x80;
        lVar14 = lVar4;
        FUN_10063610c(lVar4,lVar5);
        _swift_bridgeObjectRelease(lVar4);
        pcVar17 = *(code **)(unaff_x20 + 0x20);
        if (pcVar17 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df50);
          (*pcVar17)();
        }
        uVar19 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar8 = *(long *)(lVar14 + 0x10);
        _swift_bridgeObjectRetain(lVar14);
        FUN_10004090c(pcVar17,uVar19);
        lVar4 = lVar14;
        (*pcVar17)(lVar14,lVar14 + 0x20,0,lVar8 << 1 | 1);
        _swift_bridgeObjectRelease(lVar14);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df4c);
          (*pcVar17)();
        }
        FUN_10007ed2c(pcVar17,uVar19);
        _swift_bridgeObjectRelease(lVar14);
        goto LAB_10063dbb0;
      }
      bVar3 = 0xfffffffffffffffe < uVar16;
      uVar16 = uVar16 + 1;
      uVar18 = uVar11;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10063df20);
        (*pcVar17)();
      }
    }
    _swift_bridgeObjectRelease(lVar4);
    _swift_unknownObjectRelease(lVar6);
  }
  return;
}

