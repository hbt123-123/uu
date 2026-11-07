// rea decompile_all
// name: FUN_1004b4948
// address: 0x1004b4948
// body: available
// range: 0x1004b4948-0x1004b4bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b4b10) */

void FUN_1004b4948(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
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
  long lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  cVar1 = *(char *)(param_1 + 0xc);
  puVar3 = param_1;
  if (cVar1 != -1) {
    uStack_178 = param_1[5];
    local_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_158 = param_1[9];
    local_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_198 = param_1[1];
    local_1a0 = *param_1;
    lStack_188 = param_1[3];
    uStack_190 = param_1[2];
    if (cVar1 == '\x04') {
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_118 = param_1[5];
      local_120 = param_1[4];
      uStack_108 = param_1[7];
      uStack_110 = param_1[6];
      uStack_f8 = param_1[9];
      local_100 = param_1[8];
      uStack_e8 = param_1[0xb];
      uStack_f0 = param_1[10];
      uStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      uStack_130 = param_1[2];
      local_e0 = 4;
      FUN_1004b8d5c(&local_140,&local_250);
      puVar3 = &local_1e0;
      FUN_100040bb4(puVar3,&DAT_100aa1938,&DAT_100831f90);
      uStack_88 = uStack_198;
      local_90 = local_1a0;
      lStack_78 = lStack_188;
      local_80 = uStack_190;
      uStack_68 = uStack_178;
      local_70 = local_180;
      uStack_58 = uStack_168;
      uStack_60 = uStack_170;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1004ba2f4();
  (*pcVar6)(&local_90,&DAT_1009c8c80,puVar3,param_3,param_4);
  lVar2 = lStack_78;
  if (unaff_x21 == 0) {
    uStack_248 = uStack_88;
    local_250 = local_90;
    local_238 = lStack_78;
    uStack_240 = local_80;
    uStack_228 = uStack_68;
    local_230 = local_70;
    uStack_218 = uStack_58;
    uStack_220 = uStack_60;
    uStack_b8 = uStack_58;
    local_c0 = uStack_60;
    uStack_a8 = uStack_88;
    uStack_b0 = local_90;
    local_a0 = local_80;
    uStack_c8 = uStack_68;
    local_d0 = local_70;
    if (lStack_78 != 0) {
      if (cVar1 == -1) {
        uStack_138 = uStack_88;
        local_140 = local_90;
        lStack_128 = lStack_78;
        uStack_130 = local_80;
        uStack_118 = uStack_68;
        local_120 = local_70;
        uStack_108 = uStack_58;
        uStack_110 = uStack_60;
        FUN_1004b8f10(&local_140,&local_1a0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_138 = uStack_88;
        local_140 = local_90;
        lStack_128 = lStack_78;
        uStack_130 = local_80;
        uStack_118 = uStack_68;
        local_120 = local_70;
        uStack_108 = uStack_58;
        uStack_110 = uStack_60;
        FUN_1004b8f10(&local_140,&local_1a0);
        (*pcVar6)(param_3,param_4);
      }
      uStack_198 = uStack_88;
      local_1a0 = local_90;
      lStack_188 = lStack_78;
      uStack_190 = local_80;
      uStack_178 = uStack_68;
      local_180 = local_70;
      uStack_168 = uStack_58;
      uStack_170 = uStack_60;
      FUN_100040bb4(&local_1a0,&DAT_100aa1938,&DAT_100831f90);
      uStack_f8 = param_1[9];
      local_100 = param_1[8];
      uStack_e8 = param_1[0xb];
      uStack_f0 = param_1[10];
      local_e0 = *(undefined1 *)(param_1 + 0xc);
      uStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      uStack_130 = param_1[2];
      uStack_118 = param_1[5];
      local_120 = param_1[4];
      uStack_108 = param_1[7];
      uStack_110 = param_1[6];
      param_1[1] = uStack_a8;
      *param_1 = uStack_b0;
      param_1[2] = local_a0;
      param_1[3] = lVar2;
      param_1[5] = uStack_c8;
      param_1[4] = local_d0;
      param_1[7] = uStack_b8;
      param_1[6] = local_c0;
      *(undefined1 *)(param_1 + 0xc) = 4;
      puVar4 = &DAT_100aa1380;
      puVar5 = &DAT_100830240;
      goto LAB_1004b4a60;
    }
  }
  uStack_138 = uStack_88;
  local_140 = local_90;
  lStack_128 = lStack_78;
  uStack_130 = local_80;
  uStack_118 = uStack_68;
  local_120 = local_70;
  uStack_108 = uStack_58;
  uStack_110 = uStack_60;
  puVar4 = &DAT_100aa1938;
  puVar5 = &DAT_100831f90;
LAB_1004b4a60:
  FUN_100040bb4(&local_140,puVar4,puVar5);
  return;
}

