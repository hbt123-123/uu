// rea decompile_all
// name: FUN_100253190
// address: 0x100253190
// body: available
// range: 0x100253190-0x10025388b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100253888 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100253190(long param_1,ulong param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x88) == 0)) {
    uVar14 = 0xffffff9a;
    goto LAB_100253850;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(int *)(param_1 + 0x148) == 0) && (*(int *)(param_1 + 0x144) == 8)) {
    do {
      if (*(int *)(param_1 + 0xb0) == 0) {
        FUN_100253018(param_1);
        *(undefined4 *)(param_1 + 0xb0) = 0x10000;
        *(long *)(param_1 + 0xa8) = param_1 + 0x14c;
      }
      iVar16 = *(int *)(param_1 + 0xb8);
      uVar6 = _deflate((z_streamp)(param_1 + 0x90),4);
      uVar14 = (ulong)uVar6;
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0xb8) - iVar16);
    } while (uVar6 == 0);
    if (uVar6 == 1) goto LAB_100253250;
  }
  else {
LAB_100253250:
    if (*(int *)(param_1 + 0x104) == 0) {
      uVar14 = 0;
    }
    else {
      lVar10 = param_1;
      FUN_100253018();
      uVar14 = (ulong)-(uint)((int)lVar10 == -1);
    }
  }
  if (*(int *)(param_1 + 0x148) == 0) {
    if (*(int *)(param_1 + 0x144) == 8) {
      uVar6 = _deflateEnd((z_streamp)(param_1 + 0x90));
      if ((uint)uVar14 != 0) {
        uVar6 = (uint)uVar14;
      }
      uVar14 = (ulong)uVar6;
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    param_3 = *(ulong *)(param_1 + 0x10158);
    param_2 = *(ulong *)(param_1 + 0x10180);
  }
  uVar2 = *(long *)(param_1 + 0x10178) + (long)*(int *)(param_1 + 0x101a8);
  if ((0xfffffffe < uVar2 || 0xfffffffe < param_2) || (0xfffffffe < *(ulong *)(param_1 + 0x108))) {
    *(undefined2 *)(*(long *)(param_1 + 0x110) + 4) = 0x2d;
    *(undefined2 *)(*(long *)(param_1 + 0x110) + 6) = 0x2d;
  }
  lVar10 = 0;
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x110) + 0x10);
  uVar9 = param_3;
  do {
    uVar17 = uVar9;
    *(char *)((long)puVar1 + lVar10) = (char)uVar17;
    lVar10 = lVar10 + 1;
    uVar9 = uVar17 >> 8;
  } while (lVar10 != 4);
  if (0xff < uVar17) {
    *puVar1 = 0xffffffff;
  }
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x110) + 0x14);
  if (uVar2 < 0xffffffff) {
    lVar10 = 0;
    uVar9 = uVar2;
    do {
      uVar17 = uVar9;
      *(char *)((long)puVar1 + lVar10) = (char)uVar17;
      lVar10 = lVar10 + 1;
      uVar9 = uVar17 >> 8;
    } while (lVar10 != 4);
    if (0xff < uVar17) goto LAB_100253364;
  }
  else {
LAB_100253364:
    *puVar1 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xe8) == 1) {
    *(undefined2 *)(*(long *)(param_1 + 0x110) + 0x24) = 1;
  }
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x110) + 0x18);
  if (param_2 < 0xffffffff) {
    lVar10 = 0;
    uVar9 = param_2;
    do {
      uVar17 = uVar9;
      *(char *)((long)puVar1 + lVar10) = (char)uVar17;
      lVar10 = lVar10 + 1;
      uVar9 = uVar17 >> 8;
    } while (lVar10 != 4);
    uVar13 = 0;
    uVar6 = 0;
    if (0xff < uVar17) goto LAB_1002533d0;
  }
  else {
    uVar6 = 8;
LAB_1002533d0:
    uVar13 = uVar6;
    *puVar1 = 0xffffffff;
  }
  uVar6 = uVar13 + 8;
  if (uVar2 < 0xffffffff) {
    uVar6 = uVar13;
  }
  uVar13 = uVar6 + 8;
  if (*(ulong *)(param_1 + 0x108) < 0xffffffff) {
    uVar13 = uVar6;
  }
  if (uVar13 != 0) {
    uVar9 = (ulong)(uVar13 | 4);
    if (*(ulong *)(param_1 + 0x128) < uVar9) {
      uVar14 = 0xffffff99;
      goto LAB_100253850;
    }
    puVar3 = (undefined2 *)(*(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x120));
    *puVar3 = 1;
    *(char *)(puVar3 + 1) = (char)uVar13;
    *(undefined1 *)((long)puVar3 + 3) = 0;
    puVar11 = (undefined8 *)(puVar3 + 2);
    if (0xfffffffe < param_2) {
      lVar10 = 0;
      uVar17 = param_2;
      do {
        uVar12 = uVar17;
        *(char *)((long)puVar11 + lVar10) = (char)uVar12;
        lVar10 = lVar10 + 1;
        uVar17 = uVar12 >> 8;
      } while (lVar10 != 8);
      if (0xff < uVar12) {
        *puVar11 = 0xffffffffffffffff;
      }
      puVar11 = (undefined8 *)(puVar3 + 6);
    }
    if (0xfffffffe < uVar2) {
      lVar10 = 0;
      uVar17 = uVar2;
      do {
        uVar12 = uVar17;
        *(char *)((long)puVar11 + lVar10) = (char)uVar12;
        lVar10 = lVar10 + 1;
        uVar17 = uVar12 >> 8;
      } while (lVar10 != 8);
      if (0xff < uVar12) {
        *puVar11 = 0xffffffffffffffff;
      }
      puVar11 = puVar11 + 1;
    }
    if (0xfffffffe < *(ulong *)(param_1 + 0x108)) {
      lVar10 = 0;
      uVar17 = *(ulong *)(param_1 + 0x108);
      do {
        uVar12 = uVar17;
        *(char *)((long)puVar11 + lVar10) = (char)uVar12;
        lVar10 = lVar10 + 1;
        uVar17 = uVar12 >> 8;
      } while (lVar10 != 8);
      if (0xff < uVar12) {
        *puVar11 = 0xffffffffffffffff;
      }
    }
    *(ulong *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) - uVar9;
    uVar17 = *(ulong *)(param_1 + 0x118) + uVar9;
    *(ulong *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + uVar9;
    *(ulong *)(param_1 + 0x118) = uVar17;
    lVar10 = *(long *)(param_1 + 0x110);
    *(short *)(lVar10 + 0x1e) = (short)uVar17;
    if (0xffff < uVar17) {
      *(undefined2 *)(lVar10 + 0x1e) = 0xffff;
    }
  }
  if (*(long *)(param_1 + 0x130) == 0) {
    uVar9 = 0;
  }
  else {
    uVar17 = 0;
    do {
      puVar4 = (undefined1 *)(*(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x120) + uVar17);
      *puVar4 = puVar4[*(long *)(param_1 + 0x128)];
      uVar17 = uVar17 + 1;
      uVar9 = *(ulong *)(param_1 + 0x130);
    } while (uVar17 < uVar9);
  }
  *(ulong *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + uVar9;
  if ((int)uVar14 == 0) {
    uVar14 = param_1 + 0x78;
    FUN_100251db8(uVar14,*(undefined8 *)(param_1 + 0x110));
    _free(*(void **)(param_1 + 0x110));
    if ((int)uVar14 == 0) {
      lVar10 = param_1;
      FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x68));
      lVar15 = *(long *)(param_1 + 66000);
      if (*(long *)(param_1 + 0x10168) == lVar15) {
        bVar5 = true;
      }
      else {
        lVar8 = param_1;
        FUN_10025388c(param_1,*(long *)(param_1 + 0x10168),1);
        bVar5 = (int)lVar8 == 0;
      }
      lVar8 = param_1;
      FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x108) + 0xe,0);
      if ((lVar8 == 0) && (bVar5)) {
        lVar8 = 0;
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        do {
          uVar14 = param_3;
          *(char *)((long)&local_60 + lVar8) = (char)uVar14;
          lVar8 = lVar8 + 1;
          param_3 = uVar14 >> 8;
        } while (lVar8 != 4);
        if (0xff < uVar14) {
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        }
        lVar8 = *(long *)(param_1 + 0x40);
        (**(code **)(param_1 + 0x18))(lVar8,uVar7,&local_60,4);
        iVar16 = -(uint)(lVar8 != 4);
        if ((param_2 < 0xffffffff) && (uVar2 < 0xffffffff)) {
          if (lVar8 == 4) {
            lVar8 = 0;
            uVar7 = *(undefined8 *)(param_1 + 0x68);
            do {
              uVar14 = uVar2;
              *(char *)((long)&local_60 + lVar8) = (char)uVar14;
              lVar8 = lVar8 + 1;
              uVar2 = uVar14 >> 8;
            } while (lVar8 != 4);
            if (0xff < uVar14) {
              local_60 = CONCAT44(local_60._4_4_,0xffffffff);
            }
            lVar8 = *(long *)(param_1 + 0x40);
            (**(code **)(param_1 + 0x18))(lVar8,uVar7,&local_60,4);
            if (lVar8 == 4) {
              lVar8 = 0;
              uVar7 = *(undefined8 *)(param_1 + 0x68);
              do {
                uVar14 = param_2;
                *(char *)((long)&local_60 + lVar8) = (char)uVar14;
                lVar8 = lVar8 + 1;
                param_2 = uVar14 >> 8;
              } while (lVar8 != 4);
              if (0xff < uVar14) {
                local_60 = CONCAT44(local_60._4_4_,0xffffffff);
              }
              lVar8 = *(long *)(param_1 + 0x40);
              (**(code **)(param_1 + 0x18))(lVar8,uVar7,&local_60,4);
              bVar5 = lVar8 == 4;
LAB_1002537f0:
              uVar6 = -(uint)!bVar5;
              goto LAB_100253804;
            }
          }
LAB_1002537f8:
          uVar6 = 0xffffffff;
        }
        else {
LAB_10025372c:
          if (*(long *)(param_1 + 0x10170) == 0) {
            uVar6 = 0xffffff99;
          }
          else {
            lVar8 = param_1;
            FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x10170) + 4,0
                         );
            uVar6 = 0xffffffff;
            if ((lVar8 == 0) && (iVar16 == 0)) {
              lVar8 = 0;
              uVar7 = *(undefined8 *)(param_1 + 0x68);
              do {
                uVar14 = param_2;
                *(char *)((long)&local_60 + lVar8) = (char)uVar14;
                lVar8 = lVar8 + 1;
                param_2 = uVar14 >> 8;
              } while (lVar8 != 8);
              if (0xff < uVar14) {
                local_60 = 0xffffffffffffffff;
              }
              lVar8 = *(long *)(param_1 + 0x40);
              (**(code **)(param_1 + 0x18))(lVar8,uVar7,&local_60,8);
              if (lVar8 == 8) {
                lVar8 = 0;
                uVar7 = *(undefined8 *)(param_1 + 0x68);
                do {
                  uVar14 = uVar2;
                  *(char *)((long)&local_60 + lVar8) = (char)uVar14;
                  lVar8 = lVar8 + 1;
                  uVar2 = uVar14 >> 8;
                } while (lVar8 != 8);
                if (0xff < uVar14) {
                  local_60 = 0xffffffffffffffff;
                }
                lVar8 = *(long *)(param_1 + 0x40);
                (**(code **)(param_1 + 0x18))(lVar8,uVar7,&local_60,8);
                bVar5 = lVar8 == 8;
                goto LAB_1002537f0;
              }
              goto LAB_1002537f8;
            }
          }
        }
      }
      else {
        iVar16 = -1;
        if ((0xfffffffe < param_2) || (uVar6 = 0xffffffff, 0xfffffffe < uVar2)) goto LAB_10025372c;
      }
LAB_100253804:
      if (*(long *)(param_1 + 0x10168) != lVar15) {
        lVar8 = param_1;
        FUN_10025388c(param_1,lVar15,1);
        uVar6 = (uint)lVar8;
      }
      lVar15 = param_1;
      FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x68),lVar10,0);
      if (lVar15 != 0) {
        uVar6 = 0xffffffff;
      }
      uVar14 = (ulong)uVar6;
    }
  }
  else {
    _free(*(void **)(param_1 + 0x110));
  }
  *(long *)(param_1 + 0x101c0) = *(long *)(param_1 + 0x101c0) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
LAB_100253850:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

