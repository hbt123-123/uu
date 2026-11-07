// rea decompile_all
// name: FUN_10063c294
// address: 0x10063c294
// body: available
// range: 0x10063c294-0x10063c803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063c294(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  code *param_13,undefined8 param_14)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(code **)(unaff_x20 + 0x10) = param_13;
  *(undefined8 *)(unaff_x20 + 0x18) = param_14;
  *(undefined **)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(long *)(unaff_x20 + 0x58) = param_3;
  *(ulong *)(unaff_x20 + 0x60) = param_4;
  *(byte *)(unaff_x20 + 0x68) = param_11 & 1;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_8;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_9;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = param_10;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x10;
  _swift_bridgeObjectRetain();
  _swift_retain(param_14);
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_5);
  lVar4 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar4 + 0x10) = 0x10;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  puVar11 = (undefined8 *)(lVar4 + 0x20);
  *puVar11 = 0;
  lVar5 = lVar4;
  (*param_13)();
  _swift_bridgeObjectRelease(lVar4);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c800);
    (*pcVar2)();
  }
  lVar4 = lVar5;
  FUN_10067bee4();
  _swift_bridgeObjectRelease(lVar5);
  *(long *)(unaff_x20 + 0x90) = lVar4;
  *(undefined8 **)(unaff_x20 + 0x98) = puVar11;
  if ((param_11 & 1) != 0) {
    param_10 = 0;
  }
  *(undefined8 *)(unaff_x20 + 0x40) = param_10;
  lVar5 = (param_4 >> 1) - param_3;
  if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c7e4);
    (*pcVar2)();
  }
  if (lVar5 != 0xc) {
    if ((param_4 & 1) == 0) {
      _swift_unknownObjectRetain(param_1);
LAB_10063c3e8:
      puVar6 = param_1;
      thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
LAB_10063c540:
      _swift_unknownObjectRelease(param_1);
      puVar12 = puVar6;
    }
    else {
      uVar8 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar12 = param_1;
      _swift_unknownObjectRetain_n(param_1,3);
      _swift_dynamicCastClass();
      if (puVar12 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar15 = *(long *)(puVar12 + 0x10);
      _swift_release();
      if (lVar15 != lVar5) {
        _swift_unknownObjectRelease();
        goto LAB_10063c3e8;
      }
      puVar12 = param_1;
      _swift_dynamicCastClass(param_1,uVar8);
      _swift_unknownObjectRelease(param_1);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar12 == (undefined *)0x0) goto LAB_10063c540;
    }
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1006376cc(PTR___swiftEmptyArrayStorage_100995ea0,0x10);
    uVar13 = *(ulong *)(puVar6 + 0x10);
    if (uVar13 < 0x10) {
      _swift_bridgeObjectRelease(puVar6);
      puVar17 = (undefined *)0x0;
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      puVar17 = (undefined *)0x0;
      uVar14 = uVar13 >> 4;
      uVar16 = 0x20;
      while( true ) {
        if (uVar13 == 0x10) {
          _swift_bridgeObjectRetain(puVar6);
          puVar9 = puVar6;
        }
        else {
          puVar9 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_allocObject();
          puVar10 = puVar9;
          _malloc_size();
          *(undefined8 *)(puVar9 + 0x10) = 0x10;
          *(long *)(puVar9 + 0x18) = (long)puVar10 * 2 + -0x40;
          uVar8 = *(undefined8 *)(puVar6 + uVar16);
          *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)((long)(puVar6 + uVar16) + 8);
          *(undefined8 *)(puVar9 + 0x20) = uVar8;
        }
        uVar13 = *(ulong *)(puVar9 + 0x28);
        uVar1 = (*(ulong *)(puVar9 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(puVar9 + 0x20) & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        _swift_release(puVar9);
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        puVar17 = (undefined *)((uVar1 >> 0x20 | uVar1 << 0x20) ^ (ulong)puVar17);
        uVar18 = (uVar13 >> 0x20 | uVar13 << 0x20) ^ uVar18;
        FUN_10063c228(puVar17,uVar18,lVar4,puVar11);
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) break;
        uVar13 = *(ulong *)(puVar6 + 0x10);
        bVar3 = uVar13 < uVar16;
        uVar16 = uVar16 + 0x10;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c7dc);
          (*pcVar2)();
        }
      }
      _swift_bridgeObjectRelease(puVar6);
    }
    puVar6 = puVar12;
    FUN_1006376cc(puVar12,0x10);
    uVar13 = *(ulong *)(puVar6 + 0x10);
    if (uVar13 < 0x10) {
      _swift_bridgeObjectRelease(puVar6);
    }
    else {
      uVar14 = uVar13 >> 4;
      uVar16 = 0x20;
      while( true ) {
        if (uVar13 == 0x10) {
          _swift_bridgeObjectRetain(puVar6);
          puVar9 = puVar6;
        }
        else {
          puVar9 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_allocObject();
          puVar10 = puVar9;
          _malloc_size();
          *(undefined8 *)(puVar9 + 0x10) = 0x10;
          *(long *)(puVar9 + 0x18) = (long)puVar10 * 2 + -0x40;
          uVar8 = *(undefined8 *)(puVar6 + uVar16);
          *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)((long)(puVar6 + uVar16) + 8);
          *(undefined8 *)(puVar9 + 0x20) = uVar8;
        }
        uVar13 = *(ulong *)(puVar9 + 0x28);
        uVar1 = (*(ulong *)(puVar9 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(puVar9 + 0x20) & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        _swift_release(puVar9);
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        puVar17 = (undefined *)((uVar1 >> 0x20 | uVar1 << 0x20) ^ (ulong)puVar17);
        uVar18 = (uVar13 >> 0x20 | uVar13 << 0x20) ^ uVar18;
        FUN_10063c228(puVar17,uVar18,lVar4,puVar11);
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) break;
        uVar13 = *(ulong *)(puVar6 + 0x10);
        bVar3 = uVar13 < uVar16;
        uVar16 = uVar16 + 0x10;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c7e0);
          (*pcVar2)();
        }
      }
      _swift_bridgeObjectRelease(puVar6);
    }
    uVar13 = *(ulong *)(puVar12 + 0x10);
    _swift_release(puVar12);
    if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c7e8);
      (*pcVar2)();
    }
    puVar12 = (undefined *)(uVar18 ^ uVar13 << 3);
    FUN_10063c228(puVar17,puVar12,lVar4,puVar11);
    goto LAB_10063c758;
  }
  puVar12 = *(undefined **)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar5 = *(long *)(unaff_x20 + 0x58);
  uVar13 = *(ulong *)(unaff_x20 + 0x60);
  if ((uVar13 & 1) == 0) {
    _swift_unknownObjectRetain(puVar12);
LAB_10063c3b4:
    puVar17 = puVar12;
    thunk_FUN_100629d98(puVar12,uVar8,lVar5,uVar13);
LAB_10063c47c:
    _swift_unknownObjectRelease(puVar12);
    puVar6 = puVar17;
  }
  else {
    uVar7 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar6 = puVar12;
    _swift_unknownObjectRetain_n(puVar12,3);
    _swift_dynamicCastClass();
    if (puVar6 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar12);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar4 = *(long *)(puVar6 + 0x10);
    _swift_release();
    if (SBORROW8(uVar13 >> 1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c7ec);
      (*pcVar2)();
    }
    if (lVar4 != (uVar13 >> 1) - lVar5) {
      _swift_unknownObjectRelease();
      goto LAB_10063c3b4;
    }
    puVar6 = puVar12;
    _swift_dynamicCastClass(puVar12,uVar7);
    _swift_unknownObjectRelease(puVar12);
    puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar6 == (undefined *)0x0) goto LAB_10063c47c;
  }
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar12 = &DAT_100ab0878;
  _swift_initStaticObject();
  FUN_100628ae0();
  puVar17 = puVar6;
  FUN_10067bee4();
  _swift_bridgeObjectRelease(puVar6);
LAB_10063c758:
  *(undefined **)(unaff_x20 + 0x70) = puVar17;
  *(undefined **)(unaff_x20 + 0x78) = puVar12;
  FUN_10067bccc();
  puVar12 = puVar17 + 0x20;
  puVar6 = puVar17;
  (*param_13)();
  _swift_bridgeObjectRelease(puVar17);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063c804);
    (*pcVar2)();
  }
  _swift_bridgeObjectRelease(param_9);
  puVar17 = puVar6;
  FUN_10067bee4();
  _swift_bridgeObjectRelease(puVar6);
  *(undefined **)(unaff_x20 + 0x80) = puVar17;
  *(undefined **)(unaff_x20 + 0x88) = puVar12;
  return unaff_x20;
}

