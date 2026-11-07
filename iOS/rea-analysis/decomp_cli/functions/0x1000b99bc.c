// rea decompile_all
// name: FUN_1000b99bc
// address: 0x1000b99bc
// body: available
// range: 0x1000b99bc-0x1000b9cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b99bc(undefined8 *param_1,undefined1 param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,byte param_7,undefined1 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,ulong param_13,
                  ulong param_14,ulong param_15,ulong param_16,long param_17,long param_18,
                  undefined8 param_19,undefined8 param_20,undefined1 param_21,undefined4 param_22,
                  ulong param_23,ulong param_24,ulong param_25,ulong param_26)

{
  ulong uVar1;
  undefined1 auStack_260 [168];
  undefined1 local_1b8;
  byte bStack_1b7;
  undefined6 uStack_1b6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  byte local_19f;
  undefined1 local_19e;
  undefined5 uStack_19d;
  long local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  long local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined7 uStack_137;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_118;
  undefined1 local_110;
  byte local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_f8;
  byte local_f7;
  undefined1 local_f6;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  if ((param_9 != 0) && (*(long *)(param_9 + 0x10) == 0)) {
    _swift_bridgeObjectRelease(param_9);
    param_9 = 0;
  }
  if (param_14 == 0) {
    param_13 = 0;
  }
  else {
    uVar1 = param_13 & 0xffffffffffff;
    if ((param_14 & 0x2000000000000000) != 0) {
      uVar1 = param_14 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(param_14);
      param_13 = 0;
      param_14 = 0;
    }
  }
  if (param_16 == 0) {
    param_15 = 0;
  }
  else {
    uVar1 = param_15 & 0xffffffffffff;
    if ((param_16 & 0x2000000000000000) != 0) {
      uVar1 = param_16 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(param_16);
      param_15 = 0;
      param_16 = 0;
    }
  }
  if ((param_17 != 0) && (*(long *)(param_17 + 0x10) == 0)) {
    _swift_bridgeObjectRelease(param_17);
    param_17 = 0;
  }
  if ((param_18 != 0) && (*(long *)(param_18 + 0x10) == 0)) {
    _swift_bridgeObjectRelease(param_18);
    param_18 = 0;
  }
  if (param_24 == 0) {
    param_23 = 0;
  }
  else {
    uVar1 = param_23 & 0xffffffffffff;
    if ((param_24 & 0x2000000000000000) != 0) {
      uVar1 = param_24 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(param_24);
      param_23 = 0;
      param_24 = 0;
    }
  }
  if (param_26 == 0) {
    param_25 = 0;
  }
  else {
    uVar1 = param_25 & 0xffffffffffff;
    if ((param_26 & 0x2000000000000000) != 0) {
      uVar1 = param_26 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(param_26);
      param_25 = 0;
      param_26 = 0;
    }
  }
  local_90 = param_21;
  local_19f = param_7 & 1;
  local_1a0 = param_6 & 1;
  bStack_1b7 = param_3 & 1;
  uStack_190 = param_10;
  local_188 = param_11;
  uStack_180 = param_12;
  local_148 = param_19;
  uStack_140 = param_20;
  local_138 = param_21;
  uStack_e8 = param_10;
  local_e0 = param_11;
  uStack_d8 = param_12;
  local_a0 = param_19;
  uStack_98 = param_20;
  local_1b8 = param_2;
  uStack_1b0 = param_4;
  uStack_1a8 = param_5;
  local_19e = param_8;
  local_198 = param_9;
  local_178 = param_13;
  uStack_170 = param_14;
  local_168 = param_15;
  uStack_160 = param_16;
  local_158 = param_17;
  lStack_150 = param_18;
  uStack_130 = param_23;
  uStack_128 = param_24;
  local_120 = param_25;
  local_118 = param_26;
  local_110 = param_2;
  local_10f = bStack_1b7;
  local_108 = param_4;
  uStack_100 = param_5;
  local_f8 = local_1a0;
  local_f7 = local_19f;
  local_f6 = param_8;
  local_f0 = param_9;
  local_d0 = param_13;
  uStack_c8 = param_14;
  local_c0 = param_15;
  uStack_b8 = param_16;
  local_b0 = param_17;
  lStack_a8 = param_18;
  local_88 = param_23;
  uStack_80 = param_24;
  local_78 = param_25;
  uStack_70 = param_26;
  FUN_1000bbe94(&local_1b8,auStack_260);
  FUN_1000bbea4(&local_110);
  param_1[0x11] = uStack_130;
  param_1[0x10] = CONCAT71(uStack_137,local_138);
  param_1[0x13] = local_120;
  param_1[0x12] = uStack_128;
  param_1[0x14] = local_118;
  param_1[9] = uStack_170;
  param_1[8] = local_178;
  param_1[0xb] = uStack_160;
  param_1[10] = local_168;
  param_1[0xd] = lStack_150;
  param_1[0xc] = local_158;
  param_1[0xf] = uStack_140;
  param_1[0xe] = local_148;
  param_1[1] = uStack_1b0;
  *param_1 = CONCAT62(uStack_1b6,CONCAT11(bStack_1b7,local_1b8));
  param_1[3] = CONCAT53(uStack_19d,CONCAT12(local_19e,CONCAT11(local_19f,local_1a0)));
  param_1[2] = uStack_1a8;
  param_1[5] = uStack_190;
  param_1[4] = local_198;
  param_1[7] = uStack_180;
  param_1[6] = local_188;
  return;
}

