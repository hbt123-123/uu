// rea decompile_all
// name: FUN_100063a80
// address: 0x100063a80
// body: available
// range: 0x100063a80-0x100063fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063a80(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long param_8,
                  undefined8 *param_9,byte param_10,undefined4 param_11,long param_12,long param_13)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long alStack_360 [3];
  undefined1 auStack_348 [8];
  long alStack_340 [2];
  long local_330;
  ulong local_328;
  undefined8 local_320;
  long local_318;
  long lStack_310;
  undefined8 local_308;
  long local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  code *local_2e0;
  long local_2d8;
  undefined8 local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  undefined8 *local_2b0;
  long local_2a8;
  long local_2a0;
  undefined8 local_298;
  long local_290;
  long local_288;
  long lStack_280;
  uint local_274;
  undefined8 local_270;
  long local_268;
  undefined8 local_260;
  uint local_254;
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
  
  local_270 = *param_9;
  local_318 = param_9[1];
  local_2f8 = param_9[2];
  local_300 = param_9[3];
  local_308 = param_9[4];
  lStack_310 = param_9[5];
  local_274 = (uint)*(byte *)(param_9 + 6);
  local_320 = param_9[7];
  local_2e8 = param_9[8];
  lVar2 = 0;
  local_330 = param_8;
  local_328 = param_2;
  local_2b0 = param_1;
  local_254 = param_7;
  __sSqMa(0,param_12);
  local_288 = *(long *)(lVar2 + -8);
  local_268 = (long)&local_330 - (*(long *)(local_288 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_2a8 = *(long *)(param_12 + -8);
  local_2d8 = *(long *)(local_2a8 + 0x40);
  lVar14 = local_268 - (local_2d8 + 0xfU & 0xfffffffffffffff0);
  local_2e0 = *(code **)(local_2a8 + 0x10);
  lStack_280 = lVar2;
  (*local_2e0)(lVar14,param_3,param_12);
  lVar2 = lVar14;
  lVar4 = param_12;
  local_2c0 = lVar14;
  __sSS10describingSSx_tclufC();
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  local_260 = param_4;
  local_250 = param_6;
  FUN_100096cd8();
  local_290 = param_13;
  local_2c8 = param_12;
  local_2b8 = lVar2;
  local_298 = param_3;
  (**(code **)(param_13 + 0x18))(param_3,param_12,param_13);
  local_2d0 = param_3;
  local_2a0 = lVar4;
  if ((local_254 & 1) == 0) {
LAB_100063c54:
    FUN_1000133cc(param_9,&local_1c0,&DAT_100104038,&DAT_1000d3b60);
    lVar9 = local_300;
    lVar2 = local_318;
    uVar11 = local_320;
    lVar13 = lStack_310;
  }
  else {
    if ((long)local_328 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100063fb8);
      (*pcVar1)();
    }
    if (*(ulong *)(local_330 + 0x10) <= local_328) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100063fbc);
      (*pcVar1)();
    }
    lVar4 = local_330 + local_328 * 0x48;
    lVar2 = *(long *)(lVar4 + 0x28);
    if (lVar2 == 0) goto LAB_100063c54;
    uVar11 = *(undefined8 *)(lVar4 + 0x58);
    local_2e8 = *(undefined8 *)(lVar4 + 0x60);
    local_274 = (uint)*(byte *)(lVar4 + 0x50);
    local_308 = *(undefined8 *)(lVar4 + 0x40);
    lVar13 = *(long *)(lVar4 + 0x48);
    local_2f8 = *(undefined8 *)(lVar4 + 0x30);
    lVar9 = *(undefined8 *)(lVar4 + 0x38);
    local_270 = *(undefined8 *)(lVar4 + 0x20);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(lVar9);
  }
  puVar3 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = local_260;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = local_250;
  local_2f0 = param_4;
  if (lVar2 == 0) {
    local_270 = 0;
    uVar11 = 0;
    uVar15 = 0;
    uVar6 = 0;
    uVar10 = 0;
    local_300 = -0x2000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar2);
    uVar6 = local_2f8;
    uVar10 = lVar9;
    uVar15 = local_2e8;
    local_300 = lVar2;
  }
  local_2f8 = CONCAT44(local_2f8._4_4_,(uint)param_10);
  local_2e8 = param_5;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(local_250);
  FUN_10005fa9c();
  if ((lVar2 == 0) || (lVar13 == 0)) {
    _swift_bridgeObjectRelease(0);
    uVar7 = 0;
    if (lVar2 == 0) {
      uVar8 = 0;
      lVar13 = -0x2000000000000000;
      goto LAB_100063d8c;
    }
    lVar13 = -0x2000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar13);
    uVar7 = local_308;
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar9);
  uVar8 = local_274;
