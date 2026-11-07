// rea decompile_all
// name: FUN_10024fda0
// address: 0x10024fda0
// body: available
// range: 0x10024fda0-0x10025032f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10025032c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10024fda0(undefined8 *param_1,int *param_2,undefined4 *param_3,int param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  uLongf *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long local_98;
  long local_90;
  byte local_88 [8];
  long local_80;
  long local_78 [2];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((param_1 == (undefined8 *)0x0) || (param_1[0x15] == 0)) {
    iVar4 = -0x66;
    goto LAB_1002500a4;
  }
  if (param_1[0x2f] != 0) {
    FUN_10024f538(param_1);
  }
  puVar8 = param_1;
  FUN_1002507b4();
  if (((int)puVar8 == 0) &&
     (puVar8 = param_1, FUN_10024e8ac(param_1,param_1[0xd],param_1[0x2e] + param_1[0x2d],0),
     puVar8 == (undefined8 *)0x0)) {
    puVar8 = param_1;
    FUN_100251044(param_1,param_1[0xd],local_78);
    puVar5 = param_1;
    FUN_1002510fc(param_1,param_1[0xd],&local_80);
    puVar6 = param_1;
    FUN_1002510fc(param_1,param_1[0xd],local_88);
    puVar7 = param_1;
    FUN_1002510fc(param_1,param_1[0xd],&local_80);
    if ((int)puVar7 == 0) {
      iVar4 = 0;
      if (local_78[0] != 0x4034b50) {
        iVar4 = -0x67;
      }
      if ((int)puVar6 != 0 || ((int)puVar5 != 0 || (int)puVar8 != 0)) {
        iVar4 = -1;
      }
      if ((((int)puVar6 == 0 && ((int)puVar5 == 0 && (int)puVar8 == 0)) &&
          (local_78[0] == 0x4034b50)) && (iVar4 = 0, local_80 != param_1[0x1d])) {
        iVar4 = -0x67;
      }
    }
    else {
      iVar4 = -1;
    }
    uVar18 = param_1[0x1d];
    puVar8 = param_1;
    FUN_100251044(param_1,param_1[0xd],&local_80);
    puVar5 = param_1;
    FUN_100251044(param_1,param_1[0xd],&local_80);
    if ((int)puVar5 == 0) {
      iVar11 = -0x67;
      if ((uVar18 & 0xfffffff7) == 0 || iVar4 != 0) {
        iVar11 = iVar4;
      }
      if ((int)puVar8 != 0) {
        iVar11 = -1;
      }
      if (iVar11 == 0) {
        if (local_80 == param_1[0x1f]) {
          iVar11 = 0;
        }
        else {
          iVar11 = -0x67;
          if ((local_88[0] & 8) != 0) {
            iVar11 = 0;
          }
        }
      }
    }
    else {
      iVar11 = -1;
    }
    puVar8 = param_1;
    FUN_100251044(param_1,param_1[0xd],&local_80);
    if ((int)puVar8 == 0) {
      if ((local_80 != 0xffffffff) && (iVar11 == 0)) {
        if (local_80 == param_1[0x20]) {
          iVar11 = 0;
        }
        else {
          iVar11 = -0x67;
          if ((local_88[0] & 8) != 0) {
            iVar11 = 0;
          }
        }
      }
    }
    else {
      iVar11 = -1;
    }
    puVar8 = param_1;
    FUN_100251044(param_1,param_1[0xd],&local_80);
    if ((int)puVar8 == 0) {
      if ((local_80 != 0xffffffff) && (iVar11 == 0)) {
        if (local_80 == param_1[0x21]) {
          iVar11 = 0;
        }
        else {
          iVar11 = -0x67;
          if ((local_88[0] & 8) != 0) {
            iVar11 = 0;
          }
        }
      }
    }
    else {
      iVar11 = -1;
    }
    puVar8 = param_1;
    FUN_1002510fc(param_1,param_1[0xd],&local_90);
    if ((int)puVar8 == 0) {
      if (iVar11 == 0) {
        bVar3 = local_90 == param_1[0x22];
      }
      else {
        bVar3 = false;
      }
    }
    else {
      bVar3 = false;
    }
    puVar8 = param_1;
    FUN_1002510fc(param_1,param_1[0xd],&local_98);
    if (((int)puVar8 == 0) && (bVar3)) {
      lVar19 = param_1[0x2d];
      puVar8 = _malloc(0x150);
      if (puVar8 != (undefined8 *)0x0) {
        pvVar9 = _malloc(0x10000);
        *puVar8 = pvVar9;
        puVar8[0x11] = local_90 + lVar19 + 0x1e;
        *(int *)(puVar8 + 0x12) = (int)local_98;
        puVar8[0x13] = 0;
        *(int *)(puVar8 + 0x29) = param_4;
        if (pvVar9 == (void *)0x0) {
          _free(puVar8);
        }
        else {
          puVar8[0x10] = 0;
          iVar4 = (int)param_1[0x1d];
          if (param_2 != (int *)0x0) {
            *param_2 = iVar4;
          }
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 6;
            uVar18 = param_1[0x1c] & 6;
            if (uVar18 < 4) {
              if (uVar18 == 0) goto LAB_10025012c;
              uVar12 = 9;
            }
            else if (uVar18 == 6) {
              uVar12 = 1;
            }
            else {
              uVar12 = 2;
            }
            *param_3 = uVar12;
          }
LAB_10025012c:
          uVar13 = 0;
          uVar21 = param_1[5];
          uVar20 = param_1[4];
          uVar15 = param_1[6];
          puVar8[0x20] = param_1[7];
          puVar8[0x1f] = uVar15;
          uVar15 = param_1[8];
          uVar23 = param_1[0xb];
          uVar22 = param_1[10];
          puVar8[0x22] = param_1[9];
          puVar8[0x21] = uVar15;
          puVar8[0x24] = uVar23;
          puVar8[0x23] = uVar22;
          uVar15 = *param_1;
          uVar23 = param_1[3];
          uVar22 = param_1[2];
          puVar8[0x1a] = param_1[1];
          puVar8[0x19] = uVar15;
          puVar8[0x1c] = uVar23;
          puVar8[0x1b] = uVar22;
          uVar15 = param_1[0x1f];
          puVar8[0x15] = 0;
          puVar8[0x16] = uVar15;
          puVar8[0x14] = 0;
          puVar8[0x27] = (long)iVar4;
          uVar15 = param_1[0xd];
          puVar8[0x25] = param_1[0xc];
          puVar8[0x26] = uVar15;
          puVar8[0x1e] = uVar21;
          puVar8[0x1d] = uVar20;
          if (param_1[0x17] == param_1[0x10]) {
            uVar13 = param_1[0x12];
          }
          ((z_streamp)(puVar8 + 1))->next_in = (Bytef *)0x0;
          puVar8[0x28] = uVar13;
          puVar8[6] = 0;
          puVar8[3] = 0;
          if (param_4 == 0) {
            if (iVar4 == 8) {
              puVar8[9] = 0;
              puVar8[10] = 0;
              puVar8[0xb] = param_1;
              *(undefined4 *)(puVar8 + 2) = 0;
              iVar4 = _inflateInit2_((z_streamp)(puVar8 + 1),-0xf,"1.2.12",0x70);
              if (iVar4 != 0) {
                _free(puVar8);
                goto LAB_1002500a4;
              }
              puVar8[0x10] = 8;
              lVar19 = param_1[0x2d];
            }
            else if (iVar4 == 0xc) {
              *(undefined4 *)(puVar8 + 0x29) = 1;
            }
          }
          uVar15 = param_1[0x20];
          puVar8[0x18] = param_1[0x21];
          puVar8[0x17] = uVar15;
          lVar19 = lVar19 + (local_98 + local_90 & 0xffffffffU) + 0x1e;
          puVar8[0xf] = lVar19;
          *(undefined4 *)(puVar8 + 2) = 0;
          param_1[0x2f] = puVar8;
          param_1[0x34] = 0;
          if ((param_5 == 0) || ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
            iVar4 = 0;
            goto LAB_1002500a4;
          }
          puVar5 = param_1;
          FUN_10024e8ac(param_1,param_1[0xd],puVar8[0x28] + lVar19,0);
          if (puVar5 == (undefined8 *)0x0) {
            puVar10 = _get_crc_table();
            param_1[0x34] = puVar10;
            FUN_100250330(param_5,param_1 + 0x31,puVar10);
            uVar18 = param_1[8];
            (*(code *)param_1[2])(uVar18,param_1[0xd],local_78,0xc);
            if (0xb < uVar18) {
              lVar19 = 0;
              uVar18 = param_1[0x33];
              lVar2 = param_1[0x34];
              uVar16 = param_1[0x31];
              lVar17 = param_1[0x32];
              do {
                uVar14 = (uint)uVar18;
                uVar1 = (uint)*(byte *)((long)local_78 + lVar19) ^
                        (uVar14 & 0xfffd ^ 3) * (uVar14 | 2) >> 8;
                *(char *)((long)local_78 + lVar19) = (char)uVar1;
                uVar16 = *(ulong *)(lVar2 + ((ulong)(uVar1 ^ (uint)uVar16) & 0xff) * 8) ^
                         uVar16 >> 8;
                lVar17 = (lVar17 + (uVar16 & 0xff)) * 0x8088405 + 1;
                param_1[0x31] = uVar16;
                param_1[0x32] = lVar17;
                uVar18 = *(ulong *)(lVar2 + ((ulong)(uVar14 ^ (uint)lVar17 >> 0x18) & 0xff) * 8) ^
                         uVar18 >> 8;
                param_1[0x33] = uVar18;
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0xc);
              iVar4 = 0;
              lVar19 = param_1[0x2f];
              *(long *)(lVar19 + 0xb8) = *(long *)(lVar19 + 0xb8) + -0xc;
              *(long *)(lVar19 + 0x78) = *(long *)(lVar19 + 0x78) + 0xc;
              goto LAB_1002500a4;
            }
          }
        }
      }
      iVar4 = -0x68;
      goto LAB_1002500a4;
    }
  }
  iVar4 = -0x67;
LAB_1002500a4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

