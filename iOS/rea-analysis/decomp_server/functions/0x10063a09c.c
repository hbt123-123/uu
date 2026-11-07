// rea decompile_all
// name: thunk_FUN_100639a58
// address: 0x10063a09c
// body: available
// range: 0x10063a09c-0x10063a09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100639a58(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *unaff_x20;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  
  pcVar4 = (code *)*unaff_x20;
  puVar15 = (undefined *)unaff_x20[9];
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    if (puVar15 == (undefined *)0x0) {
      puVar9 = (undefined *)unaff_x20[4];
      uVar17 = unaff_x20[5];
      uVar12 = unaff_x20[6];
      uVar8 = unaff_x20[7];
      _swift_unknownObjectRetain(puVar9);
    }
    else {
      uVar12 = unaff_x20[0xb];
      uVar8 = unaff_x20[0xc];
      uVar17 = unaff_x20[10];
      puVar9 = puVar15;
    }
    _swift_unknownObjectRetain(puVar15);
    puVar5 = puVar9;
    (*pcVar4)(puVar9,uVar17,uVar12,uVar8);
    _swift_unknownObjectRelease(puVar9);
    if (puVar5 != (undefined *)0x0) {
      FUN_1006363a8(puVar5,param_2,param_3,param_4);
      _swift_bridgeObjectRelease(puVar5);
      _swift_unknownObjectRetain(param_1);
      _swift_unknownObjectRelease(puVar15);
      unaff_x20[9] = param_1;
      unaff_x20[10] = param_2;
      unaff_x20[0xb] = param_3;
      unaff_x20[0xc] = param_4;
      return;
    }
    if ((param_4 & 1) != 0) {
      uVar12 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar15 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar15 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar14 = *(long *)(puVar15 + 0x10);
      _swift_release();
      if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a088);
        (*pcVar4)();
      }
      if (lVar14 == (param_4 >> 1) - param_3) {
LAB_100639ff8:
        puVar15 = param_1;
        _swift_dynamicCastClass(param_1,uVar12);
        if (puVar15 == (undefined *)0x0) {
          _swift_unknownObjectRelease(param_1);
        }
        return;
      }
      _swift_unknownObjectRelease();
    }
