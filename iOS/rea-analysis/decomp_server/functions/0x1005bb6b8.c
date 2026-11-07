// rea decompile_all
// name: FUN_1005bb6b8
// address: 0x1005bb6b8
// body: available
// range: 0x1005bb6b8-0x1005bbc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bb6b8(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  uint7 uVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar22;
  undefined1 auStack_288 [72];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long local_130;
  long lStack_128;
  ulong local_120;
  long lStack_118;
  long lStack_110;
  long local_108;
  long local_100;
  ulong uStack_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  char local_d0;
  uint7 uStack_cf;
  byte local_c8;
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
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  local_80 = unaff_x20[8];
  plVar22 = (long *)(param_1 + 0x20);
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar16 = lVar16 + -1;
    local_108 = plVar22[5];
    lVar17 = plVar22[4];
    uStack_f8 = plVar22[7];
    local_100 = plVar22[6];
    lStack_128 = plVar22[1];
    local_130 = *plVar22;
    lVar19 = plVar22[3];
    local_120 = plVar22[2];
    local_e8 = plVar22[9];
    local_f0 = plVar22[8];
    local_e0 = plVar22[10];
    uStack_d8 = (undefined1)plVar22[0xb];
    uStack_cf = (uint7)*(undefined8 *)((long)plVar22 + 0x61);
    local_c8 = (byte)((ulong)*(undefined8 *)((long)plVar22 + 0x61) >> 0x38);
    uStack_d7 = (undefined7)*(undefined8 *)((long)plVar22 + 0x59);
    local_d0 = (char)((ulong)*(undefined8 *)((long)plVar22 + 0x59) >> 0x38);
    local_140 = local_80;
    uStack_158 = uStack_98;
    local_160 = local_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_178 = uStack_b8;
    local_180 = local_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    lStack_118 = lVar19;
    lStack_110 = lVar17;
    if (lVar17 == 0) {
      FUN_1005b2fa8(&local_130,&local_1f0);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_1005b2fa8(&local_130,&local_1f0);
      __sSS4hash4intoys6HasherVz_tF(&local_180,lVar19,lVar17);
    }
    if ((*(long *)(local_130 + 0x10) == 0) || (FUN_1005bbc5c(local_130,2), unaff_x21 == 0)) {
      bVar14 = local_c8;
      uVar13 = uStack_cf;
      cVar12 = local_d0;
      uVar10 = local_e0;
      lVar8 = local_e8;
      lVar21 = local_f0;
      uVar6 = uStack_f8;
      lVar19 = local_100;
      lVar17 = local_108;
      if (local_108 != 0) {
        lVar2 = CONCAT71(uStack_d7,uStack_d8);
        lVar4 = CONCAT71(uStack_cf,local_d0);
        __ss6HasherV8_combineyySuF(3);
        uStack_1c8 = uStack_158;
        local_1d0 = local_160;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        local_1b0 = local_140;
        uStack_1e8 = uStack_178;
        local_1f0 = local_180;
        uStack_1d8 = uStack_168;
        uStack_1e0 = uStack_170;
        if (bVar14 != 2) {
          __ss6HasherV8_combineyySuF(0x21);
          __ss6HasherV8_combineyys5UInt8VF(bVar14 & 1);
        }
        uVar11 = local_e0;
        lVar9 = local_e8;
        lVar20 = local_f0;
        uVar7 = uStack_f8;
        lVar18 = local_100;
        if (lVar2 == 0) {
          uVar3 = CONCAT71(uStack_d7,uStack_d8);
          uVar5 = CONCAT71(uStack_cf,local_d0);
          _swift_bridgeObjectRetain(local_108);
          FUN_100008184(lVar18,uVar7);
          _swift_bridgeObjectRetain(lVar20);
          FUN_1005a7f54(lVar9,uVar11,uVar3,uVar5);
        }
        else {
          __ss6HasherV8_combineyySuF(0x22);
          uStack_218 = uStack_1c8;
          local_220 = local_1d0;
          uStack_208 = uStack_1b8;
          uStack_210 = uStack_1c0;
          local_200 = local_1b0;
          uStack_238 = uStack_1e8;
          local_240 = local_1f0;
          uStack_228 = uStack_1d8;
          uStack_230 = uStack_1e0;
          if (cVar12 != '\x04') {
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(cVar12);
          }
          if (((ulong)uVar13 & 0xff) != 3) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyySuF((ulong)uVar13 & 0xff);
          }
          if (((ulong)uVar13 & 0xff00) != 0x300) {
            __ss6HasherV8_combineyySuF(3);
            __ss6HasherV8_combineyySuF((ulong)(uVar13 >> 8) & 0xff);
          }
          if (((ulong)uVar13 & 0xff0000) != 0x30000) {
            __ss6HasherV8_combineyySuF(4);
            __ss6HasherV8_combineyySuF
                      (*(undefined8 *)(&DAT_10083e090 + ((lVar4 << 0x20) >> 0x38) * 8));
          }
          if (((ulong)uVar13 & 0xff000000) != 0x3000000) {
            __ss6HasherV8_combineyySuF(5);
            __ss6HasherV8_combineyySuF((ulong)(uVar13 >> 0x18) & 0xff);
          }
          if (((ulong)uVar13 & 0xff00000000) != 0x300000000) {
            __ss6HasherV8_combineyySuF(6);
            __ss6HasherV8_combineyySuF((ulong)(uVar13 >> 0x20) & 0xff);
          }
          if (((ulong)uVar13 & 0xff0000000000) != 0x30000000000) {
            __ss6HasherV8_combineyySuF(7);
            __ss6HasherV8_combineyySuF((ulong)(uVar13 >> 0x28) & 0xff);
          }
          if ((ulong)(uVar13 >> 0x30) != 5) {
            __ss6HasherV8_combineyySuF(8);
            __ss6HasherV8_combineyySuF((ulong)(uVar13 >> 0x30));
          }
          FUN_10007f314(&local_108,auStack_288,&DAT_100aab4a8,&DAT_10083e020);
          FUN_1005a7f54(lVar8,uVar10,lVar2,lVar4);
          FUN_100563e08(&local_240,1000,0x2711,lVar2);
          if (unaff_x21 == 0) {
            uVar1 = (uint)(uVar10 >> 0x20);
            uVar15 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar15 == 0) {
                if ((uVar10 & 0xff000000000000) == 0) goto LAB_1005bba00;
              }
              else {
                lVar18 = (long)(int)lVar8;
                lVar20 = lVar8 >> 0x20;
LAB_1005bbbdc:
                if (lVar18 == lVar20) goto LAB_1005bba00;
              }
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_240,lVar8,uVar10);
            }
            else if (uVar15 == 2) {
              lVar18 = *(long *)(lVar8 + 0x10);
              lVar20 = *(long *)(lVar8 + 0x18);
              goto LAB_1005bbbdc;
            }
          }
          else {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
LAB_1005bba00:
          FUN_100541944(lVar8,uVar10,lVar2,lVar4);
          uStack_1c8 = uStack_218;
          local_1d0 = local_220;
          uStack_1b8 = uStack_208;
          uStack_1c0 = uStack_210;
          local_1b0 = local_200;
          uStack_1e8 = uStack_238;
          local_1f0 = local_240;
          uStack_1d8 = uStack_228;
          uStack_1e0 = uStack_230;
        }
        if (((*(long *)(lVar17 + 0x10) == 0) || (FUN_1005bad30(lVar17,999), unaff_x21 == 0)) &&
           (FUN_100563e08(&local_1f0,1000,0x20000000,lVar21), unaff_x21 == 0)) {
          uVar1 = (uint)(uVar6 >> 0x20);
          uVar15 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar15 == 0) {
              if ((uVar6 & 0xff000000000000) == 0) goto LAB_1005bbacc;
            }
            else {
              lVar17 = (long)(int)lVar19;
              lVar21 = lVar19 >> 0x20;
LAB_1005bbc04:
              if (lVar17 == lVar21) goto LAB_1005bbacc;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1f0,lVar19);
          }
          else if (uVar15 == 2) {
            lVar17 = *(long *)(lVar19 + 0x10);
            lVar21 = *(long *)(lVar19 + 0x18);
            goto LAB_1005bbc04;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_1005bbacc:
        FUN_100040bb4(&local_108,&DAT_100aab4a8,&DAT_10083e020);
        uStack_158 = uStack_1c8;
        local_160 = local_1d0;
        uStack_148 = uStack_1b8;
        uStack_150 = uStack_1c0;
        local_140 = local_1b0;
        uStack_178 = uStack_1e8;
        local_180 = local_1f0;
        uStack_168 = uStack_1d8;
        uStack_170 = uStack_1e0;
      }
      uVar1 = (uint)(local_120 >> 0x20);
      uVar15 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar15 == 0) {
          if ((local_120 & 0xff000000000000) == 0) goto LAB_1005bbb44;
        }
        else {
          lVar17 = (long)(int)lStack_128;
          lVar19 = lStack_128 >> 0x20;
LAB_1005bbb34:
          if (lVar17 == lVar19) goto LAB_1005bbb44;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_180);
      }
      else if (uVar15 == 2) {
        lVar17 = *(long *)(lStack_128 + 0x10);
        lVar19 = *(long *)(lStack_128 + 0x18);
        goto LAB_1005bbb34;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_1005bbb44:
    FUN_1005b2fdc(&local_130);
    if (lVar16 == 0) {
      unaff_x20[5] = uStack_158;
      unaff_x20[4] = local_160;
      unaff_x20[7] = uStack_148;
      unaff_x20[6] = uStack_150;
      unaff_x20[8] = local_140;
      unaff_x20[1] = uStack_178;
      *unaff_x20 = local_180;
      unaff_x20[3] = uStack_168;
      unaff_x20[2] = uStack_170;
      return;
    }
    uStack_98 = uStack_158;
    local_a0 = local_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    local_80 = local_140;
    uStack_b8 = uStack_178;
    local_c0 = local_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    plVar22 = plVar22 + 0xe;
  } while( true );
}

