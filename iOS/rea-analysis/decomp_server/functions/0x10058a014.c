// rea decompile_all
// name: FUN_10058a014
// address: 0x10058a014
// body: available
// range: 0x10058a014-0x10058a1cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058a014(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_1e0 [80];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined1 local_58;
  
  if ((*(byte *)((long)unaff_x20 + 0x14) & 1) == 0) {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  if ((*(byte *)((long)unaff_x20 + 0x1c) & 1) == 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  lStack_e8 = unaff_x20[5];
  local_f0 = unaff_x20[4];
  lStack_d8 = unaff_x20[7];
  lStack_e0 = unaff_x20[6];
  lStack_c8 = unaff_x20[9];
  local_d0 = unaff_x20[8];
  lStack_c0 = unaff_x20[10];
  uStack_b8 = (undefined1)unaff_x20[0xb];
  uStack_af = *(undefined8 *)((long)unaff_x20 + 0x61);
  local_b7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  if (local_f0 != 0) {
    lStack_80 = unaff_x20[8];
    local_88 = unaff_x20[7];
    lStack_70 = unaff_x20[10];
    local_78 = unaff_x20[9];
    lStack_60 = unaff_x20[0xc];
    local_68 = unaff_x20[0xb];
    local_58 = (undefined1)unaff_x20[0xd];
    lStack_90 = unaff_x20[6];
    local_98 = unaff_x20[5];
    local_a0 = local_f0;
    __ss6HasherV8_combineyySuF(3);
    uStack_168 = param_1[5];
    local_170 = param_1[4];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    local_150 = param_1[8];
    uStack_188 = param_1[1];
    local_190 = *param_1;
    uStack_178 = param_1[3];
    uStack_180 = param_1[2];
    lStack_118 = unaff_x20[9];
    local_120 = unaff_x20[8];
    lStack_110 = unaff_x20[10];
    uStack_108 = (undefined1)unaff_x20[0xb];
    uStack_ff = *(undefined8 *)((long)unaff_x20 + 0x61);
    local_107 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
    uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
    lStack_138 = unaff_x20[5];
    local_140 = unaff_x20[4];
    lStack_128 = unaff_x20[7];
    lStack_130 = unaff_x20[6];
    FUN_1005a7ef4(&local_140,auStack_1e0);
    FUN_10058ad50(&local_190);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    FUN_100040bb4(&local_f0,&DAT_100aab4f8,&DAT_100838f20);
    param_1[5] = uStack_168;
    param_1[4] = local_170;
    param_1[7] = uStack_158;
    param_1[6] = uStack_160;
    param_1[8] = local_150;
    param_1[1] = uStack_188;
    *param_1 = local_190;
    param_1[3] = uStack_178;
    param_1[2] = uStack_180;
  }
  lVar4 = *unaff_x20;
  uVar1 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_10058a1a8;
    }
    lVar3 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_10058a1a8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

