// rea decompile_all
// name: FUN_10053bbac
// address: 0x10053bbac
// body: available
// range: 0x10053bbac-0x10053bcb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053bbac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  FUN_1000b142c(param_1,auStack_b8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_118;
  _swift_dynamicCast(puVar2,auStack_b8,puVar1,&DAT_1009d4bd0,6);
  if ((int)puVar2 == 0) {
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 1;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 1;
    uStack_80 = 0;
    FUN_100040bb4(&local_90,&DAT_100aab4e0,&DAT_100837c50);
    unaff_w20 = 0;
  }
  else {
    uStack_158 = uStack_f0;
    local_160 = local_f8;
    uStack_148 = uStack_e0;
    uStack_150 = uStack_e8;
    uStack_138 = uStack_d0;
    local_140 = local_d8;
    uStack_128 = uStack_c0;
    uStack_130 = uStack_c8;
    uStack_178 = uStack_110;
    local_180 = local_118;
    uStack_168 = uStack_100;
    uStack_170 = local_108;
    uStack_88 = uStack_110;
    local_90 = local_118;
    uStack_78 = uStack_100;
    uStack_80 = local_108;
    uStack_68 = uStack_f0;
    local_70 = local_f8;
    uStack_58 = uStack_e0;
    uStack_60 = uStack_e8;
    uStack_48 = uStack_d0;
    local_50 = local_d8;
    uStack_38 = uStack_c0;
    uStack_40 = uStack_c8;
    thunk_FUN_1005a50dc();
    FUN_100040bb4(&local_180,&DAT_100aab4e0,&DAT_100837c50);
  }
  return unaff_w20 & 1;
}

