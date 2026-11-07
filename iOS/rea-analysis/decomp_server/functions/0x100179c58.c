// rea decompile_all
// name: FUN_100179c58
// address: 0x100179c58
// body: available
// range: 0x100179c58-0x100179da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100179c58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_290 [192];
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  local_110 = param_1;
  _swift_retain(uVar3);
  FUN_1003e37e8(&local_50,&local_110);
  _swift_release(uVar3);
  if (local_50 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    local_110 = param_1;
    _swift_retain(uVar3);
    FUN_1003e30b8(&local_110);
    _swift_release(uVar3);
    uStack_148 = *(undefined8 *)(local_48 + 0x98);
    local_150 = *(undefined8 *)(local_48 + 0x90);
    uStack_138 = *(undefined8 *)(local_48 + 0xa8);
    uStack_140 = *(undefined8 *)(local_48 + 0xa0);
    uStack_128 = *(undefined8 *)(local_48 + 0xb8);
    local_130 = *(undefined8 *)(local_48 + 0xb0);
    uStack_118 = *(undefined8 *)(local_48 + 200);
    uStack_120 = *(undefined8 *)(local_48 + 0xc0);
    uStack_188 = *(undefined8 *)(local_48 + 0x58);
    local_190 = *(undefined8 *)(local_48 + 0x50);
    uStack_178 = *(undefined8 *)(local_48 + 0x68);
    uStack_180 = *(undefined8 *)(local_48 + 0x60);
    uStack_168 = *(undefined8 *)(local_48 + 0x78);
    local_170 = *(undefined8 *)(local_48 + 0x70);
    uStack_158 = *(undefined8 *)(local_48 + 0x88);
    uStack_160 = *(undefined8 *)(local_48 + 0x80);
    uStack_1c8 = *(undefined8 *)(local_48 + 0x18);
    local_1d0 = *(undefined8 *)(local_48 + 0x10);
    uStack_1b8 = *(undefined8 *)(local_48 + 0x28);
    uStack_1c0 = *(undefined8 *)(local_48 + 0x20);
    uStack_1a8 = *(undefined8 *)(local_48 + 0x38);
    local_1b0 = *(undefined8 *)(local_48 + 0x30);
    uStack_198 = *(undefined8 *)(local_48 + 0x48);
    uStack_1a0 = *(undefined8 *)(local_48 + 0x40);
    _memmove(&local_110,(void *)(local_48 + 0x10),0xc0);
    puVar1 = &local_110;
    FUN_10017b4d4();
    FUN_10017b4e4();
    puVar2 = &DAT_1009a0c50;
    _swift_allocError(&DAT_1009a0c50,puVar1,0,0);
    uVar3 = local_110;
    puVar1[5] = uStack_e8;
    puVar1[4] = local_f0;
    puVar1[7] = uStack_d8;
    puVar1[6] = uStack_e0;
    puVar1[1] = uStack_108;
    *puVar1 = uVar3;
    puVar1[3] = uStack_f8;
    puVar1[2] = uStack_100;
    puVar1[0xd] = uStack_a8;
    puVar1[0xc] = local_b0;
    puVar1[0xf] = uStack_98;
    puVar1[0xe] = uStack_a0;
    puVar1[9] = uStack_c8;
    puVar1[8] = local_d0;
    puVar1[0xb] = uStack_b8;
    puVar1[10] = uStack_c0;
    puVar1[0x15] = uStack_68;
    puVar1[0x14] = local_70;
    puVar1[0x17] = uStack_58;
    puVar1[0x16] = uStack_60;
    puVar1[0x11] = uStack_88;
    puVar1[0x10] = local_90;
    puVar1[0x13] = uStack_78;
    puVar1[0x12] = uStack_80;
    FUN_1000408d0(&local_1d0,auStack_290);
    FUN_100616260(puVar2);
    _swift_errorRelease(puVar2);
    _swift_release(local_50);
    _swift_release(local_48);
  }
  return;
}

