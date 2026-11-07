// rea decompile_all
// name: FUN_10036589c
// address: 0x10036589c
// body: available
// range: 0x10036589c-0x10036660b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10036589c(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long local_1f0 [4];
  long local_1d0;
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
  
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  local_1d0 = *(long *)(lVar3 + -8);
  uVar8 = *(long *)(local_1d0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f0[3] = (long)local_1f0 - uVar8;
  local_1f0[2] = local_1f0[3] - uVar8;
  local_1f0[1] = local_1f0[2] - uVar8;
  local_1f0[0] = local_1f0[1] - uVar8;
  lVar11 = local_1f0[0] - uVar8;
  lVar12 = lVar11 - uVar8;
  lVar13 = lVar12 - uVar8;
  lVar14 = lVar13 - uVar8;
  lVar9 = lVar14 - uVar8;
  lVar4 = 0;
  FUN_100365874();
  plVar15 = (long *)(lVar9 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  plVar5 = plVar15;
  _swift_getEnumCaseMultiPayload(plVar15,lVar4);
  lVar4 = local_1d0;
  iVar2 = (int)plVar5;
  if (iVar2 < 5) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        puVar6 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar14 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(local_1d0 + 0x20))(lVar9,plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x62);
        uVar7 = 0x80000001008acbf0;
        __sSS6appendyySSF(0xd000000000000040,0x80000001008acbf0);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        uVar8 = 0;
        __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008acc40);
        __s10Foundation10URLRequestV23httpShouldUsePipeliningSbvg();
        bVar1 = (uVar8 & 1) == 0;
        uVar7 = 0x65757274;
        if (bVar1) {
          uVar7 = 0x65736c6166;
        }
        uVar16 = 0xe400000000000000;
        if (bVar1) {
          uVar16 = 0xe500000000000000;
        }
        __sSS6appendyySSF(uVar7,uVar16);
        _swift_bridgeObjectRelease(uVar16);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar14 == 0) {
          uVar7 = 0;
          uVar16 = 0;
        }
        else {
          _swift_getErrorValue(lVar14,auStack_1b0,local_1c8);
          _swift_errorRetain(lVar14);
          uVar7 = uStack_1c0;
          uVar16 = local_1b8;
          __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
          _swift_errorRelease(lVar14);
        }
        puVar6 = &DAT_100a88e90;
        local_88 = uVar7;
        uStack_80 = uVar16;
        FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
        __sSS10describingSSx_tclufC(&local_88,puVar6);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        _swift_errorRelease(lVar14);
        pcVar10 = *(code **)(local_1d0 + 8);
        lVar14 = lVar9;
      }
      else {
        puVar6 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar4 = local_1d0;
        lVar9 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(local_1d0 + 0x20))(lVar14,plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x3d);
        uVar7 = 0x80000001008acbc0;
        __sSS6appendyySSF(0xd00000000000002d,0x80000001008acbc0);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar9 == 0) {
          uVar7 = 0;
          uVar16 = 0;
        }
        else {
          _swift_getErrorValue(lVar9,auStack_190,local_1a8);
          _swift_errorRetain(lVar9);
          uVar7 = uStack_1a0;
          uVar16 = local_198;
          __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
          _swift_errorRelease(lVar9);
        }
        puVar6 = &DAT_100a88e90;
        local_88 = uVar7;
        uStack_80 = uVar16;
        FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
        __sSS10describingSSx_tclufC(&local_88,puVar6);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        _swift_errorRelease(lVar9);
        pcVar10 = *(code **)(lVar4 + 8);
      }
    }
    else if (iVar2 == 2) {
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      lVar14 = local_1d0;
      lVar4 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
      (**(code **)(local_1d0 + 0x20))(lVar13,plVar15,lVar3);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x37);
      uVar7 = 0x80000001008acb90;
      __sSS6appendyySSF(0xd000000000000027,0x80000001008acb90);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar7);
      __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
      if (lVar4 == 0) {
        uVar7 = 0;
        uVar16 = 0;
      }
      else {
        _swift_getErrorValue(lVar4,auStack_170,local_188);
        _swift_errorRetain(lVar4);
        uVar7 = uStack_180;
        uVar16 = local_178;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar4);
      }
      puVar6 = &DAT_100a88e90;
      local_88 = uVar7;
      uStack_80 = uVar16;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar6);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
      _swift_errorRelease(lVar4);
      pcVar10 = *(code **)(lVar14 + 8);
      lVar14 = lVar13;
    }
    else {
      puVar6 = &DAT_100a88a88;
      if (iVar2 == 3) {
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar14 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(lVar4 + 0x20))(lVar12,plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x54);
        uVar7 = 0x80000001008acb40;
        __sSS6appendyySSF(0xd000000000000044,0x80000001008acb40);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar14 == 0) {
          uVar7 = 0;
          uVar16 = 0;
        }
        else {
          _swift_getErrorValue(lVar14,auStack_150,local_168);
          _swift_errorRetain(lVar14);
          uVar7 = uStack_160;
          uVar16 = local_158;
          __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
          _swift_errorRelease(lVar14);
        }
        puVar6 = &DAT_100a88e90;
        local_88 = uVar7;
        uStack_80 = uVar16;
        FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
        __sSS10describingSSx_tclufC(&local_88,puVar6);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        _swift_errorRelease(lVar14);
        pcVar10 = *(code **)(lVar4 + 8);
        lVar14 = lVar12;
      }
      else {
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar14 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(lVar4 + 0x20))(lVar11,plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x54);
        uVar7 = 0x80000001008acaf0;
        __sSS6appendyySSF(0xd000000000000044,0x80000001008acaf0);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar14 == 0) {
          uVar7 = 0;
          uVar16 = 0;
        }
        else {
          _swift_getErrorValue(lVar14,auStack_130,local_148);
          _swift_errorRetain(lVar14);
          uVar7 = uStack_140;
          uVar16 = local_138;
          __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
          _swift_errorRelease(lVar14);
        }
        puVar6 = &DAT_100a88e90;
        local_88 = uVar7;
        uStack_80 = uVar16;
        FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
        __sSS10describingSSx_tclufC(&local_88,puVar6);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        _swift_errorRelease(lVar14);
        pcVar10 = *(code **)(lVar4 + 8);
        lVar14 = lVar11;
      }
    }
  }
  else {
    if (iVar2 < 7) {
      puVar6 = &DAT_100a88a88;
      if (iVar2 != 5) {
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar14 = local_1f0[1];
        lVar9 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(lVar4 + 0x20))(local_1f0[1],plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x6a);
        uVar7 = 0x80000001008aca60;
        __sSS6appendyySSF(0xd00000000000005a,0x80000001008aca60);
        FUN_10036ca70();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar7);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar9 == 0) goto LAB_100366330;
        _swift_getErrorValue(lVar9,auStack_f0,local_108);
        uStack_80 = local_f8;
        goto LAB_100366308;
      }
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      lVar14 = local_1f0[0];
      lVar9 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
      (**(code **)(lVar4 + 0x20))(local_1f0[0],plVar15,lVar3);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x35);
      uVar7 = 0x80000001008acac0;
      __sSS6appendyySSF(0xd000000000000025,0x80000001008acac0);
      FUN_10036ca70();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar7);
      __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
      if (lVar9 == 0) {
        uVar7 = 0;
        uVar16 = 0;
      }
      else {
        _swift_getErrorValue(lVar9,auStack_110,local_128);
        _swift_errorRetain(lVar9);
        uVar7 = uStack_120;
        uVar16 = local_118;
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar9);
      }
      puVar6 = &DAT_100a88e90;
      local_88 = uVar7;
      uStack_80 = uVar16;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar6);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
    }
    else {
      if (iVar2 == 7) {
        puVar6 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar14 = local_1f0[2];
        lVar9 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(lVar4 + 0x20))(local_1f0[2],plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x51);
        uVar7 = 0xd000000000000041;
        __sSS6appendyySSF(0xd000000000000041,0x80000001008aca10);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        puVar6 = &DAT_100a88e98;
        local_88 = uVar7;
        FUN_100004bb4(&DAT_100a88e98,&DAT_10081cfc8);
        __sSS10describingSSx_tclufC(&local_88,puVar6);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar9 != 0) {
          _swift_getErrorValue(lVar9,auStack_d0,local_e8);
          uStack_100 = uStack_e0;
          uStack_80 = local_d8;
          goto LAB_100366308;
        }