LAB_100639bdc:
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    return;
  }
  uVar12 = unaff_x20[10];
  uVar18 = unaff_x20[0xb];
  uVar19 = unaff_x20[0xc];
  puVar5 = puVar15;
  puVar9 = puVar15;
  uVar8 = uVar12;
  uVar13 = uVar18;
  uVar16 = uVar19;
  if (puVar15 == (undefined *)0x0) {
    puVar9 = (undefined *)unaff_x20[4];
    uVar8 = unaff_x20[5];
    uVar13 = unaff_x20[6];
    uVar16 = unaff_x20[7];
    _swift_unknownObjectRetain(puVar9);
    puVar5 = (undefined *)0x0;
  }
  _swift_unknownObjectRetain();
  puVar6 = puVar9;
  (*pcVar4)(puVar9,uVar8,uVar13,uVar16);
  _swift_unknownObjectRelease(puVar9);
  if (puVar6 == (undefined *)0x0) {
    if ((param_4 & 1) != 0) {
      uVar12 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar15 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar15 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar14 = *(long *)(puVar15 + 0x10);
      _swift_release();
      if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a08c);
        (*pcVar4)();
      }
      if (lVar14 == (param_4 >> 1) - param_3) goto LAB_100639ff8;
      _swift_unknownObjectRelease(param_1);
    }
    goto LAB_100639bdc;
  }
  puVar9 = puVar5;
  if (puVar15 == (undefined *)0x0) {
    puVar9 = (undefined *)unaff_x20[4];
    uVar12 = unaff_x20[5];
    uVar18 = unaff_x20[6];
    uVar19 = unaff_x20[7];
    _swift_unknownObjectRetain(puVar9);
  }
  uVar13 = uVar19 >> 1;
  if (SBORROW8(uVar13,uVar18)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a038);
    (*pcVar4)();
  }
  uVar16 = uVar18;
  if (uVar13 != uVar18) {
    uVar16 = uVar18 + 1;
    if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a054);
      (*pcVar4)();
    }
    if ((long)uVar13 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a03c);
      (*pcVar4)();
    }
    if ((long)uVar16 < (long)uVar18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a040);
      (*pcVar4)();
    }
  }
  if ((long)uVar13 < (long)uVar18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a044);
    (*pcVar4)();
  }
  if ((uVar19 & 1) == 0) {
    _swift_unknownObjectRetain(puVar5);
LAB_100639c50:
    puVar7 = puVar9;
    thunk_FUN_100629d98(puVar9,uVar12,uVar16,uVar19);
LAB_100639cf0:
    _swift_unknownObjectRelease(puVar9);
    puVar15 = puVar7;
  }
  else {
    uVar8 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    _swift_unknownObjectRetain_n(puVar9,2);
    _swift_unknownObjectRetain(puVar5);
    puVar15 = puVar9;
    _swift_dynamicCastClass(puVar9,uVar8);
    if (puVar15 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar9);
      puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar14 = *(long *)(puVar15 + 0x10);
    _swift_release();
    if (SBORROW8(uVar13,uVar16)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a058);
      (*pcVar4)();
    }
    if (lVar14 != uVar13 - uVar16) {
      _swift_unknownObjectRelease();
      goto LAB_100639c50;
    }
    puVar15 = puVar9;
    _swift_dynamicCastClass(puVar9,uVar8);
    _swift_unknownObjectRelease(puVar9);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar15 == (undefined *)0x0) goto LAB_100639cf0;
  }
  puVar9 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar7 = puVar9;
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  puVar11 = param_1;
  if ((param_4 & 1) == 0) {
LAB_100639d34:
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  }
  else {
    uVar12 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar10 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar10 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar14 = *(long *)(puVar10 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a05c);
      (*pcVar4)();
    }
    if (lVar14 != (param_4 >> 1) - param_3) {
      _swift_unknownObjectRelease();
      goto LAB_100639d34;
    }
    _swift_dynamicCastClass(param_1,uVar12);
    if (puVar11 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (*(long *)(puVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a048);
    (*pcVar4)();
  }
  uVar1 = puVar11[0x20];
  _swift_release();
  puVar7[0x20] = uVar1;
  FUN_10063a0ac(*(long *)(puVar15 + 0x10) + 1,FUN_100630840);
  FUN_100634540(puVar15);
  _swift_release(puVar15);
  FUN_100634a40(puVar7,puVar7 + 0x20,0,3);
  _swift_bridgeObjectRelease(puVar7);
  _swift_unknownObjectRelease(puVar5);
  unaff_x20[10] = puVar10 + 0x20;
  unaff_x20[9] = puVar10;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 1;
  _swift_allocObject(puVar9,0x21,7);
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  if ((param_4 & 1) != 0) {
    uVar12 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar15 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar15 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar14 = *(long *)(puVar15 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a074);
      (*pcVar4)();
    }
    if (lVar14 == (param_4 >> 1) - param_3) {
      puVar15 = param_1;
      _swift_dynamicCastClass(param_1,uVar12);
      if (puVar15 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      goto LAB_100639f08;
    }
    _swift_unknownObjectRelease(param_1);
  }
  thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  puVar15 = param_1;
LAB_100639f08:
  if (*(long *)(puVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a04c);
    (*pcVar4)();
  }
  bVar2 = puVar15[0x20];
  _swift_release();
  if (*(long *)(puVar6 + 0x10) != 0) {
    bVar3 = puVar6[0x20];
    _swift_bridgeObjectRelease(puVar6);
    puVar9[0x20] = bVar3 ^ bVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10063a050);
  (*pcVar4)();
}

