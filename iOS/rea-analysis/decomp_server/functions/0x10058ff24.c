// rea decompile_all
// name: FUN_10058ff24
// address: 0x10058ff24
// body: available
// range: 0x10058ff24-0x100590133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058ff24(long param_1,undefined8 *param_2)

{
  int iVar1;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_370 [128];
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
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
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  undefined1 auStack_218 [24];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x10,auStack_e8,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar2);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_100,0,0);
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)iVar1);
  }
  _swift_beginAccess(param_1 + 0x28,auStack_218,0,0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x70);
  local_1c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x78);
  local_1a0 = *(undefined8 *)(param_1 + 0x88);
  uStack_198 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_18f = *(undefined8 *)(param_1 + 0x99);
  uStack_197 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x30);
  local_200 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x50);
  local_1e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x58);
  iVar1 = (int)&local_180;
  local_180 = local_200;
  uStack_178 = uStack_1f8;
  uStack_170 = uStack_1f0;
  uStack_168 = uStack_1e8;
  local_160 = local_1e0;
  uStack_158 = uStack_1d8;
  uStack_150 = uStack_1d0;
  uStack_148 = uStack_1c8;
  local_140 = local_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  local_120 = local_1a0;
  uStack_118 = uStack_198;
  uStack_117 = uStack_197;
  uStack_110 = uStack_190;
  uStack_10f = uStack_18f;
  FUN_100276094();
  if (iVar1 != 1) {
    uStack_88 = uStack_138;
    local_90 = local_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    local_70 = local_120;
    uStack_5f = uStack_10f;
    uStack_67 = uStack_117;
    uStack_60 = uStack_110;
    uStack_c8 = uStack_178;
    local_d0 = local_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    local_b0 = local_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    __ss6HasherV8_combineyySuF(3);
    uStack_2c8 = param_2[5];
    local_2d0 = param_2[4];
    uStack_2b8 = param_2[7];
    uStack_2c0 = param_2[6];
    local_2b0 = param_2[8];
    uStack_2e8 = param_2[1];
    local_2f0 = *param_2;
    uStack_2d8 = param_2[3];
    uStack_2e0 = param_2[2];
    uStack_258 = uStack_1b8;
    local_260 = local_1c0;
    uStack_248 = uStack_1a8;
    uStack_250 = uStack_1b0;
    uStack_238 = uStack_198;
    local_240 = local_1a0;
    uStack_22f = uStack_18f;
    uStack_237 = uStack_197;
    uStack_230 = uStack_190;
    uStack_298 = uStack_1f8;
    local_2a0 = local_200;
    uStack_288 = uStack_1e8;
    uStack_290 = uStack_1f0;
    uStack_278 = uStack_1d8;
    local_280 = local_1e0;
    uStack_268 = uStack_1c8;
    uStack_270 = uStack_1d0;
    FUN_1005a83a4(&local_2a0,auStack_370);
    FUN_10059b5d4(&local_2f0);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    FUN_100040bb4(&local_200,&DAT_100aab4b0,&DAT_100837c20);
    param_2[5] = uStack_2c8;
    param_2[4] = local_2d0;
    param_2[7] = uStack_2b8;
    param_2[6] = uStack_2c0;
    param_2[8] = local_2b0;
    param_2[1] = uStack_2e8;
    *param_2 = local_2f0;
    param_2[3] = uStack_2d8;
    param_2[2] = uStack_2e0;
  }
  return;
}

