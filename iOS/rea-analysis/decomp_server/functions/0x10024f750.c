// rea decompile_all
// name: FUN_10024f750
// address: 0x10024f750
// body: available
// range: 0x10024f750-0x10024fd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10024f750(ulong param_1,undefined8 *param_2,long *param_3,long param_4,ulong param_5,
                 long param_6,ulong param_7,long param_8,ulong param_9)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  
  if (param_1 == 0) {
    iVar19 = -0x66;
  }
  else {
    uVar20 = param_1;
    FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),
                  *(long *)(param_1 + 0x90) + *(long *)(param_1 + 0xa0),0);
    if ((uVar20 == 0) &&
       (uVar20 = param_1, FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&local_108),
       (int)uVar20 == 0)) {
      iVar19 = 0;
      if (local_108 != 0x2014b50) {
        iVar19 = -0x67;
      }
    }
    else {
      iVar19 = -1;
    }
    uVar20 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_100);
    uVar17 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_f8);
    uVar5 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_f0);
    uVar18 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_e8);
    uVar6 = param_1;
    FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&local_e0);
    uVar1 = (local_e0 >> 0x15 & 0xf) - 1;
    local_80 = CONCAT44((local_e0 >> 0x19) + 0x7bc,uVar1);
    local_88 = CONCAT44(local_e0 >> 0x10,local_e0 >> 0xb) & 0x1f0000001f;
    uVar2 = (local_e0 & 0x1f) << 1;
    local_90 = CONCAT44(local_e0 >> 5,uVar2) & 0x3fffffffff;
    if ((((0x17 < (local_e0 >> 0xb & 0x1f)) || ((local_e0 >> 0x10 & 0x1f) == 0)) || (0xb < uVar1))
       || ((0x3b < (local_e0 >> 5 & 0x3f) || (0x3b < uVar2)))) {
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
    }
    uVar7 = param_1;
    FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_d8);
    uVar8 = param_1;
    FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&local_110);
    local_d0 = local_110;
    uVar9 = param_1;
    FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&local_110);
    local_c8 = local_110;
    uVar10 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_c0);
    uVar11 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_b8);
    uVar12 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_b0);
    uVar13 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_a8);
    uVar14 = param_1;
    FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_a0);
    uVar15 = param_1;
    FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_98);
    uVar16 = param_1;
    FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&local_110);
    uVar3 = local_c0;
    if ((((((int)uVar16 != 0 || (int)uVar15 != 0) || ((int)uVar14 != 0 || (int)uVar13 != 0)) ||
         ((int)uVar12 != 0 || (int)uVar11 != 0)) ||
        ((((int)uVar7 != 0 || (int)uVar6 != 0) || ((int)uVar8 != 0 || (int)uVar9 != 0)) ||
        (int)uVar10 != 0)) ||
        ((((int)uVar18 != 0 || (int)uVar5 != 0) || (int)uVar17 != 0) || (int)uVar20 != 0)) {
      iVar19 = -1;
    }
    lStack_78 = local_110;
    local_70 = 0;
    uVar20 = local_c0;
    if ((param_4 != 0) && (iVar19 == 0)) {
      uVar20 = param_5;
      if (local_c0 < param_5) {
        *(undefined1 *)(param_4 + local_c0) = 0;
        uVar20 = local_c0;
      }
      iVar19 = 0;
      if ((param_5 != 0) && (local_c0 != 0)) {
        uVar17 = *(ulong *)(param_1 + 0x40);
        (**(code **)(param_1 + 0x10))(uVar17,*(undefined8 *)(param_1 + 0x70),param_4,uVar20);
        iVar19 = -(uint)(uVar17 != uVar20);
      }
      uVar20 = uVar3 - uVar20;
    }
    uVar17 = uStack_b8;
    if ((param_6 != 0) && (iVar19 == 0)) {
      uVar5 = uStack_b8;
      if (param_7 <= uStack_b8) {
        uVar5 = param_7;
      }
      if (uVar20 == 0) {
        iVar19 = 0;
      }
      else {
        uVar18 = param_1;
        FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),uVar20,1);
        if (uVar18 == 0) {
          uVar20 = 0;
        }
        iVar19 = -(uint)(uVar18 != 0);
      }
      if ((param_7 != 0) && (uVar17 != 0)) {
        uVar18 = *(ulong *)(param_1 + 0x40);
        (**(code **)(param_1 + 0x10))(uVar18,*(undefined8 *)(param_1 + 0x70),param_6,uVar5);
        if (uVar18 != uVar5) {
          iVar19 = -1;
        }
      }
      uVar20 = uVar20 - uVar5;
    }
    lVar23 = uVar17 + uVar20;
    lVar21 = local_110;
    if ((iVar19 == 0) && (uVar17 != 0)) {
      if (lVar23 == 0) {
        bVar4 = false;
      }
      else {
        uVar20 = param_1;
        FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),lVar23,1);
        bVar4 = uVar20 != 0;
        if (!bVar4) {
          lVar23 = 0;
        }
      }
      uVar20 = param_1;
      FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x70));
      uVar5 = param_1;
      FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),uVar20 - uVar17,0);
      iVar19 = -1;
      if (((uVar5 == 0) && (uVar17 <= uVar20)) && (!bVar4)) {
        uVar20 = 0;
        do {
          uVar17 = param_1;
          FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_120);
          uVar5 = param_1;
          FUN_1002510fc(param_1,*(undefined8 *)(param_1 + 0x70),&local_128);
          lVar22 = local_128;
          iVar19 = -(uint)((int)uVar5 != 0 || (int)uVar17 != 0);
          if (local_120 == 1) {
            local_70 = local_128 + local_70 + 4;
            if ((local_c8 == 0xffffffff) &&
               (uVar17 = param_1, FUN_100251174(param_1,*(undefined8 *)(param_1 + 0x70),&local_c8),
               (int)uVar17 != 0)) {
              iVar19 = -1;
            }
            if ((local_d0 == 0xffffffff) &&
               (uVar17 = param_1, FUN_100251174(param_1,*(undefined8 *)(param_1 + 0x70),&local_d0),
               (int)uVar17 != 0)) {
              iVar19 = -1;
            }
            if (lVar21 == 0xffffffff) {
              uVar17 = param_1;
              FUN_100251174(param_1,*(undefined8 *)(param_1 + 0x70),&local_118);
              if ((int)uVar17 != 0) {
                iVar19 = -1;
              }
              lStack_78 = local_118;
              lVar21 = local_118;
            }
            if (local_a8 == 0xffffffff) {
              uVar17 = param_1;
              FUN_100251044(param_1,*(undefined8 *)(param_1 + 0x70),&local_a8);
              bVar4 = (int)uVar17 == 0;
              goto LAB_10024fc28;
            }
          }
          else {
            uVar17 = param_1;
            FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),local_128,1);
            bVar4 = uVar17 == 0;
