// rea decompile_all
// name: FUN_1005bd338
// address: 0x1005bd338
// body: available
// range: 0x1005bd338-0x1005bdb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bd338(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  char cVar11;
  uint7 uVar12;
  byte bVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long *unaff_x20;
  long unaff_x21;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_2f0 [32];
  long local_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long local_290;
  long local_280;
  ulong uStack_278;
  long local_270;
  long lStack_268;
  long local_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long local_240;
  long local_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_218;
  long local_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long local_1f0;
  long local_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long local_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  long lStack_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  char cStack_c0;
  uint7 uStack_bf;
  byte bStack_b8;
  long local_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long local_58;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == 0) {
    return;
  }
  lVar24 = 0;
  lStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  lStack_78 = unaff_x20[7];
  lStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  lStack_98 = unaff_x20[3];
  lStack_a0 = unaff_x20[2];
LAB_1005bd3a0:
  plVar15 = (long *)(param_1 + 0x20 + lVar24 * 0x70);
  lStack_d8 = plVar15[9];
  local_e0 = plVar15[8];
  local_d0 = plVar15[10];
  local_c8 = (undefined1)plVar15[0xb];
  uStack_bf = (uint7)*(undefined8 *)((long)plVar15 + 0x61);
  bStack_b8 = (byte)((ulong)*(undefined8 *)((long)plVar15 + 0x61) >> 0x38);
  uStack_c7 = (undefined7)*(undefined8 *)((long)plVar15 + 0x59);
  cStack_c0 = (char)((ulong)*(undefined8 *)((long)plVar15 + 0x59) >> 0x38);
  uStack_118 = plVar15[1];
  local_120 = *plVar15;
  local_108 = plVar15[3];
  local_110 = plVar15[2];
  lStack_f8 = plVar15[5];
  local_100 = plVar15[4];
  local_e8 = plVar15[7];
  local_f0 = plVar15[6];
  lVar19 = (long)(int)local_110;
  local_130 = local_70;
  lStack_148 = lStack_88;
  local_150 = local_90;
  lStack_138 = lStack_78;
  lStack_140 = lStack_80;
  uStack_168 = uStack_a8;
  local_170 = local_b0;
  lStack_158 = lStack_98;
  lStack_160 = lStack_a0;
  if ((local_110 & 0x100000000) != 0) {
    if ((local_108 & 0x100000000) == 0) goto LAB_1005bd698;
LAB_1005bd3f4:
    if (local_100 == 0) goto LAB_1005bd6bc;
LAB_1005bd3fc:
    bVar13 = bStack_b8;
    uVar12 = uStack_bf;
    cVar11 = cStack_c0;
    uVar10 = local_d0;
    lVar9 = lStack_d8;
    lVar8 = local_e0;
    uVar7 = local_e8;
    lVar6 = local_f0;
    lVar21 = lStack_f8;
    lVar5 = local_100;
    lVar19 = CONCAT71(uStack_c7,local_c8);
    lVar17 = CONCAT71(uStack_bf,cStack_c0);
    __ss6HasherV8_combineyySuF(3);
    lStack_208 = lStack_148;
    local_210 = local_150;
    lStack_1f8 = lStack_138;
    lStack_200 = lStack_140;
    local_1f0 = local_130;
    uStack_228 = uStack_168;
    local_230 = local_170;
    lStack_218 = lStack_158;
    lStack_220 = lStack_160;
    local_58 = *(long *)(lVar21 + 0x10);
    if (local_58 != 0) {
      __ss6HasherV8_combineyySuF(2);
      lStack_258 = lStack_208;
      local_260 = local_210;
      lStack_248 = lStack_1f8;
      lStack_250 = lStack_200;
      local_240 = local_1f0;
      uStack_278 = uStack_228;
      local_280 = local_230;
      lStack_268 = lStack_218;
      local_270 = lStack_220;
      FUN_1005b2dd4(&local_120,&local_1e0);
      FUN_10007f314(&local_100,&local_1e0,&DAT_100aab4f8,&DAT_100838f20);
      pbVar23 = (byte *)(lVar21 + 0x59);
      do {
        local_58 = local_58 + -1;
        lVar26 = *(long *)(pbVar23 + -0x39);
        uVar20 = *(ulong *)(pbVar23 + -0x31);
        iVar3 = *(int *)(pbVar23 + -0x29);
        uVar18 = *(undefined8 *)(pbVar23 + -0x21);
        lVar21 = *(long *)(pbVar23 + -0x19);
        uVar16 = *(undefined8 *)(pbVar23 + -0x11);
        lVar25 = *(long *)(pbVar23 + -9);
        bVar2 = pbVar23[-1];
        bVar1 = *pbVar23;
        lStack_2a8 = lStack_258;
        local_2b0 = local_260;
        lStack_298 = lStack_248;
        lStack_2a0 = lStack_250;
        local_290 = local_240;
        uStack_2c8 = uStack_278;
        local_2d0 = local_280;
        lStack_2b8 = lStack_268;
        lStack_2c0 = local_270;
        if ((pbVar23[-0x25] & 1) == 0) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyys6UInt64VF((long)iVar3);
        }
        if (lVar21 == 0) {
          FUN_100008184(lVar26,uVar20);
          _swift_bridgeObjectRetain(lVar25);
        }
        else {
          __ss6HasherV8_combineyySuF(2);
          FUN_100008184(lVar26,uVar20);
          _swift_bridgeObjectRetain(lVar25);
          _swift_bridgeObjectRetain(lVar21);
          __sSS4hash4intoys6HasherVz_tF(&local_2d0,uVar18,lVar21);
        }
        if (lVar25 != 0) {
          __ss6HasherV8_combineyySuF(3);
          __sSS4hash4intoys6HasherVz_tF(&local_2d0,uVar16,lVar25);
        }
        if (bVar2 != 2) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
        }
        if (bVar1 != 2) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
        }
        uVar4 = (uint)(uVar20 >> 0x20);
        uVar14 = uVar4 >> 0x1e;
        if (uVar4 >> 0x1e < 2) {
          if (uVar14 == 0) {
            if ((uVar20 & 0xff000000000000) != 0) {
LAB_1005bd61c:
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_2d0,lVar26,uVar20);
            }
          }
          else if ((long)(int)lVar26 != lVar26 >> 0x20) goto LAB_1005bd61c;
        }
        else if ((uVar14 == 2) && (*(long *)(lVar26 + 0x10) != *(long *)(lVar26 + 0x18)))
        goto LAB_1005bd61c;
        FUN_100006cdc(lVar26,uVar20);
        _swift_bridgeObjectRelease(lVar21);
        _swift_bridgeObjectRelease(lVar25);
        if (local_58 == 0) goto LAB_1005bd6cc;
        pbVar23 = pbVar23 + 0x40;
        lStack_258 = lStack_2a8;
        local_260 = local_2b0;
        lStack_248 = lStack_298;
        lStack_250 = lStack_2a0;
        local_240 = local_290;
        uStack_278 = uStack_2c8;
        local_280 = local_2d0;
        lStack_268 = lStack_2b8;
        local_270 = lStack_2c0;
      } while( true );
    }
    FUN_1005b2dd4(&local_120,&local_1e0);
    FUN_10007f314(&local_100,&local_1e0,&DAT_100aab4f8,&DAT_100838f20);
    goto LAB_1005bd724;
  }
  __ss6HasherV8_combineyySuF(1);
  __ss6HasherV8_combineyys6UInt64VF(lVar19);
  if ((local_108 & 0x100000000) != 0) goto LAB_1005bd3f4;
