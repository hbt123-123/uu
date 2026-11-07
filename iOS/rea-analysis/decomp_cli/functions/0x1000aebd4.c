// rea decompile_all
// name: FUN_1000aebd4
// address: 0x1000aebd4
// body: available
// range: 0x1000aebd4-0x1000aee3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000aebd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_310 [16];
  undefined8 *local_300;
  undefined8 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  long alStack_78 [3];
  
  lVar1 = *unaff_x20;
  local_80 = unaff_x20[1];
  lVar4 = *(long *)(lVar1 + 0x10);
  local_2e8 = param_1;
  local_2e0 = param_4;
  alStack_78[0] = lVar1;
  FUN_1000133cc(alStack_78,&local_1e0,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_1000133cc(&local_80,&local_1e0,&DAT_100104d68,&USHORT_1000d6ae8);
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    do {
      uStack_1d8 = puVar3[1];
      local_1e0 = *puVar3;
      uStack_1c8 = puVar3[3];
      local_1d0 = puVar3[2];
      uStack_1b8 = puVar3[5];
      uVar5 = puVar3[4];
      uStack_1a8 = puVar3[7];
      local_1b0 = puVar3[6];
      uStack_198 = puVar3[9];
      uStack_1a0 = puVar3[8];
      uStack_188 = puVar3[0xb];
      local_190 = puVar3[10];
      uStack_178 = puVar3[0xd];
      uStack_180 = puVar3[0xc];
      uStack_168 = puVar3[0xf];
      local_170 = puVar3[0xe];
      local_158 = puVar3[0x11];
      uStack_160 = puVar3[0x10];
      uStack_148 = puVar3[0x13];
      local_150 = puVar3[0x12];
      uStack_138 = puVar3[0x15];
      uStack_140 = puVar3[0x14];
      uStack_128 = puVar3[0x17];
      local_130 = puVar3[0x16];
      uStack_118 = puVar3[0x19];
      uStack_120 = puVar3[0x18];
      local_1e8 = local_2e0;
      local_300 = &local_1f8;
      local_1f8 = param_2;
      uStack_1f0 = param_3;
      local_1c0 = uVar5;
      FUN_10006ff98(&local_1e0,&local_2d0);
      _swift_bridgeObjectRetain(uVar5);
      uVar2 = 0;
      FUN_1000b3814(FUN_1000b2a20,auStack_310,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar2 & 1) != 0) {
        FUN_10001fc18(alStack_78,&DAT_100104d48,&USHORT_1000d6ae0);
        FUN_10001fc18(&local_80,&DAT_100104d68,&USHORT_1000d6ae8);
        FUN_100064cb0((ulong)&local_1e0 | 8,&local_2d0);
        FUN_10008efb4(&local_1e0);
        uStack_268 = local_170;
        local_270 = uStack_178;
        uStack_258 = uStack_160;
        uStack_260 = uStack_168;
        local_250 = local_158;
        uStack_2a8 = local_1b0;
        local_2b0 = uStack_1b8;
        uStack_298 = uStack_1a0;
        uStack_2a0 = uStack_1a8;
        uStack_288 = local_190;
        local_290 = uStack_198;
        uStack_278 = uStack_180;
        uStack_280 = uStack_188;
        uStack_2c8 = local_1d0;
        local_2d0 = uStack_1d8;
        uStack_2b8 = local_1c0;
        uStack_2c0 = uStack_1c8;
        FUN_1000045b0(&local_2d0);
        uStack_a8 = uStack_268;
        local_b0 = local_270;
        uStack_98 = uStack_258;
        uStack_a0 = uStack_260;
        local_90 = local_250;
        uStack_e8 = uStack_2a8;
        local_f0 = local_2b0;
        uStack_d8 = uStack_298;
        uStack_e0 = uStack_2a0;
        uStack_c8 = uStack_288;
        local_d0 = local_290;
        uStack_b8 = uStack_278;
        uStack_c0 = uStack_280;
        uStack_108 = uStack_2c8;
        local_110 = local_2d0;
        uStack_f8 = uStack_2b8;
        uStack_100 = uStack_2c0;
        goto LAB_1000aedf4;
      }
      FUN_10008efb4(&local_1e0);
      puVar3 = puVar3 + 0x1a;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_10001fc18(alStack_78,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_10001fc18(&local_80,&DAT_100104d68,&USHORT_1000d6ae8);
  FUN_1000b0bac(&local_110);
LAB_1000aedf4:
  local_2e8[0xd] = uStack_a8;
  local_2e8[0xc] = local_b0;
  local_2e8[0xf] = uStack_98;
  local_2e8[0xe] = uStack_a0;
  local_2e8[0x10] = local_90;
  local_2e8[5] = uStack_e8;
  local_2e8[4] = local_f0;
  local_2e8[7] = uStack_d8;
  local_2e8[6] = uStack_e0;
  local_2e8[9] = uStack_c8;
  local_2e8[8] = local_d0;
  local_2e8[0xb] = uStack_b8;
  local_2e8[10] = uStack_c0;
  local_2e8[1] = uStack_108;
  *local_2e8 = local_110;
  local_2e8[3] = uStack_f8;
  local_2e8[2] = uStack_100;
  return;
}

