// rea decompile_all
// name: FUN_1004b2f8c
// address: 0x1004b2f8c
// body: available
// range: 0x1004b2f8c-0x1004b308b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004b2f8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
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
  undefined1 local_110;
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
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_128 = param_1[0xd];
  local_130 = param_1[0xc];
  uStack_118 = param_1[0xf];
  uStack_120 = param_1[0xe];
  local_110 = *(undefined1 *)(param_1 + 0x10);
  uStack_168 = param_1[5];
  local_170 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_148 = param_1[9];
  local_150 = param_1[8];
  uStack_138 = param_1[0xb];
  uStack_140 = param_1[10];
  uStack_188 = param_1[1];
  local_190 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  iVar1 = (int)&local_190;
  FUN_1001241c4();
  if (iVar1 != 1) {
    uStack_98 = uStack_128;
    local_a0 = local_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    local_80 = local_110;
    uStack_d8 = uStack_168;
    local_e0 = local_170;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_b8 = uStack_148;
    local_c0 = local_150;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_f8 = uStack_188;
    local_100 = local_190;
    uStack_e8 = uStack_178;
    uStack_f0 = uStack_180;
    iVar1 = (int)&local_100;
    FUN_1001241ec();
    if (iVar1 == 4) {
      puVar2 = &local_100;
      FUN_100124204();
      uStack_1a8 = puVar2[3];
      uStack_1b0 = puVar2[2];
      uStack_198 = puVar2[5];
      local_1a0 = puVar2[4];
      uStack_1b8 = puVar2[1];
      local_1c0 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      local_70 = local_1c0;
      uStack_68 = uStack_1b8;
      local_60 = uStack_1b0;
      uStack_58 = uStack_1a8;
      uStack_50 = local_1a0;
      uStack_48 = uStack_198;
      FUN_1004ba000();
      (*pcVar3)(&local_1c0,5,&DAT_1009c8af8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004b308c);
  (*pcVar3)();
}

