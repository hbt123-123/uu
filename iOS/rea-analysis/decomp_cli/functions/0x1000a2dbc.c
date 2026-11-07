// rea decompile_all
// name: FUN_1000a2dbc
// address: 0x1000a2dbc
// body: available
// range: 0x1000a2dbc-0x1000a2edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a2dbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_220 [160];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined *puStack_50;
  
  puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_e0 = PTR___swiftEmptySetSingleton_1000f0750;
  puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100066b80(PTR___swiftEmptyArrayStorage_1000f0740,&local_e0);
  _swift_bridgeObjectRelease(local_e0);
  uStack_178 = 0xe400000000000000;
  local_180 = 0x706c6568;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0xd000000000000021;
  uStack_158 = 0x80000001000ca9d0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0xe000000000000000;
  local_130 = 0;
  uStack_128 = 0xe000000000000000;
  local_120 = 1;
  puStack_118 = puVar1;
  puStack_110 = puVar1;
  local_108 = 0;
  local_100 = 0;
  local_f0 = puVar1;
  uStack_d8 = 0xe400000000000000;
  local_e0 = (undefined *)0x706c6568;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0xd000000000000021;
  uStack_b8 = 0x80000001000ca9d0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  local_90 = 0;
  uStack_88 = 0xe000000000000000;
  local_80 = 1;
  local_78 = puVar1;
  puStack_70 = puVar1;
  local_68 = 0;
  uStack_60 = 0;
  puStack_50 = puVar1;
  puStack_f8 = puVar2;
  local_58 = puVar2;
  FUN_10006e920(&local_180,auStack_220);
  FUN_10006e954(&local_e0);
  puRam0000000100106f58 = puStack_118;
  _DAT_100106f50 = CONCAT71(uStack_11f,local_120);
  uRam0000000100106f68 = local_108;
  _DAT_100106f60 = puStack_110;
  puRam0000000100106f78 = puStack_f8;
  _DAT_100106f70 = local_100;
  DAT_100106f80 = local_f0;
  uRam0000000100106f18 = uStack_158;
  _DAT_100106f10 = local_160;
  uRam0000000100106f28 = uStack_148;
  _DAT_100106f20 = local_150;
  uRam0000000100106f38 = uStack_138;
  _DAT_100106f30 = local_140;
  uRam0000000100106f48 = uStack_128;
  _DAT_100106f40 = local_130;
  DAT_100106ef8 = uStack_178;
  DAT_100106ef0 = local_180;
  uRam0000000100106f08 = uStack_168;
  _DAT_100106f00 = local_170;
  return;
}

