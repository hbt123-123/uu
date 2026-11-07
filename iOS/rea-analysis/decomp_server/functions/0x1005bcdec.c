// rea decompile_all
// name: FUN_1005bcdec
// address: 0x1005bcdec
// body: available
// range: 0x1005bcdec-0x1005bd337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bcdec(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar18;
  long lVar19;
  undefined1 auStack_250 [64];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_110;
  ulong uStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  ulong uStack_c8;
  long local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  plVar18 = (long *)(param_1 + 0x20);
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar13 = lVar13 + -1;
    lStack_e8 = plVar18[5];
    local_f0 = plVar18[4];
    local_d8 = plVar18[7];
    local_e0 = plVar18[6];
    uStack_c8 = plVar18[9];
    local_d0 = plVar18[8];
    local_b8 = plVar18[0xb];
    local_c0 = plVar18[10];
    uStack_108 = plVar18[1];
    local_110 = *plVar18;
    lVar19 = plVar18[3];
    lVar15 = plVar18[2];
    local_120 = local_70;
    uStack_138 = uStack_88;
    local_140 = local_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    uStack_158 = uStack_a8;
    local_160 = local_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    local_100 = lVar15;
    lStack_f8 = lVar19;
    if (lVar19 == 0) {
      FUN_1005b2d74(&local_110,&local_1c0);
      lVar15 = local_f0;
      lVar19 = lStack_e8;
      uVar2 = local_e0;
      lVar17 = local_d8;
      lVar3 = local_d0;
      uVar4 = uStack_c8;
      lVar5 = local_c0;
      uVar6 = local_b8;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_1005b2d74(&local_110,&local_1c0);
      __sSS4hash4intoys6HasherVz_tF(&local_160,lVar15,lVar19);
      lVar15 = local_f0;
      lVar19 = lStack_e8;
      uVar2 = local_e0;
      lVar17 = local_d8;
      lVar3 = local_d0;
      uVar4 = uStack_c8;
      lVar5 = local_c0;
      uVar6 = local_b8;
    }
    local_f0 = lVar15;
    lStack_e8 = lVar19;
    local_e0 = uVar2;
    local_d8 = lVar17;
    local_d0 = lVar3;
    uStack_c8 = uVar4;
    local_c0 = lVar5;
    local_b8 = uVar6;
    if (lVar15 != 0) {
      __ss6HasherV8_combineyySuF(2);
      uVar11 = local_b8;
      lVar10 = local_c0;
      uVar9 = uStack_c8;
      lVar8 = local_d0;
      lVar16 = local_d8;
      uVar7 = local_e0;
      lVar14 = lStack_e8;
      uStack_198 = uStack_138;
      local_1a0 = local_140;
      uStack_188 = uStack_128;
      uStack_190 = uStack_130;
      local_180 = local_120;
      uStack_1b8 = uStack_158;
      local_1c0 = local_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(local_f0);
        FUN_100008184(lVar14,uVar7);
        _swift_bridgeObjectRetain(lVar16);
        FUN_1005a7f54(lVar8,uVar9,lVar10,uVar11);
        if (*(long *)(lVar15 + 0x10) != 0) goto LAB_1005bd150;
LAB_1005bd16c:
        FUN_100563e08(&local_1c0,1000,0x20000000,lVar17);
        if (unaff_x21 != 0) goto LAB_1005bd18c;
        uVar1 = (uint)(uVar2 >> 0x20);
        uVar12 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar2 & 0xff000000000000) == 0) goto LAB_1005bd198;
          }
          else {
            lVar15 = (long)(int)lVar19;
            lVar17 = lVar19 >> 0x20;
LAB_1005bd2e0:
            if (lVar15 == lVar17) goto LAB_1005bd198;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1c0,lVar19);
        }
        else if (uVar12 == 2) {
          lVar15 = *(long *)(lVar19 + 0x10);
          lVar17 = *(long *)(lVar19 + 0x18);
          goto LAB_1005bd2e0;
        }
      }
      else {
        __ss6HasherV8_combineyySuF(1);
        uStack_1e8 = uStack_198;
        local_1f0 = local_1a0;
        uStack_1d8 = uStack_188;
        uStack_1e0 = uStack_190;
        local_1d0 = local_180;
        uStack_208 = uStack_1b8;
        local_210 = local_1c0;
        uStack_1f8 = uStack_1a8;
        uStack_200 = uStack_1b0;
        if ((uVar6 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar6 & 0xff);
        }
        if ((uVar6 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar6 >> 8 & 0xff);
        }
        if ((uVar6 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x10 & 0xff);
        }
        if ((uVar6 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF
                    (*(undefined8 *)(&DAT_10083e090 + ((long)(uVar6 << 0x20) >> 0x38) * 8));
        }
        if ((uVar6 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x20 & 0xff);
        }
        if ((uVar6 & 0xff0000000000) != 0x30000000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x28 & 0xff);
        }
        if ((uVar6 & 0xff000000000000) != 0x3000000000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x30 & 0xff);
        }
        if (uVar6 >> 0x38 != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x38);
        }
        FUN_10007f314(&local_f0,auStack_250,&DAT_100aab4c0,&DAT_100837c30);
        FUN_1005a7f54(lVar3,uVar4,lVar5,uVar6);
        FUN_100563e08(&local_210,1000,0x2711,lVar5);
        if (unaff_x21 == 0) {
          uVar1 = (uint)(uVar4 >> 0x20);
          uVar12 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar12 == 0) {
              if ((uVar4 & 0xff000000000000) == 0) goto LAB_1005bd0d0;
            }
            else {
              lVar14 = (long)(int)lVar3;
              lVar16 = lVar3 >> 0x20;
LAB_1005bd2b8:
              if (lVar14 == lVar16) goto LAB_1005bd0d0;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_210,lVar3,uVar4);
          }
          else if (uVar12 == 2) {
            lVar14 = *(long *)(lVar3 + 0x10);
            lVar16 = *(long *)(lVar3 + 0x18);
            goto LAB_1005bd2b8;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_1005bd0d0:
        FUN_100541944(lVar3,uVar4,lVar5,uVar6);
        uStack_198 = uStack_1e8;
        local_1a0 = local_1f0;
        uStack_188 = uStack_1d8;
        uStack_190 = uStack_1e0;
        local_180 = local_1d0;
        uStack_1b8 = uStack_208;
        local_1c0 = local_210;
        uStack_1a8 = uStack_1f8;
        uStack_1b0 = uStack_200;
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1005bd16c;
LAB_1005bd150:
        FUN_1005bad30(lVar15,999);
        if (unaff_x21 == 0) goto LAB_1005bd16c;
LAB_1005bd18c:
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_1005bd198:
      FUN_100040bb4(&local_f0,&DAT_100aab4c0,&DAT_100837c30);
      uStack_138 = uStack_198;
      local_140 = local_1a0;
      uStack_128 = uStack_188;
      uStack_130 = uStack_190;
      local_120 = local_180;
      uStack_158 = uStack_1b8;
      local_160 = local_1c0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
    }
    uVar1 = (uint)(uStack_108 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uStack_108 & 0xff000000000000) != 0) {
LAB_1005bd214:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_160);
        }
      }
      else if ((long)(int)local_110 != local_110 >> 0x20) goto LAB_1005bd214;
    }
    else if ((uVar12 == 2) && (*(long *)(local_110 + 0x10) != *(long *)(local_110 + 0x18)))
    goto LAB_1005bd214;
    FUN_1005b2da8(&local_110);
    if (lVar13 == 0) {
      unaff_x20[5] = uStack_138;
      unaff_x20[4] = local_140;
      unaff_x20[7] = uStack_128;
      unaff_x20[6] = uStack_130;
      unaff_x20[8] = local_120;
      unaff_x20[1] = uStack_158;
      *unaff_x20 = local_160;
      unaff_x20[3] = uStack_148;
      unaff_x20[2] = uStack_150;
      return;
    }
    uStack_88 = uStack_138;
    local_90 = local_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    local_70 = local_120;
    uStack_a8 = uStack_158;
    local_b0 = local_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    plVar18 = plVar18 + 0xc;
  } while( true );
}

