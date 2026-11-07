// rea decompile_all
// name: FUN_10059021c
// address: 0x10059021c
// body: available
// range: 0x10059021c-0x10059031f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059021c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x28,auStack_e8,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x70);
  local_90 = *(undefined8 *)(param_1 + 0x68);
  uStack_78 = *(undefined8 *)(param_1 + 0x80);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  local_70 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_5f = *(undefined8 *)(param_1 + 0x99);
  uStack_67 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_c8 = *(undefined8 *)(param_1 + 0x30);
  local_d0 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = *(undefined8 *)(param_1 + 0x50);
  local_b0 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0x60);
  uStack_a0 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = &local_d0;
  FUN_100276094();
  if ((int)puVar1 != 1) {
    uStack_128 = uStack_88;
    local_130 = local_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    local_110 = local_70;
    uStack_ff = uStack_5f;
    uStack_107 = uStack_67;
    uStack_100 = uStack_60;
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1005a955c();
    (*pcVar2)(&local_170,3,&DAT_1009d55b8,puVar1,param_3,param_4);
  }
  return;
}

