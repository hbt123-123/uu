// rea decompile_all
// name: FUN_10062db30
// address: 0x10062db30
// body: available
// range: 0x10062db30-0x10062e0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10062db30(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  byte bVar22;
  ulong uVar23;
  ulong unaff_x27;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  uVar17 = lVar10 + 1;
  if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e098);
    (*pcVar5)();
  }
  if (lVar10 + 0xe000000000000001U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e09c);
    (*pcVar5)();
  }
  uVar23 = uVar17 * 4;
  if (uVar23 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0a0);
    (*pcVar5)();
  }
  puVar18 = (undefined *)(uVar17 * 0x10);
  puVar6 = puVar18;
  _swift_slowAlloc(puVar18,0xffffffffffffffff);
  if ((uVar17 & 0xfffffffffffffff) >> 0x3b != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0a4);
    (*pcVar5)();
  }
  if (puVar18 != (undefined *)0x0) {
    _bzero(puVar6,(size_t)puVar18);
  }
  uVar17 = *(ulong *)(unaff_x20 + 0x20);
  if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0a8);
    (*pcVar5)();
  }
  if (uVar17 != 0) {
    lVar11 = 0;
    lVar10 = *(long *)(param_1 + 0x10) + 0x20;
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    uVar14 = lVar13 + 3U >> 2;
    lVar15 = 0x2000000000000000;
    uVar16 = uVar17;
    do {
      if (lVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e020);
        (*pcVar5)();
      }
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e024);
        (*pcVar5)();
      }
      puVar6[lVar11] = *(undefined1 *)(lVar10 + lVar11);
      if (lVar13 <= lVar11 + 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e028);
        (*pcVar5)();
      }
      puVar6[lVar11 + 1] = *(undefined1 *)(lVar10 + lVar11 + 1);
      if (lVar13 <= lVar11 + 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e02c);
        (*pcVar5)();
      }
      puVar6[lVar11 + 2] = *(undefined1 *)(lVar10 + lVar11 + 2);
      if (lVar13 <= lVar11 + 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e030);
        (*pcVar5)();
      }
      puVar6[lVar11 + 3] = *(undefined1 *)(lVar10 + lVar11 + 3);
      uVar14 = uVar14 - 1;
      lVar15 = lVar15 + -1;
      lVar11 = lVar11 + 4;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if ((long)uVar23 < (long)uVar17) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0ac);
    (*pcVar5)();
  }
  if (uVar17 == uVar23) {
    bVar4 = false;
    if (puVar18 == (undefined *)0x0) {
      bVar21 = false;
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      goto LAB_10062dfac;
    }
  }
  else {
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0b0);
      (*pcVar5)();
    }
    bVar21 = false;
    pbVar19 = puVar6 + 3;
    pbVar20 = puVar6 + 3 + uVar17 * 4;
    uVar16 = uVar17;
    uVar14 = unaff_x27;
    do {
      if ((long)uVar23 <= (long)uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e034);
        (*pcVar5)();
      }
      unaff_x27 = 4;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (4,PTR___ss5UInt8VN_100995d40);
      *(undefined8 *)(unaff_x27 + 0x10) = 4;
      *(undefined4 *)(unaff_x27 + 0x20) = 0;
      uVar12 = unaff_x27;
      if (bVar21) {
        _swift_bridgeObjectRelease();
        uVar12 = uVar14;
      }
      if (uVar17 + 0xdfffffffffffffff >> 0x3e < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e038);
        (*pcVar5)();
      }
      uVar14 = *(ulong *)(unaff_x27 + 0x10);
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e03c);
        (*pcVar5)();
      }
      bVar22 = pbVar20[-7];
      *(byte *)(unaff_x27 + 0x20) = bVar22;
      if (uVar14 == 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e040);
        (*pcVar5)();
      }
      *(byte *)(unaff_x27 + 0x21) = pbVar20[-6];
      if (uVar14 < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e044);
        (*pcVar5)();
      }
      *(byte *)(unaff_x27 + 0x22) = pbVar20[-5];
      if (uVar14 == 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e048);
        (*pcVar5)();
      }
      *(byte *)(unaff_x27 + 0x23) = pbVar20[-4];
      uVar3 = 0;
      if (uVar17 != 0) {
        uVar3 = uVar16 / uVar17;
      }
      if (uVar16 == uVar3 * uVar17) {
        puVar7 = &DAT_100ab7e48;
        FUN_100004bb4(&DAT_100ab7e48,&DAT_100848d08);
        puVar8 = &DAT_100ab7e30;
        FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
        if (puVar7 == puVar8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0b4);
          (*pcVar5)();
        }
        uVar14 = unaff_x27;
        _swift_bridgeObjectRetain(unaff_x27);
        FUN_10067bef4();
        FUN_10067d3f4();
        uVar9 = 4;
        FUN_10063a22c(4,uVar14);
        uVar12 = uVar9;
        FUN_10062ce64();
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRelease(unaff_x27);
        if (*(long *)(uVar12 + 0x10) == 0) {
          _swift_bridgeObjectRelease(uVar12);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e0c0);
          (*pcVar5)();
        }
        bVar2 = *(byte *)(uVar12 + 0x20);
        _swift_bridgeObjectRelease(uVar12);
        if (0xff < (long)uVar3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e060);
          (*pcVar5)();
        }
        bVar22 = (&DAT_100ab14b0)[uVar3];
        uVar14 = uVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar14 & 1) == 0) {
          FUN_1006541b8();
          uVar14 = *(ulong *)(uVar12 + 0x10);
          unaff_x27 = uVar12;
        }
        else {
          uVar14 = *(ulong *)(uVar12 + 0x10);
          unaff_x27 = uVar12;
        }
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062df58);
          (*pcVar5)();
        }
        bVar22 = bVar22 ^ bVar2;
        *(byte *)(unaff_x27 + 0x20) = bVar22;
      }
      else if ((6 < (long)uVar17) && (uVar16 - uVar3 * uVar17 == 4)) {
        if (uVar14 != 4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e064);
          (*pcVar5)();
        }
        FUN_10062bc00();
        if (*(ulong *)(uVar12 + 0x10) <= (ulong)bVar22) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e068);
          (*pcVar5)();
        }
        uVar1 = *(uint *)(uVar12 + (ulong)bVar22 * 4 + 0x20);
        bVar22 = (byte)uVar1;
        _swift_bridgeObjectRelease();
        if (0xff < uVar1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e06c);
          (*pcVar5)();
        }
        uVar14 = *(ulong *)(unaff_x27 + 0x10);
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e070);
          (*pcVar5)();
        }
        *(byte *)(unaff_x27 + 0x20) = bVar22;
        if (uVar14 == 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e074);
          (*pcVar5)();
        }
        uVar12 = *(ulong *)(*(long *)(unaff_x20 + 0x90) + 0x10);
        if (uVar12 <= *(byte *)(unaff_x27 + 0x21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e078);
          (*pcVar5)();
        }
        lVar10 = *(long *)(unaff_x20 + 0x90) + 0x20;
        uVar1 = *(uint *)(lVar10 + (ulong)*(byte *)(unaff_x27 + 0x21) * 4);
        if (0xff < uVar1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e07c);
          (*pcVar5)();
        }
        *(char *)(unaff_x27 + 0x21) = (char)uVar1;
        if (uVar14 < 3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e080);
          (*pcVar5)();
        }
        if (uVar12 <= *(byte *)(unaff_x27 + 0x22)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e084);
          (*pcVar5)();
        }
        uVar1 = *(uint *)(lVar10 + (ulong)*(byte *)(unaff_x27 + 0x22) * 4);
        if (0xff < uVar1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e088);
          (*pcVar5)();
        }
        *(char *)(unaff_x27 + 0x22) = (char)uVar1;
        if (uVar14 == 3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e08c);
          (*pcVar5)();
        }
        if (uVar12 <= *(byte *)(unaff_x27 + 0x23)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e090);
          (*pcVar5)();
        }
        uVar1 = *(uint *)(lVar10 + (ulong)*(byte *)(unaff_x27 + 0x23) * 4);
        if (0xff < uVar1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e094);
          (*pcVar5)();
        }
        *(char *)(unaff_x27 + 0x23) = (char)uVar1;
      }
      if (uVar16 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e04c);
        (*pcVar5)();
      }
      if ((-0x2000000000000000 - uVar17) + uVar16 >> 0x3e < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e050);
        (*pcVar5)();
      }
      pbVar20[-3] = bVar22 ^ pbVar19[-3];
      if (uVar14 == 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e054);
        (*pcVar5)();
      }
      pbVar20[-2] = *(byte *)(unaff_x27 + 0x21) ^ pbVar19[-2];
      if (uVar14 < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e058);
        (*pcVar5)();
      }
      pbVar20[-1] = *(byte *)(unaff_x27 + 0x22) ^ pbVar19[-1];
      if (uVar14 == 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062e05c);
        (*pcVar5)();
      }
      uVar16 = uVar16 + 1;
      *pbVar20 = *(byte *)(unaff_x27 + 0x23) ^ *pbVar19;
      bVar21 = true;
      pbVar19 = pbVar19 + 4;
      pbVar20 = pbVar20 + 4;
      uVar14 = unaff_x27;
    } while (uVar23 - uVar16 != 0);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    bVar4 = true;
    if (puVar18 == (undefined *)0x0) goto LAB_10062dfac;
  }
  bVar21 = bVar4;
  puVar7 = puVar18;
  FUN_100630840(puVar18,0);
  _memcpy(puVar7 + 0x20,puVar6,(size_t)puVar18);
LAB_10062dfac:
  puVar18 = puVar7;
  FUN_10062c910(puVar7,4);
  puVar8 = puVar18;
  FUN_10062cb88();
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(puVar18);
  if (bVar21) {
    _swift_bridgeObjectRelease(unaff_x27);
  }
  _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  return puVar8;
}

