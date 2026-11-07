// rea decompile_all
// name: FUN_10005b088
// address: 0x10005b088
// body: available
// range: 0x10005b088-0x10005b3a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005b088(long *param_1,undefined4 param_2,code *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_340 [16];
  long *local_330;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined3 uStack_2b3;
  undefined8 uStack_2ab;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 uStack_233;
  undefined2 uStack_232;
  undefined1 uStack_22b;
  undefined7 uStack_22a;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1ab;
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
  int local_140;
  undefined3 uStack_133;
  undefined8 uStack_12b;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined2 uStack_82;
  undefined5 uStack_80;
  undefined1 uStack_7b;
  undefined7 uStack_7a;
  
  uVar4 = 0;
  lVar6 = *param_1;
  _swift_beginAccess(unaff_x20 + 0x70,&local_320,0x20,0);
  lVar5 = *(long *)(unaff_x20 + 0x70);
  if ((*(long *)(lVar5 + 0x10) == 0) || (lVar3 = lVar6, thunk_FUN_1001a2e54(), (uVar4 & 1) == 0)) {
    FUN_10007ec64(&local_1a0);
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x80);
    uStack_c8 = puVar1[5];
    local_d0 = puVar1[4];
    uStack_b8 = puVar1[7];
    uStack_c0 = puVar1[6];
    uStack_e8 = puVar1[1];
    local_f0 = *puVar1;
    uStack_d8 = puVar1[3];
    uStack_e0 = puVar1[2];
    uStack_a8 = puVar1[9];
    local_b0 = puVar1[8];
    uStack_98 = puVar1[0xb];
    local_a0 = puVar1[10];
    uVar7 = puVar1[0xd];
    uStack_90 = puVar1[0xc];
    uStack_7b = (undefined1)*(undefined8 *)((long)puVar1 + 0x75);
    uStack_7a = (undefined7)((ulong)*(undefined8 *)((long)puVar1 + 0x75) >> 8);
    uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
    uStack_88 = (undefined5)uVar7;
    local_83 = (undefined1)((ulong)uVar7 >> 0x28);
    uStack_82 = (undefined2)((ulong)uVar7 >> 0x30);
    _memmove(&local_1a0,puVar1,0x7d);
    FUN_100008290(&local_1a0);
    FUN_10007eca0(&local_f0,&local_2a0);
  }
  uStack_1d8 = uStack_158;
  local_1e0 = local_160;
  uStack_1c8 = uStack_148;
  uStack_1d0 = uStack_150;
  uStack_1ab = uStack_12b;
  uStack_218 = uStack_198;
  local_220 = local_1a0;
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1f8 = uStack_178;
  local_200 = local_180;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  iVar2 = (int)&local_220;
  FUN_10007ec80();
  local_83 = (undefined1)uStack_133;
  uStack_82 = (undefined2)((uint3)uStack_133 >> 8);
  uStack_7b = (undefined1)uStack_12b;
  uStack_7a = (undefined7)((ulong)uStack_12b >> 8);
  if (iVar2 == 1) {
    uStack_a8 = uStack_158;
    local_b0 = local_160;
    uStack_98 = uStack_148;
    local_a0 = uStack_150;
    uStack_e8 = uStack_198;
    local_f0 = local_1a0;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    local_d0 = local_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    FUN_100040bb4(&local_f0,&DAT_100a761f8,&DAT_10080a998);
    _swift_endAccess(&local_320);
  }
  else {
    uStack_a8 = uStack_158;
    local_b0 = local_160;
    uStack_98 = uStack_148;
    local_a0 = uStack_150;
    uStack_e8 = uStack_198;
    local_f0 = local_1a0;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    local_d0 = local_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    _swift_endAccess(&local_320);
    FUN_100040bb4(&local_f0,&DAT_100a761f8,&DAT_10080a998);
    lStack_118 = param_1[0xc];
    local_120 = param_1[0xb];
    lStack_108 = param_1[0xe];
    lStack_110 = param_1[0xd];
    local_100 = (undefined4)param_1[0xf];
    if (local_140 == (int)lStack_118) {
      _swift_beginAccess(unaff_x20 + 0x70,&local_2a0,0x21,0);
      FUN_10004b9a4(&local_320,lVar6);
      _swift_endAccess(&local_2a0);
      uStack_258 = uStack_2d8;
      local_260 = local_2e0;
      uStack_248 = uStack_2c8;
      uStack_250 = uStack_2d0;
      local_240 = local_2c0;
      uStack_22b = (undefined1)uStack_2ab;
      uStack_22a = (undefined7)((ulong)uStack_2ab >> 8);
      uStack_233 = (undefined1)uStack_2b3;
      uStack_232 = (undefined2)((uint3)uStack_2b3 >> 8);
      uStack_298 = uStack_318;
      local_2a0 = local_320;
      uStack_288 = uStack_308;
      uStack_290 = uStack_310;
      uStack_278 = uStack_2f8;
      local_280 = local_300;
      uStack_268 = uStack_2e8;
      uStack_270 = uStack_2f0;
      FUN_100040bb4(&local_2a0,&DAT_100a761f8,&DAT_10080a998);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_330 = &local_120;
      FUN_1003fb48c(thunk_FUN_10007ec98,auStack_340,0xd0000000000000a5,0x800000010087d1a0,
                    0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
      FUN_100004030(local_120);
    }
  }
  local_2a0 = CONCAT44(local_2a0._4_4_,param_2);
  FUN_10007f2b4(&local_2a0);
  uStack_a8 = uStack_258;
  local_b0 = local_260;
  uStack_98 = uStack_248;
  local_a0 = uStack_250;
  local_83 = uStack_233;
  uStack_90 = local_240;
  uStack_7a = uStack_22a;
  uStack_82 = uStack_232;
  uStack_7b = uStack_22b;
  uStack_e8 = uStack_298;
  local_f0 = local_2a0;
  uStack_d8 = uStack_288;
  uStack_e0 = uStack_290;
  uStack_c8 = uStack_278;
  local_d0 = local_280;
  uStack_b8 = uStack_268;
  uStack_c0 = uStack_270;
  (*param_3)(&local_f0);
  return;
}

