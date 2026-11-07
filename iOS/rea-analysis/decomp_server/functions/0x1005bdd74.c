// rea decompile_all
// name: FUN_1005bdd74
// address: 0x1005bdd74
// body: available
// range: 0x1005bdd74-0x1005be3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bdd74(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_1d0 [32];
  long local_1b0;
  ulong uStack_1a8;
  long local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
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
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  plVar8 = (long *)(param_1 + 0x30);
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar7 = lVar7 + -1;
    lVar1 = plVar8[-2];
    uVar2 = plVar8[-1];
    lVar12 = *plVar8;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    local_c0 = local_70;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    _swift_beginAccess(lVar12 + 0x10,auStack_118,0,0);
    cVar4 = *(char *)(lVar12 + 0x10);
    if ((long)cVar4 != 0xc) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083e030 + (long)cVar4 * 8));
    }
    _swift_beginAccess(lVar12 + 0x18,auStack_130,0,0);
    lVar13 = *(long *)(lVar12 + 0x28);
    if (lVar13 == 0) {
      FUN_100008184(lVar1,uVar2);
      _swift_retain(lVar12);
    }
    else {
      lVar10 = *(long *)(lVar12 + 0x18);
      uVar3 = *(ulong *)(lVar12 + 0x20);
      uVar14 = *(ulong *)(lVar12 + 0x30);
      __ss6HasherV8_combineyySuF(4);
      uStack_168 = uStack_d8;
      local_170 = local_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      local_150 = local_c0;
      uStack_188 = uStack_f8;
      local_190 = local_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      if ((uVar14 & 0xff) != 4) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar14 & 0xff);
      }
      if ((uVar14 & 0xff00) != 0x300) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(uVar14 >> 8 & 0xff);
      }
      if ((uVar14 & 0xff0000) != 0x30000) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x10 & 0xff);
      }
      if ((uVar14 & 0xff000000) != 0x3000000) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF
                  (*(undefined8 *)(&DAT_10083e090 + ((long)(uVar14 << 0x20) >> 0x38) * 8));
      }
      if ((uVar14 & 0xff00000000) != 0x300000000) {
        __ss6HasherV8_combineyySuF(5);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x20 & 0xff);
      }
      if ((uVar14 & 0xff0000000000) != 0x30000000000) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x28 & 0xff);
      }
      if ((uVar14 & 0xff000000000000) != 0x3000000000000) {
        __ss6HasherV8_combineyySuF(7);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x30 & 0xff);
      }
      if (uVar14 >> 0x38 != 5) {
        __ss6HasherV8_combineyySuF(8);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x38);
      }
      FUN_100008184(lVar1,uVar2);
      _swift_retain(lVar12);
      FUN_1005a7f54(lVar10,uVar3,lVar13,uVar14);
      FUN_100563e08(&local_190,1000,0x2711,lVar13);
      if (unaff_x21 == 0) {
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar6 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar3 & 0xff000000000000) == 0) goto LAB_1005be018;
          }
          else {
            lVar9 = (long)(int)lVar10;
            lVar11 = lVar10 >> 0x20;
LAB_1005be340:
            if (lVar9 == lVar11) goto LAB_1005be018;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_190,lVar10,uVar3);
        }
        else if (uVar6 == 2) {
          lVar9 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)(lVar10 + 0x18);
          goto LAB_1005be340;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_1005be018:
      FUN_100541944(lVar10,uVar3,lVar13,uVar14);
      uStack_d8 = uStack_168;
      local_e0 = local_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      local_c0 = local_150;
      uStack_f8 = uStack_188;
      local_100 = local_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    _swift_beginAccess(lVar12 + 0x38,auStack_148,0,0);
    lVar13 = *(long *)(lVar12 + 0x48);
    if (lVar13 != 0) {
      lVar10 = *(long *)(lVar12 + 0x38);
      uVar3 = *(ulong *)(lVar12 + 0x40);
      uVar14 = *(ulong *)(lVar12 + 0x50);
      __ss6HasherV8_combineyySuF(5);
      uStack_168 = uStack_d8;
      local_170 = local_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      local_150 = local_c0;
      uStack_188 = uStack_f8;
      local_190 = local_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      if ((uVar14 & 0xff) != 4) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar14 & 0xff);
      }
      if ((uVar14 & 0xff00) != 0x300) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(uVar14 >> 8 & 0xff);
      }
      if ((uVar14 & 0xff0000) != 0x30000) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x10 & 0xff);
      }
      if ((uVar14 & 0xff000000) != 0x3000000) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF
                  (*(undefined8 *)(&DAT_10083e090 + ((long)(uVar14 << 0x20) >> 0x38) * 8));
      }
      if ((uVar14 & 0xff00000000) != 0x300000000) {
        __ss6HasherV8_combineyySuF(5);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x20 & 0xff);
      }
      if ((uVar14 & 0xff0000000000) != 0x30000000000) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x28 & 0xff);
      }
      if ((uVar14 & 0xff000000000000) != 0x3000000000000) {
        __ss6HasherV8_combineyySuF(7);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x30 & 0xff);
      }
      if (uVar14 >> 0x38 != 5) {
        __ss6HasherV8_combineyySuF(8);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x38);
      }
      local_1b0 = lVar10;
      uStack_1a8 = uVar3;
      local_1a0 = lVar13;
      uStack_198 = uVar14;
      FUN_1005a7f80(&local_1b0,auStack_1d0);
      FUN_100563e08(&local_190,1000,0x2711,lVar13);
      if (unaff_x21 == 0) {
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar6 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar3 & 0xff000000000000) == 0) goto LAB_1005be224;
          }
          else {
            lVar9 = (long)(int)lVar10;
            lVar11 = lVar10 >> 0x20;
LAB_1005be364:
            if (lVar9 == lVar11) goto LAB_1005be224;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_190,lVar10,uVar3);
        }
        else if (uVar6 == 2) {
          lVar9 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)(lVar10 + 0x18);
          goto LAB_1005be364;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_1005be224:
      FUN_100541944(lVar10,uVar3,lVar13,uVar14);
      uStack_d8 = uStack_168;
      local_e0 = local_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      local_c0 = local_150;
      uStack_f8 = uStack_188;
      local_100 = local_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    uVar5 = (uint)(uVar2 >> 0x20);
    uVar6 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar6 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_1005be2a0;
      }
      else {
        lVar13 = (long)(int)lVar1;
        lVar10 = lVar1 >> 0x20;
LAB_1005be288:
        if (lVar13 == lVar10) goto LAB_1005be2a0;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,lVar1,uVar2);
    }
    else if (uVar6 == 2) {
      lVar13 = *(long *)(lVar1 + 0x10);
      lVar10 = *(long *)(lVar1 + 0x18);
      goto LAB_1005be288;
    }
LAB_1005be2a0:
    FUN_100006cdc(lVar1,uVar2);
    _swift_release(lVar12);
    if (lVar7 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = local_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = local_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = local_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    local_70 = local_c0;
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    plVar8 = plVar8 + 3;
  } while( true );
}

