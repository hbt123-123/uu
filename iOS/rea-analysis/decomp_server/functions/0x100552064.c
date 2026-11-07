// rea decompile_all
// name: FUN_100552064
// address: 0x100552064
// body: available
// range: 0x100552064-0x100553433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005533d8) */
/* WARNING: Removing unreachable block (ram,0x000100552d1c) */
/* WARNING: Removing unreachable block (ram,0x0001005532f8) */

void FUN_100552064(undefined8 **param_1,undefined *param_2,long param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined8 **ppuVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined1 uVar20;
  long unaff_x20;
  long lVar21;
  long unaff_x21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined1 auStack_400 [8];
  undefined *local_3f8;
  long local_3f0;
  ulong local_3e8;
  undefined8 *local_3e0;
  undefined *puStack_3d8;
  long local_3d0;
  long local_3c8;
  undefined *local_3c0;
  undefined8 **local_3b8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 *local_2b0;
  undefined *puStack_2a8;
  ulong local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  byte *pbStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long local_258;
  undefined1 local_250;
  undefined1 uStack_24f;
  undefined6 uStack_24e;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined *local_218;
  undefined8 auStack_208 [11];
  undefined8 *local_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long local_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *local_118;
  long local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_3c8 = *(long *)(param_2 + -8);
  uVar16 = *(long *)(local_3c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_400 + -uVar16;
  local_3d0 = (long)puVar11 - uVar16;
  lVar25 = local_3d0 - uVar16;
  pcVar17 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  local_3c0 = param_2;
  local_3b8 = param_1;
  if ((pcVar17 != pcVar1) && (*pcVar17 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar17 + 1;
    FUN_100560bb8();
    pcVar17 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar17 != pcVar1) && (*pcVar17 == '[')) {
    *(char **)(unaff_x20 + 0x28) = pcVar17 + 1;
    FUN_100560bb8();
    puStack_3d8 = (undefined *)0xc000000000000000;
    local_3e0 = (undefined8 *)0x0;
    bVar14 = true;
    puVar24 = local_3c0;
LAB_100552150:
    pbVar18 = *(byte **)(unaff_x20 + 0x28);
    pbVar12 = *(byte **)(unaff_x20 + 0x30);
    if ((pbVar18 != pbVar12) && (*pbVar18 == 0x5d)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar18 + 1;
      FUN_100560bb8();
      return;
    }
    if (bVar14) {
LAB_1005521a8:
      lVar21 = *(long *)(unaff_x20 + 0x50) + -1;
      if (SBORROW8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100553414);
        (*pcVar6)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar21;
      if (lVar21 < 0) {
        FUN_1004f9b10();
        _swift_allocError(&DAT_1009d1c98,param_1,0,0);
        *(undefined1 *)param_1 = 0xb;
        goto LAB_100553144;
      }
      pbVar18 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar18 != pbVar12) {
        bVar3 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        do {
          *(byte **)(unaff_x20 + 0x28) = pbVar18;
          if ((pbVar18 == pbVar12) || (bVar4 = *pbVar18, 0x23 < bVar4)) goto LAB_10055222c;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar4 != 0x23) goto LAB_10055222c;
            pbVar19 = pbVar18 + 1;
            while (pbVar18 = pbVar12, pbVar19 != pbVar12) {
              pbVar18 = pbVar19 + 1;
              bVar4 = *pbVar19;
              if ((bVar4 == 10) || (pbVar19 = pbVar18, bVar4 == 0xd)) break;
            }
          }
          else {
            pbVar18 = pbVar18 + 1;
          }
        } while( true );
      }
    }
    else {
      FUN_100560bb8();
      pbVar18 = *(byte **)(unaff_x20 + 0x28);
      if ((pbVar18 != pbVar12) && (*pbVar18 == 0x2c)) {
        *(byte **)(unaff_x20 + 0x28) = pbVar18 + 1;
        FUN_100560bb8();
        goto LAB_1005521a8;
      }
    }
    goto LAB_100552da8;
  }
  FUN_10055db34();
  if (unaff_x21 != 0) {
    return;
  }
  local_3f0 = lVar25;
  FUN_1004f9b50();
  local_258 = 0;
  FUN_1004f9b50(auStack_208,&local_2b0);
  puVar24 = local_3c0;
  local_250 = SUB81(param_1,0);
  uStack_24f = 0;
  puVar10 = local_3c0;
  _swift_conformsToProtocol(local_3c0,&TargetProtocolDescriptor_10090176c);
  if (puVar10 == (undefined *)0x0) {
LAB_100552d34:
    puVar11 = (undefined1 *)0x0;
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar11,0,0);
    *puVar11 = 6;
    _swift_willThrow();
    FUN_1004f9b8c(auStack_208);
    FUN_1004f9b8c(&local_2b0);
    return;
  }
  (**(code **)(puVar10 + 8))(&local_d0,puVar24,puVar10);
  puVar22 = auStack_208;
  FUN_1004f9b8c();
  uStack_230 = uStack_b8;
  local_238 = uStack_c0;
  uStack_240 = uStack_c8;
  uStack_248 = local_d0;
  uStack_220 = uStack_a8;
  local_228 = local_b0;
  local_218 = puVar24;
  uStack_168 = uStack_268;
  local_170 = local_270;
  local_158 = local_258;
  uStack_160 = uStack_260;
  puStack_1a8 = puStack_2a8;
  local_1b0 = local_2b0;
  uStack_198 = uStack_298;
  uStack_1a0 = local_2a0;
  pbStack_188 = (byte *)CONCAT71(uStack_287,uStack_288);
  local_190 = local_290;
  uStack_178 = uStack_278;
  pbStack_180 = pbStack_280;
  uStack_128 = local_b0;
  local_130 = uStack_b8;
  local_118 = puVar24;
  uStack_120 = uStack_a8;
  local_150 = CONCAT62(uStack_24e,CONCAT11(uStack_24f,local_250));
  uStack_148 = local_d0;
  uStack_138 = uStack_c0;
  uStack_140 = uStack_c8;
  if (puVar24 == &DAT_1009d2420) {
    local_110 = param_3;
    if (DAT_100aa2690 != -1) {
      puVar22 = &DAT_100aa2690;
      _swift_once(&DAT_100aa2690,FUN_1004f664c);
    }
    do {
      pbVar18 = pbStack_180;
      uVar16 = DAT_100b39640;
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_100552e5c;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_100552e5c;
        pbVar18 = pbStack_188 + 1;
        do {
          pbStack_188 = pbStack_180;
          if (pbVar18 == pbStack_180) break;
          pbStack_188 = pbVar18 + 1;
          bVar3 = *pbVar18;
          pbVar18 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
      else {
        pbStack_188 = pbStack_188 + 1;
      }
    } while( true );
  }
  local_110 = param_3;
  (**(code **)(param_3 + 0x10))(puVar11,puVar24,param_3);
  (**(code **)(param_3 + 0x40))(&local_1b0,&DAT_1009d1a08,&PTR_PTR_1009d1a30,puVar24,param_3);
  lVar21 = local_3c8;
  lVar25 = local_3f0;
  (**(code **)(local_3c8 + 0x10))(local_3f0,puVar11,puVar24);
  uVar7 = 0;
  __sSaMa(0,puVar24);
  __sSa6appendyyxnF(lVar25,uVar7);
  (**(code **)(lVar21 + 8))(puVar11,puVar24);
  goto LAB_10055310c;
LAB_10055222c:
  if (bVar3 == 0x3c) {
    uVar20 = 0x3e;
  }
  else {
    if (bVar3 != 0x7b) {
LAB_100552da8:
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,param_1,0,0);
      *(undefined1 *)param_1 = 0;
LAB_100553144:
      _swift_willThrow();
      return;
    }
    uVar20 = 0x7d;
  }
  FUN_1004f9b50();
  local_258 = 0;
  FUN_1004f9b50(auStack_208,&local_2b0);
  uStack_24f = 0;
  puVar10 = puVar24;
  local_250 = uVar20;
  _swift_conformsToProtocol(puVar24,&TargetProtocolDescriptor_10090176c);
  if (puVar10 == (undefined *)0x0) goto LAB_100552d34;
  (**(code **)(puVar10 + 8))(&local_100,puVar24,puVar10);
  puVar22 = auStack_208;
  FUN_1004f9b8c();
  lVar21 = local_3d0;
  uStack_230 = uStack_e8;
  local_238 = uStack_f0;
  uStack_240 = uStack_f8;
  uStack_248 = local_100;
  uStack_220 = uStack_d8;
  local_228 = local_e0;
  uStack_168 = uStack_268;
  local_170 = local_270;
  local_158 = local_258;
  uStack_160 = uStack_260;
  puStack_1a8 = puStack_2a8;
  local_1b0 = local_2b0;
  uStack_198 = uStack_298;
  uStack_1a0 = local_2a0;
  pbStack_188 = (byte *)CONCAT71(uStack_287,uStack_288);
  local_190 = local_290;
  uStack_178 = uStack_278;
  pbStack_180 = pbStack_280;
  uStack_128 = local_e0;
  local_130 = uStack_e8;
  uStack_120 = uStack_d8;
  local_150 = CONCAT62(uStack_24e,CONCAT11(uStack_24f,local_250));
  uStack_148 = local_100;
  uStack_138 = uStack_f0;
  uStack_140 = uStack_f8;
  local_218 = puVar24;
  local_118 = puVar24;
  if (puVar24 == &DAT_1009d2420) {
    local_110 = param_3;
    if (DAT_100aa2690 != -1) {
      puVar22 = &DAT_100aa2690;
      _swift_once(&DAT_100aa2690,FUN_1004f664c);
    }
    do {
      pbVar18 = pbStack_180;
      uVar16 = DAT_100b39640;
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_1005523cc;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_1005523cc;
        pbVar18 = pbStack_188 + 1;
        while (pbStack_188 = pbStack_180, pbVar18 != pbStack_180) {
          pbStack_188 = pbVar18 + 1;
          bVar3 = *pbVar18;
          if ((bVar3 == 10) || (pbVar18 = pbStack_188, bVar3 == 0xd)) break;
        }
      }
      else {
        pbStack_188 = pbStack_188 + 1;
      }
    } while( true );
  }
  local_110 = param_3;
  (**(code **)(param_3 + 0x10))(local_3d0,puVar24,param_3);
  (**(code **)(param_3 + 0x40))(&local_1b0,&DAT_1009d1a08,&PTR_PTR_1009d1a30,puVar24,param_3);
  lVar5 = local_3c8;
  if (unaff_x21 != 0) {
    (**(code **)(local_3c8 + 8))(lVar21,puVar24);
LAB_100552d98:
    FUN_1004f9bc0(&local_1b0);
    return;
  }
  (**(code **)(local_3c8 + 0x10))(lVar25,lVar21,puVar24);
  uVar7 = 0;
  __sSaMa(0,puVar24);
  __sSa6appendyyxnF(lVar25,uVar7);
  (**(code **)(lVar5 + 8))(lVar21,puVar24);
