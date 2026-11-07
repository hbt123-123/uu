// rea decompile_all
// name: FUN_1006b8d80
// address: 0x1006b8d80
// body: available
// range: 0x1006b8d80-0x1006b8f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b8d80(ulong param_1,undefined8 param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  
  uVar8 = param_3 - 1;
  if (uVar8 == 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar9 = (ulong)(uVar8 < 0x40001);
  if (uVar8 < 0x20001) {
    uVar9 = uVar9 + 1;
  }
  if (uVar8 < 0x4001) {
    uVar9 = uVar9 + 1;
  }
  iVar2 = 3;
  if (param_4 != 0) {
    iVar2 = param_4;
  }
  iVar1 = 0;
  if (-1 < param_4) {
    iVar1 = iVar2;
  }
  iVar2 = 0x16;
  if (param_4 < 0x17) {
    iVar2 = iVar1;
  }
  puVar10 = (uint *)(&DAT_10084eb60 + (long)iVar2 * 0x1c + uVar9 * 0x284);
  uVar4 = *puVar10;
  uVar7 = puVar10[2];
  local_140 = *(undefined8 *)(puVar10 + 3);
  uVar5 = puVar10[5];
  uVar6 = puVar10[6];
  uVar8 = 0x201;
  if (param_3 == 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  local_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  local_d0 = *(undefined8 *)(param_1 + 0x90);
  uVar11 = 6;
  if (0x3f < uVar8 + param_3) {
    uVar11 = ((uint)LZCOUNT((int)(uVar8 + param_3) + -1) ^ 0x1f) + 1;
  }
  uVar3 = uVar4;
  if (uVar11 <= uVar4) {
    uVar3 = uVar11;
  }
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  if ((uVar8 | param_3) >> 0x1e == 0) {
    uVar4 = uVar3;
  }
  if (param_4 < 0) {
    uVar5 = -param_4;
  }
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  local_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_100 = *(undefined8 *)(param_1 + 0x60);
  if (uVar4 + 1 <= uVar7) {
    uVar7 = uVar4 + 1;
  }
  uVar11 = uVar4;
  if (5 < uVar6) {
    uVar11 = uVar4 + 1;
  }
  if (puVar10[1] - (uint)(5 < uVar6) <= uVar4) {
    uVar11 = puVar10[1];
  }
  if (uVar4 < 0xb) {
    uVar4 = 10;
  }
  local_150 = CONCAT44(uVar4,(int)*(undefined8 *)(param_1 + 0x10));
  uStack_148 = CONCAT44(uVar7,uVar11);
  uStack_138 = CONCAT44(uVar6,uVar5);
  local_130 = 1;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 3;
  uStack_98 = 0x300000000;
  local_a0 = 1;
  uStack_b8 = uStack_148;
  local_c0 = local_150;
  uStack_a8 = uStack_138;
  uVar8 = param_1;
  uStack_b0 = local_140;
  uStack_90 = uStack_120;
  uStack_88 = uStack_118;
  local_80 = local_110;
  uStack_78 = uStack_108;
  uStack_70 = uStack_100;
  uStack_68 = uStack_f8;
  local_60 = local_f0;
  uStack_58 = uStack_e8;
  uStack_50 = uStack_e0;
  uStack_48 = uStack_d8;
  local_40 = local_d0;
  uStack_38 = uStack_c8;
  FUN_1006bb148(param_1,&local_c0,0xffffffffffffffff,0,0);
  if (uVar8 < 0xffffffffffffff89) {
    uVar8 = *(ulong *)(param_1 + 0x2f0);
    FUN_1006bcc2c(uVar8,param_1 + 0x300,param_1 + 0x138,&local_150,param_2,param_3,0,0,
                  *(undefined8 *)(param_1 + 0x3d8));
    if (uVar8 < 0xffffffffffffff89) {
      *(int *)(param_1 + 0x130) = (int)uVar8;
    }
  }
  return;
}

