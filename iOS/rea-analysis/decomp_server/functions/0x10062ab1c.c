// rea decompile_all
// name: thunk_FUN_10062ab2c
// address: 0x10062ab1c
// body: available
// range: 0x10062ab1c-0x10062ab1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10062ab2c(undefined *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  code *pcVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long *plVar40;
  ulong uVar41;
  long unaff_x20;
  long lVar42;
  ulong uVar43;
  
  lVar42 = *(long *)(unaff_x20 + 0x58);
  lVar32 = *(long *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,lVar42);
  (**(code **)(lVar32 + 8))(lVar42,lVar32);
  uVar43 = param_4 >> 1;
  if (((uint)lVar42 >> 2 & 1) != 0) {
    if (SBORROW8(uVar43,param_3)) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b22c);
      (*pcVar28)();
    }
    if (uVar43 - param_3 != 0x10) {
      if ((param_4 & 1) != 0) {
        uVar30 = 0;
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar31 = param_1;
        _swift_unknownObjectRetain_n(param_1,2);
        _swift_dynamicCastClass();
        if (puVar31 == (undefined *)0x0) {
          _swift_unknownObjectRelease(param_1);
          puVar31 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        lVar42 = *(long *)(puVar31 + 0x10);
        _swift_release();
        if (lVar42 == uVar43 - param_3) {
          puVar31 = param_1;
          _swift_dynamicCastClass(param_1,uVar30);
          if (puVar31 != (undefined *)0x0) {
            return;
          }
          _swift_unknownObjectRelease(param_1);
          return;
        }
        _swift_unknownObjectRelease();
      }
      thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
      return;
    }
  }
  uVar34 = *(ulong *)(unaff_x20 + 0x10);
  FUN_10062ba1c();
  if ((long)uVar43 <= param_3) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1bc);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 1) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1c0);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 2) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1c4);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 3) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1c8);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 4) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1cc);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 5) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1d0);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 6) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1d4);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 7) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1d8);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 8) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1dc);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 9) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1e0);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 10) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1e4);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 0xb) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1e8);
    (*pcVar28)();
  }
  if ((long)uVar43 <= param_3 + 0xc) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1ec);
    (*pcVar28)();
  }
  if (param_3 + 0xd < (long)uVar43) {
    if ((long)uVar43 <= param_3 + 0xe) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1f4);
      (*pcVar28)();
    }
    if ((long)uVar43 <= param_3 + 0xf) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1f8);
      (*pcVar28)();
    }
    uVar12 = *(undefined1 *)(param_2 + param_3);
    uVar13 = *(undefined1 *)(param_2 + param_3 + 1);
    uVar14 = *(undefined1 *)(param_2 + param_3 + 2);
    uVar15 = *(undefined1 *)(param_2 + param_3 + 3);
    uVar16 = *(undefined1 *)(param_2 + param_3 + 4);
    uVar17 = *(undefined1 *)(param_2 + param_3 + 5);
    uVar18 = *(undefined1 *)(param_2 + param_3 + 6);
    uVar19 = *(undefined1 *)(param_2 + param_3 + 7);
    uVar20 = *(undefined1 *)(param_2 + param_3 + 8);
    uVar21 = *(undefined1 *)(param_2 + param_3 + 9);
    uVar22 = *(undefined1 *)(param_2 + param_3 + 10);
    uVar23 = *(undefined1 *)(param_2 + param_3 + 0xb);
    uVar24 = *(undefined1 *)(param_2 + param_3 + 0xc);
    uVar25 = *(undefined1 *)(param_2 + param_3 + 0xd);
    uVar26 = *(undefined1 *)(param_2 + param_3 + 0xe);
    uVar27 = *(undefined1 *)(param_2 + param_3 + 0xf);
    puVar29 = (uint *)0x10;
    _swift_slowAlloc(0x10,0xffffffffffffffff);
    uVar43 = uVar34 - 1;
    if (SBORROW8(uVar34,1)) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1fc);
      (*pcVar28)();
    }
    if ((long)uVar43 < 0) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b200);
      (*pcVar28)();
    }
    uVar37 = CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)));
    uVar36 = CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
    uVar38 = CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
    uVar35 = *(ulong *)(lVar42 + 0x10);
    uVar39 = CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
    if (uVar43 != 0) {
      if (uVar35 < uVar43) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b230);
        (*pcVar28)();
      }
      plVar40 = (long *)(lVar42 + 0x20);
      uVar41 = uVar43;
      do {
        lVar32 = *plVar40;
        uVar33 = *(ulong *)(lVar32 + 0x10);
        if (uVar33 == 0) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1ac);
          (*pcVar28)();
        }
        if (uVar33 == 1) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1b0);
          (*pcVar28)();
        }
        if (uVar33 < 3) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1b4);
          (*pcVar28)();
        }
        if (uVar33 == 3) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1b8);
          (*pcVar28)();
        }
        uVar1 = *(uint *)(lVar32 + 0x20) ^ uVar37;
        uVar2 = *(uint *)(lVar32 + 0x24) ^ uVar36;
        uVar3 = *(uint *)(lVar32 + 0x28) ^ uVar38;
        uVar39 = *(uint *)(lVar32 + 0x2c) ^ uVar39;
        uVar37 = *(uint *)(&DAT_100ab1a00 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab15d8 + (ulong)(uVar1 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab1e28 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab2250 + (ulong)(uVar39 >> 0x18) * 4);
        uVar36 = *(uint *)(&DAT_100ab1a00 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab15d8 + (ulong)(uVar2 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab1e28 + (ulong)(uVar39 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab2250 + (ulong)(uVar1 >> 0x18) * 4);
        uVar38 = *(uint *)(&DAT_100ab1a00 + (ulong)(uVar39 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab15d8 + (ulong)(uVar3 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab1e28 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab2250 + (ulong)(uVar2 >> 0x18) * 4);
        uVar39 = *(uint *)(&DAT_100ab1a00 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab15d8 + (ulong)(uVar39 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab1e28 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_100ab2250 + (ulong)(uVar3 >> 0x18) * 4);
        plVar40 = plVar40 + 1;
        uVar41 = uVar41 - 1;
      } while (uVar41 != 0);
    }
    if ((long)uVar35 <= (long)uVar43) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b204);
      (*pcVar28)();
    }
    lVar32 = *(long *)(lVar42 + 0x20 + uVar43 * 8);
    uVar43 = *(ulong *)(lVar32 + 0x10);
    if (uVar43 == 0) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b208);
      (*pcVar28)();
    }
    uVar37 = *(uint *)(lVar32 + 0x20) ^ uVar37;
    *puVar29 = uVar37;
    if (uVar43 == 1) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b20c);
      (*pcVar28)();
    }
    uVar36 = *(uint *)(lVar32 + 0x24) ^ uVar36;
    puVar29[1] = uVar36;
    if (2 < uVar43) {
      uVar38 = *(uint *)(lVar32 + 0x28) ^ uVar38;
      puVar29[2] = uVar38;
      if (uVar43 == 3) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b214);
        (*pcVar28)();
      }
      uVar39 = *(uint *)(lVar32 + 0x2c) ^ uVar39;
      puVar29[3] = uVar39;
      if (uVar35 <= uVar34) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b218);
        (*pcVar28)();
      }
      lVar32 = *(long *)(lVar42 + 0x20 + uVar34 * 8);
      uVar43 = *(ulong *)(lVar32 + 0x10);
      if (uVar43 == 0) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b21c);
        (*pcVar28)();
      }
      if (uVar43 != 1) {
        if (uVar43 < 3) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b224);
          (*pcVar28)();
        }
        uVar12 = (&DAT_100ab15d9)[(ulong)(uVar37 & 0xff) * 4];
        uVar4 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar38 >> 0x10 & 0xff) * 4);
        uVar13 = (&DAT_100ab15d9)[(ulong)(uVar36 >> 8 & 0xff) * 4];
        uVar5 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar39 >> 0x18) * 4);
        uVar14 = (&DAT_100ab15d9)[(ulong)(uVar36 & 0xff) * 4];
        uVar15 = (&DAT_100ab15d9)[(ulong)(uVar38 >> 8 & 0xff) * 4];
        uVar6 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar39 >> 0x10 & 0xff) * 4);
        uVar7 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar37 >> 0x18) * 4);
        uVar1 = *(uint *)(lVar32 + 0x20);
        uVar2 = *(uint *)(lVar32 + 0x24);
        uVar8 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar38 & 0xff) * 4);
        uVar9 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar39 >> 8 & 0xff) * 4);
        uVar10 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar37 >> 0x10 & 0xff) * 4);
        uVar11 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar36 >> 0x18) * 4);
        uVar3 = *(uint *)(lVar32 + 0x28);
        uVar39 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar39 & 0xff) * 4);
        uVar37 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar37 >> 8 & 0xff) * 4);
        uVar36 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar36 >> 0x10 & 0xff) * 4);
        uVar38 = *(uint *)(&DAT_100ab15d8 + (ulong)(uVar38 >> 0x18) * 4);
        _swift_bridgeObjectRetain(lVar32);
        _swift_bridgeObjectRelease(lVar42);
        if (3 < *(ulong *)(lVar32 + 0x10)) {
          uVar1 = uVar1 ^ ((uint)CONCAT11(uVar13,uVar12) | (uVar4 >> 8 & 0xff) << 0x10 |
                          (uVar5 >> 8) << 0x18);
          uVar2 = ((uint)CONCAT11(uVar15,uVar14) | (uVar6 >> 8 & 0xff) << 0x10 |
                  (uVar7 >> 8) << 0x18) ^ uVar2;
          uVar3 = (uVar9 & 0xff00 | uVar8 >> 8 & 0xff | (uVar10 >> 8 & 0xff) << 0x10 |
                  (uVar11 >> 8) << 0x18) ^ uVar3;
          uVar4 = *(uint *)(lVar32 + 0x2c);
          _swift_bridgeObjectRelease(lVar32);
          uVar4 = uVar4 ^ (uVar37 & 0xff00 | uVar39 >> 8 & 0xff | (uVar36 >> 8 & 0xff) << 0x10 |
                          (uVar38 >> 8) << 0x18);
          puVar31 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_allocObject();
          *(undefined8 *)(puVar31 + 0x18) = 0x20;
          *(undefined8 *)(puVar31 + 0x10) = 0x10;
          puVar31[0x20] = (char)uVar1;
          puVar31[0x21] = (char)(uVar1 >> 8);
          puVar31[0x22] = (char)(uVar1 >> 0x10);
          puVar31[0x23] = (char)(uVar1 >> 0x18);
          puVar31[0x24] = (char)uVar2;
          puVar31[0x25] = (char)(uVar2 >> 8);
          puVar31[0x26] = (char)(uVar2 >> 0x10);
          puVar31[0x27] = (char)(uVar2 >> 0x18);
          puVar31[0x28] = (char)uVar3;
          puVar31[0x29] = (char)(uVar3 >> 8);
          puVar31[0x2a] = (char)(uVar3 >> 0x10);
          puVar31[0x2b] = (char)(uVar3 >> 0x18);
          puVar31[0x2c] = (char)uVar4;
          puVar31[0x2d] = (char)(uVar4 >> 8);
          puVar31[0x2e] = (char)(uVar4 >> 0x10);
          puVar31[0x2f] = (char)(uVar4 >> 0x18);
          _swift_slowDealloc(puVar29,0xffffffffffffffff,0xffffffffffffffff);
          return;
        }
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b228);
        (*pcVar28)();
      }
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b220);
      (*pcVar28)();
    }
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b210);
    (*pcVar28)();
  }
                    /* WARNING: Does not return */
  pcVar28 = (code *)SoftwareBreakpoint(1,0x10062b1f0);
  (*pcVar28)();
}

