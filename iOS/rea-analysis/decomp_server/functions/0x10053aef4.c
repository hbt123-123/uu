// rea decompile_all
// name: FUN_10053aef4
// address: 0x10053aef4
// body: available
// range: 0x10053aef4-0x10053afef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053aef4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_1000b142c(param_1,auStack_b8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_120;
  _swift_dynamicCast(puVar2,auStack_b8,puVar1,&DAT_1009d2778,6);
  if ((int)puVar2 == 0) {
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    local_c0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    local_30 = 0;
    FUN_100040bb4(&local_90,&DAT_100aab510,&DAT_100837c80);
    unaff_w20 = 0;
  }
  else {
    uStack_148 = uStack_d8;
    local_150 = local_e0;
    uStack_138 = uStack_c8;
    uStack_140 = uStack_d0;
    local_130 = local_c0;
    uStack_188 = uStack_118;
    local_190 = local_120;
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    uStack_168 = uStack_f8;
    local_170 = local_100;
    uStack_158 = uStack_e8;
    uStack_160 = uStack_f0;
    uStack_88 = uStack_118;
    local_90 = local_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    local_30 = local_c0;
    uStack_68 = uStack_f8;
    local_70 = local_100;
    uStack_58 = uStack_e8;
    uStack_60 = uStack_f0;
    uStack_48 = uStack_d8;
    local_50 = local_e0;
    uStack_38 = uStack_c8;
    uStack_40 = uStack_d0;
    thunk_FUN_1005690f8();
    FUN_100040bb4(&local_190,&DAT_100aab510,&DAT_100837c80);
  }
  return unaff_w20 & 1;
}

