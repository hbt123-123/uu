// rea decompile_all
// name: FUN_1004b43ac
// address: 0x1004b43ac
// body: available
// range: 0x1004b43ac-0x1004b46a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b45d4) */

void FUN_1004b43ac(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  ulong local_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong local_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong local_240;
  ulong local_210 [10];
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 local_100;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  local_b0 = 2;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  cVar1 = (char)param_1[0xc];
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
    uStack_1a8 = param_1[3];
    uStack_1b0 = param_1[2];
    if (cVar1 == '\x02') {
      local_210[5] = 0;
      local_210[4] = 0;
      local_210[7] = 0;
      local_210[6] = 0;
      local_210[8] = 0;
      local_210[1] = 0;
      local_210[0] = 2;
      local_210[3] = 0;
      local_210[2] = 0;
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
      uStack_148 = param_1[3];
      uStack_150 = param_1[2];
      local_100 = 2;
      FUN_1004b8d5c(&local_160,&local_280);
      puVar3 = local_210;
      FUN_100040bb4(puVar3,&DAT_100aa1928,&DAT_100831f80);
      local_88 = uStack_198;
      uStack_90 = local_1a0;
      local_78 = uStack_188;
      uStack_80 = uStack_190;
      uStack_70 = local_180;
      uStack_a8 = uStack_1b8;
      local_b0 = local_1c0;
      local_98 = uStack_1a8;
      uStack_a0 = uStack_1b0;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1004baf40();
  (*pcVar6)(&local_b0,&DAT_1009c9378,puVar3,param_3,param_4);
  uVar2 = local_b0;
  if (unaff_x21 == 0) {
    uStack_278 = uStack_a8;
    local_280 = local_b0;
    uStack_268 = local_98;
    uStack_270 = uStack_a0;
    uStack_258 = local_88;
    local_260 = uStack_90;
    uStack_248 = local_78;
    uStack_250 = uStack_80;
    local_240 = uStack_70;
    uStack_c8 = uStack_80;
    local_d0 = local_88;
    uStack_b8 = uStack_70;
    uStack_c0 = local_78;
    uStack_e8 = uStack_a0;
    local_f0 = uStack_a8;
    uStack_d8 = uStack_90;
    uStack_e0 = local_98;
    if ((local_b0 & 0xff) != 2) {
      if (cVar1 == -1) {
        uStack_138 = local_88;
        local_140 = uStack_90;
        uStack_128 = local_78;
        uStack_130 = uStack_80;
        local_120 = uStack_70;
        uStack_158 = uStack_a8;
        local_160 = local_b0;
        uStack_148 = local_98;
        uStack_150 = uStack_a0;
        FUN_1004b8e50(&local_160,&local_1c0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_138 = local_88;
        local_140 = uStack_90;
        uStack_128 = local_78;
        uStack_130 = uStack_80;
        local_120 = uStack_70;
        uStack_158 = uStack_a8;
        local_160 = local_b0;
        uStack_148 = local_98;
        uStack_150 = uStack_a0;
        FUN_1004b8e50(&local_160,&local_1c0);
        (*pcVar6)(param_3,param_4);
      }
      uStack_198 = local_88;
      local_1a0 = uStack_90;
      uStack_188 = local_78;
      uStack_190 = uStack_80;
      local_180 = uStack_70;
      uStack_1b8 = uStack_a8;
      local_1c0 = local_b0;
      uStack_1a8 = local_98;
      uStack_1b0 = uStack_a0;
      FUN_100040bb4(&local_1c0,&DAT_100aa1928,&DAT_100831f80);
      uStack_118 = param_1[9];
      local_120 = param_1[8];
      uStack_108 = param_1[0xb];
      uStack_110 = param_1[10];
      local_100 = (undefined1)param_1[0xc];
      uStack_158 = param_1[1];
      local_160 = *param_1;
      uStack_148 = param_1[3];
      uStack_150 = param_1[2];
      uStack_138 = param_1[5];
      local_140 = param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      *param_1 = uVar2;
      param_1[8] = uStack_b8;
      param_1[7] = uStack_c0;
      param_1[6] = uStack_c8;
      param_1[5] = local_d0;
      param_1[4] = uStack_d8;
      param_1[3] = uStack_e0;
      param_1[2] = uStack_e8;
      param_1[1] = local_f0;
      *(undefined1 *)(param_1 + 0xc) = 2;
      puVar4 = &DAT_100aa1380;
      puVar5 = &DAT_100830240;
      goto LAB_1004b4538;
    }
  }
  uStack_138 = local_88;
  local_140 = uStack_90;
  uStack_128 = local_78;
  uStack_130 = uStack_80;
  local_120 = uStack_70;
  uStack_158 = uStack_a8;
  local_160 = local_b0;
  uStack_148 = local_98;
  uStack_150 = uStack_a0;
  puVar4 = &DAT_100aa1928;
  puVar5 = &DAT_100831f80;
LAB_1004b4538:
  FUN_100040bb4(&local_160,puVar4,puVar5);
  return;
}

