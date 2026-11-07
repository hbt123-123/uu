// rea decompile_all
// name: FUN_1006b8c00
// address: 0x1006b8c00
// body: available
// range: 0x1006b8c00-0x1006b8d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b8c00(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ushort uVar2;
  undefined4 local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_150 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  local_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  local_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  local_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  local_100 = *(undefined8 *)(param_1 + 0x60);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  local_d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  local_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = *(undefined8 *)((long)param_4 + 0x14);
  iStack_13c = (int)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20);
  iStack_144 = (int)param_4[1];
  local_140 = (int)((ulong)param_4[1] >> 0x20);
  iStack_14c = (int)*param_4;
  iStack_148 = (int)((ulong)*param_4 >> 0x20);
  local_130 = *(undefined8 *)((long)param_4 + 0x1c);
  uStack_128 = CONCAT44(3,*(undefined4 *)((long)param_4 + 0x24));
  uVar2 = NEON_umaxv(CONCAT26(-(ushort)(local_140 - 0x1fU < 0xffffffe2),
                              CONCAT24(-(ushort)(iStack_144 - 0x1fU < 0xffffffe7),
                                       CONCAT22(-(ushort)(iStack_148 - 0x1fU < 0xffffffe7),
                                                -(ushort)(iStack_14c - 0x20U < 0xffffffea)))),2);
  uVar1 = 0xffffffffffffffd6;
  if ((((uVar2 & 1) == 0) && (0xfffffffa < iStack_13c - 8U)) &&
     (uStack_138._0_4_ = (uint)uStack_a8, (uint)uStack_138 < 0x20001)) {
    uStack_138._4_4_ = (int)((ulong)uStack_a8 >> 0x20);
    if (8 < uStack_138._4_4_ - 1U) {
      return 0xffffffffffffffd6;
    }
    uStack_98 = uStack_128;
    uStack_b8 = CONCAT44(iStack_144,iStack_148);
    local_c0 = CONCAT44(iStack_14c,local_150);
    uStack_b0 = CONCAT44(iStack_13c,local_140);
    uVar1 = param_1;
    uStack_138 = uStack_a8;
    local_a0 = local_130;
    uStack_90 = local_120;
    uStack_88 = uStack_118;
    local_80 = local_110;
    uStack_78 = uStack_108;
    uStack_70 = local_100;
    uStack_68 = uStack_f8;
    local_60 = local_f0;
    uStack_58 = uStack_e8;
    uStack_50 = local_e0;
    uStack_48 = uStack_d8;
    local_40 = local_d0;
    uStack_38 = uStack_c8;
    FUN_1006bb148(param_1,&local_c0,param_5,0,0);
    if (uVar1 < 0xffffffffffffff89) {
      uVar1 = *(ulong *)(param_1 + 0x2f0);
      FUN_1006bcc2c(uVar1,param_1 + 0x300,param_1 + 0x138,&local_150,param_2,param_3,0,0,
                    *(undefined8 *)(param_1 + 0x3d8));
      if (uVar1 < 0xffffffffffffff89) {
        *(int *)(param_1 + 0x130) = (int)uVar1;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

