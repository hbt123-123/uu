// rea decompile_all
// name: FUN_1006b8804
// address: 0x1006b8804
// body: available
// range: 0x1006b8804-0x1006b8bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b8bfc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b8804(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,ulong param_8,
                  undefined4 param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((((param_6 == (undefined8 *)0x0) || (param_6[1] == 0)) ||
      ((0x1ffff < param_8 &&
       (((param_8 != 0xffffffffffffffff &&
         (uVar6 = param_6[1] * 6, uVar6 < param_8 || uVar6 - param_8 == 0)) &&
        (*(int *)((long)param_6 + 0x133c) != 0)))))) ||
     (iVar4 = *(int *)((long)param_7 + 0x44), iVar4 == 3)) {
    local_108 = param_7[0xd];
    uStack_110 = param_7[0xc];
    local_f8 = param_7[0xf];
    uStack_100 = param_7[0xe];
    local_e8 = param_7[0x11];
    uStack_f0 = param_7[0x10];
    local_148 = param_7[5];
    uStack_150 = param_7[4];
    local_138 = param_7[7];
    uStack_140 = param_7[6];
    local_128 = param_7[9];
    uStack_130 = param_7[8];
    local_118 = param_7[0xb];
    uStack_120 = param_7[10];
    uStack_168 = param_7[1];
    local_170 = *param_7;
    local_158 = param_7[3];
    uStack_160 = param_7[2];
    uVar6 = param_1;
    FUN_1006bb148(param_1,&local_170,param_8,0,param_9);
    if (uVar6 < 0xffffffffffffff89) {
      uVar6 = *(ulong *)(param_1 + 0x2f0);
      if (param_6 == (undefined8 *)0x0) {
        FUN_1006bcc2c(uVar6,param_1 + 0x300,param_1 + 0x138,param_7,param_2,param_3,param_4,param_5,
                      *(undefined8 *)(param_1 + 0x3d8));
      }
      else {
        FUN_1006bcc2c(uVar6,param_1 + 0x300,param_1 + 0x138,param_7,*param_6,param_6[1],param_4,
                      param_5,*(undefined8 *)(param_1 + 0x3d8));
      }
      if (uVar6 < 0xffffffffffffff89) {
        *(int *)(param_1 + 0x130) = (int)uVar6;
      }
    }
    goto LAB_1006b8ac0;
  }
  uVar7 = *(uint *)(param_6 + 0x25);
  if ((param_8 == 0xffffffffffffffff) || (param_8 <= *(ulong *)(&DAT_10084f728 + (ulong)uVar7 * 8)))
  {
    if (iVar4 != 2) goto LAB_1006b8978;
LAB_1006b8980:
    uStack_110 = param_7[0xc];
    local_118 = param_7[0xb];
    uStack_100 = param_7[0xe];
    local_108 = param_7[0xd];
    uStack_f0 = param_7[0x10];
    local_f8 = param_7[0xf];
    local_e8 = param_7[0x11];
    uStack_150 = param_7[4];
    uStack_140 = param_7[6];
    local_148 = param_7[5];
    uStack_130 = param_7[8];
    local_138 = param_7[7];
    uStack_120 = param_7[10];
    local_128 = param_7[9];
    local_170 = *param_7;
    local_158 = *(undefined8 *)((long)param_6 + 0x124);
    uStack_160 = *(undefined8 *)((long)param_6 + 0x11c);
    uStack_168 = *(undefined8 *)((long)param_6 + 0x114);
    uVar6 = param_1;
    local_e0 = uStack_168;
    uStack_d8 = uStack_160;
    local_d0 = local_158;
    uStack_c8 = uStack_150;
    local_c0 = local_148;
    uStack_b8 = uStack_140;
    uStack_b0 = local_138;
    uStack_a8 = uStack_130;
    local_a0 = local_128;
    uStack_98 = uStack_120;
    uStack_90 = local_118;
    uStack_88 = uStack_110;
    local_80 = local_108;
    uStack_78 = uStack_100;
    uStack_70 = local_f8;
    uStack_68 = uStack_f0;
    local_60 = local_e8;
    FUN_1006bb148(param_1,&local_170,param_8,1,param_9);
    if (0xffffffffffffff88 < uVar6) goto LAB_1006b8ac0;
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x148);
    if (*(int *)(param_6 + 0x25) == 1) {
      sVar10 = 0;
    }
    else {
      sVar10 = 4L << ((ulong)*(uint *)((long)param_6 + 0x114) & 0x3f);
    }
    _memcpy(*(void **)(param_1 + 0x330),(void *)param_6[0x11],
            4L << ((ulong)*(uint *)(param_6 + 0x23) & 0x3f));
    _memcpy(*(void **)(param_1 + 0x340),(void *)param_6[0x13],sVar10);
    sVar10 = 0;
    if (*(uint *)(param_1 + 0x328) != 0) {
      sVar10 = 4L << ((ulong)*(uint *)(param_1 + 0x328) & 0x3f);
    }
    _bzero(*(void **)(param_1 + 0x338),sVar10);
    if (*(ulong *)(param_1 + 0x158) < *(ulong *)(param_1 + 0x150)) {
      *(ulong *)(param_1 + 0x158) = *(ulong *)(param_1 + 0x150);
    }
    uVar11 = param_6[0xb];
    uVar13 = param_6[0xe];
    uVar12 = param_6[0xd];
    *(undefined8 *)(param_1 + 0x308) = param_6[0xc];
    *(undefined8 *)(param_1 + 0x300) = uVar11;
    *(undefined8 *)(param_1 + 0x318) = uVar13;
    *(undefined8 *)(param_1 + 0x310) = uVar12;
    *(undefined8 *)(param_1 + 800) = param_6[0xf];
  }
  else {
    if (iVar4 != 1) goto LAB_1006b8980;
LAB_1006b8978:
    if (*(int *)(param_7 + 6) != 0) goto LAB_1006b8980;
    local_170 = *param_7;
    uVar8 = *(uint *)(param_6 + 0x22);
    uVar5 = *(uint *)(param_6 + 0x23);
    uVar6 = param_8;
    if (param_8 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    uVar9 = 6;
    if (0x3f < uVar6) {
      uVar9 = ((uint)LZCOUNT((int)uVar6 + -1) ^ 0x1f) + 1;
    }
    uVar1 = uVar8;
    if (uVar9 <= uVar8) {
      uVar1 = uVar9;
    }
    if (uVar6 >> 0x1e == 0) {
      uVar8 = uVar1;
    }
    if (uVar8 + 1 <= uVar5) {
      uVar5 = uVar8 + 1;
    }
    uVar9 = uVar8;
    if (5 < uVar7) {
      uVar9 = uVar8 + 1;
    }
    if (*(uint *)((long)param_6 + 0x114) - (uint)(5 < uVar7) <= uVar8) {
      uVar9 = *(uint *)((long)param_6 + 0x114);
    }
    uStack_168 = CONCAT44(uVar5,uVar9);
    uStack_160 = *(undefined8 *)((long)param_6 + 0x11c);
    local_158 = CONCAT44(uVar7,*(undefined4 *)((long)param_6 + 0x124));
    local_108 = param_7[0xd];
    uStack_110 = param_7[0xc];
    local_f8 = param_7[0xf];
    uStack_100 = param_7[0xe];
    local_e8 = param_7[0x11];
    uStack_f0 = param_7[0x10];
    local_148 = param_7[5];
    uStack_150 = param_7[4];
    local_138 = param_7[7];
    uStack_140 = param_7[6];
    local_128 = param_7[9];
    uStack_130 = param_7[8];
    local_118 = param_7[0xb];
    uStack_120 = param_7[10];
    uVar6 = param_1;
    FUN_1006bb148(param_1,&local_170,param_8,0,param_9);
    if (0xffffffffffffff88 < uVar6) goto LAB_1006b8ac0;
    lVar2 = param_6[0xb];
    lVar3 = param_6[0xc];
    uVar7 = (uint)(lVar2 - lVar3);
    if (*(uint *)(param_6 + 0xe) != uVar7) {
      *(undefined8 **)(param_1 + 0x3b0) = param_6 + 0xb;
      uVar8 = *(uint *)(param_1 + 0x318);
      if (*(uint *)(param_1 + 0x318) < uVar7) {
        *(ulong *)(param_1 + 0x300) = *(long *)(param_1 + 0x308) + (lVar2 - lVar3 & 0xffffffffU);
        *(uint *)(param_1 + 0x31c) = uVar7;
        *(uint *)(param_1 + 0x318) = uVar7;
        uVar8 = uVar7;
      }
      *(uint *)(param_1 + 800) = uVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_6 + 0x267);
  _memcpy(*(void **)(param_1 + 0x2f0),param_6 + 0x26,0x11f0);
LAB_1006b8ac0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