LAB_100552bc0:
  FUN_1004f9bf4(&local_1b0);
  param_1 = &local_1b0;
  FUN_1004f9bc0();
  bVar14 = false;
  goto LAB_100552150;
LAB_1005523cc:
  if ((pbStack_188 == pbStack_180) || (*pbStack_188 != 0x5b)) {
    uVar9 = DAT_100b39640;
    _swift_retain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = uVar16;
    local_3f0 = lVar25;
    if ((uVar9 & 1) == 0) {
      uVar8 = 0;
      FUN_1004f71ec();
      _swift_allocObject();
      puVar22 = (undefined8 *)(uVar8 + 0x10);
      *puVar22 = 0;
      *(undefined8 *)(uVar8 + 0x18) = 0xe000000000000000;
      puVar23 = (undefined8 *)(uVar8 + 0x20);
      *(undefined **)(uVar8 + 0x28) = puStack_3d8;
      *puVar23 = local_3e0;
      *(undefined1 *)(uVar8 + 0x48) = 0;
      _swift_beginAccess(uVar16 + 0x10,auStack_2c8,0,0);
      uVar7 = *(undefined8 *)(uVar16 + 0x10);
      uVar2 = *(undefined8 *)(uVar16 + 0x18);
      _swift_beginAccess(puVar22,auStack_2e0,1,0);
      *puVar22 = uVar7;
      *(undefined8 *)(uVar8 + 0x18) = uVar2;
      _swift_beginAccess(uVar16 + 0x20,auStack_2f8,0,0);
      FUN_1004f75cc(uVar16 + 0x20,&local_2b0);
      _swift_beginAccess(puVar23,auStack_208,0x21,0);
      _swift_bridgeObjectRetain(uVar2);
      FUN_1004f99e8(&local_2b0,puVar23);
      _swift_endAccess(auStack_208);
      _swift_release(uVar16);
    }
    _swift_beginAccess(uVar8 + 0x10,auStack_310,1,0);
    uVar7 = *(undefined8 *)(uVar8 + 0x18);
    *(undefined8 *)(uVar8 + 0x10) = 0;
    *(undefined8 *)(uVar8 + 0x18) = 0xe000000000000000;
    _swift_bridgeObjectRelease(uVar7);
    uVar16 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar9 = uVar8;
    if ((uVar16 & 1) == 0) {
      uVar9 = 0;
      FUN_1004f71ec();
      _swift_allocObject();
      puVar22 = (undefined8 *)(uVar9 + 0x10);
      *puVar22 = 0;
      *(undefined8 *)(uVar9 + 0x18) = 0xe000000000000000;
      puVar23 = (undefined8 *)(uVar9 + 0x20);
      *(undefined **)(uVar9 + 0x28) = puStack_3d8;
      *puVar23 = local_3e0;
      *(undefined1 *)(uVar9 + 0x48) = 0;
      _swift_beginAccess(uVar8 + 0x10,auStack_328,0,0);
      uVar7 = *(undefined8 *)(uVar8 + 0x10);
      uVar2 = *(undefined8 *)(uVar8 + 0x18);
      _swift_beginAccess(puVar22,auStack_340,1,0);
      *puVar22 = uVar7;
      *(undefined8 *)(uVar9 + 0x18) = uVar2;
      _swift_beginAccess(uVar8 + 0x20,auStack_358,0,0);
      FUN_1004f75cc(uVar8 + 0x20,&local_2b0);
      _swift_beginAccess(puVar23,auStack_208,0x21,0);
      _swift_bridgeObjectRetain(uVar2);
      FUN_1004f99e8(&local_2b0,puVar23);
      _swift_endAccess(auStack_208);
      _swift_release(uVar8);
    }
    puStack_2a8 = puStack_3d8;
    local_2b0 = local_3e0;
    uStack_288 = 0;
    _swift_beginAccess(uVar9 + 0x20,auStack_208,0x21,0);
    FUN_1004f99e8(&local_2b0,uVar9 + 0x20);
    _swift_endAccess(auStack_208);
    uVar16 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar16 & 1) == 0) {
      uVar16 = 0;
      FUN_1004f71ec();
      _swift_allocObject();
      puVar22 = (undefined8 *)(uVar16 + 0x10);
      *puVar22 = 0;
      *(undefined8 *)(uVar16 + 0x18) = 0xe000000000000000;
      puVar23 = (undefined8 *)(uVar16 + 0x20);
      *(undefined **)(uVar16 + 0x28) = puStack_3d8;
      *puVar23 = local_3e0;
      *(undefined1 *)(uVar16 + 0x48) = 0;
      _swift_beginAccess(uVar9 + 0x10,auStack_370,0,0);
      uVar7 = *(undefined8 *)(uVar9 + 0x10);
      uVar2 = *(undefined8 *)(uVar9 + 0x18);
      _swift_beginAccess(puVar22,auStack_388,1,0);
      *puVar22 = uVar7;
      *(undefined8 *)(uVar16 + 0x18) = uVar2;
      _swift_beginAccess(uVar9 + 0x20,auStack_3a0,0,0);
      FUN_1004f75cc(uVar9 + 0x20,&local_2b0);
      _swift_beginAccess(puVar23,auStack_208,0x21,0);
      _swift_bridgeObjectRetain(uVar2);
      FUN_1004f99e8(&local_2b0,puVar23);
      _swift_endAccess(auStack_208);
      _swift_release(uVar9);
      uVar9 = uVar16;
    }
    local_3e8 = uVar9;
    lVar21 = local_110;
    puVar24 = local_118;
    uStack_98 = uStack_140;
    local_a0 = uStack_148;
    uStack_88 = local_130;
    uStack_90 = uStack_138;
    uStack_78 = uStack_120;
    local_80 = uStack_128;
    uVar9 = local_150 & 0xffff;
