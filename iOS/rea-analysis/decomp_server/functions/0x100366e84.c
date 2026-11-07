// rea decompile_all
// name: FUN_100366e84
// address: 0x100366e84
// body: available
// range: 0x100366e84-0x100367c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100366e84(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  undefined1 auVar25 [16];
  long alStack_260 [4];
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  undefined1 local_208 [8];
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 local_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 local_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  undefined1 local_188 [8];
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  undefined1 local_168 [8];
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  undefined1 local_148 [8];
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  undefined1 local_128 [8];
  undefined8 uStack_120;
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
  
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar19 = *(long *)(lVar5 + -8);
  uVar11 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_230 = (long)alStack_260 - uVar11;
  local_238 = local_230 - uVar11;
  local_240 = local_238 - uVar11;
  local_228 = local_240 - uVar11;
  alStack_260[3] = local_228 - uVar11;
  alStack_260[2] = alStack_260[3] - uVar11;
  alStack_260[1] = alStack_260[2] - uVar11;
  lVar13 = alStack_260[1] - uVar11;
  lVar14 = lVar13 - uVar11;
  lVar15 = lVar14 - uVar11;
  lVar16 = lVar15 - uVar11;
  lVar20 = lVar16 - uVar11;
  lVar6 = 0;
  local_210 = lVar5;
  FUN_10036584c();
  lVar17 = lVar20 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  lVar7 = lVar17;
  _swift_getEnumCaseMultiPayload(lVar17,lVar6);
  puVar8 = &DAT_100a88a88;
  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
  lVar23 = local_210;
  lVar22 = local_228;
  lVar4 = local_230;
  lVar3 = local_238;
  lVar21 = local_240;
  lVar2 = alStack_260[3];
  lVar6 = alStack_260[2];
  lVar5 = alStack_260[1];
  local_218 = *(long *)(lVar17 + *(int *)(puVar8 + 0x30));
  pcVar12 = *(code **)(lVar19 + 0x20);
  iVar24 = (int)lVar7;
  local_220 = lVar19;
  if (iVar24 < 6) {
    if (2 < iVar24) {
      if (iVar24 == 3) {
        (*pcVar12)(lVar13,lVar17,local_210);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x3e);
        uVar9 = 0x80000001008acf10;
        __sSS6appendyySSF(0xd00000000000002d,0x80000001008acf10);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar9);
        __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
        lVar7 = local_218;
        lVar21 = lVar13;
        if (local_218 == 0) goto LAB_100367920;
        _swift_getErrorValue(local_218,auStack_170,local_188);
        local_88 = uStack_180;
        uStack_80 = local_178;
      }
      else {
        if (iVar24 != 4) {
          (*pcVar12)(alStack_260[1],lVar17,local_210);
          local_78 = 0;
          local_70 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x44);
          uVar9 = 0x80000001008aced0;
          __sSS6appendyySSF(0xd000000000000034,0x80000001008aced0);
          FUN_10036ca70();
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar9);
          __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
          lVar7 = local_218;
          if (local_218 == 0) {
            uVar9 = 0;
            uVar18 = 0;
          }
          else {
            _swift_getErrorValue(local_218,auStack_150,local_168);
            _swift_errorRetain(lVar7);
            uVar9 = uStack_160;
            uVar18 = local_158;
            __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
            _swift_errorRelease(lVar7);
          }
          puVar8 = &DAT_100a88e90;
          local_88 = uVar9;
          uStack_80 = uVar18;
          FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
          __sSS10describingSSx_tclufC(&local_88,puVar8);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar8);
          lVar16 = lVar5;
          goto LAB_100367bcc;
        }
        (*pcVar12)(lVar20,lVar17,local_210);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x38);
        uVar9 = 0x80000001008acfe0;
        __sSS6appendyySSF(&DAT_d000000000000028,0x80000001008acfe0);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar9);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        lVar7 = local_218;
        lVar21 = lVar20;
        if (local_218 == 0) goto LAB_100367920;
        _swift_getErrorValue(local_218,auStack_1f0,local_208);
        local_88 = uStack_200;
        uStack_80 = local_1f8;
      }
