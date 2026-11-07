// rea decompile_all
// name: FUN_1000b60d0
// address: 0x1000b60d0
// body: available
// range: 0x1000b60d0-0x1000b6293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b60d0(long *param_1,long param_2,byte param_3,long param_4,long param_5,ulong param_6,
                  ulong param_7,ulong param_8,ulong param_9,ulong param_10,ulong param_11,
                  long param_12,long param_13)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_188 [96];
  long local_128;
  byte bStack_120;
  undefined7 uStack_11f;
  long local_118;
  long lStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  byte local_c0;
  long local_b8;
  long lStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_bridgeObjectRelease(param_2);
    param_2 = 0;
  }
  uVar1 = param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar1 = param_7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_7);
    param_6 = 0;
    param_7 = 0;
  }
  uVar1 = param_8 & 0xffffffffffff;
  if ((param_9 & 0x2000000000000000) != 0) {
    uVar1 = param_9 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_9);
    param_8 = 0;
    param_9 = 0;
    if (param_11 == 0) goto LAB_1000b6248;
LAB_1000b616c:
    uVar1 = param_10 & 0xffffffffffff;
    if ((param_11 & 0x2000000000000000) != 0) {
      uVar1 = param_11 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar2 = *(long *)(param_12 + 0x10);
      goto joined_r0x0001000b6188;
    }
    _swift_bridgeObjectRelease(param_11);
    param_11 = 0;
    lVar2 = *(long *)(param_12 + 0x10);
  }
  else {
    if (param_11 != 0) goto LAB_1000b616c;
LAB_1000b6248:
    lVar2 = *(long *)(param_12 + 0x10);
  }
  param_10 = 0;
joined_r0x0001000b6188:
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(param_12);
    param_12 = 0;
    lVar2 = *(long *)(param_13 + 0x10);
  }
  else {
    lVar2 = *(long *)(param_13 + 0x10);
  }
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(param_13);
    param_13 = 0;
  }
  bStack_120 = param_3 & 1;
  local_128 = param_2;
  local_118 = param_4;
  lStack_110 = param_5;
  local_108 = param_6;
  uStack_100 = param_7;
  local_f8 = param_8;
  uStack_f0 = param_9;
  local_e8 = param_10;
  uStack_e0 = param_11;
  local_d8 = param_12;
  lStack_d0 = param_13;
  local_c8 = param_2;
  local_c0 = bStack_120;
  local_b8 = param_4;
  lStack_b0 = param_5;
  local_a8 = param_6;
  uStack_a0 = param_7;
  local_98 = param_8;
  uStack_90 = param_9;
  local_88 = param_10;
  uStack_80 = param_11;
  local_78 = param_12;
  lStack_70 = param_13;
  FUN_1000b59dc(&local_128,auStack_188);
  FUN_1000bb5ac(&local_c8);
  param_1[5] = uStack_100;
  param_1[4] = local_108;
  param_1[7] = uStack_f0;
  param_1[6] = local_f8;
  param_1[9] = uStack_e0;
  param_1[8] = local_e8;
  param_1[0xb] = lStack_d0;
  param_1[10] = local_d8;
  param_1[1] = CONCAT71(uStack_11f,bStack_120);
  *param_1 = local_128;
  param_1[3] = lStack_110;
  param_1[2] = local_118;
  return;
}

