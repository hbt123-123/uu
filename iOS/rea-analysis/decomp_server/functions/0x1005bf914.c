// rea decompile_all
// name: FUN_1005bf914
// address: 0x1005bf914
// body: available
// range: 0x1005bf914-0x1005bfd4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bf914(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x20;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_1c8 [24];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  lVar18 = 0;
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  local_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
LAB_1005bf97c:
  puVar14 = (ulong *)(param_1 + 0x20 + lVar18 * 0x30);
  uVar2 = *puVar14;
  uVar5 = puVar14[1];
  uVar11 = puVar14[2];
  uVar3 = puVar14[3];
  uVar6 = puVar14[4];
  uVar20 = puVar14[5];
  uStack_e8 = uStack_98;
  local_f0 = local_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  local_d0 = local_80;
  uStack_108 = uStack_b8;
  local_110 = local_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar6,uVar20);
  }
  else {
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar6,uVar20);
    __sSS4hash4intoys6HasherVz_tF(&local_110,uVar2,uVar5);
  }
  if ((int)uVar11 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)uVar11);
  }
  lVar16 = *(long *)(uVar3 + 0x10);
  if (lVar16 != 0) {
    __ss6HasherV8_combineyySuF(3);
    uStack_138 = uStack_e8;
    local_140 = local_f0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    local_120 = local_d0;
    uStack_158 = uStack_108;
    local_160 = local_110;
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    plVar17 = (long *)(uVar3 + 0x50);
    do {
      lVar16 = lVar16 + -1;
      uVar2 = plVar17[-6];
      uVar11 = plVar17[-5];
      lVar15 = plVar17[-4];
      uVar7 = plVar17[-3];
      lVar4 = plVar17[-2];
      lVar8 = plVar17[-1];
      lVar19 = *plVar17;
      uStack_188 = uStack_138;
      local_190 = local_140;
      uStack_178 = uStack_128;
      uStack_180 = uStack_130;
      local_170 = local_120;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar1 = uVar11 >> 0x38 & 0xf;
      }
      uStack_1a8 = uStack_158;
      local_1b0 = local_160;
      uStack_198 = uStack_148;
      uStack_1a0 = uStack_150;
      if (uVar1 == 0) {
        _swift_bridgeObjectRetain(uVar11);
        FUN_100008184(lVar15,uVar7);
        FUN_100481814(lVar4,lVar8,lVar19);
      }
      else {
        __ss6HasherV8_combineyySuF(1);
        _swift_bridgeObjectRetain(uVar11);
        FUN_100008184(lVar15,uVar7);
        FUN_100481814(lVar4,lVar8,lVar19);
        __sSS4hash4intoys6HasherVz_tF(&local_1b0,uVar2,uVar11);
      }
      if (lVar19 != 0) {
        __ss6HasherV8_combineyySuF(2);
        _swift_beginAccess(lVar19 + 0x10,auStack_1c8,0,0);
        uVar2 = *(ulong *)(lVar19 + 0x10);
        uVar9 = *(ulong *)(lVar19 + 0x18);
        uVar1 = uVar2 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar1 = uVar9 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          FUN_100481814(lVar4,lVar8,lVar19);
          _swift_bridgeObjectRetain(uVar9);
          __sSS4hash4intoys6HasherVz_tF(&local_1b0,uVar2,uVar9);
          FUN_10008f148(lVar4,lVar8,lVar19);
          _swift_bridgeObjectRelease(uVar9);
        }
      }
      uVar10 = (uint)(uVar7 >> 0x20);
      uVar12 = uVar10 >> 0x1e;
      if (uVar10 >> 0x1e < 2) {
        if (uVar12 == 0) {
          if ((uVar7 & 0xff000000000000) != 0) {
LAB_1005bfbc8:
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1b0,lVar15,uVar7);
          }
        }
        else if ((long)(int)lVar15 != lVar15 >> 0x20) goto LAB_1005bfbc8;
      }
      else if ((uVar12 == 2) && (*(long *)(lVar15 + 0x10) != *(long *)(lVar15 + 0x18)))
      goto LAB_1005bfbc8;
      _swift_bridgeObjectRelease(uVar11);
      FUN_100006cdc(lVar15,uVar7);
      FUN_10008f148(lVar4,lVar8,lVar19);
      if (lVar16 == 0) goto LAB_1005bfc2c;
      plVar17 = plVar17 + 7;
      uStack_138 = uStack_188;
      local_140 = local_190;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      local_120 = local_170;
      uStack_158 = uStack_1a8;
      local_160 = local_1b0;
      uStack_148 = uStack_198;
      uStack_150 = uStack_1a0;
    } while( true );
  }
  goto LAB_1005bfc58;
LAB_1005bfc2c:
  uStack_e8 = uStack_188;
  local_f0 = local_190;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  local_d0 = local_170;
  uStack_108 = uStack_1a8;
  local_110 = local_1b0;
  uStack_f8 = uStack_198;
  uStack_100 = uStack_1a0;
LAB_1005bfc58:
  uVar10 = (uint)(uVar20 >> 0x20);
  uVar12 = uVar10 >> 0x1e;
  if (uVar10 >> 0x1e < 2) {
    if (uVar12 != 0) {
      lVar16 = (long)(int)uVar6;
      lVar15 = (long)uVar6 >> 0x20;
      goto LAB_1005bfcb0;
    }
    if ((uVar20 & 0xff000000000000) == 0) goto LAB_1005bfcc8;
  }
  else {
    if (uVar12 != 2) goto LAB_1005bfcc8;
    lVar16 = *(long *)(uVar6 + 0x10);
    lVar15 = *(long *)(uVar6 + 0x18);
LAB_1005bfcb0:
    if (lVar16 == lVar15) goto LAB_1005bfcc8;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_110,uVar6,uVar20);
LAB_1005bfcc8:
  lVar18 = lVar18 + 1;
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar5);
  FUN_100006cdc(uVar6,uVar20);
  if (lVar18 == lVar13) {
    unaff_x20[5] = uStack_e8;
    unaff_x20[4] = local_f0;
    unaff_x20[7] = uStack_d8;
    unaff_x20[6] = uStack_e0;
    unaff_x20[8] = local_d0;
    unaff_x20[1] = uStack_108;
    *unaff_x20 = local_110;
    unaff_x20[3] = uStack_f8;
    unaff_x20[2] = uStack_100;
    return;
  }
  uStack_98 = uStack_e8;
  local_a0 = local_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  local_80 = local_d0;
  uStack_b8 = uStack_108;
  local_c0 = local_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  goto LAB_1005bf97c;
}

