// rea decompile_all
// name: FUN_100591a50
// address: 0x100591a50
// body: available
// range: 0x100591a50-0x100591c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100591a50(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_1c8 [72];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[5];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[4];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[7];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lStack_d8 = unaff_x20[9];
  local_e0 = unaff_x20[8];
  lStack_c8 = unaff_x20[0xb];
  lStack_d0 = unaff_x20[10];
  lStack_b8 = unaff_x20[0xd];
  local_c0 = unaff_x20[0xc];
  lStack_a8 = unaff_x20[0xf];
  lStack_b0 = unaff_x20[0xe];
  local_a0 = unaff_x20[0x10];
  if (local_e0 != 0) {
    lStack_88 = unaff_x20[10];
    local_90 = unaff_x20[9];
    lStack_78 = unaff_x20[0xc];
    lStack_80 = unaff_x20[0xb];
    lStack_68 = unaff_x20[0xe];
    local_70 = unaff_x20[0xd];
    lStack_58 = unaff_x20[0x10];
    lStack_60 = unaff_x20[0xf];
    local_98 = local_e0;
    __ss6HasherV8_combineyySuF(4);
    uStack_158 = param_1[5];
    local_160 = param_1[4];
    uStack_148 = param_1[7];
    uStack_150 = param_1[6];
    local_140 = param_1[8];
    uStack_178 = param_1[1];
    local_180 = *param_1;
    uStack_168 = param_1[3];
    uStack_170 = param_1[2];
    lStack_108 = unaff_x20[0xd];
    local_110 = unaff_x20[0xc];
    lStack_f8 = unaff_x20[0xf];
    lStack_100 = unaff_x20[0xe];
    local_f0 = unaff_x20[0x10];
    lStack_128 = unaff_x20[9];
    local_130 = unaff_x20[8];
    lStack_118 = unaff_x20[0xb];
    lStack_120 = unaff_x20[10];
    FUN_1005a8464(&local_130,auStack_1c8);
    FUN_10059c7e8(&local_180);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    FUN_100040bb4(&local_e0,&DAT_100aab4a0,&DAT_100837c10);
    param_1[5] = uStack_158;
    param_1[4] = local_160;
    param_1[7] = uStack_148;
    param_1[6] = uStack_150;
    param_1[8] = local_140;
    param_1[1] = uStack_178;
    *param_1 = local_180;
    param_1[3] = uStack_168;
    param_1[2] = uStack_170;
  }
  bVar1 = *(byte *)(unaff_x20 + 0x11);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x89);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_100591c4c;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_100591c4c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