LAB_1005528e4:
    lVar5 = local_158;
    if (((0 < local_158) && (pbStack_188 != pbStack_180)) &&
       ((*pbStack_188 == 0x2c || (*pbStack_188 == 0x3b)))) {
      pbStack_188 = pbStack_188 + 1;
      FUN_100560bb8();
    }
    puVar22 = &local_a0;
    puVar10 = puVar24;
    FUN_10055dc44(puVar22,puVar24,lVar21,uVar9);
    uVar16 = local_3e8;
    if (unaff_x21 != 0) goto LAB_100552d84;
    lVar25 = local_3f0;
    if (((ulong)puVar10 & 1) == 0) {
      lVar25 = lVar5 + 1;
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100553374);
        (*pcVar6)();
      }
      local_158 = lVar25;
      if (puVar22 == (undefined8 *)0x2) {
        FUN_1004f6144();
        do {
          if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3))
          goto LAB_100552a10;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) goto LAB_100552a10;
            pbVar18 = pbStack_188 + 1;
            do {
              pbStack_188 = pbStack_180;
              if (pbVar18 == pbStack_180) break;
              pbStack_188 = pbVar18 + 1;
              bVar3 = *pbVar18;
              pbVar18 = pbStack_188;
            } while (bVar3 != 10 && bVar3 != 0xd);
          }
          else {
            pbStack_188 = pbStack_188 + 1;
          }
        } while( true );
      }
      if (puVar22 == (undefined8 *)0x1) {
        puVar11 = (undefined1 *)(local_3e8 + 0x10);
        ppuVar13 = &local_2b0;
        _swift_beginAccess(puVar11,ppuVar13,0x21,0);
        FUN_100560bb8();
        if ((pbStack_188 == pbStack_180) || (*pbStack_188 != 0x3a)) {
          FUN_1004f9b10();
          _swift_allocError(&DAT_1009d1c98,puVar11,0,0);
          *puVar11 = 0;
          _swift_willThrow();
          _swift_endAccess(&local_2b0);
          uVar16 = local_3e8;
          goto LAB_100552d84;
        }
        pbStack_188 = pbStack_188 + 1;
        FUN_100560bb8();
        FUN_10055e868();
        uVar7 = *(undefined8 *)(local_3e8 + 0x18);
        *(undefined1 **)(local_3e8 + 0x10) = puVar11;
        *(undefined8 ***)(local_3e8 + 0x18) = ppuVar13;
        _swift_endAccess(&local_2b0);
        _swift_bridgeObjectRelease(uVar7);
      }
      goto LAB_1005528e4;
    }
    goto LAB_100552b4c;
  }
  pbVar12 = pbStack_188 + 1;
  pbVar19 = pbVar12;
  if ((pbVar12 != pbStack_180) && (0xffffffe5 < (*pbVar12 & 0xffffffdf) - 0x5b)) {
    for (pbVar19 = pbStack_188 + 2; pbVar19 != pbStack_180; pbVar19 = pbVar19 + 1) {
      bVar3 = *pbVar19;
      if (((bVar3 - 0x3a < 0xfffffff6 && (bVar3 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
          (uVar15 = (uint)bVar3, 1 < uVar15 - 0x2e)) && (uVar15 != 0x5f)) {
        if (uVar15 != 0x5d) goto LAB_10055316c;
        break;
      }
    }
    if ((pbVar19 != pbStack_180) && (*pbVar19 == 0x5d)) {
      lVar21 = (long)pbVar19 - (long)pbVar12;
      local_3e8 = DAT_100b39640;
      pbStack_188 = pbVar19;
      _swift_retain(DAT_100b39640);
      FUN_10054c680();
      uVar16 = local_3e8;
      if (lVar21 != 0) {
        pbStack_188 = pbVar19 + 1;
        do {
          if ((pbStack_188 == pbVar18) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_100552510;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) goto LAB_100552510;
            pbVar19 = pbStack_188 + 1;
            while (pbStack_188 = pbVar18, pbVar19 != pbVar18) {
              pbStack_188 = pbVar19 + 1;
              bVar3 = *pbVar19;
              if ((bVar3 == 10) || (pbVar19 = pbStack_188, bVar3 == 0xd)) break;
            }
          }
          else {
            pbStack_188 = pbStack_188 + 1;
          }
        } while( true );
      }
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,pbVar12,0,0);
      *pbVar12 = 0;
      _swift_willThrow();
      uVar16 = local_3e8;
      goto LAB_100552d84;
    }
  }
