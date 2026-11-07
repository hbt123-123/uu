// rea decompile_all
// name: FUN_1005d2060
// address: 0x1005d2060
// body: available
// range: 0x1005d2060-0x1005d219b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1005d2060(ulong param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar2;
  long lVar3;
  undefined8 auStack_250 [4];
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
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
  undefined1 local_60;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = (undefined8 *)((long)auStack_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"resume");
  if ((param_1 & 1) != 0) {
    *puVar2 = 100;
    (**(code **)(lVar3 + 0x68))
              (puVar2,*(undefined4 *)
                       PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_100995f10,lVar1);
    FUN_1005d2770(auStack_250 + 1);
    uStack_88 = uStack_180;
    local_90 = local_188;
    uStack_78 = uStack_170;
    uStack_80 = local_178;
    uStack_68 = uStack_160;
    local_70 = local_168;
    local_60 = local_158;
    uStack_c8 = uStack_1c0;
    local_d0 = local_1c8;
    uStack_b8 = uStack_1b0;
    uStack_c0 = local_1b8;
    uStack_a8 = uStack_1a0;
    local_b0 = local_1a8;
    uStack_98 = uStack_190;
    uStack_a0 = local_198;
    uStack_108 = uStack_200;
    local_110 = local_208;
    uStack_f8 = uStack_1f0;
    uStack_100 = local_1f8;
    uStack_e8 = uStack_1e0;
    local_f0 = local_1e8;
    uStack_d8 = uStack_1d0;
    uStack_e0 = local_1d8;
    uStack_148 = auStack_250[2];
    local_150 = auStack_250[1];
    uStack_138 = uStack_230;
    uStack_140 = auStack_250[3];
    uStack_128 = uStack_220;
    local_130 = local_228;
    uStack_118 = uStack_210;
    uStack_120 = local_218;
    FUN_1005d2200(&local_150,puVar2);
    FUN_10028cb10();
    (**(code **)(lVar3 + 8))(puVar2,lVar1);
  }
  return;
}

