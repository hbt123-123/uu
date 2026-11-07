// rea decompile_all
// name: FUN_1004b3e2c
// address: 0x1004b3e2c
// body: available
// range: 0x1004b3e2c-0x1004b40bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b3ffc) */

void FUN_1004b3e2c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long local_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long local_1e0 [9];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
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
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 local_e0;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long local_58;
  
  lStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  lStack_60 = 0;
  lStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  cVar1 = (char)param_1[0xc];
  plVar3 = param_1;
  if (cVar1 != -1) {
    lStack_178 = param_1[5];
    local_180 = param_1[4];
    lStack_168 = param_1[7];
    lStack_170 = param_1[6];
    lStack_158 = param_1[9];
    local_160 = param_1[8];
    lStack_148 = param_1[0xb];
    lStack_150 = param_1[10];
    lStack_198 = param_1[1];
    local_1e0[8] = *param_1;
    lStack_188 = param_1[3];
    lStack_190 = param_1[2];
    if (cVar1 == '\0') {
      local_1e0[5] = 0;
      local_1e0[4] = 0;
      local_1e0[7] = 0;
      local_1e0[6] = 0;
      local_1e0[1] = 0;
      local_1e0[0] = 0;
      local_1e0[3] = 0;
      local_1e0[2] = 0;
      lStack_118 = param_1[5];
      local_120 = param_1[4];
      lStack_108 = param_1[7];
      lStack_110 = param_1[6];
      lStack_f8 = param_1[9];
      local_100 = param_1[8];
      lStack_e8 = param_1[0xb];
      lStack_f0 = param_1[10];
      lStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      lStack_130 = param_1[2];
      local_e0 = 0;
      FUN_1004b8d5c(&local_140,&local_250);
      plVar3 = local_1e0;
      FUN_100040bb4(plVar3,&DAT_100aa1918,&DAT_100831f70);
      lStack_88 = lStack_198;
      local_90 = local_1e0[8];
      lStack_78 = lStack_188;
      lStack_80 = lStack_190;
      lStack_68 = lStack_178;
      local_70 = local_180;
      local_58 = lStack_168;
      lStack_60 = lStack_170;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1004bb8d8();
  (*pcVar6)(&local_90,&DAT_1009c98e0,plVar3,param_3,param_4);
  lVar2 = local_90;
  if (unaff_x21 == 0) {
    lStack_248 = lStack_88;
    local_250 = local_90;
    lStack_238 = lStack_78;
    lStack_240 = lStack_80;
    lStack_228 = lStack_68;
    local_230 = local_70;
    lStack_218 = local_58;
    lStack_220 = lStack_60;
    lStack_c8 = lStack_80;
    local_d0 = lStack_88;
    lStack_b8 = local_70;
    lStack_c0 = lStack_78;
    lStack_a8 = lStack_60;
    local_b0 = lStack_68;
    local_a0 = local_58;
    if (local_90 != 0) {
      if (cVar1 == -1) {
        lStack_138 = lStack_88;
        local_140 = local_90;
        lStack_128 = lStack_78;
        lStack_130 = lStack_80;
        lStack_118 = lStack_68;
        local_120 = local_70;
        lStack_108 = local_58;
        lStack_110 = lStack_60;
        FUN_1004b8d90(&local_140,local_1e0 + 8);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_138 = lStack_88;
        local_140 = local_90;
        lStack_128 = lStack_78;
        lStack_130 = lStack_80;
        lStack_118 = lStack_68;
        local_120 = local_70;
        lStack_108 = local_58;
        lStack_110 = lStack_60;
        FUN_1004b8d90(&local_140,local_1e0 + 8);
        (*pcVar6)(param_3,param_4);
      }
      lStack_198 = lStack_88;
      local_1e0[8] = local_90;
      lStack_188 = lStack_78;
      lStack_190 = lStack_80;
      lStack_178 = lStack_68;
      local_180 = local_70;
      lStack_168 = local_58;
      lStack_170 = lStack_60;
      FUN_100040bb4(local_1e0 + 8,&DAT_100aa1918,&DAT_100831f70);
      lStack_f8 = param_1[9];
      local_100 = param_1[8];
      lStack_e8 = param_1[0xb];
      lStack_f0 = param_1[10];
      local_e0 = (undefined1)param_1[0xc];
      lStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      lStack_130 = param_1[2];
      lStack_118 = param_1[5];
      local_120 = param_1[4];
      lStack_108 = param_1[7];
      lStack_110 = param_1[6];
      *param_1 = lVar2;
      param_1[7] = local_a0;
      param_1[6] = lStack_a8;
      param_1[5] = local_b0;
      param_1[4] = lStack_b8;
      param_1[3] = lStack_c0;
      param_1[2] = lStack_c8;
      param_1[1] = local_d0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      puVar4 = &DAT_100aa1380;
      puVar5 = &DAT_100830240;
      goto LAB_1004b3f3c;
    }
  }
  lStack_138 = lStack_88;
  local_140 = local_90;
  lStack_128 = lStack_78;
  lStack_130 = lStack_80;
  lStack_118 = lStack_68;
  local_120 = local_70;
  lStack_108 = local_58;
  lStack_110 = lStack_60;
  puVar4 = &DAT_100aa1918;
  puVar5 = &DAT_100831f70;
LAB_1004b3f3c:
  FUN_100040bb4(&local_140,puVar4,puVar5);
  return;
}

