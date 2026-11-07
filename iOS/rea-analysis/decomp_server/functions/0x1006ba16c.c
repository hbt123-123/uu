// rea decompile_all
// name: FUN_1006ba16c
// address: 0x1006ba16c
// body: available
// range: 0x1006ba16c-0x1006ba3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006ba16c(long param_1,long param_2,undefined8 param_3,undefined4 param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == 0) {
    return -0x20;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  local_40 = *(undefined8 *)(param_1 + 0x70);
  uStack_28 = *(undefined8 *)(param_1 + 0x88);
  uStack_30 = *(undefined8 *)(param_1 + 0x80);
  uStack_18 = *(undefined8 *)(param_1 + 0x98);
  local_20 = *(undefined8 *)(param_1 + 0x90);
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uVar19 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uVar20 = *(undefined8 *)(param_1 + 0x10);
  local_88 = *(undefined8 *)(param_1 + 0x28);
  local_90 = *(undefined8 *)(param_1 + 0x20);
  local_60._4_4_ = (int)((ulong)uVar19 >> 0x20);
  if (((param_5 < 0x20000) || (param_5 == 0xffffffffffffffff)) ||
     (uVar14 = *(ulong *)(param_2 + 8), param_5 <= uVar14 * 6 && uVar14 * 6 - param_5 != 0)) {
    if (local_60._4_4_ == 3) {
      iVar10 = *(int *)(param_2 + 0x133c);
      uVar14 = *(ulong *)(param_2 + 8);
      goto LAB_1006ba1c8;
    }
  }
  else {
    iVar10 = *(int *)(param_2 + 0x133c);
    if ((iVar10 != 0) || (local_60._4_4_ == 3)) {
LAB_1006ba1c8:
      lVar5 = 500;
      if (param_5 != 0) {
        lVar5 = 0;
      }
      uVar1 = uVar14 + param_5 + lVar5;
      uVar6 = param_5;
      if (param_5 == 0) {
        uVar6 = 0xffffffffffffffff;
      }
      if (uVar14 + param_5 == 0) {
        uVar1 = 0xffffffffffffffff;
      }
      uVar16 = (ulong)(uVar1 < 0x40001);
      if (uVar1 < 0x20001) {
        uVar16 = uVar16 + 1;
      }
      if (uVar1 < 0x4001) {
        uVar16 = uVar16 + 1;
      }
      iVar3 = 3;
      if (iVar10 != 0) {
        iVar3 = iVar10;
      }
      iVar2 = 0;
      if (-1 < iVar10) {
        iVar2 = iVar3;
      }
      iVar3 = 0x16;
      if (iVar10 < 0x17) {
        iVar3 = iVar2;
      }
      puVar15 = (uint *)(&DAT_10084eb60 + (long)iVar3 * 0x1c + uVar16 * 0x284);
      uVar11 = *puVar15;
      uVar9 = puVar15[2];
      local_90 = *(undefined8 *)(puVar15 + 3);
      uVar7 = puVar15[5];
      uVar8 = puVar15[6];
      uVar1 = 0x201;
      if (uVar14 == 0 || 1 < param_5 + 1) {
        uVar1 = uVar6;
      }
      uVar13 = 6;
      if (0x3f < uVar1 + uVar14) {
        uVar13 = ((uint)LZCOUNT((int)(uVar1 + uVar14) + -1) ^ 0x1f) + 1;
      }
      uVar4 = uVar11;
      if (uVar13 <= uVar11) {
        uVar4 = uVar13;
      }
      if ((uVar1 | uVar14) >> 0x1e == 0) {
        uVar11 = uVar4;
      }
      if (iVar10 < 0) {
        uVar7 = -iVar10;
      }
      if (uVar11 + 1 <= uVar9) {
        uVar9 = uVar11 + 1;
      }
      uVar13 = uVar11;
      if (5 < uVar8) {
        uVar13 = uVar11 + 1;
      }
      if (puVar15[1] - (uint)(5 < uVar8) <= uVar11) {
        uVar13 = puVar15[1];
      }
      if (uVar11 < 0xb) {
        uVar11 = 10;
      }
      local_a0._0_4_ = (undefined4)uVar20;
      local_a0 = CONCAT44(uVar11,(undefined4)local_a0);
      uStack_98 = CONCAT44(uVar9,uVar13);
      local_88 = CONCAT44(uVar8,uVar7);
      uVar20 = local_a0;
      goto joined_r0x0001006ba344;
    }
  }
  puVar12 = (undefined8 *)((ulong)&local_a0 | 4);
  uVar17 = *(undefined8 *)(param_2 + 0x110);
  puVar12[1] = *(undefined8 *)(param_2 + 0x118);
  *puVar12 = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)((long)puVar12 + 0xc) = uVar17;
joined_r0x0001006ba344:
  local_a0 = uVar20;
  if (param_5 != 0xffffffffffffffff) {
    if (param_5 < 2) {
      uVar11 = 1;
    }
    else {
      uVar14 = param_5;
      if (0x7ffff < param_5) {
        uVar14 = 0x80000;
      }
      uVar11 = ((uint)LZCOUNT((int)uVar14 + -1) ^ 0x1f) + 1;
    }
    local_a0._4_4_ = (uint)((ulong)uVar20 >> 0x20);
    if (local_a0._4_4_ <= uVar11) {
      local_a0._4_4_ = uVar11;
    }
    local_a0._0_4_ = (undefined4)uVar20;
  }
  _uStack_78 = CONCAT44((int)((ulong)uVar18 >> 0x20),param_4);
  local_80 = param_3;
  local_60 = uVar19;
  FUN_1006b8804(param_1,0,0,0,0,param_2,&local_a0,param_5,0);
  return param_1;
}

