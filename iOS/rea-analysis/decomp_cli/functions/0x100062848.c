// rea decompile_all
// name: FUN_100062848
// address: 0x100062848
// body: available
// range: 0x100062848-0x100063087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100062848(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 *param_8,uint param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,byte param_13,
                  undefined4 param_14,long param_15,long param_16)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 auStack_3f0 [3];
  undefined1 auStack_3d8 [8];
  long alStack_3d0 [2];
  undefined1 auStack_3c0 [8];
  undefined8 local_3b8;
  long local_3b0;
  long local_3a8;
  undefined1 *local_3a0;
  long lStack_398;
  long local_390;
  ulong local_388;
  undefined8 local_380;
  long local_378;
  long local_370;
  long local_368;
  undefined8 local_360;
  undefined8 *local_358;
  long local_350;
  long local_348;
  long local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  long local_318;
  long local_310;
  uint local_304;
  undefined8 local_300;
  long local_2f8;
  code *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  uint local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  long local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  ulong local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined *puStack_288;
  undefined *local_280;
  byte local_278;
  undefined8 local_270;
  long lStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  long lStack_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined *local_128;
  byte local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  local_2d0 = *param_8;
  local_318 = param_8[1];
  local_320 = param_8[2];
  local_2c8 = param_8[3];
  local_2e0 = param_8[4];
  local_310 = param_8[5];
  local_304 = (uint)*(byte *)(param_8 + 6);
  uStack_330 = param_8[7];
  local_338 = param_8[8];
  lVar6 = 0xff;
  local_358 = param_1;
  local_2f8 = param_7;
  local_2d4 = param_9;
  local_2a8 = param_4;
  __sSqMa(0xff,param_15);
  uVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar6,0,0);
  local_3a8 = *(long *)(uVar7 - 8);
  local_3a0 = auStack_3c0 + -(*(long *)(local_3a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_340 = *(long *)(lVar6 + -8);
  uVar11 = *(long *)(local_340 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_3b0 = (long)local_3a0 - uVar11;
  local_390 = local_3b0 - uVar11;
  local_2c0 = *(long *)(param_15 + -8);
  local_370 = *(long *)(local_2c0 + 0x40);
  lVar18 = local_390 - (local_370 + 0xfU & 0xfffffffffffffff0);
  local_2f0 = *(code **)(local_2c0 + 0x10);
  lStack_398 = lVar6;
  local_388 = uVar7;
  (*local_2f0)(lVar18,param_3,param_15);
  lVar6 = lVar18;
  lVar14 = param_15;
  local_350 = lVar18;
  __sSS10describingSSx_tclufC();
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  uVar22 = local_2a8;
  local_2b0 = param_5;
  FUN_100096cd8();
  local_2b8 = param_15;
  local_348 = param_16;
  local_368 = lVar6;
  local_360 = uVar22;
  local_2e8 = param_3;
  (**(code **)(param_16 + 0x18))(param_3,param_15,param_16);
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100063084);
    (*pcVar15)();
  }
  if (*(ulong *)(local_2f8 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100063088);
    (*pcVar15)();
  }
  local_328 = param_11;
  local_2f8 = local_2f8 + param_2 * 0x48;
  lStack_b8 = *(long *)(local_2f8 + 0x28);
  local_c0 = *(undefined8 *)(local_2f8 + 0x20);
  uStack_a8 = *(undefined8 *)(local_2f8 + 0x38);
  local_b0 = *(undefined8 *)(local_2f8 + 0x30);
  lStack_98 = *(long *)(local_2f8 + 0x48);
  local_a0 = *(undefined8 *)(local_2f8 + 0x40);
  local_88 = *(undefined8 *)(local_2f8 + 0x58);
  local_90 = *(undefined8 *)(local_2f8 + 0x50);
  local_80 = *(undefined8 *)(local_2f8 + 0x60);
  local_300 = param_10;
  local_380 = param_3;
  local_378 = lVar14;
  local_2f8 = param_6;
  if (lStack_b8 == 0) {
    FUN_1000133cc(param_8,&local_218,&DAT_100104038,&DAT_1000d3b60);
    lVar14 = local_310;
    lVar6 = local_318;
    uVar22 = local_320;
    if ((local_2d4 & 1) != 0) goto LAB_100062a78;
LAB_100062b98:
    lVar16 = local_2b8;
    FUN_1000133cc(&local_c0,&local_218,&DAT_100104038,&DAT_1000d3b60);
    pcVar19 = *(code **)(local_2c0 + 0x30);
    _swift_bridgeObjectRetain(param_12);
  }
  else {
    local_304 = (uint)(byte)local_90;
    lVar14 = lStack_98;
    lVar6 = lStack_b8;
    uVar22 = local_b0;
    local_338 = local_80;
    uStack_330 = local_88;
    local_2e0 = local_a0;
    local_2d0 = local_c0;
    local_2c8 = uStack_a8;
    if ((local_2d4 & 1) == 0) goto LAB_100062b98;
LAB_100062a78:
    lVar16 = local_2b8;
    lVar5 = local_340;
    lVar4 = local_390;
    local_3b8 = param_12;
    local_320 = uVar22;
    local_318 = lVar6;
    local_310 = lVar14;
    (*local_2f0)(local_390,local_2e8,local_2b8);
    lVar6 = local_2c0;
    (**(code **)(local_2c0 + 0x38))(lVar4,0,1,lVar16);
    lVar3 = lStack_398;
    puVar2 = local_3a0;
    iVar1 = *(int *)(local_388 + 0x30);
    pcVar15 = *(code **)(lVar5 + 0x10);
    (*pcVar15)(local_3a0,lVar4,lStack_398);
    (*pcVar15)(puVar2 + iVar1,param_10,lVar3);
    pcVar19 = *(code **)(lVar6 + 0x30);
    puVar8 = puVar2;
    (*pcVar19)(puVar2,1,lVar16);
    lVar14 = local_3b0;
    if ((int)puVar8 == 1) {
      FUN_1000133cc(&local_c0,&local_218,&DAT_100104038,&DAT_1000d3b60);
      pcVar15 = *(code **)(lVar5 + 8);
      (*pcVar15)(lVar4,lVar3);
      puVar8 = puVar2 + iVar1;
      (*pcVar19)(puVar8,1,lVar16);
      if ((int)puVar8 == 1) {
        (*pcVar15)(puVar2,lVar3);
        lVar6 = local_318;
LAB_100062d20:
        param_6 = local_2f8;
        param_10 = local_300;
        lVar14 = local_310;
        param_12 = local_3b8;
        _swift_bridgeObjectRetain(local_3b8);
        uVar22 = local_320;
      }
      else {
LAB_100062c3c:
        (**(code **)(local_3a8 + 8))(puVar2,local_388);
        local_328 = 0;
        param_12 = 0;
        lVar14 = local_310;
        param_10 = local_300;
        param_6 = local_2f8;
        lVar6 = local_318;
        uVar22 = local_320;
      }
    }
    else {
      (*pcVar15)(local_3b0,puVar2,lVar3);
      puVar8 = puVar2 + iVar1;
      (*pcVar19)(puVar8,1,lVar16);
      lVar5 = local_2c0;
      lVar4 = local_350;
      if ((int)puVar8 == 1) {
        FUN_1000133cc(&local_c0,&local_218,&DAT_100104038,&DAT_1000d3b60);
        (**(code **)(local_340 + 8))(local_390,lVar3);
        (**(code **)(local_2c0 + 8))(lVar14,lVar16);
        goto LAB_100062c3c;
      }
      (**(code **)(local_2c0 + 0x20))(local_350,puVar2 + iVar1,lVar16);
      FUN_1000133cc(&local_c0,&local_218,&DAT_100104038,&DAT_1000d3b60);
      lVar9 = lVar14;
      __sSQ2eeoiySbx_xtFZTj(lVar14,lVar4,local_2b8,*(undefined8 *)(local_348 + 0x10));
      lVar16 = local_2b8;
      lVar6 = local_318;
      local_388 = CONCAT44(local_388._4_4_,(int)lVar9);
      pcVar15 = *(code **)(lVar5 + 8);
      (*pcVar15)(lVar4,local_2b8);
      pcVar21 = *(code **)(local_340 + 8);
      (*pcVar21)(local_390,lVar3);
      (*pcVar15)(lVar14,lVar16);
      (*pcVar21)(puVar2,lVar3);
      if ((local_388 & 1) != 0) goto LAB_100062d20;
      local_328 = 0;
      param_12 = 0;
      lVar14 = local_310;
      param_10 = local_300;
      param_6 = local_2f8;
      uVar22 = local_320;
    }
  }
  (*pcVar19)(param_10,1,lVar16);
  local_320 = CONCAT44(local_320._4_4_,(int)param_10);
  puVar10 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  uVar17 = local_2c8;
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined8 *)(puVar10 + 0x20) = local_2a8;
  *(undefined8 *)(puVar10 + 0x28) = local_2b0;
  *(long *)(puVar10 + 0x30) = param_6;
  if (lVar6 == 0) {
    local_2d0 = 0;
    uVar13 = 0;
    uVar20 = 0;
    uVar22 = 0;
    uVar17 = 0;
    local_310 = -0x2000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(local_2c8);
    _swift_bridgeObjectRetain(lVar6);
    uVar13 = uStack_330;
    uVar20 = local_338;
    local_310 = lVar6;
  }
  local_318 = CONCAT44(local_318._4_4_,(uint)param_13);
  _swift_bridgeObjectRetain(local_2b0);
  _swift_bridgeObjectRetain(param_6);
  FUN_10005fa9c();
  if ((lVar6 == 0) || (lVar14 == 0)) {
    _swift_bridgeObjectRelease(0);
    if (lVar6 == 0) {
      local_240 = 0;
      uVar12 = 0;
      lVar14 = -0x2000000000000000;
      goto LAB_100062e5c;
    }
    local_2e0 = 0;
    lVar14 = -0x2000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(local_2c8);
  local_240 = local_2e0;
  uVar12 = local_304;
LAB_100062e5c:
  local_2a0 = (ulong)((int)local_320 != 1);
  local_140 = local_328;
  local_278 = ((byte)local_2d4 ^ 0xff) & 1;
  local_128 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_118 = local_2d0;
  local_110 = local_310;
  local_230 = (undefined1)uVar12;
  local_d0 = 0;
  local_c8 = 0xe000000000000000;
  uStack_298 = local_328;
  local_280 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_270 = local_2d0;
  lStack_268 = local_310;
  local_228 = 0;
  uStack_220 = 0xe000000000000000;
  local_290 = param_12;
  puStack_288 = puVar10;
  local_260 = uVar22;
  uStack_258 = uVar17;
  local_250 = uVar13;
  uStack_248 = uVar20;
  lStack_238 = lVar14;
  local_148 = local_2a0;
  local_138 = param_12;
  local_130 = puVar10;
  local_120 = local_278;
  local_108 = uVar22;
  local_100 = uVar17;
  local_f8 = uVar13;
  local_f0 = uVar20;
  local_e8 = local_240;
  local_e0 = lVar14;
  local_d8 = local_230;
  FUN_100064cb0(&local_148,&local_218);
  FUN_100064cec(&local_2a0);
  lVar5 = local_2b8;
  lVar14 = local_350;
  (*local_2f0)(local_350,local_2e8,local_2b8);
  lVar4 = local_2c0;
  uVar7 = (ulong)*(byte *)(local_2c0 + 0x50);
  uVar11 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
  lVar6 = uVar11 + local_370;
  puVar10 = &DAT_1000f7f28;
  _swift_allocObject(&DAT_1000f7f28,lVar6 + 1,uVar7 | 7);
  uVar13 = local_2a8;
  uVar17 = local_2b0;
  lVar3 = local_2f8;
  *(long *)(puVar10 + 0x10) = lVar5;
  *(long *)(puVar10 + 0x18) = local_348;
  *(undefined8 *)(puVar10 + 0x20) = local_2a8;
  *(undefined8 *)(puVar10 + 0x28) = local_2b0;
  *(long *)(puVar10 + 0x30) = local_2f8;
  (**(code **)(lVar4 + 0x20))(puVar10 + uVar11,lVar14,lVar5);
  puVar10[lVar6] = (char)local_318;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(lVar3);
  *(long *)(lVar18 + -0x10) = lVar5;
  *(undefined1 *)(lVar18 + -0x18) = 0;
  *(code **)(lVar18 + -0x28) = FUN_10006576c;
  *(undefined **)(lVar18 + -0x20) = puVar10;
  *(undefined8 *)(lVar18 + -0x30) = local_300;
  lVar6 = local_378;
  uVar22 = local_380;
  FUN_100064e50(&local_218,local_380,uVar13,uVar17,lVar3,local_368,local_378,&local_148,0);
  _swift_bridgeObjectRelease(uVar22);
  _swift_bridgeObjectRelease(local_360);
  _swift_bridgeObjectRelease(lVar6);
  FUN_100064cec(&local_148);
  _swift_release(puVar10);
  local_358[0x15] = uStack_170;
  local_358[0x14] = local_178;
  local_358[0x17] = uStack_160;
  local_358[0x16] = uStack_168;
  local_358[0x19] = uStack_150;
  local_358[0x18] = local_158;
  local_358[0xd] = uStack_1b0;
  local_358[0xc] = local_1b8;
  local_358[0xf] = uStack_1a0;
  local_358[0xe] = uStack_1a8;
  local_358[0x11] = uStack_190;
  local_358[0x10] = local_198;
  local_358[0x13] = uStack_180;
  local_358[0x12] = uStack_188;
  local_358[5] = uStack_1f0;
  local_358[4] = local_1f8;
  local_358[7] = uStack_1e0;
  local_358[6] = uStack_1e8;
  local_358[9] = uStack_1d0;
  local_358[8] = local_1d8;
  local_358[0xb] = uStack_1c0;
  local_358[10] = uStack_1c8;
  local_358[1] = uStack_210;
  *local_358 = local_218;
  local_358[3] = uStack_200;
  local_358[2] = uStack_208;
  return;
}

