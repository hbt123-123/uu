// rea decompile_all
// name: FUN_10025391c
// address: 0x10025391c
// body: available
// range: 0x10025391c-0x10025415b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100254158 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10025391c(void *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  void *pvVar16;
  ulong local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 == (void *)0x0) {
    iVar12 = -0x66;
    goto LAB_100254120;
  }
  if (*(int *)((long)param_1 + 0x88) == 1) {
    pvVar4 = param_1;
    FUN_100253190(param_1,0,0);
    iVar12 = (int)pvVar4;
  }
  else {
    iVar12 = 0;
  }
  if (param_2 == (char *)0x0) {
    param_2 = *(char **)((long)param_1 + 0x101e0);
  }
  if (*(long *)((long)param_1 + 0x68) != *(long *)((long)param_1 + 0x70)) {
    iVar3 = (int)*(undefined8 *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x30))();
    iVar1 = iVar12;
    if (iVar12 == 0) {
      iVar1 = -1;
    }
    if (iVar3 != 0) {
      iVar12 = iVar1;
    }
    if (*(long *)((long)param_1 + 0x101c8) != 0) {
      *(long *)((long)param_1 + 0x101d8) = *(long *)((long)param_1 + 66000) + 1;
    }
    *(undefined8 *)((long)param_1 + 0x68) = *(undefined8 *)((long)param_1 + 0x70);
  }
  pvVar4 = param_1;
  FUN_10024e8c0();
  if (iVar12 == 0) {
    plVar15 = *(long **)((long)param_1 + 0x78);
    if (plVar15 == (long *)0x0) {
      uVar14 = 0;
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      uVar14 = 0;
      do {
        lVar6 = plVar15[2];
        if (iVar12 == 0) {
          if (lVar6 == 0) {
            iVar12 = 0;
          }
          else {
            lVar5 = *(long *)((long)param_1 + 0x40);
            (**(code **)((long)param_1 + 0x18))
                      (lVar5,*(undefined8 *)((long)param_1 + 0x68),plVar15 + 4);
            lVar6 = plVar15[2];
            iVar12 = -(uint)(lVar5 != lVar6);
          }
        }
        else {
          iVar12 = -1;
        }
        uVar14 = lVar6 + uVar14;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  else {
    uVar14 = 0;
  }
  puVar2 = *(void **)((long)param_1 + 0x78);
  while (puVar2 != (void *)0x0) {
    pvVar16 = (void *)*puVar2;
    _free(puVar2);
    puVar2 = pvVar16;
  }
  *(undefined8 *)((long)param_1 + 0x78) = 0;
  *(undefined8 *)((long)param_1 + 0x80) = 0;
  if ((0xfffffffe < (ulong)((long)pvVar4 - *(long *)((long)param_1 + 0x101b8))) ||
     (0xffff < *(ulong *)((long)param_1 + 0x101c0))) {
    pvVar16 = param_1;
    FUN_10024e8c0(param_1,*(undefined8 *)((long)param_1 + 0x68));
    local_60 = CONCAT44(local_60._4_4_,0x6064b50);
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,4);
    if (lVar6 == 4) {
      lVar6 = 0;
      uVar9 = *(undefined8 *)((long)param_1 + 0x68);
      uVar10 = 0x2c;
      do {
        *(undefined1 *)((long)&local_60 + lVar6) = uVar10;
        uVar10 = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
      lVar6 = *(long *)((long)param_1 + 0x40);
      (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,8);
      if (lVar6 == 8) {
        local_60 = CONCAT62(local_60._2_6_,0x2d);
        lVar6 = *(long *)((long)param_1 + 0x40);
        (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,2)
        ;
        if (lVar6 == 2) {
          local_60 = CONCAT62(local_60._2_6_,0x2d);
          lVar6 = *(long *)((long)param_1 + 0x40);
          (**(code **)((long)param_1 + 0x18))
                    (lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,2);
          if (lVar6 == 2) {
            lVar6 = 0;
            uVar9 = *(undefined8 *)((long)param_1 + 0x68);
            uVar8 = *(ulong *)((long)param_1 + 0x101d8);
            do {
              uVar11 = uVar8;
              *(char *)((long)&local_60 + lVar6) = (char)uVar11;
              lVar6 = lVar6 + 1;
              uVar8 = uVar11 >> 8;
            } while (lVar6 != 4);
            if (0xff < uVar11) {
              local_60 = CONCAT44(local_60._4_4_,0xffffffff);
            }
            lVar6 = *(long *)((long)param_1 + 0x40);
            (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,4);
            if (lVar6 == 4) {
              lVar6 = 0;
              uVar9 = *(undefined8 *)((long)param_1 + 0x68);
              uVar8 = *(ulong *)((long)param_1 + 0x101d8);
              do {
                uVar11 = uVar8;
                *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                lVar6 = lVar6 + 1;
                uVar8 = uVar11 >> 8;
              } while (lVar6 != 4);
              if (0xff < uVar11) {
                local_60 = CONCAT44(local_60._4_4_,0xffffffff);
              }
              lVar6 = *(long *)((long)param_1 + 0x40);
              (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,4);
              if (lVar6 == 4) {
                lVar6 = 0;
                uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                uVar8 = *(ulong *)((long)param_1 + 0x101c0);
                do {
                  uVar11 = uVar8;
                  *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                  lVar6 = lVar6 + 1;
                  uVar8 = uVar11 >> 8;
                } while (lVar6 != 8);
                if (0xff < uVar11) {
                  local_60 = 0xffffffffffffffff;
                }
                lVar6 = *(long *)((long)param_1 + 0x40);
                (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,8);
                if (lVar6 == 8) {
                  lVar6 = 0;
                  uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                  uVar8 = *(ulong *)((long)param_1 + 0x101c0);
                  do {
                    uVar11 = uVar8;
                    *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                    lVar6 = lVar6 + 1;
                    uVar8 = uVar11 >> 8;
                  } while (lVar6 != 8);
                  if (0xff < uVar11) {
                    local_60 = 0xffffffffffffffff;
                  }
                  lVar6 = *(long *)((long)param_1 + 0x40);
                  (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,8);
                  if (lVar6 == 8) {
                    lVar6 = 0;
                    uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                    uVar8 = uVar14;
                    do {
                      uVar11 = uVar8;
                      *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                      lVar6 = lVar6 + 1;
                      uVar8 = uVar11 >> 8;
                    } while (lVar6 != 8);
                    if (0xff < uVar11) {
                      local_60 = 0xffffffffffffffff;
                    }
                    lVar6 = *(long *)((long)param_1 + 0x40);
                    (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,8);
                    if (lVar6 == 8) {
                      lVar6 = 0;
                      uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                      uVar8 = (long)pvVar4 - *(long *)((long)param_1 + 0x101b8);
                      do {
                        uVar11 = uVar8;
                        *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                        lVar6 = lVar6 + 1;
                        uVar8 = uVar11 >> 8;
                      } while (lVar6 != 8);
                      if (0xff < uVar11) {
                        local_60 = 0xffffffffffffffff;
                      }
                      lVar6 = *(long *)((long)param_1 + 0x40);
                      (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,8);
                      if (lVar6 == 8) {
                        local_60 = CONCAT44(local_60._4_4_,0x7064b50);
                        lVar6 = *(long *)((long)param_1 + 0x40);
                        (**(code **)((long)param_1 + 0x18))
                                  (lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,4);
                        if (lVar6 == 4) {
                          lVar6 = 0;
                          uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                          uVar8 = *(ulong *)((long)param_1 + 0x101d8);
                          do {
                            uVar11 = uVar8;
                            *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                            lVar6 = lVar6 + 1;
                            uVar8 = uVar11 >> 8;
                          } while (lVar6 != 4);
                          if (0xff < uVar11) {
                            local_60 = CONCAT44(local_60._4_4_,0xffffffff);
                          }
                          lVar6 = *(long *)((long)param_1 + 0x40);
                          (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,4);
                          if (lVar6 == 4) {
                            lVar6 = 0;
                            uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                            uVar8 = (long)pvVar16 - *(long *)((long)param_1 + 0x101b8);
                            do {
                              uVar11 = uVar8;
                              *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                              lVar6 = lVar6 + 1;
                              uVar8 = uVar11 >> 8;
                            } while (lVar6 != 8);
                            if (0xff < uVar11) {
                              local_60 = 0xffffffffffffffff;
                            }
                            lVar6 = *(long *)((long)param_1 + 0x40);
                            (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,8);
                            if (lVar6 == 8) {
                              lVar6 = 0;
                              uVar9 = *(undefined8 *)((long)param_1 + 0x68);
                              uVar8 = *(long *)((long)param_1 + 0x101d8) + 1;
                              do {
                                uVar11 = uVar8;
                                *(char *)((long)&local_60 + lVar6) = (char)uVar11;
                                lVar6 = lVar6 + 1;
                                uVar8 = uVar11 >> 8;
                              } while (lVar6 != 4);
                              if (0xff < uVar11) {
                                local_60 = CONCAT44(local_60._4_4_,0xffffffff);
                              }
                              lVar6 = *(long *)((long)param_1 + 0x40);
                              (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,4);
                              iVar12 = -(uint)(lVar6 != 4);
                              goto LAB_100253e84;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_10025400c;
  }
LAB_100253e84:
  if (iVar12 == 0) {
    local_60 = CONCAT44(local_60._4_4_,0x6054b50);
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,4);
    if (lVar6 != 4) {
LAB_10025400c:
      iVar12 = -1;
      goto LAB_100254010;
    }
    local_60._0_2_ = (short)*(ulong *)((long)param_1 + 0x101d8);
    if (0xffff < *(ulong *)((long)param_1 + 0x101d8)) {
      local_60._0_2_ = 0xffff;
    }
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,2);
    if (lVar6 != 2) goto LAB_10025400c;
    local_60._0_2_ = (short)*(ulong *)((long)param_1 + 0x101d8);
    if (0xffff < *(ulong *)((long)param_1 + 0x101d8)) {
      local_60._0_2_ = 0xffff;
    }
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,2);
    if (lVar6 != 2) goto LAB_10025400c;
    if (*(ulong *)((long)param_1 + 0x101c0) < 0xffff) {
      local_60 = CONCAT62(local_60._2_6_,(short)*(ulong *)((long)param_1 + 0x101c0));
    }
    else {
      local_60 = CONCAT62(local_60._2_6_,0xffff);
    }
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,2);
    if (lVar6 != 2) goto LAB_10025400c;
    if (*(ulong *)((long)param_1 + 0x101c0) < 0xffff) {
      local_60 = CONCAT62(local_60._2_6_,(short)*(ulong *)((long)param_1 + 0x101c0));
    }
    else {
      local_60 = CONCAT62(local_60._2_6_,0xffff);
    }
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,*(undefined8 *)((long)param_1 + 0x68),&local_60,2);
    if (lVar6 != 2) goto LAB_10025400c;
    lVar6 = 0;
    uVar9 = *(undefined8 *)((long)param_1 + 0x68);
    do {
      uVar8 = uVar14;
      *(char *)((long)&local_60 + lVar6) = (char)uVar8;
      lVar6 = lVar6 + 1;
      uVar14 = uVar8 >> 8;
    } while (lVar6 != 4);
    if (0xff < uVar8) {
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    }
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,4);
    if (lVar6 != 4) goto LAB_10025400c;
    uVar9 = *(undefined8 *)((long)param_1 + 0x68);
    uVar14 = (long)pvVar4 - *(long *)((long)param_1 + 0x101b8);
    if (uVar14 < 0xffffffff) {
      lVar6 = 0;
      do {
        uVar8 = uVar14;
        *(char *)((long)&local_60 + lVar6) = (char)uVar8;
        lVar6 = lVar6 + 1;
        uVar14 = uVar8 >> 8;
      } while (lVar6 != 4);
      if (0xff < uVar8) {
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      }
    }
    else {
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    }
    lVar6 = *(long *)((long)param_1 + 0x40);
    (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,4);
    iVar12 = -(uint)(lVar6 != 4);
    if (param_2 != (char *)0x0) goto LAB_100254014;
LAB_100254098:
    if (iVar12 == 0) {
      uVar14 = 0;
      uVar13 = 0;
      uVar9 = *(undefined8 *)((long)param_1 + 0x68);
      local_60 = local_60 & 0xffffffffffff0000;
LAB_1002540ac:
      lVar6 = *(long *)((long)param_1 + 0x40);
      (**(code **)((long)param_1 + 0x18))(lVar6,uVar9,&local_60,2);
      iVar12 = -(uint)(lVar6 != 2);
      if ((lVar6 == 2) && (uVar13 != 0)) {
        uVar8 = *(ulong *)((long)param_1 + 0x40);
        (**(code **)((long)param_1 + 0x18))
                  (uVar8,*(undefined8 *)((long)param_1 + 0x68),param_2,uVar14);
        iVar12 = -(uint)(uVar8 != uVar14);
      }
    }
  }
  else {
LAB_100254010:
    if (param_2 == (char *)0x0) goto LAB_100254098;
LAB_100254014:
    if (iVar12 == 0) {
      sVar7 = _strlen(param_2);
      uVar9 = *(undefined8 *)((long)param_1 + 0x68);
      uVar14 = sVar7 & 0xffffffff;
      uVar13 = (uint)sVar7;
      local_60 = CONCAT62(local_60._2_6_,(short)sVar7);
      if (0xffff < uVar13) {
        local_60 = CONCAT62(local_60._2_6_,0xffff);
        uVar13 = 1;
      }
      goto LAB_1002540ac;
    }
  }
  uVar9 = *(undefined8 *)((long)param_1 + 0x40);
  (**(code **)((long)param_1 + 0x30))(uVar9,*(undefined8 *)((long)param_1 + 0x68));
  if ((int)uVar9 != 0 && iVar12 == 0) {
    iVar12 = -1;
  }
  if (*(void **)((long)param_1 + 0x101e0) != (void *)0x0) {
    _free(*(void **)((long)param_1 + 0x101e0));
  }
  _free(param_1);
LAB_100254120:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar12;
}

