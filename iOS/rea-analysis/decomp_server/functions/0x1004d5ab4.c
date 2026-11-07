// rea decompile_all
// name: FUN_1004d5ab4
// address: 0x1004d5ab4
// body: available
// range: 0x1004d5ab4-0x1004d5bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004d5ab4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_138 = param_1[0xd];
  local_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_118 = param_1[0x11];
  local_120 = param_1[0x10];
  local_110 = param_1[0x12];
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
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  iVar1 = (int)&local_1a0;
  FUN_100040934();
  if (iVar1 != 1) {
    uStack_98 = uStack_138;
    local_a0 = local_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    local_80 = local_120;
    local_70 = local_110;
    uStack_d8 = uStack_178;
    local_e0 = local_180;
    uStack_c8 = uStack_168;
    uStack_d0 = uStack_170;
    uStack_b8 = uStack_158;
    local_c0 = local_160;
    uStack_a8 = uStack_148;
    uStack_b0 = uStack_150;
    uStack_f8 = uStack_198;
    local_100 = local_1a0;
    uStack_e8 = uStack_188;
    uStack_f0 = uStack_190;
    iVar1 = (int)&local_100;
    FUN_100040948();
    if (iVar1 == 0xe) {
      puVar2 = &local_100;
      FUN_100040964();
      uStack_1b8 = puVar2[1];
      local_1c0 = *puVar2;
      uStack_1a8 = puVar2[3];
      uStack_1b0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      local_60 = local_1c0;
      uStack_58 = uStack_1b8;
      uStack_50 = uStack_1b0;
      uStack_48 = uStack_1a8;
      FUN_1004e1ffc();
      (*pcVar3)(&local_1c0,0x10,&DAT_1009cc930,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004d5bb8);
  (*pcVar3)();
}

