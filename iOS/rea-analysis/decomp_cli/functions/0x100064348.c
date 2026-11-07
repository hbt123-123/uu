// rea decompile_all
// name: FUN_100064348
// address: 0x100064348
// body: available
// range: 0x100064348-0x100064823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100064348(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long param_8,
                  undefined8 *param_9,undefined8 param_10,long param_11,long param_12)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_350 [3];
  undefined1 auStack_338 [8];
  undefined8 auStack_330 [2];
  long local_320;
  ulong local_318;
  undefined8 local_310;
  long local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 *local_2e0;
  code *local_2d8;
  long local_2d0;
  long local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  uint local_284;
  undefined8 local_280;
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined *puStack_230;
  undefined *local_228;
  byte local_220;
  undefined8 local_218;
  long lStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  long lStack_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  byte local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_280 = *param_9;
  local_308 = param_9[1];
  local_2f8 = param_9[2];
  local_278 = param_9[3];
  uStack_300 = param_9[4];
  local_270 = param_9[5];
  local_284 = (uint)*(byte *)(param_9 + 6);
  local_310 = param_9[7];
  local_2e8 = param_9[8];
  local_2b8 = *(long *)(param_11 + -8);
  local_2d0 = *(long *)(local_2b8 + 0x40);
  lVar1 = -(local_2d0 + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&local_320 + lVar1;
  local_2d8 = *(code **)(local_2b8 + 0x10);
  local_320 = param_8;
  local_318 = param_2;
  local_2e0 = param_1;
  local_25c = param_7;
  (*local_2d8)(lVar5,param_3,param_11);
  lVar11 = param_11;
  local_2c8 = lVar5;
  __sSS10describingSSx_tclufC();
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  local_268 = param_4;
  local_258 = param_6;
  FUN_100096cd8();
  local_2b0 = param_11;
  local_298 = param_12;
  local_2a8 = param_3;
  local_2a0 = lVar5;
  (**(code **)(param_12 + 0x18))(param_3,param_11,param_12);
  local_2c0 = param_3;
  local_290 = lVar11;
  if ((local_25c & 1) == 0) {
LAB_1000644e8:
    FUN_1000133cc(param_9,&local_1c0,&DAT_100104038,&DAT_1000d3b60);
    uVar4 = uStack_300;
    lVar11 = local_308;
    uVar13 = local_310;
  }
  else {
    if ((long)local_318 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100064820);
      (*pcVar2)();
    }
    if (*(ulong *)(local_320 + 0x10) <= local_318) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100064824);
      (*pcVar2)();
    }
    lVar5 = local_320 + local_318 * 0x48;
    lVar11 = *(long *)(lVar5 + 0x28);
    if (lVar11 == 0) goto LAB_1000644e8;
    uVar13 = *(undefined8 *)(lVar5 + 0x58);
    local_2e8 = *(undefined8 *)(lVar5 + 0x60);
    local_284 = (uint)*(byte *)(lVar5 + 0x50);
    uVar4 = *(undefined8 *)(lVar5 + 0x40);
    local_270 = *(long *)(lVar5 + 0x48);
    local_2f8 = *(undefined8 *)(lVar5 + 0x30);
    uVar10 = *(undefined8 *)(lVar5 + 0x38);
    local_280 = *(undefined8 *)(lVar5 + 0x20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar11);
    local_278 = uVar10;
    _swift_bridgeObjectRetain(uVar10);
  }
  puVar3 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  uVar10 = local_278;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = local_268;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = local_258;
  local_2f0 = param_4;
  if (lVar11 == 0) {
    local_280 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar8 = 0;
    uVar10 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(local_278);
    _swift_bridgeObjectRetain(lVar11);
    uVar8 = local_2f8;
    lVar5 = lVar11;
    uVar14 = local_2e8;
  }
  local_2f8 = param_10;
  local_2e8 = param_5;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(local_258);
  FUN_10005fa9c();
  if ((lVar11 == 0) || (local_270 == 0)) {
    _swift_bridgeObjectRelease(0);
    uVar4 = 0;
    if (lVar11 == 0) {
      uVar7 = 0;
      lVar9 = -0x2000000000000000;
      goto LAB_10006461c;
    }
    lVar9 = -0x2000000000000000;
  }
  else {
    lVar9 = local_270;
    _swift_bridgeObjectRetain();
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(lVar11);
  _swift_bridgeObjectRelease(local_278);
  uVar7 = local_284;
LAB_10006461c:
  local_220 = ((byte)local_25c ^ 0xff) & 1;
  local_f0 = 1;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_c0 = local_280;
  local_1d8 = (undefined1)uVar7;
  local_78 = 0;
  uStack_70 = 0xe000000000000000;
  local_248 = 1;
  uStack_240 = 0;
  local_238 = 0;
  local_228 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_218 = local_280;
  local_1d0 = 0;
  uStack_1c8 = 0xe000000000000000;
  puStack_230 = puVar3;
  lStack_210 = lVar5;
  local_208 = uVar8;
  uStack_200 = uVar10;
  local_1f8 = uVar13;
  uStack_1f0 = uVar14;
  local_1e8 = uVar4;
  lStack_1e0 = lVar9;
  puStack_d8 = puVar3;
  local_c8 = local_220;
  lStack_b8 = lVar5;
  local_b0 = uVar8;
  uStack_a8 = uVar10;
  local_a0 = uVar13;
  uStack_98 = uVar14;
  local_90 = uVar4;
  lStack_88 = lVar9;
  local_80 = local_1d8;
  FUN_100064cb0(&local_f0,&local_1c0);
  FUN_100064cec(&local_248);
  lVar9 = local_2b0;
  lVar11 = local_2c8;
  local_250 = local_2f8;
  (*local_2d8)(local_2c8,local_2a8,local_2b0);
  lVar5 = local_2b8;
  uVar6 = (ulong)*(byte *)(local_2b8 + 0x50);
  uVar12 = uVar6 + 0x38 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1000f7e88;
  _swift_allocObject(&DAT_1000f7e88,uVar12 + local_2d0,uVar6 | 7);
  uVar8 = local_258;
  uVar10 = local_268;
  uVar13 = local_2e8;
  *(long *)(puVar3 + 0x10) = lVar9;
  *(long *)(puVar3 + 0x18) = local_298;
  *(undefined8 *)(puVar3 + 0x20) = local_268;
  *(undefined8 *)(puVar3 + 0x28) = local_2e8;
  *(undefined8 *)(puVar3 + 0x30) = local_258;
  (**(code **)(lVar5 + 0x20))(puVar3 + uVar12,lVar11,lVar9);
  uVar4 = 0;
  __sSaMa(0,lVar9);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar8);
  *(undefined8 *)((long)auStack_330 + lVar1) = uVar4;
  auStack_338[lVar1] = 0;
  *(code **)((long)alStack_350 + lVar1 + 8) = FUN_100064d8c;
  *(undefined **)((long)alStack_350 + lVar1 + 0x10) = puVar3;
  *(undefined8 **)((long)alStack_350 + lVar1) = &local_250;
  lVar1 = local_290;
  uVar4 = local_2c0;
  FUN_100064e50(&local_1c0,local_2c0,uVar10,uVar13,uVar8,local_2a0,local_290,&local_f0,0);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(local_2f0);
  _swift_bridgeObjectRelease(lVar1);
  FUN_100064cec(&local_f0);
  _swift_release(puVar3);
  local_2e0[0x15] = uStack_118;
  local_2e0[0x14] = local_120;
  local_2e0[0x17] = uStack_108;
  local_2e0[0x16] = uStack_110;
  local_2e0[0x19] = uStack_f8;
  local_2e0[0x18] = local_100;
  local_2e0[0xd] = uStack_158;
  local_2e0[0xc] = local_160;
  local_2e0[0xf] = uStack_148;
  local_2e0[0xe] = uStack_150;
  local_2e0[0x11] = uStack_138;
  local_2e0[0x10] = local_140;
  local_2e0[0x13] = uStack_128;
  local_2e0[0x12] = uStack_130;
  local_2e0[5] = uStack_198;
  local_2e0[4] = local_1a0;
  local_2e0[7] = uStack_188;
  local_2e0[6] = uStack_190;
  local_2e0[9] = uStack_178;
  local_2e0[8] = local_180;
  local_2e0[0xb] = uStack_168;
  local_2e0[10] = uStack_170;
  local_2e0[1] = uStack_1b8;
  *local_2e0 = local_1c0;
  local_2e0[3] = uStack_1a8;
  local_2e0[2] = uStack_1b0;
  return;
}

