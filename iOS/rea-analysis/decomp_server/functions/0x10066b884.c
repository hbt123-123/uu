// rea decompile_all
// name: FUN_10066b884
// address: 0x10066b884
// body: available
// range: 0x10066b884-0x10066be77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066b884(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long local_68;
  
  puVar4 = PTR___ss6UInt32VN_100995dc0;
  lVar7 = 0x11;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x11,PTR___ss6UInt32VN_100995dc0);
  *(undefined8 *)(lVar7 + 0x10) = 0x11;
  puVar16 = (uint *)(lVar7 + 0x20);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  puVar16[0] = 0;
  puVar16[1] = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined4 *)(lVar7 + 0x60) = 0;
  lVar8 = 0x11;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(0x11,puVar4);
  *(undefined8 *)(lVar8 + 0x10) = 0x11;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined4 *)(lVar8 + 0x60) = 0;
  uVar9 = 0x11;
  local_68 = lVar8;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(0x11,puVar4);
  *(undefined8 *)(uVar9 + 0x10) = 0x11;
  *(undefined8 *)(uVar9 + 0x28) = 0;
  *(undefined8 *)(uVar9 + 0x20) = 0;
  *(undefined8 *)(uVar9 + 0x38) = 0;
  *(undefined8 *)(uVar9 + 0x30) = 0;
  *(undefined8 *)(uVar9 + 0x48) = 0;
  *(undefined8 *)(uVar9 + 0x40) = 0;
  *(undefined8 *)(uVar9 + 0x58) = 0;
  *(undefined8 *)(uVar9 + 0x50) = 0;
  *(undefined4 *)(uVar9 + 0x60) = 0;
  uVar14 = *(ulong *)(param_2 + 0x10);
  if (uVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdf0);
    (*pcVar5)();
  }
  uVar11 = *(ulong *)(lVar7 + 0x10);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdf4);
    (*pcVar5)();
  }
  *puVar16 = (uint)*(byte *)(param_2 + 0x20);
  if (uVar14 == 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdf8);
    (*pcVar5)();
  }
  if (uVar11 == 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdfc);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x24) = (uint)*(byte *)(param_2 + 0x21);
  if (uVar14 < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be00);
    (*pcVar5)();
  }
  if (uVar11 < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be04);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x28) = (uint)*(byte *)(param_2 + 0x22);
  if (uVar14 == 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be08);
    (*pcVar5)();
  }
  if (uVar11 == 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be0c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x2c) = *(byte *)(param_2 + 0x23) & 0xf;
  if (uVar14 < 5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be10);
    (*pcVar5)();
  }
  if (uVar11 < 5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be14);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x30) = *(byte *)(param_2 + 0x24) & 0xfc;
  if (uVar14 == 5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be18);
    (*pcVar5)();
  }
  if (uVar11 == 5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be1c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x34) = (uint)*(byte *)(param_2 + 0x25);
  if (uVar14 < 7) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be20);
    (*pcVar5)();
  }
  if (uVar11 < 7) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be24);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x38) = (uint)*(byte *)(param_2 + 0x26);
  if (uVar14 == 7) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be28);
    (*pcVar5)();
  }
  if (uVar11 == 7) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be2c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x3c) = *(byte *)(param_2 + 0x27) & 0xf;
  if (uVar14 < 9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be30);
    (*pcVar5)();
  }
  if (uVar11 < 9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be34);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x40) = *(byte *)(param_2 + 0x28) & 0xfc;
  if (uVar14 == 9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be38);
    (*pcVar5)();
  }
  if (uVar11 == 9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be3c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x44) = (uint)*(byte *)(param_2 + 0x29);
  if (uVar14 < 0xb) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be40);
    (*pcVar5)();
  }
  if (uVar11 < 0xb) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be44);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x48) = (uint)*(byte *)(param_2 + 0x2a);
  if (uVar14 == 0xb) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be48);
    (*pcVar5)();
  }
  if (uVar11 == 0xb) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be4c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x4c) = *(byte *)(param_2 + 0x2b) & 0xf;
  if (uVar14 < 0xd) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be50);
    (*pcVar5)();
  }
  if (uVar11 < 0xd) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be54);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x50) = *(byte *)(param_2 + 0x2c) & 0xfc;
  if (uVar14 == 0xd) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be58);
    (*pcVar5)();
  }
  if (uVar11 == 0xd) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be5c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x54) = (uint)*(byte *)(param_2 + 0x2d);
  if (uVar14 < 0xf) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be60);
    (*pcVar5)();
  }
  if (uVar11 < 0xf) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be64);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x58) = (uint)*(byte *)(param_2 + 0x2e);
  if (uVar14 == 0xf) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be68);
    (*pcVar5)();
  }
  if (uVar11 == 0xf) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be6c);
    (*pcVar5)();
  }
  *(uint *)(lVar7 + 0x5c) = *(byte *)(param_2 + 0x2f) & 0xf;
  if (uVar11 < 0x11) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be70);
    (*pcVar5)();
  }
  *(undefined4 *)(lVar7 + 0x60) = 0;
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 != 0) {
    uVar20 = 0;
    uVar18 = uVar11;
    do {
      uVar21 = *(ulong *)(uVar9 + 0x10);
      if (uVar21 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar12 & 1) == 0) {
          FUN_1006541cc();
        }
        uVar12 = *(ulong *)(uVar9 + 0x10);
        uVar10 = uVar12;
        if (uVar21 - 1 <= uVar12) {
          uVar10 = uVar21 - 1;
        }
        if (uVar10 < 8) {
          uVar13 = 0;
        }
        else {
          uVar1 = uVar10 + 1 & 7;
          uVar13 = 8;
          if (uVar1 != 0) {
            uVar13 = uVar1;
          }
          uVar13 = (uVar10 + 1) - uVar13;
          puVar15 = (undefined8 *)(uVar9 + 0x30);
          uVar10 = uVar13;
          do {
            puVar15[-1] = 0;
            puVar15[-2] = 0;
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15 = puVar15 + 4;
            uVar10 = uVar10 - 8;
          } while (uVar10 != 0);
        }
        do {
          if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdd8);
            (*pcVar5)();
          }
          lVar8 = uVar13 * 4;
          uVar13 = uVar13 + 1;
          *(undefined4 *)(uVar9 + lVar8 + 0x20) = 0;
        } while (uVar21 != uVar13);
      }
      uVar21 = uVar18;
      if (0xf < uVar18) {
        uVar21 = 0x10;
      }
      if (uVar12 < uVar21) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bde4);
        (*pcVar5)();
      }
      lVar8 = 0;
      if (uVar20 <= uVar11) {
        lVar8 = uVar11 - uVar20;
      }
      lVar17 = 0x20;
      lVar19 = param_1 + 0x20;
      uVar12 = uVar21;
      do {
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdd4);
          (*pcVar5)();
        }
        bVar3 = *(byte *)(lVar19 + uVar20);
        uVar10 = uVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar10 & 1) == 0) {
          FUN_1006541cc();
        }
        *(uint *)(uVar9 + lVar17) = (uint)bVar3;
        lVar19 = lVar19 + 1;
        lVar8 = lVar8 + -1;
        lVar17 = lVar17 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar12 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar12 & 1) == 0) {
        FUN_1006541cc();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bde8);
        (*pcVar5)();
      }
      *(undefined4 *)(uVar9 + uVar21 * 4 + 0x20) = 1;
      bVar6 = SCARRY8(uVar20,uVar21);
      uVar20 = uVar20 + uVar21;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bdec);
        (*pcVar5)();
      }
      uVar18 = uVar18 - uVar21;
      FUN_10066b1f4(&local_68,uVar9);
      FUN_10066b530(&local_68,lVar7);
    } while (0 < (long)uVar18);
  }
  FUN_10066b700(&local_68);
  uVar11 = 0;
  if (uVar14 < 0x11) {
    uVar14 = 0x10;
  }
  do {
    if (uVar14 - 0x10 == uVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bddc);
      (*pcVar5)();
    }
    bVar3 = *(byte *)(param_2 + 0x30 + uVar11);
    uVar20 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar20 & 1) == 0) {
      FUN_1006541cc();
    }
    uVar20 = *(ulong *)(uVar9 + 0x10);
    if (uVar20 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10066bde0);
      (*pcVar5)();
    }
    lVar8 = uVar11 * 4;
    uVar11 = uVar11 + 1;
    *(uint *)(uVar9 + lVar8 + 0x20) = (uint)bVar3;
  } while (uVar11 != 0x10);
  if (uVar20 < 0x11) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be74);
    (*pcVar5)();
  }
  *(undefined4 *)(uVar9 + 0x60) = 0;
  FUN_10066b1f4(&local_68,uVar9);
  lVar8 = local_68;
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (*(ulong *)(local_68 + 0x10) < 0x10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10066be78);
    (*pcVar5)();
  }
  _swift_bridgeObjectRetain(local_68);
  FUN_100664ad8(0,0x10,0);
  lVar19 = 0x20;
  uVar14 = *(ulong *)(puVar4 + 0x10);
  do {
    uVar2 = *(undefined4 *)(lVar8 + lVar19);
    uVar11 = uVar14 + 1;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
      FUN_100664ad8(1 < *(ulong *)(puVar4 + 0x18),uVar11,1);
    }
    *(ulong *)(puVar4 + 0x10) = uVar11;
    puVar4[uVar14 + 0x20] = (char)uVar2;
    lVar19 = lVar19 + 4;
    uVar14 = uVar11;
  } while (lVar19 != 0x60);
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease_n(lVar8,2);
  return puVar4;
}

