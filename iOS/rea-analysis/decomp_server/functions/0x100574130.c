// rea decompile_all
// name: FUN_100574130
// address: 0x100574130
// body: available
// range: 0x100574130-0x100574293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100574130(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_190 [64];
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  uStack_a8 = param_1[5];
  local_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  local_90 = param_1[8];
  uStack_c8 = param_1[1];
  local_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  lVar3 = unaff_x20[3];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&local_d0,lVar4,lVar3);
  }
  lStack_108 = unaff_x20[5];
  local_110 = unaff_x20[4];
  lStack_f8 = unaff_x20[7];
  lStack_100 = unaff_x20[6];
  lStack_e8 = unaff_x20[9];
  local_f0 = unaff_x20[8];
  lStack_d8 = unaff_x20[0xb];
  lStack_e0 = unaff_x20[10];
  if (local_110 != 0) {
    lStack_70 = unaff_x20[6];
    local_78 = unaff_x20[5];
    lStack_60 = unaff_x20[8];
    local_68 = unaff_x20[7];
    lStack_50 = unaff_x20[10];
    local_58 = unaff_x20[9];
    local_48 = unaff_x20[0xb];
    local_80 = local_110;
    __ss6HasherV8_combineyySuF(2);
    lStack_148 = lStack_108;
    local_150 = local_110;
    lStack_138 = lStack_f8;
    lStack_140 = lStack_100;
    lStack_128 = lStack_e8;
    local_130 = local_f0;
    lStack_118 = lStack_d8;
    lStack_120 = lStack_e0;
    FUN_1005a8020(&local_150,auStack_190);
    FUN_100574294(&local_d0);
    FUN_100040bb4(&local_110,&DAT_100aab4c0,&DAT_100837c30);
  }
  lVar3 = *unaff_x20;
  uVar1 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar4 = (long)(int)lVar3;
      lVar3 = lVar3 >> 0x20;
      goto LAB_100574254;
    }
    if ((unaff_x20[1] & 0xff000000000000U) == 0) goto LAB_100574264;
  }
  else {
    if (uVar2 != 2) goto LAB_100574264;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
LAB_100574254:
    if (lVar4 == lVar3) goto LAB_100574264;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_d0);
LAB_100574264:
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}