LAB_100366330:
        uStack_100 = 0;
        uStack_80 = 0;
      }
      else {
        if (iVar2 != 8) {
          lVar14 = *plVar15;
          local_78 = 0;
          local_70 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x25);
          _swift_bridgeObjectRelease(local_70);
          local_78 = 0x1000000000000023;
          local_70 = 0x80000001008ac980;
          if (lVar14 == 0) {
            uVar7 = 0;
            uVar16 = 0;
          }
          else {
            _swift_getErrorValue(lVar14,auStack_90,local_a8);
            _swift_errorRetain(lVar14);
            uVar7 = uStack_a0;
            uVar16 = local_98;
            __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
            _swift_errorRelease(lVar14);
          }
          puVar6 = &DAT_100a88e90;
          local_88 = uVar7;
          uStack_80 = uVar16;
          FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
          __sSS10describingSSx_tclufC(&local_88,puVar6);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar6);
          _swift_errorRelease(lVar14);
          goto LAB_1003665e4;
        }
        puVar6 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        lVar14 = local_1f0[3];
        lVar9 = *(long *)((long)plVar15 + (long)*(int *)(puVar6 + 0x30));
        (**(code **)(lVar4 + 0x20))(local_1f0[3],plVar15,lVar3);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x62);
        uVar7 = 0xd000000000000052;
        __sSS6appendyySSF(0xd000000000000052,0x80000001008ac9b0);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        puVar6 = &DAT_100a88e98;
        local_88 = uVar7;
        FUN_100004bb4(&DAT_100a88e98,&DAT_10081cfc8);
        __sSS10describingSSx_tclufC(&local_88,puVar6);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0x734d726f72724520,0xac0000009abcef67);
        if (lVar9 == 0) goto LAB_100366330;
        _swift_getErrorValue(lVar9,auStack_b0,local_c8);
        uStack_100 = uStack_c0;
        uStack_80 = local_b8;
LAB_100366308:
        _swift_errorRetain(lVar9);
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
        _swift_errorRelease(lVar9);
      }
      puVar6 = &DAT_100a88e90;
      local_88 = uStack_100;
      FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
      __sSS10describingSSx_tclufC(&local_88,puVar6);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar6);
    }
    _swift_errorRelease(lVar9);
    pcVar10 = *(code **)(lVar4 + 8);
  }
  uVar16 = local_70;
  uVar7 = local_78;
  (*pcVar10)(lVar14,lVar3);
  local_78 = uVar7;
  local_70 = uVar16;
LAB_1003665e4:
  auVar17._8_8_ = local_70;
  auVar17._0_8_ = local_78;
  return auVar17;
}

