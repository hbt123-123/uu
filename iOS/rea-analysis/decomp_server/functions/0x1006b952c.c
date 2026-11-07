// rea decompile_all
// name: FUN_1006b952c
// address: 0x1006b952c
// body: available
// range: 0x1006b952c-0x1006b974f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b952c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,ulong param_7,int param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
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
  
  uVar10 = param_5;
  if (param_5 < 2) {
    uVar10 = 1;
  }
  uVar5 = 0;
  if (param_6 != 0) {
    uVar5 = param_7;
  }
  uVar1 = uVar5 + uVar10;
  if (uVar1 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar11 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar11 = uVar11 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar11 = uVar11 + 1;
  }
  iVar3 = 3;
  if (param_8 != 0) {
    iVar3 = param_8;
  }
  iVar2 = 0;
  if (-1 < param_8) {
    iVar2 = iVar3;
  }
  iVar3 = 0x16;
  if (param_8 < 0x17) {
    iVar3 = iVar2;
  }
  puVar12 = (uint *)(&DAT_10084eb60 + (long)iVar3 * 0x1c + uVar11 * 0x284);
  uVar6 = *puVar12;
  uVar9 = puVar12[2];
  local_160 = *(undefined8 *)(puVar12 + 3);
  uVar7 = puVar12[5];
  uVar8 = puVar12[6];
  uVar1 = 0x201;
  if (uVar5 == 0 || 1 < uVar10 + 1) {
    uVar1 = uVar10;
  }
  uStack_108 = *(undefined8 *)(param_1 + 0x78);
  local_110 = *(undefined8 *)(param_1 + 0x70);
  uStack_f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x80);
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  local_f0 = *(undefined8 *)(param_1 + 0x90);
  uVar13 = 6;
  if (0x3f < uVar1 + uVar5) {
    uVar13 = ((uint)LZCOUNT((int)(uVar1 + uVar5) + -1) ^ 0x1f) + 1;
  }
  uVar4 = uVar6;
  if (uVar13 <= uVar6) {
    uVar4 = uVar13;
  }
  uStack_138 = *(undefined8 *)(param_1 + 0x48);
  uStack_140 = *(undefined8 *)(param_1 + 0x40);
  if ((uVar1 | uVar5) >> 0x1e == 0) {
    uVar6 = uVar4;
  }
  if (param_8 < 0) {
    uVar7 = -param_8;
  }
  uStack_128 = *(undefined8 *)(param_1 + 0x58);
  local_130 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  if (uVar6 + 1 <= uVar9) {
    uVar9 = uVar6 + 1;
  }
  uVar13 = uVar6;
  if (5 < uVar8) {
    uVar13 = uVar6 + 1;
  }
  if (puVar12[1] - (uint)(5 < uVar8) <= uVar6) {
    uVar13 = puVar12[1];
  }
  if (uVar6 < 0xb) {
    uVar6 = 10;
  }
  local_170 = CONCAT44(uVar6,(int)*(undefined8 *)(param_1 + 0x10));
  uStack_168 = CONCAT44(uVar9,uVar13);
  uStack_158 = CONCAT44(uVar8,uVar7);
  local_150 = 1;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 3;
  uStack_b8 = 0x300000000;
  local_c0 = 1;
  uStack_d8 = uStack_168;
  local_e0 = local_170;
  uStack_c8 = uStack_158;
  uVar10 = param_1;
  uStack_d0 = local_160;
  uStack_b0 = uStack_140;
  uStack_a8 = uStack_138;
  local_a0 = local_130;
  uStack_98 = uStack_128;
  uStack_90 = uStack_120;
  uStack_88 = uStack_118;
  local_80 = local_110;
  uStack_78 = uStack_108;
  uStack_70 = uStack_100;
  uStack_68 = uStack_f8;
  local_60 = local_f0;
  uStack_58 = uStack_e8;
  FUN_1006bb148(param_1,&local_e0,param_5,0,0);
  if (uVar10 < 0xffffffffffffff89) {
    uVar10 = *(ulong *)(param_1 + 0x2f0);
    FUN_1006bcc2c(uVar10,param_1 + 0x300,param_1 + 0x138,&local_170,param_6,param_7,0,0,
                  *(undefined8 *)(param_1 + 0x3d8));
    if (uVar10 < 0xffffffffffffff89) {
      *(int *)(param_1 + 0x130) = (int)uVar10;
      FUN_1006b9090(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

