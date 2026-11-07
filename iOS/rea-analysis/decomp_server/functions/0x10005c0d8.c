// rea decompile_all
// name: FUN_10005c0d8
// address: 0x10005c0d8
// body: available
// range: 0x10005c0d8-0x10005c4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c0d8(ulong param_1,long param_2,long *param_3,code *param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_3c0 [16];
  long *local_3b0;
  long local_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long local_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long local_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_32b;
  long local_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long local_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long local_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2ab;
  long local_298;
  long lStack_290;
  long local_288;
  long lStack_280;
  long local_278;
  long lStack_270;
  long local_268;
  long lStack_260;
  long local_258;
  long lStack_250;
  long local_248;
  long lStack_240;
  int local_238;
  undefined4 uStack_234;
  undefined5 uStack_230;
  undefined3 uStack_22b;
  undefined5 uStack_228;
  undefined8 uStack_223;
  undefined1 auStack_218 [24];
  long local_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined5 uStack_198;
  undefined1 uStack_193;
  undefined2 uStack_192;
  undefined5 uStack_190;
  undefined1 uStack_18b;
  undefined7 uStack_18a;
  undefined1 auStack_178 [24];
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  undefined5 uStack_f8;
  undefined1 local_f3;
  undefined2 uStack_f2;
  undefined5 uStack_f0;
  undefined1 uStack_eb;
  undefined7 uStack_ea;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 uStack_6b;
  
  lStack_98 = param_3[9];
  local_a0 = param_3[8];
  lStack_88 = param_3[0xb];
  lStack_90 = param_3[10];
  local_80 = param_3[0xc];
  uStack_78 = (undefined5)param_3[0xd];
  uStack_6b = *(undefined8 *)((long)param_3 + 0x75);
  uStack_73 = (undefined3)*(undefined8 *)((long)param_3 + 0x6d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x6d) >> 0x18);
  lStack_d8 = param_3[1];
  local_e0 = *param_3;
  lStack_c8 = param_3[3];
  lStack_d0 = param_3[2];
  lStack_b8 = param_3[5];
  local_c0 = param_3[4];
  lStack_a8 = param_3[7];
  lStack_b0 = param_3[6];
  _swift_beginAccess(param_2 + 0x10,auStack_178,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  if ((param_1 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_3b0 = param_3;
    FUN_1003fb4ec(thunk_FUN_10007f268,auStack_3c0,0xd0000000000000a5,0x800000010087d850,
                  0xd00000000000002a,0x800000010087dea0,0x468,0);
    FUN_10005b088(param_3,0x2714,param_4,param_5);
    goto LAB_10005c490;
  }
  if (*(long *)(param_2 + 0xb8) == param_6) {
    puVar4 = auStack_218;
    _swift_beginAccess(param_2 + 0x70,puVar4,0x20,0);
    lVar5 = *(long *)(param_2 + 0x70);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_10005c294:
      FUN_10007ec64(&local_298);
    }
    else {
      lVar3 = *param_3;
      thunk_FUN_1001a2e54();
      if (((ulong)puVar4 & 1) == 0) goto LAB_10005c294;
      plVar1 = (long *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x80);
      lStack_138 = plVar1[5];
      local_140 = plVar1[4];
      lStack_128 = plVar1[7];
      lStack_130 = plVar1[6];
      lStack_158 = plVar1[1];
      local_160 = *plVar1;
      lStack_148 = plVar1[3];
      lStack_150 = plVar1[2];
      lStack_118 = plVar1[9];
      local_120 = plVar1[8];
      lStack_108 = plVar1[0xb];
      local_110 = plVar1[10];
      lVar5 = plVar1[0xd];
      lStack_100 = plVar1[0xc];
      uStack_eb = (undefined1)*(undefined8 *)((long)plVar1 + 0x75);
      uStack_ea = (undefined7)((ulong)*(undefined8 *)((long)plVar1 + 0x75) >> 8);
      uStack_f0 = (undefined5)((ulong)*(undefined8 *)((long)plVar1 + 0x6d) >> 0x18);
      uStack_f8 = (undefined5)lVar5;
      local_f3 = (undefined1)((ulong)lVar5 >> 0x28);
      uStack_f2 = (undefined2)((ulong)lVar5 >> 0x30);
      _memmove(&local_298,plVar1,0x7d);
      FUN_100008290(&local_298);
      FUN_10007eca0(&local_160,&local_200);
    }
    lStack_2d8 = lStack_250;
    local_2e0 = local_258;
    lStack_2c8 = lStack_240;
    lStack_2d0 = local_248;
    uStack_2ab = uStack_223;
    lStack_318 = lStack_290;
    local_320 = local_298;
    lStack_308 = lStack_280;
    lStack_310 = local_288;
    lStack_2f8 = lStack_270;
    local_300 = local_278;
    lStack_2e8 = lStack_260;
    lStack_2f0 = local_268;
    iVar2 = (int)&local_320;
    FUN_10007ec80();
    if (iVar2 == 1) {
      lStack_118 = lStack_250;
      local_120 = local_258;
      lStack_108 = lStack_240;
      local_110 = local_248;
      lStack_100 = CONCAT44(uStack_234,local_238);
      uStack_f8 = uStack_230;
      uStack_eb = (undefined1)uStack_223;
      uStack_ea = (undefined7)((ulong)uStack_223 >> 8);
      local_f3 = (undefined1)uStack_22b;
      uStack_f2 = (undefined2)((uint3)uStack_22b >> 8);
      uStack_f0 = uStack_228;
      lStack_158 = lStack_290;
      local_160 = local_298;
      lStack_148 = lStack_280;
      lStack_150 = local_288;
      lStack_138 = lStack_270;
      local_140 = local_278;
      lStack_128 = lStack_260;
      lStack_130 = local_268;
      FUN_100040bb4(&local_160,&DAT_100a761f8,&DAT_10080a998);
      _swift_endAccess(auStack_218);
      goto LAB_10005c3d0;
    }
    lStack_358 = lStack_250;
    local_360 = local_258;
    lStack_348 = lStack_240;
    lStack_350 = local_248;
    uStack_32b = uStack_223;
    lStack_398 = lStack_290;
    local_3a0 = local_298;
    lStack_388 = lStack_280;
    lStack_390 = local_288;
    lStack_378 = lStack_270;
    local_380 = local_278;
    lStack_368 = lStack_260;
    lStack_370 = local_268;
    _swift_endAccess(auStack_218);
    FUN_100040bb4(&local_3a0,&DAT_100a761f8,&DAT_10080a998);
    if (local_238 != (int)param_3[0xc]) goto LAB_10005c3d0;
    lStack_1b8 = lStack_98;
    local_1c0 = local_a0;
    lStack_1a8 = lStack_88;
    lStack_1b0 = lStack_90;
    uStack_198 = uStack_78;
    local_1a0 = local_80;
    uStack_18b = (undefined1)uStack_6b;
    uStack_18a = (undefined7)((ulong)uStack_6b >> 8);
    uStack_193 = (undefined1)uStack_73;
    uStack_192 = (undefined2)((uint3)uStack_73 >> 8);
    uStack_190 = uStack_70;
    lStack_1f8 = lStack_d8;
    local_200 = local_e0;
    lStack_1e8 = lStack_c8;
    lStack_1f0 = lStack_d0;
    lStack_1d8 = lStack_b8;
    local_1e0 = local_c0;
    lStack_1c8 = lStack_a8;
    lStack_1d0 = lStack_b0;
    FUN_10007f2c0(&local_200);
  }
  else {
LAB_10005c3d0:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_3b0 = param_3;
    FUN_1003fb4ec(thunk_FUN_10007f2ac,auStack_3c0,0xd0000000000000a5,0x800000010087d850,
                  0xd00000000000002a,0x800000010087dea0,0x472,0);
    local_200 = CONCAT44(local_200._4_4_,0x2713);
    FUN_10007f2b4(&local_200);
  }
  lStack_118 = lStack_1b8;
  local_120 = local_1c0;
  lStack_108 = lStack_1a8;
  local_110 = lStack_1b0;
  uStack_f8 = uStack_198;
  local_f3 = uStack_193;
  lStack_100 = local_1a0;
  uStack_ea = uStack_18a;
  uStack_f2 = uStack_192;
  uStack_f0 = uStack_190;
  uStack_eb = uStack_18b;
  lStack_158 = lStack_1f8;
  local_160 = local_200;
  lStack_148 = lStack_1e8;
  lStack_150 = lStack_1f0;
  lStack_138 = lStack_1d8;
  local_140 = local_1e0;
  lStack_128 = lStack_1c8;
  lStack_130 = lStack_1d0;
  (*param_4)(&local_160);
LAB_10005c490:
  _swift_release(param_2);
  return;
}

