// rea decompile_all
// name: FUN_1004b4e9c
// address: 0x1004b4e9c
// body: available
// range: 0x1004b4e9c-0x1004b5167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b5098) */

void FUN_1004b4e9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
  undefined8 local_2b0;
  long lStack_2a8;
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
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined8 local_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  cVar1 = *(char *)(param_1 + 0xc);
  puVar4 = param_1;
  if (cVar1 != -1) {
    uStack_148 = param_1[5];
    local_150 = param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    uStack_128 = param_1[9];
    local_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    lStack_168 = param_1[1];
    local_170 = *param_1;
    uStack_158 = param_1[3];
    uStack_160 = param_1[2];
    if (cVar1 == '\x06') {
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_218 = 0;
      local_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_238 = 0;
      local_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_1b8 = param_1[5];
      local_1c0 = param_1[4];
      uStack_1a8 = param_1[7];
      uStack_1b0 = param_1[6];
      uStack_198 = param_1[9];
      local_1a0 = param_1[8];
      uStack_188 = param_1[0xb];
      uStack_190 = param_1[10];
      lStack_1d8 = param_1[1];
      local_1e0 = *param_1;
      uStack_1c8 = param_1[3];
      uStack_1d0 = param_1[2];
      local_180 = 6;
      FUN_1004b8d5c(&local_1e0,&local_2b0);
      puVar4 = &local_240;
      FUN_100040bb4(puVar4,&DAT_100aa1948,&DAT_100831fa0);
      uStack_98 = uStack_148;
      local_a0 = local_150;
      uStack_88 = uStack_138;
      uStack_90 = uStack_140;
      uStack_78 = uStack_128;
      local_80 = local_130;
      uStack_68 = uStack_118;
      uStack_70 = uStack_120;
      lStack_b8 = lStack_168;
      local_c0 = local_170;
      uStack_a8 = uStack_158;
      uStack_b0 = uStack_160;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_1004baa54();
  (*pcVar7)(&local_c0,&DAT_1009c90c8,puVar4,param_3,param_4);
  lVar3 = lStack_b8;
  uVar2 = local_c0;
  if (unaff_x21 == 0) {
    uStack_288 = uStack_98;
    local_290 = local_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_268 = uStack_78;
    local_270 = local_80;
    uStack_258 = uStack_68;
    uStack_260 = uStack_70;
    lStack_2a8 = lStack_b8;
    local_2b0 = local_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_d8 = uStack_78;
    local_e0 = local_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    uStack_108 = uStack_a8;
    local_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = local_a0;
    uStack_e8 = uStack_88;
    local_f0 = uStack_90;
    if (lStack_b8 != 0) {
      if (cVar1 == -1) {
        uStack_1b8 = uStack_98;
        local_1c0 = local_a0;
        uStack_1a8 = uStack_88;
        uStack_1b0 = uStack_90;
        uStack_198 = uStack_78;
        local_1a0 = local_80;
        uStack_188 = uStack_68;
        uStack_190 = uStack_70;
        lStack_1d8 = lStack_b8;
        local_1e0 = local_c0;
        uStack_1c8 = uStack_a8;
        uStack_1d0 = uStack_b0;
        FUN_1004b8fd0(&local_1e0,&local_170);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_1b8 = uStack_98;
        local_1c0 = local_a0;
        uStack_1a8 = uStack_88;
        uStack_1b0 = uStack_90;
        uStack_198 = uStack_78;
        local_1a0 = local_80;
        uStack_188 = uStack_68;
        uStack_190 = uStack_70;
        lStack_1d8 = lStack_b8;
        local_1e0 = local_c0;
        uStack_1c8 = uStack_a8;
        uStack_1d0 = uStack_b0;
        FUN_1004b8fd0(&local_1e0,&local_170);
        (*pcVar7)(param_3,param_4);
      }
      uStack_148 = uStack_98;
      local_150 = local_a0;
      uStack_138 = uStack_88;
      uStack_140 = uStack_90;
      uStack_128 = uStack_78;
      local_130 = local_80;
      uStack_118 = uStack_68;
      uStack_120 = uStack_70;
      lStack_168 = lStack_b8;
      local_170 = local_c0;
      uStack_158 = uStack_a8;
      uStack_160 = uStack_b0;
      FUN_100040bb4(&local_170,&DAT_100aa1948,&DAT_100831fa0);
      uStack_198 = param_1[9];
      local_1a0 = param_1[8];
      uStack_188 = param_1[0xb];
      uStack_190 = param_1[10];
      local_180 = *(undefined1 *)(param_1 + 0xc);
      lStack_1d8 = param_1[1];
      local_1e0 = *param_1;
      uStack_1c8 = param_1[3];
      uStack_1d0 = param_1[2];
      uStack_1b8 = param_1[5];
      local_1c0 = param_1[4];
      uStack_1a8 = param_1[7];
      uStack_1b0 = param_1[6];
      *param_1 = uVar2;
      param_1[1] = lVar3;
      param_1[9] = uStack_d8;
      param_1[8] = local_e0;
      param_1[0xb] = uStack_c8;
      param_1[10] = uStack_d0;
      param_1[5] = uStack_f8;
      param_1[4] = uStack_100;
      param_1[7] = uStack_e8;
      param_1[6] = local_f0;
      param_1[3] = uStack_108;
      param_1[2] = local_110;
      *(undefined1 *)(param_1 + 0xc) = 6;
      puVar5 = &DAT_100aa1380;
      puVar6 = &DAT_100830240;
      goto LAB_1004b4fd0;
    }
  }
  uStack_1b8 = uStack_98;
  local_1c0 = local_a0;
  uStack_1a8 = uStack_88;
  uStack_1b0 = uStack_90;
  uStack_198 = uStack_78;
  local_1a0 = local_80;
  uStack_188 = uStack_68;
  uStack_190 = uStack_70;
  lStack_1d8 = lStack_b8;
  local_1e0 = local_c0;
  uStack_1c8 = uStack_a8;
  uStack_1d0 = uStack_b0;
  puVar5 = &DAT_100aa1948;
  puVar6 = &DAT_100831fa0;
LAB_1004b4fd0:
  FUN_100040bb4(&local_1e0,puVar5,puVar6);
  return;
}

