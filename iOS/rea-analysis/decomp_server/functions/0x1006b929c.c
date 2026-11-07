// rea decompile_all
// name: FUN_1006b929c
// address: 0x1006b929c
// body: available
// range: 0x1006b929c-0x1006b943f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b929c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  ulong uVar1;
  ushort uVar2;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)param_8[1] >> 0x20) - 0x1fU < 0xffffffe2),
                              CONCAT24(-(ushort)((int)param_8[1] - 0x1fU < 0xffffffe7),
                                       CONCAT22(-(ushort)((int)((ulong)*param_8 >> 0x20) - 0x1fU <
                                                         0xffffffe7),
                                                -(ushort)((int)*param_8 - 0x20U < 0xffffffea)))),2);
  uVar1 = 0xffffffffffffffd6;
  if ((((uVar2 & 1) == 0) && (0xfffffffa < *(int *)(param_8 + 2) - 8U)) &&
     (*(uint *)((long)param_8 + 0x14) < 0x20001)) {
    if (8 < *(int *)(param_8 + 3) - 1U) {
      return 0xffffffffffffffd6;
    }
    local_170 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    uStack_108 = *(undefined8 *)(param_1 + 0x78);
    local_110 = *(undefined8 *)(param_1 + 0x70);
    uStack_f8 = *(undefined8 *)(param_1 + 0x88);
    local_100 = *(undefined8 *)(param_1 + 0x80);
    uStack_128 = *(undefined8 *)(param_1 + 0x58);
    uStack_130 = *(undefined8 *)(param_1 + 0x50);
    uStack_118 = *(undefined8 *)(param_1 + 0x68);
    local_120 = *(undefined8 *)(param_1 + 0x60);
    uStack_e8 = *(undefined8 *)(param_1 + 0x98);
    uStack_f0 = *(undefined8 *)(param_1 + 0x90);
    uStack_138 = *(undefined8 *)(param_1 + 0x48);
    local_140 = *(undefined8 *)(param_1 + 0x40);
    uStack_164 = (undefined4)param_8[1];
    uStack_16c = (undefined4)*param_8;
    uStack_168 = (undefined4)((ulong)*param_8 >> 0x20);
    uStack_158 = *(undefined8 *)((long)param_8 + 0x14);
    uStack_d0 = *(undefined8 *)((long)param_8 + 0xc);
    local_160 = (undefined4)uStack_d0;
    uStack_15c = (undefined4)((ulong)uStack_d0 >> 0x20);
    local_150 = *(undefined8 *)((long)param_8 + 0x1c);
    local_148 = CONCAT44(3,*(undefined4 *)((long)param_8 + 0x24));
    uStack_b8 = local_148;
    uStack_d8 = CONCAT44(uStack_164,uStack_168);
    local_e0 = CONCAT44(uStack_16c,local_170);
    uVar1 = param_1;
    uStack_c8 = uStack_158;
    local_c0 = local_150;
    uStack_b0 = local_140;
    uStack_a8 = uStack_138;
    local_a0 = uStack_130;
    uStack_98 = uStack_128;
    uStack_90 = local_120;
    uStack_88 = uStack_118;
    local_80 = local_110;
    uStack_78 = uStack_108;
    uStack_70 = local_100;
    uStack_68 = uStack_f8;
    local_60 = uStack_f0;
    uStack_58 = uStack_e8;
    FUN_1006bb148(param_1,&local_e0,param_5,0,0);
    if (uVar1 < 0xffffffffffffff89) {
      uVar1 = *(ulong *)(param_1 + 0x2f0);
      FUN_1006bcc2c(uVar1,param_1 + 0x300,param_1 + 0x138,&local_170,param_6,param_7,0,0,
                    *(undefined8 *)(param_1 + 0x3d8));
      if (uVar1 < 0xffffffffffffff89) {
        *(int *)(param_1 + 0x130) = (int)uVar1;
        FUN_1006b9090(param_1,param_2,param_3,param_4,param_5);
        uVar1 = param_1;
      }
    }
  }
  return uVar1;
}