LAB_1005bd698:
  lVar19 = (long)(int)local_108;
  __ss6HasherV8_combineyySuF(2);
  __ss6HasherV8_combineyys6UInt64VF(lVar19);
  if (local_100 != 0) goto LAB_1005bd3fc;
LAB_1005bd6bc:
  FUN_1005b2dd4(&local_120,&local_1e0);
  goto LAB_1005bd9b4;
LAB_1005bd6cc:
  lStack_208 = lStack_2a8;
  local_210 = local_2b0;
  lStack_1f8 = lStack_298;
  lStack_200 = lStack_2a0;
  local_1f0 = local_290;
  uStack_228 = uStack_2c8;
  local_230 = local_2d0;
  lStack_218 = lStack_2b8;
  lStack_220 = lStack_2c0;
LAB_1005bd724:
  if (bVar13 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(bVar13 & 1);
  }
  if (lVar19 != 0) {
    __ss6HasherV8_combineyySuF(0x32);
    lStack_1b8 = lStack_208;
    local_1c0 = local_210;
    lStack_1a8 = lStack_1f8;
    lStack_1b0 = lStack_200;
    local_1a0 = local_1f0;
    uStack_1d8 = uStack_228;
    local_1e0 = local_230;
    lStack_1c8 = lStack_218;
    lStack_1d0 = lStack_220;
    if (cVar11 != '\x04') {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(cVar11);
    }
    if (((ulong)uVar12 & 0xff) != 3) {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyySuF((ulong)uVar12 & 0xff);
    }
    if (((ulong)uVar12 & 0xff00) != 0x300) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 8) & 0xff);
    }
    if (((ulong)uVar12 & 0xff0000) != 0x30000) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083e090 + ((lVar17 << 0x20) >> 0x38) * 8));
    }
    if (((ulong)uVar12 & 0xff000000) != 0x3000000) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x18) & 0xff);
    }
    if (((ulong)uVar12 & 0xff00000000) != 0x300000000) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x20) & 0xff);
    }
    if (((ulong)uVar12 & 0xff0000000000) != 0x30000000000) {
      __ss6HasherV8_combineyySuF(7);
      __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x28) & 0xff);
    }
    if ((ulong)(uVar12 >> 0x30) != 5) {
      __ss6HasherV8_combineyySuF(8);
      __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x30));
    }
    local_280 = lVar9;
    uStack_278 = uVar10;
    local_270 = lVar19;
    lStack_268 = lVar17;
    FUN_1005a7f80(&local_280,auStack_2f0);
    FUN_100563e08(&local_1e0,1000,0x2711,lVar19);
    if (unaff_x21 == 0) {
      uVar4 = (uint)(uVar10 >> 0x20);
      uVar14 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar14 == 0) {
          if ((uVar10 & 0xff000000000000) == 0) goto LAB_1005bd90c;
        }
        else {
          lVar21 = (long)(int)lVar9;
          lVar25 = lVar9 >> 0x20;
LAB_1005bdaa0:
          if (lVar21 == lVar25) goto LAB_1005bd90c;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1e0,lVar9,uVar10);
      }
      else if (uVar14 == 2) {
        lVar21 = *(long *)(lVar9 + 0x10);
        lVar25 = *(long *)(lVar9 + 0x18);
        goto LAB_1005bdaa0;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_1005bd90c:
    FUN_100541944(lVar9,uVar10,lVar19,lVar17);
    lStack_208 = lStack_1b8;
    local_210 = local_1c0;
    lStack_1f8 = lStack_1a8;
    lStack_200 = lStack_1b0;
    local_1f0 = local_1a0;
    uStack_228 = uStack_1d8;
    local_230 = local_1e0;
    lStack_218 = lStack_1c8;
    lStack_220 = lStack_1d0;
  }
  if (((*(long *)(lVar5 + 0x10) == 0) || (FUN_1005bad30(lVar5,999), unaff_x21 == 0)) &&
     (FUN_100563e08(&local_230,1000,0x20000000,lVar8), unaff_x21 == 0)) {
    uVar4 = (uint)(uVar7 >> 0x20);
    uVar14 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar14 == 0) {
        if ((uVar7 & 0xff000000000000) == 0) goto LAB_1005bd980;
      }
      else {
        lVar19 = (long)(int)lVar6;
        lVar17 = lVar6 >> 0x20;
LAB_1005bdacc:
        if (lVar19 == lVar17) goto LAB_1005bd980;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_230,lVar6);
    }
    else if (uVar14 == 2) {
      lVar19 = *(long *)(lVar6 + 0x10);
      lVar17 = *(long *)(lVar6 + 0x18);
      goto LAB_1005bdacc;
    }
  }
  else {
    _swift_errorRelease(unaff_x21);
    unaff_x21 = 0;
  }