LAB_1003678f8:
      _swift_errorRetain(lVar7);
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar7);
      goto LAB_10036792c;
    }
    if (iVar24 == 0) {
      (*pcVar12)(lVar16,lVar17,local_210);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x44);
      uVar9 = 0x80000001008acfa0;
      __sSS6appendyySSF(&DAT_d000000000000033,0x80000001008acfa0);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar9);
      __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
      lVar5 = local_218;
      if (local_218 == 0) {
        uVar9 = 0;
        uVar18 = 0;
      }
      else {
        _swift_getErrorValue(local_218,auStack_1d0,local_1e8);
        _swift_errorRetain(lVar5);
        uVar9 = uStack_1e0;
        uVar18 = local_1d8;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar5);
      }
      puVar8 = &DAT_100a88e90;
      local_88 = uVar9;
      uStack_80 = uVar18;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar8);
      _swift_errorRelease(lVar5);
      goto LAB_100367bd4;
    }
    if (iVar24 == 1) {
      (*pcVar12)(lVar15,lVar17,local_210);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x33);
      uVar9 = 0x80000001008acf70;
      __sSS6appendyySSF(0xd000000000000022,0x80000001008acf70);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar9);
      __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
      lVar5 = local_218;
      if (local_218 == 0) {
        uVar9 = 0;
        uVar18 = 0;
      }
      else {
        _swift_getErrorValue(local_218,auStack_1b0,local_1c8);
        _swift_errorRetain(lVar5);
        uVar9 = uStack_1c0;
        uVar18 = local_1b8;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar5);
      }
      puVar8 = &DAT_100a88e90;
      local_88 = uVar9;
      uStack_80 = uVar18;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar8);
      _swift_errorRelease(lVar5);
      lVar16 = lVar15;
      lVar23 = local_210;
      goto LAB_100367bd4;
    }
    (*pcVar12)(lVar14,lVar17,local_210);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3d);
    uVar9 = 0x80000001008acf40;
    __sSS6appendyySSF(0xd00000000000002c,0x80000001008acf40);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar9);
    __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
    lVar7 = local_218;
    lVar22 = lVar14;
    if (local_218 == 0) goto LAB_100367b88;
    _swift_getErrorValue(local_218,auStack_190,local_1a8);
    local_88 = uStack_1a0;
    uStack_80 = local_198;
