// rea decompile_all
// name: FUN_1004b4bcc
// address: 0x1004b4bcc
// body: available
// range: 0x1004b4bcc-0x1004b4e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b4dc8) */

void FUN_1004b4bcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
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
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  cVar1 = *(char *)(param_1 + 0xc);
  puVar3 = param_1;
  if (cVar1 != -1) {
    uStack_198 = param_1[5];
    local_1a0 = param_1[4];
    uStack_188 = param_1[7];
    uStack_190 = param_1[6];
    uStack_178 = param_1[9];
    local_180 = param_1[8];
    uStack_168 = param_1[0xb];
    uStack_170 = param_1[10];
    uStack_1b8 = param_1[1];
    local_1c0 = *param_1;
    lStack_1a8 = param_1[3];
    uStack_1b0 = param_1[2];
    if (cVar1 == '\x05') {
      local_1d0 = 0;
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_208 = 0;
      local_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_138 = param_1[5];
      local_140 = param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      uStack_118 = param_1[9];
      local_120 = param_1[8];
      uStack_108 = param_1[0xb];
      uStack_110 = param_1[10];
      uStack_158 = param_1[1];
      local_160 = *param_1;
      lStack_148 = param_1[3];
      uStack_150 = param_1[2];
      local_100 = 5;
      FUN_1004b8d5c(&local_160,&local_280);
      puVar3 = &local_210;
      FUN_100040bb4(puVar3,&DAT_100aa1940,&DAT_100831f98);
      uStack_78 = uStack_198;
      local_80 = local_1a0;
      uStack_68 = uStack_188;
      uStack_70 = uStack_190;
      local_60 = local_180;
      uStack_98 = uStack_1b8;
      local_a0 = local_1c0;
      lStack_88 = lStack_1a8;
      local_90 = uStack_1b0;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1004bac4c();
  (*pcVar6)(&local_a0,&DAT_1009c91e0,puVar3,param_3,param_4);
  lVar2 = lStack_88;
  if (unaff_x21 == 0) {
    uStack_258 = uStack_78;
    local_260 = local_80;
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    local_240 = local_60;
    uStack_278 = uStack_98;
    local_280 = local_a0;
    local_268 = lStack_88;
    uStack_270 = local_90;
    uStack_b8 = uStack_98;
    local_c0 = local_a0;
    local_b0 = local_90;
    local_d0 = local_60;
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    uStack_d8 = uStack_68;
    uStack_e0 = uStack_70;
    if (lStack_88 != 0) {
      if (cVar1 == -1) {
        uStack_138 = uStack_78;
        local_140 = local_80;
        uStack_128 = uStack_68;
        uStack_130 = uStack_70;
        local_120 = local_60;
        uStack_158 = uStack_98;
        local_160 = local_a0;
        lStack_148 = lStack_88;
        uStack_150 = local_90;
        FUN_1004b8f70(&local_160,&local_1c0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_138 = uStack_78;
        local_140 = local_80;
        uStack_128 = uStack_68;
        uStack_130 = uStack_70;
        local_120 = local_60;
        uStack_158 = uStack_98;
        local_160 = local_a0;
        lStack_148 = lStack_88;
        uStack_150 = local_90;
        FUN_1004b8f70(&local_160,&local_1c0);
        (*pcVar6)(param_3,param_4);
      }
      uStack_198 = uStack_78;
      local_1a0 = local_80;
      uStack_188 = uStack_68;
      uStack_190 = uStack_70;
      local_180 = local_60;
      uStack_1b8 = uStack_98;
      local_1c0 = local_a0;
      lStack_1a8 = lStack_88;
      uStack_1b0 = local_90;
      FUN_100040bb4(&local_1c0,&DAT_100aa1940,&DAT_100831f98);
      uStack_118 = param_1[9];
      local_120 = param_1[8];
      uStack_108 = param_1[0xb];
      uStack_110 = param_1[10];
      local_100 = *(undefined1 *)(param_1 + 0xc);
      uStack_158 = param_1[1];
      local_160 = *param_1;
      lStack_148 = param_1[3];
      uStack_150 = param_1[2];
      uStack_138 = param_1[5];
      local_140 = param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      param_1[1] = uStack_b8;
      *param_1 = local_c0;
      param_1[2] = local_b0;
      param_1[3] = lVar2;
      param_1[5] = uStack_e8;
      param_1[4] = local_f0;
      param_1[7] = uStack_d8;
      param_1[6] = uStack_e0;
      param_1[8] = local_d0;
      *(undefined1 *)(param_1 + 0xc) = 5;
      puVar4 = &DAT_100aa1380;
      puVar5 = &DAT_100830240;
      goto LAB_1004b4cfc;
    }
  }
  uStack_138 = uStack_78;
  local_140 = local_80;
  uStack_128 = uStack_68;
  uStack_130 = uStack_70;
  local_120 = local_60;
  uStack_158 = uStack_98;
  local_160 = local_a0;
  lStack_148 = lStack_88;
  uStack_150 = local_90;
  puVar4 = &DAT_100aa1940;
  puVar5 = &DAT_100831f98;
LAB_1004b4cfc:
  FUN_100040bb4(&local_160,puVar4,puVar5);
  return;
}

