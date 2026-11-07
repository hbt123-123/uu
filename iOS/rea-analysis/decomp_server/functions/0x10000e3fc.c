// rea decompile_all
// name: FUN_10000e3fc
// address: 0x10000e3fc
// body: available
// range: 0x10000e3fc-0x10000ea13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000e3fc(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  byte bVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  byte bVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *local_3e0;
  ulong local_3b8;
  byte local_3b0;
  undefined1 local_3af;
  byte local_3ae;
  undefined1 local_3ad;
  ulong local_3a8;
  undefined1 *puStack_3a0;
  undefined1 local_398;
  ulong local_390;
  byte local_388;
  ulong local_380;
  undefined1 local_378;
  ulong local_370;
  undefined1 local_368;
  ulong local_360;
  undefined1 local_358;
  undefined4 uStack_357;
  undefined8 local_350;
  undefined8 uStack_348;
  byte local_340;
  undefined1 uStack_33f;
  byte bStack_33e;
  undefined1 uStack_33d;
  undefined4 uStack_33c;
  ulong uStack_338;
  undefined1 *puStack_330;
  int local_328;
  undefined4 uStack_324;
  ulong local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  ulong local_310;
  undefined4 local_308;
  undefined4 local_304;
  ulong local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  ulong local_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  undefined1 *local_2c0;
  ulong uStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  ulong local_2a0;
  ulong uStack_298;
  ulong local_290;
  ulong uStack_288;
  ulong local_280;
  ulong uStack_278;
  ulong local_270;
  ulong uStack_268;
  undefined1 auStack_258 [24];
  long *local_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong local_220;
  ulong uStack_218;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 local_178;
  undefined1 local_170;
  undefined1 local_168;
  byte local_160;
  undefined4 local_158;
  undefined3 uStack_154;
  undefined4 local_14c;
  undefined3 uStack_148;
  undefined4 local_145;
  undefined3 uStack_141;
  undefined4 local_13e;
  undefined3 uStack_13a;
  undefined4 local_137;
  undefined3 uStack_133;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined1 *puStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  
  uStack_a8 = param_2[0x12];
  local_b0 = param_2[0x11];
  uStack_98 = param_2[0x14];
  uStack_a0 = param_2[0x13];
  uStack_88 = param_2[0x16];
  local_90 = param_2[0x15];
  local_80 = param_2[0x17];
  plStack_e8 = (long *)param_2[10];
  local_f0 = param_2[9];
  puStack_d8 = (undefined1 *)param_2[0xc];
  uStack_e0 = param_2[0xb];
  uStack_c8 = param_2[0xe];
  local_d0 = param_2[0xd];
  uStack_b8 = param_2[0x10];
  uStack_c0 = param_2[0xf];
  uStack_128 = param_2[2];
  local_130 = param_2[1];
  uStack_118 = param_2[4];
  uStack_120 = param_2[3];
  uStack_108 = param_2[6];
  local_110 = param_2[5];
  uStack_f8 = param_2[8];
  uStack_100 = param_2[7];
  local_168 = 1;
  local_170 = 1;
  local_178 = 1;
  bVar14 = 0;
  puVar8 = param_2;
  FUN_10000f468();
  if (DAT_100a73b60 != -1) {
    puVar8 = (ulong *)&DAT_100a73b60;
    bVar14 = 0;
    _swift_once();
  }
  lVar10 = DAT_100b360a8;
  FUN_10000e0f4();
  uVar3 = *(undefined1 *)(*(long *)(lVar10 + 0x50) + 0x10);
  puVar9 = puVar8;
  FUN_1003b2720();
  uVar15 = *puVar9;
  uVar18 = uVar15;
  _swift_retain();
  bVar7 = (byte)uVar18;
  FUN_10039a1b8();
  _swift_release(uVar15);
  uVar15 = *puVar9;
  uVar18 = uVar15;
  _swift_retain();
  FUN_10039a5f0();
  _swift_release();
  bVar1 = 0 < (long)uVar18;
  FUN_1000c09f0();
  local_160 = bVar14 & 1;
  local_3e0 = auStack_258;
  _swift_beginAccess(unaff_x20 + 0x10,local_3e0,0,0);
  lVar10 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(0xe000000000000000);
