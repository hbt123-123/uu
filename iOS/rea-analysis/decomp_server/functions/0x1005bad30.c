// rea decompile_all
// name: FUN_1005bad30
// address: 0x1005bad30
// body: available
// range: 0x1005bad30-0x1005bb1f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bad30(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  undefined8 *unaff_x20;
  byte *pbVar34;
  long lVar35;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
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
  lVar27 = *(long *)(param_1 + 0x10);
  if (lVar27 == 0) {
    return;
  }
  lVar35 = 0;
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    plVar28 = (long *)(param_1 + 0x20 + lVar35 * 0x78);
    lVar1 = *plVar28;
    lVar7 = plVar28[1];
    uVar2 = plVar28[2];
    lVar32 = plVar28[3];
    lVar3 = plVar28[4];
    lVar8 = plVar28[5];
    bVar13 = *(byte *)(plVar28 + 6);
    lVar30 = plVar28[7];
    bVar14 = *(byte *)(plVar28 + 8);
    uVar31 = plVar28[9];
    bVar15 = *(byte *)(plVar28 + 10);
    lVar4 = plVar28[0xb];
    uVar9 = plVar28[0xc];
    lVar29 = plVar28[0xd];
    lVar10 = plVar28[0xe];
    local_c0 = local_70;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    lVar33 = *(long *)(lVar1 + 0x10);
    if (lVar33 != 0) {
      __ss6HasherV8_combineyySuF(2);
      uStack_128 = uStack_d8;
      local_130 = local_e0;
      uStack_118 = uStack_c8;
      uStack_120 = uStack_d0;
      local_110 = local_c0;
      uStack_148 = uStack_f8;
      local_150 = local_100;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      _swift_bridgeObjectRetain(lVar1);
      FUN_100008184(lVar7,uVar2);
      _swift_bridgeObjectRetain(lVar3);
      FUN_10010bd10(lVar4,uVar9);
      _swift_bridgeObjectRetain(lVar10);
      pbVar34 = (byte *)(lVar1 + 0x40);
      do {
        lVar33 = lVar33 + -1;
        lVar5 = *(long *)(pbVar34 + -0x20);
        uVar11 = *(ulong *)(pbVar34 + -0x18);
        uVar6 = *(undefined8 *)(pbVar34 + -0x10);
        lVar12 = *(long *)(pbVar34 + -8);
        bVar16 = *pbVar34;
        uStack_178 = uStack_128;
        local_180 = local_130;
        uStack_168 = uStack_118;
        uStack_170 = uStack_120;
        local_160 = local_110;
        uStack_198 = uStack_148;
        local_1a0 = local_150;
        uStack_188 = uStack_138;
        uStack_190 = uStack_140;
        if (lVar12 == 0) {
          FUN_100008184(lVar5,uVar11);
        }
        else {
          __ss6HasherV8_combineyySuF(1);
          FUN_100008184(lVar5,uVar11);
          _swift_bridgeObjectRetain(lVar12);
          __sSS4hash4intoys6HasherVz_tF(&local_1a0,uVar6,lVar12);
        }
        if (bVar16 != 2) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyys5UInt8VF(bVar16 & 1);
        }
        uVar17 = (uint)(uVar11 >> 0x20);
        uVar26 = uVar17 >> 0x1e;
        if (uVar17 >> 0x1e < 2) {
          if (uVar26 == 0) {
            if ((uVar11 & 0xff000000000000) != 0) {
LAB_1005baf60:
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1a0,lVar5,uVar11);
            }
          }
          else if ((long)(int)lVar5 != lVar5 >> 0x20) goto LAB_1005baf60;
        }
        else if ((uVar26 == 2) && (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 0x18)))
        goto LAB_1005baf60;
        FUN_100006cdc(lVar5,uVar11);
        _swift_bridgeObjectRelease(lVar12);
        uVar6 = uStack_178;
        uVar18 = local_180;
        uVar19 = uStack_168;
        uVar20 = uStack_170;
        uVar21 = local_160;
        uVar22 = uStack_188;
        uVar23 = uStack_190;
        uVar24 = uStack_198;
        uVar25 = local_1a0;
        if (lVar33 == 0) goto joined_r0x0001005bafd4;
        pbVar34 = pbVar34 + 0x28;
        uStack_128 = uStack_178;
        local_130 = local_180;
        uStack_118 = uStack_168;
        uStack_120 = uStack_170;
        local_110 = local_160;
        uStack_148 = uStack_198;
        local_150 = local_1a0;
        uStack_138 = uStack_188;
        uStack_140 = uStack_190;
      } while( true );
    }
    _swift_bridgeObjectRetain(lVar1);
    FUN_100008184(lVar7,uVar2);
    _swift_bridgeObjectRetain(lVar3);
    FUN_10010bd10(lVar4,uVar9);
    _swift_bridgeObjectRetain(lVar10);
    uVar6 = uStack_d8;
    uVar18 = local_e0;
    uVar19 = uStack_c8;
    uVar20 = uStack_d0;
    uVar21 = local_c0;
    uVar22 = uStack_e8;
    uVar23 = uStack_f0;
    uVar24 = uStack_f8;
    uVar25 = local_100;
joined_r0x0001005bafd4:
    local_100 = uVar25;
    uStack_f8 = uVar24;
    uStack_f0 = uVar23;
    uStack_e8 = uVar22;
    local_c0 = uVar21;
    uStack_d0 = uVar20;
    uStack_c8 = uVar19;
    local_e0 = uVar18;
    uStack_d8 = uVar6;
    if (lVar3 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&local_100,lVar32,lVar3);
    }
    if ((bVar13 & 1) == 0) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt64VF(lVar8);
    }
    if ((bVar14 & 1) == 0) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys6UInt64VF(lVar30);
    }
    if ((bVar15 & 1) == 0) {
      __ss6HasherV8_combineyySuF(6);
      uVar11 = 0;
      if ((uVar31 & 0x7fffffffffffffff) != 0) {
        uVar11 = uVar31;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar11);
    }
    if (uVar9 >> 0x3c < 0xf) {
      __ss6HasherV8_combineyySuF(7);
      FUN_100008184(lVar4,uVar9);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,lVar4,uVar9);
      FUN_100006cc8(lVar4,uVar9);
    }
    if (lVar10 != 0) {
      __ss6HasherV8_combineyySuF(8);
      __sSS4hash4intoys6HasherVz_tF(&local_100,lVar29,lVar10);
    }
    uVar17 = (uint)(uVar2 >> 0x20);
    uVar26 = uVar17 >> 0x1e;
    if (uVar17 >> 0x1e < 2) {
      if (uVar26 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_1005bb158;
      }
      else {
        lVar29 = (long)(int)lVar7;
        lVar32 = lVar7 >> 0x20;
LAB_1005bb140:
        if (lVar29 == lVar32) goto LAB_1005bb158;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,lVar7,uVar2);
    }
    else if (uVar26 == 2) {
      lVar29 = *(long *)(lVar7 + 0x10);
      lVar32 = *(long *)(lVar7 + 0x18);
      goto LAB_1005bb140;
    }
LAB_1005bb158:
    lVar35 = lVar35 + 1;
    _swift_bridgeObjectRelease(lVar1);
    FUN_100006cdc(lVar7,uVar2);
    _swift_bridgeObjectRelease(lVar3);
    FUN_100006cc8(lVar4,uVar9);
    _swift_bridgeObjectRelease(lVar10);
    if (lVar35 == lVar27) {
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
  } while( true );
}