LAB_100367b60:
    _swift_errorRetain(lVar7);
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    _swift_errorRelease(lVar7);
LAB_100367b90:
    puVar8 = &DAT_100a88e90;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    lVar16 = lVar22;
  }
  else {
    if (8 < iVar24) {
      if (iVar24 == 9) {
        (*pcVar12)(local_240,lVar17,local_210);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x43);
        uVar9 = 0x80000001008acde0;
        __sSS6appendyySSF(0xd000000000000032,0x80000001008acde0);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar9);
        __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
        lVar7 = local_218;
        if (local_218 == 0) goto LAB_100367920;
        _swift_getErrorValue(local_218,auStack_d0,local_e8);
        local_88 = uStack_e0;
        uStack_80 = local_d8;
      }
      else if (iVar24 == 10) {
        (*pcVar12)(local_238,lVar17,local_210);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x31);
        _swift_bridgeObjectRelease(local_70);
        local_78 = 0xd000000000000021;
        local_70 = 0x80000001008acdb0;
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(lVar17);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        lVar7 = local_218;
        lVar21 = lVar3;
        if (local_218 == 0) {
LAB_100367920:
          local_88 = 0;
          uStack_80 = 0;
          lVar7 = local_218;
          goto LAB_10036792c;
        }
        _swift_getErrorValue(local_218,auStack_b0,local_c8);
        local_88 = uStack_c0;
        uStack_80 = local_b8;
      }
      else {
        (*pcVar12)(local_230,lVar17,local_210);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x3d);
        uVar9 = 0x80000001008acd80;
        __sSS6appendyySSF(0xd00000000000002d,0x80000001008acd80);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar9);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        lVar7 = local_218;
        lVar21 = lVar4;
        if (local_218 == 0) goto LAB_100367920;
        _swift_getErrorValue(local_218,auStack_90,local_a8);
        local_88 = uStack_a0;
        uStack_80 = local_98;
      }
      goto LAB_1003678f8;
    }
    if (iVar24 != 6) {
      if (iVar24 == 7) {
        (*pcVar12)(alStack_260[3],lVar17,local_210);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x48);
        uVar9 = 0x80000001008ace50;
        __sSS6appendyySSF(0xd000000000000038,0x80000001008ace50);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar9);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        lVar7 = local_218;
        lVar21 = lVar2;
        if (local_218 == 0) goto LAB_100367920;
        _swift_getErrorValue(local_218,auStack_110,local_128);
        local_88 = uStack_120;
        uStack_80 = local_118;
        goto LAB_1003678f8;
      }
      lVar5 = local_228;
      (*pcVar12)(local_228,lVar17,local_210);
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      lVar7 = local_218;
      if (lVar5 == 0) {
        uVar9 = 0;
        uVar18 = 0xe000000000000000;
      }
      else {
        if (*(long *)(lVar5 + 0x10) == 0) {
          uVar9 = 0;
          uVar18 = 0xe000000000000000;
        }
        else {
          _swift_bridgeObjectRetain(lVar5);
          lVar6 = 0x7a69726f68747541;
          uVar11 = 0xed00006e6f697461;
          FUN_1001a2c70();
          if ((uVar11 & 1) == 0) {
            uVar9 = 0;
            uVar18 = 0xe000000000000000;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar6 * 0x10);
            uVar9 = *puVar1;
            uVar18 = puVar1[1];
            _swift_bridgeObjectRetain(uVar18);
          }
          _swift_bridgeObjectRelease(lVar5);
        }
        _swift_bridgeObjectRelease(lVar5);
      }
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x45);
      uVar10 = 0x80000001008ace20;
      __sSS6appendyySSF(0xd000000000000029,0x80000001008ace20);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar10);
      __sSS6appendyySSF(0x3a6e656b6f54202c,0xe900000000000020);
      __sSS6appendyySSF(uVar9,uVar18);
      _swift_bridgeObjectRelease(uVar18);
      __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
      if (lVar7 != 0) {
        _swift_getErrorValue(lVar7,auStack_f0,local_108);
        local_88 = uStack_100;
        uStack_80 = local_f8;
        goto LAB_100367b60;
      }
LAB_100367b88:
      local_88 = 0;
      uStack_80 = 0;
      goto LAB_100367b90;
    }
    (*pcVar12)(alStack_260[2],lVar17,local_210);
    local_78 = 0;
    local_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x43);
    uVar9 = 0x80000001008ace90;
    __sSS6appendyySSF(&DAT_d000000000000033,0x80000001008ace90);
    FUN_10036ca70();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar9);
    __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
    lVar7 = local_218;
    lVar21 = lVar6;
    if (local_218 == 0) {
      local_88 = 0;
      uStack_80 = 0;
    }
    else {
      _swift_getErrorValue(local_218,auStack_130,local_148);
      _swift_errorRetain(lVar7);
      uVar9 = uStack_140;
      uVar18 = local_138;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
      _swift_errorRelease(lVar7);
      local_88 = uVar9;
      uStack_80 = uVar18;
    }
LAB_10036792c:
    puVar8 = &DAT_100a88e90;
    FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
    __sSS10describingSSx_tclufC(&local_88,puVar8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    lVar16 = lVar21;
  }
LAB_100367bcc:
  _swift_errorRelease(lVar7);
LAB_100367bd4:
  uVar18 = local_70;
  uVar9 = local_78;
  (**(code **)(local_220 + 8))(lVar16,lVar23);
  auVar25._8_8_ = uVar18;
  auVar25._0_8_ = uVar9;
  return auVar25;
}

