// rea decompile_all
// name: FUN_100368074
// address: 0x100368074
// body: available
// range: 0x100368074-0x10036892f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100368074(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
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
  undefined8 uStack_70;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar1 + -8);
  uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_160[1] = (long)alStack_160 - uVar6;
  lVar8 = alStack_160[1] - uVar6;
  lVar9 = lVar8 - uVar6;
  lVar10 = lVar9 - uVar6;
  lVar16 = lVar10 - uVar6;
  lVar15 = lVar16 - uVar6;
  lVar2 = 0;
  FUN_100365824();
  lVar12 = lVar15 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  lVar3 = lVar12;
  _swift_getEnumCaseMultiPayload(lVar12,lVar2);
  puVar4 = &DAT_100a88a88;
  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
  lVar2 = alStack_160[1];
  lVar13 = *(long *)(lVar12 + *(int *)(puVar4 + 0x30));
  pcVar7 = *(code **)(lVar11 + 0x20);
  iVar17 = (int)lVar3;
  alStack_160[2] = lVar11;
  if (iVar17 < 3) {
    if (iVar17 == 0) {
      (*pcVar7)(lVar16,lVar12,lVar1);
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x4c);
      uVar5 = 0x80000001008ad1b0;
      __sSS6appendyySSF(0xd00000000000003c,0x80000001008ad1b0);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
      if (lVar13 == 0) {
        uVar5 = 0;
        uVar14 = 0;
      }
      else {
        _swift_getErrorValue(lVar13,auStack_110,local_128);
        _swift_errorRetain(lVar13);
        uVar5 = local_120;
        uVar14 = local_118;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar13);
      }
      puVar4 = &DAT_100a88e90;
      local_88 = uVar5;
      uStack_80 = uVar14;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      _swift_errorRelease(lVar13);
      lVar10 = lVar16;
    }
    else if (iVar17 == 1) {
      (*pcVar7)(lVar8,lVar12,lVar1);
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x56);
      uVar5 = 0x80000001008ad0d0;
      __sSS6appendyySSF(0xd000000000000046,0x80000001008ad0d0);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
      if (lVar13 == 0) {
        uVar5 = 0;
        uVar14 = 0;
      }
      else {
        _swift_getErrorValue(lVar13,auStack_b0,local_c8);
        _swift_errorRetain(lVar13);
        uVar5 = uStack_c0;
        uVar14 = local_b8;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar13);
      }
      puVar4 = &DAT_100a88e90;
      local_88 = uVar5;
      uStack_80 = uVar14;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      _swift_errorRelease(lVar13);
      lVar10 = lVar8;
    }
    else {
      (*pcVar7)(lVar15,lVar12,lVar1);
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x41);
      uVar5 = 0x80000001008ad1f0;
      __sSS6appendyySSF(0xd000000000000031,0x80000001008ad1f0);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
      if (lVar13 == 0) {
        uVar5 = 0;
        uVar14 = 0;
      }
      else {
        _swift_getErrorValue(lVar13,auStack_130,local_148);
        _swift_errorRetain(lVar13);
        uVar5 = local_140;
        uVar14 = local_138;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar13);
      }
      puVar4 = &DAT_100a88e90;
      local_88 = uVar5;
      uStack_80 = uVar14;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      _swift_errorRelease(lVar13);
      lVar10 = lVar15;
    }
  }
  else if (iVar17 == 3) {
    (*pcVar7)(lVar10,lVar12,lVar1);
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x49);
    uVar5 = 0x80000001008ad170;
    __sSS6appendyySSF(0xd000000000000039,0x80000001008ad170);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar13 == 0) {
      uVar5 = 0;
      uVar14 = 0;
    }
    else {
      _swift_getErrorValue(lVar13,auStack_f0,local_108);
      _swift_errorRetain(lVar13);
      uVar5 = uStack_100;
      uVar14 = local_f8;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar13);
    }
    puVar4 = &DAT_100a88e90;
    local_88 = uVar5;
    uStack_80 = uVar14;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    _swift_errorRelease(lVar13);
  }
  else if (iVar17 == 4) {
    (*pcVar7)(lVar9,lVar12,lVar1);
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x5f);
    uVar5 = 0x80000001008ad120;
    __sSS6appendyySSF(0xd00000000000004f,0x80000001008ad120);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar13 == 0) {
      uVar5 = 0;
      uVar14 = 0;
    }
    else {
      _swift_getErrorValue(lVar13,auStack_d0,local_e8);
      _swift_errorRetain(lVar13);
      uVar5 = uStack_e0;
      uVar14 = local_d8;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar13);
    }
    puVar4 = &DAT_100a88e90;
    local_88 = uVar5;
    uStack_80 = uVar14;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    _swift_errorRelease(lVar13);
    lVar10 = lVar9;
  }
  else {
    (*pcVar7)(alStack_160[1],lVar12,lVar1);
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x66);
    uVar5 = 0x80000001008ad080;
    __sSS6appendyySSF(0xd00000000000004a,0x80000001008ad080);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    uVar5 = 0x726564616548202c;
    __sSS6appendyySSF(0x726564616548202c,0xea0000000000203a);
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
    puVar4 = &DAT_100a88e98;
    local_88 = uVar5;
    FUN_100004bb4(&DAT_100a88e98,&DAT_10081cfc8);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    if (lVar13 == 0) {
      uVar5 = 0;
      uVar14 = 0;
    }
    else {
      _swift_getErrorValue(lVar13,auStack_90,local_a8);
      _swift_errorRetain(lVar13);
      uVar5 = uStack_a0;
      uVar14 = local_98;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar13);
    }
    puVar4 = &DAT_100a88e90;
    local_88 = uVar5;
    uStack_80 = uVar14;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    _swift_errorRelease(lVar13);
    lVar10 = lVar2;
  }
  uVar14 = uStack_70;
  uVar5 = local_78;
  (**(code **)(alStack_160[2] + 8))(lVar10,lVar1);
  auVar18._8_8_ = uVar14;
  auVar18._0_8_ = uVar5;
  return auVar18;
}

