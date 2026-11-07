// rea decompile_all
// name: FUN_100573884
// address: 0x100573884
// body: available
// range: 0x100573884-0x100573c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100573bdc) */

void FUN_100573884(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
  
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  local_80 = param_1[8];
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    __ss6HasherV8_combineyySuF(1);
    lVar14 = 0;
    uStack_d8 = uStack_88;
    local_e0 = uStack_90;
    local_d0 = local_80;
    uStack_f8 = uStack_a8;
    local_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = local_a0;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    do {
      plVar12 = (long *)(param_2 + 0x20 + lVar14 * 0x48);
      lVar1 = *plVar12;
      lVar6 = plVar12[1];
      lVar2 = plVar12[2];
      lVar7 = plVar12[3];
      uVar3 = plVar12[4];
      lVar17 = plVar12[5];
      lVar4 = plVar12[6];
      lVar13 = plVar12[7];
      lVar15 = plVar12[8];
      uStack_138 = uStack_e8;
      local_140 = uStack_f0;
      uStack_128 = uStack_d8;
      uStack_130 = local_e0;
      local_120 = local_d0;
      uStack_158 = uStack_108;
      local_160 = local_110;
      uStack_148 = uStack_f8;
      uStack_150 = local_100;
      lVar16 = *(long *)(lVar1 + 0x10);
      if (lVar16 != 0) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + 0x10));
        puVar18 = (undefined4 *)(lVar1 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar18);
          lVar16 = lVar16 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar16 != 0);
      }
      lVar16 = *(long *)(lVar6 + 0x10);
      if (lVar16 != 0) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
        puVar18 = (undefined4 *)(lVar6 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar18);
          lVar16 = lVar16 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar16 != 0);
      }
      if (lVar4 == 0) {
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(lVar6);
        _swift_bridgeObjectRetain(lVar2);
        FUN_100008184(lVar7,uVar3);
        _swift_bridgeObjectRetain(lVar15);
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(lVar6);
        _swift_bridgeObjectRetain(lVar2);
        FUN_100008184(lVar7,uVar3);
        _swift_bridgeObjectRetain(lVar15);
        _swift_bridgeObjectRetain(lVar4);
        __sSS4hash4intoys6HasherVz_tF(&local_160,lVar17,lVar4);
      }
      if (lVar15 != 0) {
        __ss6HasherV8_combineyySuF(4);
        __sSS4hash4intoys6HasherVz_tF(&local_160,lVar13,lVar15);
      }
      lVar17 = *(long *)(lVar2 + 0x10);
      if (lVar17 != 0) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + 0x10));
        puVar19 = (undefined8 *)(lVar2 + 0x28);
        do {
          uVar5 = puVar19[-1];
          uVar8 = *puVar19;
          _swift_bridgeObjectRetain(uVar8);
          __sSS4hash4intoys6HasherVz_tF(&local_160,uVar5,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          puVar19 = puVar19 + 2;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar9 = (uint)(uVar3 >> 0x20);
      uVar10 = uVar9 >> 0x1e;
      if (uVar9 >> 0x1e < 2) {
        if (uVar10 == 0) {
          if ((uVar3 & 0xff000000000000) == 0) goto LAB_100573b30;
        }
        else {
          lVar17 = (long)(int)lVar7;
          lVar13 = lVar7 >> 0x20;
LAB_100573b18:
          if (lVar17 == lVar13) goto LAB_100573b30;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_160,lVar7,uVar3);
      }
      else if (uVar10 == 2) {
        lVar17 = *(long *)(lVar7 + 0x10);
        lVar13 = *(long *)(lVar7 + 0x18);
        goto LAB_100573b18;
      }
LAB_100573b30:
      lVar14 = lVar14 + 1;
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(lVar6);
      _swift_bridgeObjectRelease(lVar1);
      FUN_100006cdc(lVar7,uVar3);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease(lVar15);
      if (lVar14 == lVar11) goto LAB_100573b94;
      uStack_e8 = uStack_138;
      uStack_f0 = local_140;
      uStack_d8 = uStack_128;
      local_e0 = uStack_130;
      local_d0 = local_120;
      uStack_108 = uStack_158;
      local_110 = local_160;
      uStack_f8 = uStack_148;
      local_100 = uStack_150;
    } while( true );
  }
LAB_100573bb4:
  FUN_100563e08(&local_c0,536000000,0x1ff2b601,param_5);
  uVar9 = (uint)(param_4 >> 0x20);
  uVar10 = uVar9 >> 0x1e;
  if (uVar9 >> 0x1e < 2) {
    if (uVar10 != 0) {
      lVar11 = (long)(int)param_3;
      lVar14 = param_3 >> 0x20;
      goto LAB_100573c50;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_100573be4;
  }
  else {
    if (uVar10 != 2) goto LAB_100573be4;
    lVar11 = *(long *)(param_3 + 0x10);
    lVar14 = *(long *)(param_3 + 0x18);
LAB_100573c50:
    if (lVar11 == lVar14) goto LAB_100573be4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_c0,param_3,param_4);
LAB_100573be4:
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = local_80;
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
LAB_100573b94:
  uStack_98 = uStack_138;
  local_a0 = local_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  local_80 = local_120;
  uStack_b8 = uStack_158;
  local_c0 = local_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  goto LAB_100573bb4;
}

