// rea decompile_all
// name: FUN_10048c920
// address: 0x10048c920
// body: available
// range: 0x10048c920-0x10048ca0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048c920(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_e8 [24];
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
  undefined8 local_50;
  
  _swift_beginAccess(param_1 + 0x60,auStack_e8,0,0);
  uStack_68 = *(undefined8 *)(param_1 + 200);
  local_70 = *(undefined8 *)(param_1 + 0xc0);
  uStack_58 = *(undefined8 *)(param_1 + 0xd8);
  uStack_60 = *(undefined8 *)(param_1 + 0xd0);
  local_50 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x88);
  local_b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_98 = *(undefined8 *)(param_1 + 0x98);
  uStack_a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0xa8);
  local_90 = *(undefined8 *)(param_1 + 0xa0);
  uStack_78 = *(undefined8 *)(param_1 + 0xb8);
  uStack_80 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x68);
  local_d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_c0 = *(undefined8 *)(param_1 + 0x70);
  puVar1 = &local_d0;
  FUN_1000ab18c();
  if ((int)puVar1 != 1) {
    uStack_108 = uStack_68;
    local_110 = local_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    local_f0 = local_50;
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    local_130 = local_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_100494328();
    (*pcVar2)(&local_170,4,&DAT_1009c6348,puVar1,param_3,param_4);
  }
  return;
}

