// rea decompile_all
// name: FUN_10036660c
// address: 0x10036660c
// body: available
// range: 0x10036660c-0x100366e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10036660c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  long alStack_160 [3];
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [8];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [8];
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar1 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_160[1] = (long)alStack_160 - uVar5;
  lVar7 = alStack_160[1] - uVar5;
  lVar8 = lVar7 - uVar5;
  lVar9 = lVar8 - uVar5;
  lVar16 = lVar9 - uVar5;
  lVar14 = lVar16 - uVar5;
  lVar2 = 0;
  FUN_100365860();
  lVar11 = lVar14 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  lVar3 = lVar11;
  _swift_getEnumCaseMultiPayload(lVar11,lVar2);
  puVar4 = &DAT_100a88a88;
  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
  lVar2 = alStack_160[1];
  lVar13 = *(long *)(lVar11 + *(int *)(puVar4 + 0x30));
  pcVar6 = *(code **)(lVar10 + 0x20);
  iVar17 = (int)lVar3;
  alStack_160[2] = lVar10;
  if (iVar17 < 3) {
    if (iVar17 == 0) {
      (*pcVar6)(lVar16,lVar11,lVar1);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x25);
      _swift_bridgeObjectRelease(local_70);
      local_78 = 0xd000000000000014;
      local_70 = 0x80000001008acd30;
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(lVar11);
      __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
      if (lVar13 == 0) {
        uVar12 = 0;
        uVar15 = 0;
      }
      else {
        _swift_getErrorValue(lVar13,auStack_110,local_128);
        _swift_errorRetain(lVar13);
        uVar12 = local_120;
        uVar15 = local_118;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar13);
      }
      puVar4 = &DAT_100a88e90;
      local_88 = uVar12;
      uStack_80 = uVar15;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      _swift_errorRelease(lVar13);
      lVar7 = lVar16;
    }
    else if (iVar17 == 1) {
      (*pcVar6)(lVar9,lVar11,lVar1);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x26);
      _swift_bridgeObjectRelease(local_70);
      local_78 = 0xd000000000000015;
      local_70 = 0x80000001008acd10;
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(lVar11);
      __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
      if (lVar13 == 0) {
        uVar12 = 0;
        uVar15 = 0;
      }
      else {
        _swift_getErrorValue(lVar13,auStack_f0,local_108);
        _swift_errorRetain(lVar13);
        uVar12 = uStack_100;
        uVar15 = local_f8;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar13);
      }
      puVar4 = &DAT_100a88e90;
      local_88 = uVar12;
      uStack_80 = uVar15;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      _swift_errorRelease(lVar13);
      lVar7 = lVar9;
    }
    else {
      (*pcVar6)(lVar8,lVar11,lVar1);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x2f);
      _swift_bridgeObjectRelease(local_70);
      local_78 = 0xd00000000000001e;
      local_70 = 0x80000001008accf0;
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(lVar11);
      __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
      if (lVar13 == 0) {
        uVar12 = 0;
        uVar15 = 0;
      }
      else {
        _swift_getErrorValue(lVar13,auStack_d0,local_e8);
        _swift_errorRetain(lVar13);
        uVar12 = uStack_e0;
        uVar15 = local_d8;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar13);
      }
      puVar4 = &DAT_100a88e90;
      local_88 = uVar12;
      uStack_80 = uVar15;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      _swift_errorRelease(lVar13);
      lVar7 = lVar8;
    }
  }
  else if (iVar17 == 3) {
    (*pcVar6)(lVar7,lVar11,lVar1);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x4e);
    uVar12 = 0x80000001008accb0;
    __sSS6appendyySSF(0xd00000000000003d,0x80000001008accb0);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar12);
    __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
    if (lVar13 == 0) {
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      _swift_getErrorValue(lVar13,auStack_b0,local_c8);
      _swift_errorRetain(lVar13);
      uVar12 = uStack_c0;
      uVar15 = local_b8;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar13);
    }
    puVar4 = &DAT_100a88e90;
    local_88 = uVar12;
    uStack_80 = uVar15;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    _swift_errorRelease(lVar13);
  }
  else if (iVar17 == 4) {
    (*pcVar6)(alStack_160[1],lVar11,lVar1);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x35);
    uVar12 = 0x80000001008acc80;
    __sSS6appendyySSF(0xd000000000000025,0x80000001008acc80);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar12);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar13 == 0) {
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      _swift_getErrorValue(lVar13,auStack_90,local_a8);
      _swift_errorRetain(lVar13);
      uVar12 = uStack_a0;
      uVar15 = local_98;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar13);
    }
    puVar4 = &DAT_100a88e90;
    local_88 = uVar12;
    uStack_80 = uVar15;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    _swift_errorRelease(lVar13);
    lVar7 = lVar2;
  }
  else {
    (*pcVar6)(lVar14,lVar11,lVar1);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x36);
    uVar12 = 0x80000001008acd50;
    __sSS6appendyySSF(0xd000000000000026,0x80000001008acd50);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar12);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar13 == 0) {
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      _swift_getErrorValue(lVar13,auStack_130,local_148);
      _swift_errorRetain(lVar13);
      uVar12 = local_140;
      uVar15 = local_138;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar13);
    }
    puVar4 = &DAT_100a88e90;
    local_88 = uVar12;
    uStack_80 = uVar15;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    _swift_errorRelease(lVar13);
    lVar7 = lVar14;
  }
  uVar15 = local_70;
  uVar12 = local_78;
  (**(code **)(alStack_160[2] + 8))(lVar7,lVar1);
  auVar18._8_8_ = uVar15;
  auVar18._0_8_ = uVar12;
  return auVar18;
}