LAB_10024fc28:
            if (!bVar4) {
              iVar19 = -1;
            }
          }
          uVar20 = uVar20 + lVar22 + 4;
        } while (iVar19 != -1 && uVar20 < uStack_b8);
      }
    }
    uVar20 = local_b0;
    if (local_a8 == *(long *)(param_1 + 0x80)) {
      lVar22 = *(long *)(param_1 + 0x90);
    }
    else {
      lVar22 = 0;
    }
    if ((param_8 != 0) && (iVar19 == 0)) {
      uVar17 = param_9;
      if (local_b0 < param_9) {
        *(undefined1 *)(param_8 + local_b0) = 0;
        uVar17 = local_b0;
      }
      if (lVar23 == 0) {
        iVar19 = 0;
      }
      else {
        uVar5 = param_1;
        FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),lVar23,1);
        iVar19 = -(uint)(uVar5 != 0);
      }
      if ((param_9 != 0) && (uVar20 != 0)) {
        uVar20 = *(ulong *)(param_1 + 0x40);
        (**(code **)(param_1 + 0x10))(uVar20,*(undefined8 *)(param_1 + 0x70),param_8,uVar17);
        if (uVar20 != uVar17) {
          iVar19 = -1;
        }
      }
    }
    if ((param_2 != (undefined8 *)0x0) && (iVar19 == 0)) {
      param_2[0xd] = uStack_98;
      param_2[0xc] = local_a0;
      param_2[0xf] = local_88;
      param_2[0xe] = local_90;
      param_2[0x11] = lStack_78;
      param_2[0x10] = local_80;
      param_2[0x12] = local_70;
      param_2[5] = uStack_d8;
      param_2[4] = CONCAT44(uStack_dc,local_e0);
      param_2[7] = local_c8;
      param_2[6] = local_d0;
      param_2[9] = uStack_b8;
      param_2[8] = local_c0;
      param_2[0xb] = local_a8;
      param_2[10] = local_b0;
      param_2[1] = uStack_f8;
      *param_2 = local_100;
      param_2[3] = uStack_e8;
      param_2[2] = uStack_f0;
    }
    if ((param_3 != (long *)0x0) && (iVar19 == 0)) {
      *param_3 = lVar21;
      param_3[1] = lVar22;
    }
  }
  return iVar19;
}