LAB_10055316c:
  pbStack_188 = pbVar19;
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar22,0,0);
  *(undefined1 *)puVar22 = 0;
  _swift_willThrow();
  _swift_retain(uVar16);
LAB_100552d84:
  FUN_100006cdc(0,0xc000000000000000);
  _swift_release(uVar16);
  goto LAB_100552d98;
LAB_100552a10:
  if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x3a)) {
    do {
      pbStack_188 = pbStack_188 + 1;
LAB_100552a28:
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) {
LAB_100552adc:
        puVar23 = puVar22;
        local_3f8 = puVar10;
        FUN_10055ea1c();
        FUN_100006cdc(puVar22,local_3f8);
        uVar16 = local_3e8;
        uStack_288 = 0;
        local_2b0 = puVar23;
        puStack_2a8 = puVar10;
        _swift_beginAccess(local_3e8 + 0x20,auStack_208,0x21,0);
        FUN_1004f99e8(&local_2b0,uVar16 + 0x20);
        _swift_endAccess(auStack_208);
        goto LAB_1005528e4;
      }
    } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar3 != 0x23) goto LAB_100552adc;
    pbVar18 = pbStack_188 + 1;
    do {
      pbStack_188 = pbStack_180;
      if (pbVar18 == pbStack_180) break;
      pbStack_188 = pbVar18 + 1;
      bVar3 = *pbVar18;
      pbVar18 = pbStack_188;
    } while (bVar3 != 10 && bVar3 != 0xd);
    goto LAB_100552a28;
  }
  puVar23 = puVar22;
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar23,0,0);
  *(undefined1 *)puVar23 = 0;
  _swift_willThrow();
  uVar16 = local_3e8;
  uStack_288 = 0;
  local_2b0 = puVar22;
  puStack_2a8 = puVar10;
  _swift_beginAccess(local_3e8 + 0x20,auStack_208,0x21,0);
  FUN_1004f99e8(&local_2b0,uVar16 + 0x20);
  _swift_endAccess(auStack_208);
  goto LAB_100552d84;
