// rea decompile_all
// name: FUN_10048ca0c
// address: 0x10048ca0c
// body: available
// range: 0x10048ca0c-0x10048cb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048ca0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  undefined8 uStack_158;
  undefined1 auStack_148 [24];
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(param_1 + 0xe8,auStack_148,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 400);
  local_90 = *(undefined8 *)(param_1 + 0x188);
  uStack_78 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_1 + 0x198);
  uStack_68 = *(undefined8 *)(param_1 + 0x1b0);
  local_70 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_58 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_60 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x150);
  local_d0 = *(undefined8 *)(param_1 + 0x148);
  uStack_b8 = *(undefined8 *)(param_1 + 0x160);
  uStack_c0 = *(undefined8 *)(param_1 + 0x158);
  uStack_a8 = *(undefined8 *)(param_1 + 0x170);
  local_b0 = *(undefined8 *)(param_1 + 0x168);
  uStack_98 = *(undefined8 *)(param_1 + 0x180);
  uStack_a0 = *(undefined8 *)(param_1 + 0x178);
  uStack_108 = *(undefined8 *)(param_1 + 0x110);
  local_110 = *(undefined8 *)(param_1 + 0x108);
  uStack_f8 = *(undefined8 *)(param_1 + 0x120);
  uStack_100 = *(undefined8 *)(param_1 + 0x118);
  uStack_e8 = *(undefined8 *)(param_1 + 0x130);
  local_f0 = *(undefined8 *)(param_1 + 0x128);
  uStack_d8 = *(undefined8 *)(param_1 + 0x140);
  uStack_e0 = *(undefined8 *)(param_1 + 0x138);
  uStack_128 = *(undefined8 *)(param_1 + 0xf0);
  local_130 = *(undefined8 *)(param_1 + 0xe8);
  uStack_118 = *(undefined8 *)(param_1 + 0x100);
  uStack_120 = *(undefined8 *)(param_1 + 0xf8);
  puVar1 = &local_130;
  FUN_1000ab18c();
  if ((int)puVar1 != 1) {
    uStack_188 = uStack_88;
    local_190 = local_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    local_170 = local_70;
    uStack_158 = uStack_58;
    uStack_160 = uStack_60;
    uStack_1c8 = uStack_c8;
    local_1d0 = local_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    local_1b0 = local_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_208 = uStack_108;
    local_210 = local_110;
    uStack_1f8 = uStack_f8;
    uStack_200 = uStack_100;
    uStack_1e8 = uStack_e8;
    local_1f0 = local_f0;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_228 = uStack_128;
    local_230 = local_130;
    uStack_218 = uStack_118;
    uStack_220 = uStack_120;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1004945dc();
    (*pcVar2)(&local_230,5,&DAT_1009c6500,puVar1,param_3,param_4);
  }
  return;
}