LAB_100063d8c:
  local_220 = ((byte)local_254 ^ 0xff) & 1;
  local_f0 = 1;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_c0 = local_270;
  lStack_b8 = local_300;
  local_1d8 = (undefined1)uVar8;
  local_78 = 0;
  uStack_70 = 0xe000000000000000;
  local_248 = 1;
  uStack_240 = 0;
  local_238 = 0;
  local_228 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_218 = local_270;
  lStack_210 = local_300;
  local_1d0 = 0;
  uStack_1c8 = 0xe000000000000000;
  puStack_230 = puVar3;
  local_208 = uVar6;
  uStack_200 = uVar10;
  local_1f8 = uVar11;
  uStack_1f0 = uVar15;
  local_1e8 = uVar7;
  lStack_1e0 = lVar13;
  puStack_d8 = puVar3;
  local_c8 = local_220;
  local_b0 = uVar6;
  uStack_a8 = uVar10;
  local_a0 = uVar11;
  uStack_98 = uVar15;
  local_90 = uVar7;
  lStack_88 = lVar13;
  local_80 = local_1d8;
  FUN_100064cb0(&local_f0,&local_1c0);
  FUN_100064cec(&local_248);
  lVar9 = local_2a8;
  lVar4 = local_2c8;
  (**(code **)(local_2a8 + 0x38))(local_268,1,1,local_2c8);
  lVar13 = local_2c0;
  (*local_2e0)(local_2c0,local_298,lVar4);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar12 = uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff);
  lVar2 = uVar12 + local_2d8;
  puVar3 = &DAT_1000f7ed8;
  _swift_allocObject(&DAT_1000f7ed8,lVar2 + 1,uVar5 | 7);
  uVar15 = local_250;
  uVar10 = local_260;
  uVar11 = local_2e8;
  *(long *)(puVar3 + 0x10) = lVar4;
  *(long *)(puVar3 + 0x18) = local_290;
  *(undefined8 *)(puVar3 + 0x20) = local_260;
  *(undefined8 *)(puVar3 + 0x28) = local_2e8;
  *(undefined8 *)(puVar3 + 0x30) = local_250;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar12,lVar13,lVar4);
  puVar3[lVar2] = (char)local_2f8;
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar15);
  *(long *)(lVar14 + -0x10) = lVar4;
  *(undefined1 *)(lVar14 + -0x18) = 0;
  *(code **)(lVar14 + -0x28) = FUN_100065270;
  *(undefined **)(lVar14 + -0x20) = puVar3;
  lVar4 = local_268;
  *(long *)(lVar14 + -0x30) = local_268;
  lVar2 = local_2a0;
  uVar6 = local_2d0;
  FUN_100064e50(&local_1c0,local_2d0,uVar10,uVar11,uVar15,local_2b8,local_2a0,&local_f0,0);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(local_2f0);
  _swift_bridgeObjectRelease(lVar2);
  _swift_release(puVar3);
  FUN_100064cec(&local_f0);
  (**(code **)(local_288 + 8))(lVar4,lStack_280);
  local_2b0[0x15] = uStack_118;
  local_2b0[0x14] = local_120;
  local_2b0[0x17] = uStack_108;
  local_2b0[0x16] = uStack_110;
  local_2b0[0x19] = uStack_f8;
  local_2b0[0x18] = local_100;
  local_2b0[0xd] = uStack_158;
  local_2b0[0xc] = local_160;
  local_2b0[0xf] = uStack_148;
  local_2b0[0xe] = uStack_150;
  local_2b0[0x11] = uStack_138;
  local_2b0[0x10] = local_140;
  local_2b0[0x13] = uStack_128;
  local_2b0[0x12] = uStack_130;
  local_2b0[5] = uStack_198;
  local_2b0[4] = local_1a0;
  local_2b0[7] = uStack_188;
  local_2b0[6] = uStack_190;
  local_2b0[9] = uStack_178;
  local_2b0[8] = local_180;
  local_2b0[0xb] = uStack_168;
  local_2b0[10] = uStack_170;
  local_2b0[1] = uStack_1b8;
  *local_2b0 = local_1c0;
  local_2b0[3] = uStack_1a8;
  local_2b0[2] = uStack_1b0;
  return;
}

