// rea decompile_all
// name: FUN_10020f200
// address: 0x10020f200
// body: available
// range: 0x10020f200-0x10020f49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10020f200(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_290 [16];
  byte local_258 [120];
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
  undefined8 local_170;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  ulong local_f0;
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
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  uStack_158 = param_1[1];
  local_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_138 = param_1[5];
  local_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  local_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_f8 = param_1[0xd];
  local_80 = param_1[0xc];
  local_70 = param_1[0xe];
  if (((local_80 >> 8 != 0xffffffff) || ((local_70 & 0x3000000000000000) != 0)) &&
     (((uint)(local_70 >> 0x39) & 0x18 | (uint)(local_80 >> 0x3d)) == 2)) {
    local_100 = local_80 & 0x1fffffffffffffff;
    local_f0 = local_70 & 0xcfffffffffffffff;
    uStack_198 = param_1[9];
    local_1a0 = param_1[8];
    uStack_188 = param_1[0xb];
    uStack_190 = param_1[10];
    uStack_178 = param_1[0xd];
    local_180 = param_1[0xc];
    local_170 = param_1[0xe];
    uStack_1d8 = param_1[1];
    local_1e0 = *param_1;
    uStack_1c8 = param_1[3];
    uStack_1d0 = param_1[2];
    uStack_1b8 = param_1[5];
    local_1c0 = param_1[4];
    uStack_1a8 = param_1[7];
    uStack_1b0 = param_1[6];
    local_e0 = local_160;
    uStack_d8 = uStack_158;
    uStack_d0 = uStack_150;
    uStack_c8 = uStack_148;
    local_c0 = local_140;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    local_a0 = local_120;
    uStack_98 = uStack_118;
    uStack_90 = uStack_110;
    uStack_88 = uStack_108;
    uStack_78 = uStack_f8;
    FUN_100217788(&local_1e0);
    puVar1 = &local_160;
    FUN_100217698();
    if (((ulong)puVar1 & 0xff) == 3) {
      FUN_100040bb4(&local_e0,&DAT_100a75b98,&DAT_10080a1d0);
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_100407cdc(local_258,FUN_1002177c4,auStack_290,PTR___sSbN_1009958c8);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      if ((local_258[0] & 1) != 0) {
        FUN_1003fb48c(FUN_1002177f8,auStack_290,0xd0000000000000b2,0x8000000100885c70,
                      0xd00000000000001e,0x80000001008a4310,0x5b,0);
        FUN_100040bb4(&local_e0,&DAT_100a75b98,&DAT_10080a1d0);
        return 1;
      }
      FUN_1003fb48c(FUN_1002177ec,auStack_290,0xd0000000000000b2,0x8000000100885c70,
                    0xd00000000000001e,0x80000001008a4310,0x5e,0);
      FUN_100040bb4(&local_e0,&DAT_100a75b98,&DAT_10080a1d0);
    }
  }
  return 0;
}

