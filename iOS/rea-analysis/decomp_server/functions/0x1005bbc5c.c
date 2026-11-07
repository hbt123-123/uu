// rea decompile_all
// name: FUN_1005bbc5c
// address: 0x1005bbc5c
// body: available
// range: 0x1005bbc5c-0x1005bc2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bbc5c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  ushort uVar11;
  uint6 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar20;
  undefined8 uVar21;
  undefined1 auStack_2c8 [72];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_150;
  ulong uStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long local_118;
  long local_110;
  long lStack_108;
  ulong local_100;
  long lStack_f8;
  undefined8 local_f0;
  long local_e8;
  ulong local_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  ushort local_d0;
  uint6 uStack_ce;
  byte local_c8;
  byte local_c7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  local_80 = unaff_x20[8];
  plVar20 = (long *)(param_1 + 0x20);
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar14 = lVar14 + -1;
    uStack_148 = plVar20[1];
    local_150 = *plVar20;
    lVar17 = plVar20[3];
    lVar15 = plVar20[2];
    local_e8 = plVar20[0xd];
    local_f0 = plVar20[0xc];
    local_e0 = plVar20[0xe];
    lStack_108 = plVar20[9];
    local_110 = plVar20[8];
    lStack_f8 = plVar20[0xb];
    local_100 = plVar20[10];
    uStack_d8 = (undefined2)plVar20[0xf];
    uVar21 = *(undefined8 *)((long)plVar20 + 0x82);
    uStack_ce = (uint6)uVar21;
    local_c8 = (byte)((ulong)uVar21 >> 0x30);
    local_c7 = (byte)((ulong)uVar21 >> 0x38);
    uStack_d6 = (undefined6)*(undefined8 *)((long)plVar20 + 0x7a);
    local_d0 = (ushort)((ulong)*(undefined8 *)((long)plVar20 + 0x7a) >> 0x30);
    lStack_128 = plVar20[5];
    local_130 = plVar20[4];
    local_118 = plVar20[7];
    local_120 = plVar20[6];
    uStack_178 = uStack_98;
    local_180 = local_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    local_160 = local_80;
    uStack_198 = uStack_b8;
    local_1a0 = local_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    local_140 = lVar15;
    lStack_138 = lVar17;
    if (lVar17 == 0) {
      FUN_1005b2b44(&local_150,&local_230);
      lVar15 = local_130;
      lVar17 = lStack_128;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_1005b2b44(&local_150,&local_230);
      __sSS4hash4intoys6HasherVz_tF(&local_1a0,lVar15,lVar17);
      lVar15 = local_130;
      lVar17 = lStack_128;
    }
    local_130 = lVar15;
    lStack_128 = lVar17;
    if (lVar17 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __sSS4hash4intoys6HasherVz_tF(&local_1a0,lVar15,lVar17);
    }
    lVar17 = local_118;
    lVar15 = local_120;
    if (local_118 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&local_1a0,lVar15,lVar17);
    }
    uVar12 = uStack_ce;
    uVar11 = local_d0;
    uVar7 = local_e0;
    lVar5 = local_e8;
    lVar19 = lStack_f8;
    uVar6 = local_100;
    lVar17 = lStack_108;
    lVar15 = local_110;
    if (local_110 != 0) {
      bVar8 = (byte)local_f0;
      cVar9 = local_f0._1_1_;
      lVar2 = CONCAT62(uStack_d6,uStack_d8);
      lVar3 = CONCAT62(uStack_ce,local_d0);
      __ss6HasherV8_combineyySuF(4);
      uStack_208 = uStack_178;
      local_210 = local_180;
      uStack_1f8 = uStack_168;
      uStack_200 = uStack_170;
      local_1f0 = local_160;
      uStack_228 = uStack_198;
      local_230 = local_1a0;
      uStack_218 = uStack_188;
      uStack_220 = uStack_190;
      if (bVar8 == 2) {
        if (cVar9 != '\x03') goto LAB_1005bc024;
LAB_1005bbdf4:
        if (lVar2 == 0) goto LAB_1005bc040;
LAB_1005bbdf8:
        __ss6HasherV8_combineyySuF(0x23);
        uStack_258 = uStack_208;
        local_260 = local_210;
        uStack_248 = uStack_1f8;
        uStack_250 = uStack_200;
        local_240 = local_1f0;
        uStack_278 = uStack_228;
        local_280 = local_230;
        uStack_268 = uStack_218;
        uStack_270 = uStack_220;
        if ((uVar11 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar11 & 0xff);
        }
        if ((uVar11 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar11 >> 8);
        }
        if (((ulong)uVar12 & 0xff) != 3) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF((ulong)uVar12 & 0xff);
        }
        if (((ulong)uVar12 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF
                    (*(undefined8 *)(&DAT_10083e090 + ((lVar3 << 0x20) >> 0x38) * 8));
        }
        if (((ulong)uVar12 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x10) & 0xff);
        }
        if (((ulong)uVar12 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x18) & 0xff);
        }
        if (((ulong)uVar12 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x20) & 0xff);
        }
        if ((ulong)(uVar12 >> 0x28) != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x28));
        }
        FUN_10007f314(&local_110,auStack_2c8,&DAT_100aab4a0,&DAT_100837c10);
        FUN_1005a7f54(lVar5,uVar7,lVar2,lVar3);
        FUN_100563e08(&local_280,1000,0x2711,lVar2);
        if (unaff_x21 == 0) {
          uVar1 = (uint)(uVar7 >> 0x20);
          uVar13 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar13 == 0) {
              if ((uVar7 & 0xff000000000000) == 0) goto LAB_1005bbfb8;
            }
            else {
              lVar16 = (long)(int)lVar5;
              lVar18 = lVar5 >> 0x20;
LAB_1005bc23c:
              if (lVar16 == lVar18) goto LAB_1005bbfb8;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_280,lVar5,uVar7);
          }
          else if (uVar13 == 2) {
            lVar16 = *(long *)(lVar5 + 0x10);
            lVar18 = *(long *)(lVar5 + 0x18);
            goto LAB_1005bc23c;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_1005bbfb8:
        FUN_100541944(lVar5,uVar7,lVar2,lVar3);
        uStack_208 = uStack_258;
        local_210 = local_260;
        uStack_1f8 = uStack_248;
        uStack_200 = uStack_250;
        local_1f0 = local_240;
        uStack_228 = uStack_278;
        local_230 = local_280;
        uStack_218 = uStack_268;
        uStack_220 = uStack_270;
      }
      else {
        __ss6HasherV8_combineyySuF(0x21);
        __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
        if (cVar9 == '\x03') goto LAB_1005bbdf4;
LAB_1005bc024:
        __ss6HasherV8_combineyySuF(0x22);
        __ss6HasherV8_combineyySuF(cVar9);
        if (lVar2 != 0) goto LAB_1005bbdf8;
LAB_1005bc040:
        uVar10 = local_e0;
        lVar3 = local_e8;
        lVar2 = lStack_f8;
        uVar7 = local_100;
        lVar5 = lStack_108;
        uVar21 = CONCAT62(uStack_d6,uStack_d8);
        uVar4 = CONCAT62(uStack_ce,local_d0);
        _swift_bridgeObjectRetain(local_110);
        FUN_100008184(lVar5,uVar7);
        _swift_bridgeObjectRetain(lVar2);
        FUN_1005a7f54(lVar3,uVar10,uVar21,uVar4);
      }
      if (((*(long *)(lVar15 + 0x10) == 0) || (FUN_1005bad30(lVar15,999), unaff_x21 == 0)) &&
         (FUN_100563e08(&local_230,1000,0x20000000,lVar19), unaff_x21 == 0)) {
        uVar1 = (uint)(uVar6 >> 0x20);
        uVar13 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar13 == 0) {
            if ((uVar6 & 0xff000000000000) == 0) goto LAB_1005bc0dc;
          }
          else {
            lVar15 = (long)(int)lVar17;
            lVar19 = lVar17 >> 0x20;
LAB_1005bc270:
            if (lVar15 == lVar19) goto LAB_1005bc0dc;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_230,lVar17);
        }
        else if (uVar13 == 2) {
          lVar15 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)(lVar17 + 0x18);
          goto LAB_1005bc270;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_1005bc0dc:
      FUN_100040bb4(&local_110,&DAT_100aab4a0,&DAT_100837c10);
      uStack_178 = uStack_208;
      local_180 = local_210;
      uStack_168 = uStack_1f8;
      uStack_170 = uStack_200;
      local_160 = local_1f0;
      uStack_198 = uStack_228;
      local_1a0 = local_230;
      uStack_188 = uStack_218;
      uStack_190 = uStack_220;
    }
    bVar8 = local_c8;
    if (local_c8 != 2) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
    }
    bVar8 = local_c7;
    if (local_c7 != 2) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
    }
    uVar1 = (uint)(uStack_148 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar13 == 0) {
        if ((uStack_148 & 0xff000000000000) == 0) goto LAB_1005bc19c;
      }
      else {
        lVar15 = (long)(int)local_150;
        lVar17 = local_150 >> 0x20;
LAB_1005bc18c:
        if (lVar15 == lVar17) goto LAB_1005bc19c;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1a0);
    }
    else if (uVar13 == 2) {
      lVar15 = *(long *)(local_150 + 0x10);
      lVar17 = *(long *)(local_150 + 0x18);
      goto LAB_1005bc18c;
    }
LAB_1005bc19c:
    FUN_1005b2b78(&local_150);
    if (lVar14 == 0) {
      unaff_x20[5] = uStack_178;
      unaff_x20[4] = local_180;
      unaff_x20[7] = uStack_168;
      unaff_x20[6] = uStack_170;
      unaff_x20[8] = local_160;
      unaff_x20[1] = uStack_198;
      *unaff_x20 = local_1a0;
      unaff_x20[3] = uStack_188;
      unaff_x20[2] = uStack_190;
      return;
    }
    uStack_98 = uStack_178;
    local_a0 = local_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    local_80 = local_160;
    uStack_b8 = uStack_198;
    local_c0 = local_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    plVar20 = plVar20 + 0x12;
  } while( true );
}