LAB_100552510:
  uVar9 = local_3e8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c();
  }
  FUN_1004f7600(pbVar12,lVar21,&local_1b0);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(lVar21);
    goto LAB_100552d84;
  }
  _swift_bridgeObjectRelease(lVar21);
LAB_100552b4c:
  puStack_2a8 = puStack_3d8;
  local_2b0 = local_3e0;
  local_2a0 = uVar16;
  FUN_100008184(0,0xc000000000000000);
  _swift_retain(uVar16);
  _swift_dynamicCast(lVar25,&local_2b0,&DAT_1009d2420,&DAT_1009d2420,7);
  uVar7 = 0;
  __sSaMa(0,&DAT_1009d2420);
  __sSa6appendyyxnF(lVar25,uVar7);
  FUN_100006cdc(0,0xc000000000000000);
  _swift_release(uVar16);
  puVar24 = local_3c0;
  goto LAB_100552bc0;
LAB_100552e5c:
  if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x5b)) {
    pbVar12 = pbStack_188 + 1;
    pbVar19 = pbVar12;
    if ((pbVar12 == pbStack_180) || ((*pbVar12 & 0xffffffdf) - 0x5b < 0xffffffe6)) {
LAB_1005531a4:
      pbStack_188 = pbVar19;
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,puVar22,0,0);
      *(undefined1 *)puVar22 = 0;
      _swift_willThrow();
      _swift_retain(uVar16);
    }
    else {
      for (pbVar19 = pbStack_188 + 2; pbVar19 != pbStack_180; pbVar19 = pbVar19 + 1) {
        bVar3 = *pbVar19;
        if (((bVar3 - 0x3a < 0xfffffff6 && (bVar3 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
            (uVar15 = (uint)bVar3, 1 < uVar15 - 0x2e)) && (uVar15 != 0x5f)) {
          if (uVar15 != 0x5d) goto LAB_1005531a4;
          break;
        }
      }
      if ((pbVar19 == pbStack_180) || (*pbVar19 != 0x5d)) goto LAB_1005531a4;
      lVar21 = (long)pbVar19 - (long)pbVar12;
      pbStack_188 = pbVar19;
      _swift_retain(DAT_100b39640);
      FUN_10054c680();
      if (lVar21 != 0) {
        pbStack_188 = pbVar19 + 1;
        do {
          if ((pbStack_188 == pbVar18) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_100553374;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) goto LAB_100553374;
            pbVar19 = pbStack_188 + 1;
            do {
              pbStack_188 = pbVar18;
              if (pbVar19 == pbVar18) break;
              pbStack_188 = pbVar19 + 1;
              bVar3 = *pbVar19;
              pbVar19 = pbStack_188;
            } while (bVar3 != 10 && bVar3 != 0xd);
          }
          else {
            pbStack_188 = pbStack_188 + 1;
          }
        } while( true );
      }
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,pbVar12,0,0);
      *pbVar12 = 0;
      _swift_willThrow();
    }
    FUN_100006cdc(0,0xc000000000000000);
    _swift_release(uVar16);
    goto LAB_1005531ec;
  }
  uVar9 = DAT_100b39640;
  _swift_retain();
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c();
  }
  _swift_beginAccess(uVar16 + 0x10,auStack_208,1,0);
  uVar7 = *(undefined8 *)(uVar16 + 0x18);
  *(undefined8 *)(uVar16 + 0x10) = 0;
  *(undefined8 *)(uVar16 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar7);
  uVar9 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c();
  }
  puStack_2a8 = (undefined *)0xc000000000000000;
  local_2b0 = (undefined8 *)0x0;
  uStack_288 = 0;
  _swift_beginAccess(uVar16 + 0x20,auStack_2c8,0x21,0);
  FUN_1004f99e8(&local_2b0,uVar16 + 0x20);
  _swift_endAccess(auStack_2c8);
  uVar9 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c();
  }
  FUN_100518280(uVar16,&local_1b0);
  lVar25 = local_3f0;
  goto LAB_10055304c;
LAB_100553374:
  uVar9 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1004f71ec(0);
    _swift_allocObject();
    FUN_1004f668c();
  }
  FUN_1004f7600(pbVar12,lVar21,&local_1b0);
  lVar25 = local_3f0;
  _swift_bridgeObjectRelease(lVar21);
LAB_10055304c:
  puStack_2a8 = (undefined *)0xc000000000000000;
  local_2b0 = (undefined8 *)0x0;
  local_2a0 = uVar16;
  FUN_100008184(0,0xc000000000000000);
  _swift_retain(uVar16);
  _swift_dynamicCast(lVar25,&local_2b0,&DAT_1009d2420,&DAT_1009d2420,7);
  uVar7 = 0;
  __sSaMa(0,&DAT_1009d2420);
  __sSa6appendyyxnF(lVar25,uVar7);
  FUN_100006cdc(0,0xc000000000000000);
  _swift_release(uVar16);
LAB_10055310c:
  FUN_1004f9bf4(&local_1b0);
LAB_1005531ec:
  FUN_1004f9bc0(&local_1b0);
  return;
}

