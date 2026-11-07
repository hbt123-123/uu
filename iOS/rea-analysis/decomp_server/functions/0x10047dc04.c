// rea decompile_all
// name: FUN_10047dc04
// address: 0x10047dc04
// body: available
// range: 0x10047dc04-0x10047dd33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047dc04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
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
  undefined1 local_120;
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
  undefined1 local_50;
  
  uStack_68 = *(undefined8 *)(param_1 + 200);
  local_70 = *(undefined8 *)(param_1 + 0xc0);
  uStack_58 = *(undefined8 *)(param_1 + 0xd8);
  uStack_60 = *(undefined8 *)(param_1 + 0xd0);
  local_50 = *(undefined1 *)(param_1 + 0xe0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x88);
  local_b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_98 = *(undefined8 *)(param_1 + 0x98);
  uStack_a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0xa8);
  local_90 = *(undefined8 *)(param_1 + 0xa0);
  uStack_78 = *(undefined8 *)(param_1 + 0xb8);
  uStack_80 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x48);
  local_f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_c8 = *(undefined8 *)(param_1 + 0x68);
  local_d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_108 = *(undefined8 *)(param_1 + 0x28);
  local_110 = *(undefined8 *)(param_1 + 0x20);
  uStack_f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_100 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&local_110;
  FUN_1001218ec();
  if (iVar1 != 1) {
    uStack_138 = uStack_68;
    local_140 = local_70;
    uStack_128 = uStack_58;
    uStack_130 = uStack_60;
    local_120 = local_50;
    uStack_178 = uStack_a8;
    local_180 = local_b0;
    uStack_168 = uStack_98;
    uStack_170 = uStack_a0;
    uStack_158 = uStack_88;
    local_160 = local_90;
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_1b8 = uStack_e8;
    local_1c0 = local_f0;
    uStack_1a8 = uStack_d8;
    uStack_1b0 = uStack_e0;
    uStack_198 = uStack_c8;
    local_1a0 = local_d0;
    uStack_188 = uStack_b8;
    uStack_190 = uStack_c0;
    uStack_1d8 = uStack_108;
    local_1e0 = local_110;
    uStack_1c8 = uStack_f8;
    uStack_1d0 = uStack_100;
    iVar1 = (int)&local_1e0;
    FUN_100121900();
    if (iVar1 == 0xb) {
      puVar2 = &local_1e0;
      FUN_100008290();
      uStack_248 = puVar2[1];
      local_250 = *puVar2;
      uStack_238 = puVar2[3];
      local_240 = puVar2[2];
      uStack_228 = puVar2[5];
      uStack_230 = puVar2[4];
      uStack_218 = puVar2[7];
      local_220 = puVar2[6];
      uStack_208 = puVar2[9];
      local_210 = puVar2[8];
      uStack_1f8 = puVar2[0xb];
      uStack_200 = puVar2[10];
      local_1f0 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_100460b34();
      (*pcVar3)(&local_250,0xe,&DAT_1009c3eb0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10047dd34);
  (*pcVar3)();
}