LAB_1005bd980:
  FUN_100040bb4(&local_100,&DAT_100aab4f8,&DAT_100838f20);
  lStack_148 = lStack_208;
  local_150 = local_210;
  lStack_138 = lStack_1f8;
  lStack_140 = lStack_200;
  local_130 = local_1f0;
  uStack_168 = uStack_228;
  local_170 = local_230;
  lStack_158 = lStack_218;
  lStack_160 = lStack_220;
LAB_1005bd9b4:
  uVar4 = (uint)(uStack_118 >> 0x20);
  uVar14 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar14 != 0) {
      lVar19 = (long)(int)local_120;
      lVar17 = local_120 >> 0x20;
      goto LAB_1005bd9f0;
    }
    if ((uStack_118 & 0xff000000000000) == 0) goto LAB_1005bda00;
  }
  else {
    if (uVar14 != 2) goto LAB_1005bda00;
    lVar19 = *(long *)(local_120 + 0x10);
    lVar17 = *(long *)(local_120 + 0x18);
LAB_1005bd9f0:
    if (lVar19 == lVar17) goto LAB_1005bda00;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_170);
LAB_1005bda00:
  lVar24 = lVar24 + 1;
  FUN_1005b2e08(&local_120);
  if (lVar24 == lVar22) {
    unaff_x20[5] = lStack_148;
    unaff_x20[4] = local_150;
    unaff_x20[7] = lStack_138;
    unaff_x20[6] = lStack_140;
    unaff_x20[8] = local_130;
    unaff_x20[1] = uStack_168;
    *unaff_x20 = local_170;
    unaff_x20[3] = lStack_158;
    unaff_x20[2] = lStack_160;
    return;
  }
  lStack_88 = lStack_148;
  local_90 = local_150;
  lStack_78 = lStack_138;
  lStack_80 = lStack_140;
  local_70 = local_130;
  uStack_a8 = uStack_168;
  local_b0 = local_170;
  lStack_98 = lStack_158;
  lStack_a0 = lStack_160;
  goto LAB_1005bd3a0;
}

