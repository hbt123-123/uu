// rea decompile_all
// name: FUN_10022cb9c
// address: 0x10022cb9c
// body: available
// range: 0x10022cb9c-0x10022d257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022cb9c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x21;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  ulong *local_1a0;
  long local_198;
  ulong local_190;
  undefined *local_188;
  ulong local_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160 [5];
  ulong local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar7 = &DAT_100a7f020;
  FUN_100004bb4(&DAT_100a7f020,&DAT_100813c38);
  local_1b8 = *(long *)(puVar7 + -8);
  local_188 = puVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_1b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_1b0 = auStack_1c0 + -extraout_x8;
  puVar17 = (ulong *)(param_2 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *puVar17;
  _swift_bridgeObjectRetain(param_2);
  lVar16 = 0;
  local_1a8 = param_2;
  local_1a0 = puVar17;
  local_190 = uVar12 + 0x3f >> 6;
  do {
    if (uVar14 == 0) {
      uVar14 = local_190;
      if ((long)local_190 <= lVar16 + 1) {
        uVar14 = lVar16 + 1;
      }
      lVar13 = uVar14 - 1;
      lVar15 = lVar16;
      do {
        lVar16 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10022d1fc);
          (*pcVar6)();
        }
        if ((long)local_190 <= lVar16) {
          uVar14 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          goto LAB_10022cd68;
        }
        uVar14 = puVar17[lVar16];
        lVar15 = lVar15 + 1;
      } while (uVar14 == 0);
    }
    uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    uVar11 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar16 << 6;
    puVar9 = (ulong *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
    local_d0 = *puVar9;
    uVar12 = puVar9[1];
    uStack_c8 = uVar12;
    FUN_10003e8bc(*(long *)(param_2 + 0x38) + uVar11 * 0x20,&local_c0);
    _swift_bridgeObjectRetain(uVar12);
    lVar13 = lVar16;
LAB_10022cd68:
    uVar11 = uStack_c8;
    uVar12 = local_d0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    uStack_90 = local_c0;
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    if (uStack_c8 == 0) {
      _swift_release(param_2);
      return;
    }
    FUN_10007f3d4(&uStack_90,auStack_f0);
    FUN_10003e8bc(auStack_f0,auStack_110);
    puVar7 = &DAT_100a7f028;
    FUN_100004bb4(&DAT_100a7f028,&DAT_100813c40);
    puVar10 = PTR___sypN_100995e88;
    puVar8 = local_160;
    _swift_dynamicCast(puVar8,auStack_110,PTR___sypN_100995e88 + 8,puVar7,0);
    uVar1 = local_160[0];
    puVar7 = local_188;
    if ((int)puVar8 == 0) {
      puVar7 = &DAT_100a7f030;
      FUN_100004bb4(&DAT_100a7f030,&DAT_100813c48);
      puVar8 = local_160;
      _swift_dynamicCast(puVar8,auStack_110,puVar10 + 8,puVar7,0);
      uVar1 = local_160[0];
      if ((int)puVar8 == 0) {
        puVar9 = &local_138;
        _swift_dynamicCast(puVar9,auStack_110,puVar10 + 8,PTR___sSiN_100995968,0);
        if ((int)puVar9 == 0) {
          puVar9 = &local_138;
          _swift_dynamicCast(puVar9,auStack_110,puVar10 + 8,PTR___sSdN_1009958f0,0);
          if ((int)puVar9 != 0) {
            local_c0 = 0;
            uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
            local_d0 = uVar12;
            uStack_c8 = uVar11;
            __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(local_138,&local_d0,local_188);
            goto LAB_10022d028;
          }
          puVar9 = &local_138;
          _swift_dynamicCast(puVar9,auStack_110,puVar10 + 8,PTR___sSbN_1009958c8,0);
          if ((int)puVar9 != 0) {
            local_c0 = 0;
            uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
            local_d0 = uVar12;
            uStack_c8 = uVar11;
            __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
                      (local_138 & 0xff,&local_d0,local_188);
            goto LAB_10022d028;
          }
          puVar9 = &local_138;
          _swift_dynamicCast(puVar9,auStack_110,puVar10 + 8,PTR___sSSN_1009957f8,0);
          uVar3 = uStack_130;
          if ((int)puVar9 == 0) {
            puVar7 = &DAT_100a7f038;
            FUN_100004bb4(&DAT_100a7f038,&DAT_100813c50);
            puVar9 = &local_d0;
            _swift_dynamicCast(puVar9,auStack_110,puVar10 + 8,puVar7,0);
            if ((int)puVar9 == 0) {
              FUN_10003e8bc(auStack_f0,&local_d0);
              puVar10 = puVar10 + 8;
              __sSS10describingSSx_tclufC(&local_d0,puVar10);
              local_c0 = 0;
              uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
              local_d0 = uVar12;
              uStack_c8 = uVar11;
              __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF();
              if (unaff_x21 != 0) {
                FUN_10003f094(auStack_f0);
                _swift_bridgeObjectRelease(uVar11);
                _swift_bridgeObjectRelease(puVar10);
                param_2 = local_1a8;
                goto LAB_10022d1c8;
              }
              FUN_10003f094(auStack_f0);
              _swift_bridgeObjectRelease(uVar11);
              _swift_bridgeObjectRelease(puVar10);
              param_2 = local_1a8;
              goto LAB_10022cce4;
            }
            FUN_1000a0074(&local_d0,&local_138);
            local_180 = uVar12;
            uStack_178 = uVar11;
            local_170 = 0;
            local_168 = 1;
            __ss22KeyedEncodingContainerV12superEncoder6forKeys0E0_px_tF
                      (local_160,&local_180,local_188);
            _swift_bridgeObjectRelease(uVar11);
            uVar4 = uStack_118;
            uVar1 = CONCAT71(uStack_11f,local_120);
            FUN_10003f030(&local_138,uVar1);
            __sSE6encode2toys7Encoder_p_tKFTj(local_160,uVar1,uVar4);
            if (unaff_x21 == 0) {
              FUN_10003f094(local_160);
              FUN_10003f094(auStack_f0);
              puVar17 = &local_138;
              goto LAB_10022ccdc;
            }
            _swift_release(local_1a8);
            FUN_10003f094(local_160);
            FUN_10003f094(auStack_f0);
            FUN_10003f094(&local_138);
            goto LAB_10022d1cc;
          }
          local_c0 = 0;
          uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
          local_d0 = uVar12;
          uStack_c8 = uVar11;
          __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                    (local_138,uStack_130,&local_d0,local_188);
          if (unaff_x21 == 0) {
            FUN_10003f094(auStack_f0);
            _swift_bridgeObjectRelease(uVar11);
            _swift_bridgeObjectRelease(uVar3);
            puVar17 = local_1a0;
            goto LAB_10022cce4;
          }
          FUN_10003f094(auStack_f0);
          _swift_bridgeObjectRelease(uVar11);
          _swift_bridgeObjectRelease(uVar3);
        }
        else {
          local_c0 = 0;
          uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
          local_d0 = uVar12;
          uStack_c8 = uVar11;
          __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(local_138,&local_d0,local_188);
LAB_10022d028:
          if (unaff_x21 == 0) {
            FUN_10003f094(auStack_f0);
            _swift_bridgeObjectRelease(uVar11);
            goto LAB_10022cce4;
          }
          FUN_10003f094(auStack_f0);
          _swift_bridgeObjectRelease(uVar11);
        }
LAB_10022d1c8:
        _swift_release(param_2);
        goto LAB_10022d1cc;
      }
      local_138 = uVar12;
      uStack_130 = uVar11;
      local_128 = 0;
      local_120 = 1;
      __ss22KeyedEncodingContainerV013nestedUnkeyedC06forKeys0ebC0_px_tF
                (&local_d0,&local_138,local_188);
      _swift_bridgeObjectRelease(uVar11);
      FUN_10022d258(uVar1,&local_d0,param_2);
      _swift_bridgeObjectRelease(uVar1);
      if (unaff_x21 != 0) {
        _swift_release(param_2);
        FUN_10003f094(&local_d0);
        FUN_10003f094(auStack_f0);
LAB_10022d1cc:
        FUN_10003f094(auStack_110);
        return;
      }
      FUN_10003f094(&local_d0);
      FUN_10003f094(auStack_f0);
      puVar17 = local_1a0;
    }
    else {
      local_138 = uVar12;
      uStack_130 = uVar11;
      local_128 = 0;
      local_120 = 1;
      __ss22KeyedEncodingContainerV12superEncoder6forKeys0E0_px_tF(&local_d0,&local_138,local_188);
      _swift_bridgeObjectRelease(uVar11);
      uVar5 = local_b0;
      uVar4 = uStack_b8;
      puVar17 = &local_d0;
      local_198 = unaff_x21;
      FUN_10003f030(puVar17,uStack_b8);
      FUN_10022d870();
      puVar2 = local_1b0;
      __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
                (local_1b0,&DAT_1009a6520,&DAT_1009a6520,puVar17,uVar4,uVar5);
      FUN_10022cb9c(puVar2,uVar1);
      if (local_198 != 0) {
        _swift_release(local_1a8);
        _swift_bridgeObjectRelease(uVar1);
        (**(code **)(local_1b8 + 8))(puVar2,puVar7);
        FUN_10003f094(auStack_f0);
        FUN_10003f094(&local_d0);
        goto LAB_10022d1cc;
      }
      _swift_bridgeObjectRelease(uVar1);
      (**(code **)(local_1b8 + 8))(puVar2,puVar7);
      FUN_10003f094(auStack_f0);
      puVar17 = &local_d0;
      unaff_x21 = 0;
LAB_10022ccdc:
      FUN_10003f094(puVar17);
      puVar17 = local_1a0;
      param_2 = local_1a8;
    }
LAB_10022cce4:
    FUN_10003f094(auStack_110);
    lVar16 = lVar13;
  } while( true );
}