LAB_10000e58c:
    local_3e0 = (undefined1 *)0xe000000000000000;
    uVar18 = 0;
  }
  else {
    FUN_1000c7c50();
    uVar18 = 0;
    FUN_10020b8f4();
    _swift_release(lVar10);
    _swift_bridgeObjectRelease(0xe000000000000000);
    if (local_3e0 == (undefined1 *)0x0) goto LAB_10000e58c;
  }
  uVar11 = 0;
  FUN_1003a8798();
  FUN_1003a793c();
  uVar2 = 1;
  if ((uVar11 & 1) != 0) {
    uVar2 = 2;
  }
  local_168 = 1;
  plVar12 = (long *)0x0;
  FUN_1003a9990();
  FUN_1003a965c();
  local_170 = 1;
  if (((ulong)plVar12 & 1) == 0) {
    uVar11 = 1;
    plVar12 = (long *)0x1;
    FUN_10010be48();
  }
  else {
    uVar11 = 2;
  }
  bVar14 = (byte)puVar8 & 1;
  FUN_1003db8c4();
  (**(code **)(*plVar12 + 0x108))(&local_240);
  _swift_release();
  plVar6 = local_240;
  if (local_240 == (long *)0x0) {
LAB_10000e634:
    local_3b8 = 1;
  }
  else {
    (**(code **)(*local_240 + 0xa0))();
    _swift_release(plVar6);
    if (((ulong)plVar12 & 1) == 0) goto LAB_10000e634;
    local_3b8 = 2;
  }
  local_178 = 1;
  plVar12 = (long *)(unaff_x20 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (plVar12 == (long *)0x0) goto LAB_10000e728;
  FUN_1000c7b64();
  uVar16 = plVar12[0xd];
  bVar4 = *(byte *)(plVar12 + 0xe);
  bVar5 = *(byte *)((long)plVar12 + 0x71);
  _swift_release();
  if ((bVar5 & 1) != 0) goto LAB_10000e728;
  if ((bVar4 & 1) == 0) {
    if (uVar16 != 2) goto LAB_10000e728;
  }
  else if (uVar16 < 2) goto LAB_10000e728;
  FUN_1003db8c4();
  (**(code **)(*plVar12 + 0x108))(&local_240);
  _swift_release();
  if (local_240 == (long *)0x0) {
LAB_10000e718:
    local_3b8 = 1;
  }
  else {
    (**(code **)(*local_240 + 0xb8))();
    _swift_release(local_240);
    if (((ulong)plVar12 & 1) == 0) goto LAB_10000e718;
    local_3b8 = 2;
  }
  local_178 = 1;
LAB_10000e728:
  uVar17 = *param_2;
  puStack_330 = local_3e0;
  local_328 = local_137 << 8;
  uStack_324 = CONCAT31(uStack_133,local_137._3_1_);
  uStack_318 = CONCAT31((int3)local_13e,local_160);
  uStack_314 = CONCAT31(uStack_13a,(char)((uint)local_13e >> 0x18));
  local_308 = CONCAT31((int3)local_145,local_168);
  local_304 = CONCAT31(uStack_141,(char)((uint)local_145 >> 0x18));
  uStack_2f8 = CONCAT31((int3)local_14c,local_170);
  uStack_2f4 = CONCAT31(uStack_148,(char)((uint)local_14c >> 0x18));
  local_2f0 = local_3b8;
  uStack_2e8 = CONCAT31((int3)local_158,local_178);
  uStack_2e4 = CONCAT31(uStack_154,(char)((uint)local_158 >> 0x18));
  local_2d0 = CONCAT44(uStack_33c,CONCAT13(bVar1,CONCAT12(bVar7,CONCAT11(uVar3,(byte)puVar8)))) &
              0xffffffffff01ff01;
  uStack_2b8 = CONCAT44(uStack_324,local_328);
  uStack_2d8 = 0xc000000000000000;
  local_2e0 = 0;
  uStack_2a8 = CONCAT44(uStack_314,uStack_318);
  uStack_298 = CONCAT44(local_304,local_308);
  uStack_278 = CONCAT44(uStack_2e4,uStack_2e8);
  local_280 = local_3b8;
  uStack_268 = 0xc000000000000000;
  local_270 = 0;
  uStack_288 = CONCAT44(uStack_2f4,uStack_2f8);
  local_2c0 = local_3e0;
  uStack_238 = uStack_e0;
  local_240 = plStack_e8;
  uStack_228 = local_d0;
  uStack_230 = (ulong)puStack_d8;
  uStack_1e8 = local_90;
  local_1f0 = uStack_98;
  uStack_1d8 = local_80;
  uStack_1e0 = uStack_88;
  uStack_208 = local_b0;
  local_210 = uStack_b8;
  uStack_1f8 = uStack_a0;
  uStack_200 = uStack_a8;
  uStack_218 = uStack_c0;
  local_220 = uStack_c8;
  local_340 = bVar14;
  uStack_33f = uVar3;
  bStack_33e = bVar7 & 1;
  uStack_33d = bVar1;
  uStack_338 = uVar18;
  local_320 = uVar15;
  local_310 = uVar2;
  local_300 = uVar11;
  uStack_2c8 = uVar18;
  local_2b0 = uVar15;
  local_2a0 = uVar2;
  local_290 = uVar11;
  FUN_10000f4fc(&local_340,&local_3b0);
  FUN_10000f538(&local_240);
  uStack_a0 = uStack_288;
  uStack_a8 = local_290;
  local_90 = uStack_278;
  uStack_98 = local_280;
  local_80 = uStack_268;
  uStack_88 = local_270;
  uStack_e0 = uStack_2c8;
  plStack_e8 = (long *)local_2d0;
  local_d0 = uStack_2b8;
  puStack_d8 = local_2c0;
  uStack_c0 = uStack_2a8;
  uStack_c8 = local_2b0;
  local_b0 = uStack_298;
  uStack_b8 = local_2a0;
  uVar16 = uVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar13 = uVar17;
  if ((uVar16 & 1) == 0) {
    uVar13 = 0;
    FUN_100033e10(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
  }
  uVar16 = *(ulong *)(uVar13 + 0x10);
  uVar17 = uVar13;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar16) {
    uVar17 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    FUN_100033e10(uVar17,uVar16 + 1,1,uVar13);
  }
  *(ulong *)(uVar17 + 0x10) = uVar16 + 1;
  lVar10 = uVar17 + uVar16 * 0x10;
  *(undefined8 *)(lVar10 + 0x20) = 2;
  *(undefined1 *)(lVar10 + 0x28) = 1;
  puStack_3a0 = local_3e0;
  local_398 = 0;
  local_388 = local_160;
  local_378 = local_168;
  local_368 = local_170;
  local_360 = local_3b8;
  local_358 = local_178;
  uStack_357 = local_158;
  uStack_348 = 0xc000000000000000;
  local_350 = 0;
  local_3b0 = bVar14;
  local_3af = uVar3;
  local_3ae = bVar7 & 1;
  local_3ad = bVar1;
  local_3a8 = uVar18;
  local_390 = uVar15;
  local_380 = uVar2;
  local_370 = uVar11;
  FUN_10000f580(&local_3b0);
  param_1[0x12] = uStack_a8;
  param_1[0x11] = local_b0;
  param_1[0x14] = uStack_98;
  param_1[0x13] = uStack_a0;
  param_1[0x16] = uStack_88;
  param_1[0x15] = local_90;
  param_1[10] = (ulong)plStack_e8;
  param_1[9] = local_f0;
  param_1[0xc] = (ulong)puStack_d8;
  param_1[0xb] = uStack_e0;
  param_1[0xe] = uStack_c8;
  param_1[0xd] = local_d0;
  param_1[0x10] = uStack_b8;
  param_1[0xf] = uStack_c0;
  param_1[2] = uStack_128;
  param_1[1] = local_130;
  param_1[4] = uStack_118;
  param_1[3] = uStack_120;
  param_1[6] = uStack_108;
  param_1[5] = local_110;
  *param_1 = uVar17;
  param_1[0x17] = local_80;
  param_1[8] = uStack_f8;
  param_1[7] = uStack_100;
  return;
}

