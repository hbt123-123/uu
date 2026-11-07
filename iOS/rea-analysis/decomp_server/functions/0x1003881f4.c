// rea decompile_all
// name: FUN_1003881f4
// address: 0x1003881f4
// body: available
// range: 0x1003881f4-0x100388a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100388a30 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100388a34 to 0x10038bda8 FUN_10038bda8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003881f4(long param_1,char *param_2,long param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint *puVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  uint *****pppppuVar12;
  uint **ppuVar13;
  uint **ppuVar14;
  void *pvVar15;
  char *pcVar16;
  size_t sVar17;
  undefined8 uVar18;
  uint ****ppppuVar19;
  uint *puVar20;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  char *pcVar28;
  uint *****pppppuVar29;
  long lVar30;
  ushort *puVar31;
  long lVar32;
  uint *****pppppuVar33;
  ulong uVar34;
  char local_102;
  char local_101;
  long local_100;
  long *local_f8;
  uint *local_e8;
  uint *local_e0;
  undefined8 local_d8;
  uint ****local_d0;
  uint ****local_c8;
  uint ****local_c0;
  undefined1 auStack_b8 [16];
  uint *local_a8;
  uint *local_a0;
  undefined8 local_98;
  long local_70;
  uint *puVar21;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar30 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  if (param_3 == 1) {
    param_3 = 0;
LAB_10038827c:
    bVar6 = true;
  }
  else {
    if (param_3 == 0) {
      param_3 = *(long *)(param_1 + 0xb0);
    }
    if (param_3 == 0) goto LAB_10038827c;
    FUN_100392d10(auStack_b8);
    FUN_100392bb0(param_3,auStack_b8,0x10);
    bVar6 = false;
  }
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  pvVar8 = operator_new(0x18);
  lVar30 = lVar30 + 4;
  FUN_10037d560(pvVar8,lVar30,*(long *)(*(long *)(param_1 + 0x80) + 0x28) + -4);
  *(void **)(param_1 + 0x90) = pvVar8;
  lVar32 = *(long *)(param_1 + 0xb0);
  if (lVar32 == 0) {
    if (*param_2 == '\0') {
      if (param_2[1] != '\0') goto LAB_100388378;
LAB_100388614:
      lVar32 = *(long *)(param_1 + 0x68);
      pvVar11 = pvVar8;
      FUN_10037d56c();
      pvVar15 = (void *)((long)pvVar11 + 4);
      if (*(long *)(lVar32 + 0x18) != 0) {
        local_a8 = (uint *)0x0;
        local_a0 = (uint *)0x0;
        local_98 = 0;
        FUN_10038bec4(&local_a8);
        for (plVar26 = *(long **)(lVar32 + 0x10); plVar26 != (long *)0x0; plVar26 = (long *)*plVar26
            ) {
          local_d0 = (uint ****)(plVar26 + 3);
          FUN_10038bf50(&local_a8,&local_d0);
        }
        lVar32 = 0;
        if (local_a0 != local_a8) {
          lVar32 = LZCOUNT((long)local_a0 - (long)local_a8 >> 3) * -2 + 0x7e;
        }
        FUN_10038cfa0(local_a8,local_a0,lVar32,1);
        puVar20 = local_a8;
        local_d0 = (uint ****)0x0;
        local_c8 = (uint ****)0x0;
        local_c0 = (uint ****)0x0;
        puVar31 = *(ushort **)local_a8;
        uVar5 = *puVar31;
        iVar23 = *(int *)(puVar31 + 2);
        local_d0 = operator_new(8);
        local_c8 = local_d0 + 1;
        *(uint *)local_d0 = *(uint *)(puVar31 + 4);
        *(uint *)((long)local_d0 + 4) = iVar23 + (uint)uVar5;
        local_c0 = local_c8;
        uVar9 = (long)local_a0 - (long)puVar20 >> 3;
        pppppuVar12 = (uint *****)local_d0;
        pppppuVar33 = (uint *****)local_d0;
        pppppuVar29 = (uint *****)local_c8;
        if (uVar9 < 2) {
LAB_1003887f0:
          do {
            _memmove(pvVar15,(void *)(lVar30 + (ulong)*(uint *)pppppuVar12),
                     (ulong)*(uint *)((long)pppppuVar12 + 4));
            pvVar15 = (void *)((long)pvVar15 + (ulong)*(uint *)((long)pppppuVar12 + 4));
            pppppuVar12 = pppppuVar12 + 1;
          } while (pppppuVar12 != pppppuVar29);
        }
        else {
          uVar34 = 1;
          pppppuVar12 = (uint *****)local_c8;
          do {
            puVar31 = *(ushort **)(local_a8 + uVar34 * 2);
            uVar22 = *(uint *)(puVar31 + 4);
            uVar2 = *(int *)(puVar31 + 2) + (uint)*puVar31;
            if (uVar22 == *(uint *)((long)pppppuVar12 + -4) + *(uint *)(pppppuVar12 + -1)) {
              *(uint *)((long)pppppuVar12 + -4) = uVar2 + *(uint *)((long)pppppuVar12 + -4);
              pppppuVar29 = pppppuVar12;
            }
            else if (pppppuVar12 < local_c0) {
              pppppuVar29 = pppppuVar12 + 1;
              *(uint *)pppppuVar12 = uVar22;
              *(uint *)((long)pppppuVar12 + 4) = uVar2;
              local_c8 = (uint ****)pppppuVar29;
            }
            else {
              sVar17 = (long)pppppuVar12 - (long)local_d0;
              lVar32 = (long)sVar17 >> 3;
              uVar27 = lVar32 + 1;
              if (uVar27 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10038bda8();
              }
              uVar24 = (long)local_c0 - (long)local_d0 >> 2;
              if (uVar24 <= uVar27) {
                uVar24 = uVar27;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_c0 - (long)local_d0)) {
                uVar24 = 0x1fffffffffffffff;
              }
              if (uVar24 == 0) {
                pppppuVar12 = (uint *****)0x0;
                lVar25 = lVar32;
              }
              else {
                pppppuVar12 = &local_c0;
                FUN_10038c0f4();
                sVar17 = (long)local_c8 - (long)local_d0;
                uVar22 = *(uint *)(puVar31 + 4);
                lVar25 = (long)sVar17 >> 3;
              }
              pppppuVar33 = pppppuVar12 + lVar32;
              *(uint *)pppppuVar33 = uVar22;
              *(uint *)((long)pppppuVar33 + 4) = uVar2;
              pppppuVar29 = pppppuVar33 + 1;
              pppppuVar33 = pppppuVar33 + -lVar25;
              _memcpy(pppppuVar33,local_d0,sVar17);
              ppppuVar19 = local_d0;
              local_c0 = (uint ****)(pppppuVar12 + uVar24);
              bVar1 = (uint *****)local_d0 != (uint *****)0x0;
              local_d0 = (uint ****)pppppuVar33;
              local_c8 = (uint ****)pppppuVar29;
              if (bVar1) {
                operator_delete(ppppuVar19);
                local_c8 = (uint ****)pppppuVar29;
              }
            }
            uVar34 = uVar34 + 1;
            pppppuVar12 = pppppuVar29;
          } while (uVar9 != uVar34);
          pppppuVar12 = (uint *****)local_d0;
          pppppuVar33 = (uint *****)local_d0;
          if ((uint *****)local_d0 != pppppuVar29) goto LAB_1003887f0;
        }
        if ((bVar6) && (local_a8 != local_a0)) {
          iVar23 = 4;
          puVar20 = local_a8;
          do {
            puVar21 = puVar20 + 2;
            puVar31 = *(ushort **)puVar20;
            *(int *)(puVar31 + 4) = iVar23;
            iVar23 = iVar23 + (uint)*puVar31 + *(int *)(puVar31 + 2);
            puVar20 = puVar21;
          } while (puVar21 != local_a0);
        }
        if (pppppuVar33 != (uint *****)0x0) {
          local_c8 = (uint ****)pppppuVar33;
          operator_delete(pppppuVar33);
        }
        if (local_a8 != (uint *)0x0) {
          local_a0 = local_a8;
          operator_delete(local_a8);
        }
      }
      uVar10 = 4;
      FUN_100392a88(4);
      thunk_FUN_10037d6bc(pvVar8,uVar10);
      if (!bVar6) {
        FUN_100392cb0(param_3,pvVar11,pvVar11,(long)pvVar15 - (long)pvVar11);
      }
      FUN_10037dc98(pvVar8,((long)pvVar15 - (long)pvVar11) + -4);
      goto LAB_1003888ec;
    }
    if (*(long *)(param_2 + 2) == 0) goto LAB_100388614;
LAB_100388378:
    FUN_10037eac4(&local_102,param_2);
    pvVar8 = *(void **)(param_1 + 0x90);
    FUN_10037d56c(pvVar8);
    uVar10 = 4;
    FUN_100392a88(4);
    thunk_FUN_10037d6bc(pvVar8,uVar10);
    if (local_102 == '\0') {
      if (local_101 != '\0') {
        plVar26 = &local_100;
        goto LAB_100388910;
      }
    }
    else {
      plVar26 = local_f8;
      if (local_100 != 0) {
LAB_100388910:
        FUN_10037c13c(&local_a8,plVar26);
        ppuVar13 = &local_a8;
        thunk_FUN_10037c5d4();
        if ((int)ppuVar13 != 0) {
          ppuVar14 = ppuVar13;
          FUN_10039280c();
          pvVar15 = pvVar8;
          FUN_10037d56c();
          plVar26 = &local_100;
          if (local_102 != '\0') {
            plVar26 = local_f8;
          }
          _memcpy(pvVar15,(void *)((long)plVar26 + ((ulong)ppuVar14 & 0xffffffff)),
                  (ulong)ppuVar13 & 0xffffffff);
          FUN_10037dc98(pvVar8,(ulong)ppuVar13 & 0xffffffff);
        }
      }
    }
    FUN_10037d56c(pvVar8);
    thunk_FUN_10037edac(&local_102);
    if (bVar6) {
      *(undefined8 *)(param_1 + 0x88) = uVar18;
      goto LAB_100388994;
    }
    FUN_100392cb0(param_3,lVar30,lVar30,uVar18);
    *(undefined8 *)(param_1 + 0x88) = uVar18;
  }
  else {
    lVar25 = *(long *)(param_1 + 0x70);
    local_d0 = (uint ****)0x0;
    local_c8 = (uint ****)0x0;
    local_c0 = (uint ****)0x0;
    if (*(long *)(lVar25 + 0x18) != 0) {
      FUN_10038bec4(&local_d0);
      puVar20 = local_a8;
      for (plVar26 = *(long **)(lVar25 + 0x10); plVar26 != (long *)0x0; plVar26 = (long *)*plVar26)
      {
        local_a8 = (uint *)(plVar26 + 3);
        if ((char)*local_a8 == '\x02') {
          FUN_10038bf50(&local_d0,&local_a8);
          puVar20 = local_a8;
        }
        local_a8 = puVar20;
        puVar20 = local_a8;
      }
      lVar25 = 0;
      if (local_c8 != local_d0) {
        lVar25 = LZCOUNT((long)local_c8 - (long)local_d0 >> 3) * -2 + 0x7e;
      }
      local_a8 = puVar20;
      FUN_10038c128(local_d0,local_c8,lVar25,1);
    }
    uVar9 = 4;
    FUN_100392a88(4);
    if (local_d0 == local_c8) {
LAB_100388360:
      uVar34 = 4;
      uVar27 = uVar9;
    }
    else {
      uVar2 = *(uint *)(*local_d0 + 1);
      uVar34 = (ulong)uVar2;
      if (3 < uVar2 && uVar2 != 5) goto LAB_100388360;
      uVar27 = uVar34;
      FUN_100392a88(uVar34,uVar9);
    }
    FUN_10037d6bc(pvVar8,uVar27);
    pvVar15 = pvVar8;
    FUN_10037d56c();
    if (!bVar6) {
      FUN_100392cb0(param_3,(long)pvVar15 - uVar34,(long)pvVar15 - uVar34,uVar34);
    }
    if (local_d0 != local_c8) {
      local_e8 = (uint *)0x0;
      local_e0 = (uint *)0x0;
      local_d8 = 0;
      ppppuVar19 = (uint ****)*local_d0;
      local_a0 = (uint *)((long)ppppuVar19 + 0xc);
      local_a8 = (uint *)CONCAT44((uint)*(ushort *)((long)ppppuVar19 + 2) +
                                  (uint)*(byte *)((long)ppppuVar19 + 1) +
                                  *(int *)((long)ppppuVar19 + 4),*(undefined4 *)(ppppuVar19 + 1));
      FUN_10038c020(&local_e8,&local_a8);
      uVar9 = (long)local_c8 - (long)local_d0 >> 3;
      puVar20 = local_e8;
      puVar21 = local_e0;
      pppppuVar29 = (uint *****)local_d0;
      pppppuVar12 = (uint *****)local_c8;
      if (1 < uVar9) {
        uVar27 = 1;
        do {
          ppppuVar19 = (uint ****)local_d0[uVar27];
          if (*(int *)(ppppuVar19 + 1) == local_e0[-3] + local_e0[-4]) {
            local_e0[-3] = local_e0[-3] + (uint)*(byte *)((long)ppppuVar19 + 1) +
                           (uint)*(ushort *)((long)ppppuVar19 + 2) + *(int *)((long)ppppuVar19 + 4);
          }
          else {
            local_a0 = (uint *)((long)ppppuVar19 + 0xc);
            local_a8 = (uint *)CONCAT44((uint)*(ushort *)((long)ppppuVar19 + 2) +
                                        (uint)*(byte *)((long)ppppuVar19 + 1) +
                                        *(int *)((long)ppppuVar19 + 4),*(int *)(ppppuVar19 + 1));
            FUN_10038c020(&local_e8,&local_a8);
          }
          uVar27 = uVar27 + 1;
          puVar20 = local_e8;
          puVar21 = local_e0;
          pppppuVar29 = (uint *****)local_d0;
          pppppuVar12 = (uint *****)local_c8;
        } while (uVar9 != uVar27);
      }
      for (; puVar7 = local_e0, local_d0 = (uint ****)pppppuVar29, local_c8 = (uint ****)pppppuVar12
          , puVar20 != local_e0; puVar20 = puVar20 + 4) {
        local_e0 = puVar21;
        FUN_100392f0c(&local_a8,lVar32,*(undefined8 *)(puVar20 + 2));
        FUN_100392ce0(&local_a8,lVar30 + (ulong)*puVar20,pvVar15,puVar20[1]);
        pvVar15 = (void *)((long)pvVar15 + (ulong)puVar20[1]);
        thunk_FUN_100392c48(&local_a8);
        puVar21 = local_e0;
        pppppuVar29 = (uint *****)local_d0;
        pppppuVar12 = (uint *****)local_c8;
        local_e0 = puVar7;
      }
      local_e0 = puVar21;
      if (!bVar6) {
        for (; pppppuVar29 != pppppuVar12; pppppuVar29 = pppppuVar29 + 1) {
          ppppuVar19 = *pppppuVar29;
          *(int *)(ppppuVar19 + 1) = (int)uVar34;
          bVar4 = *(byte *)((long)ppppuVar19 + 1);
          uVar5 = *(ushort *)((long)ppppuVar19 + 2);
          iVar23 = *(int *)((long)ppppuVar19 + 4);
          FUN_100392ef8(param_3,(long)ppppuVar19 + 0xc);
          iVar23 = (uint)uVar5 + (uint)bVar4 + iVar23;
          FUN_100392cb0(param_3,lVar30 + uVar34,lVar30 + uVar34,iVar23);
          uVar34 = (ulong)(uint)(iVar23 + (int)uVar34);
        }
      }
      if (local_e8 != (uint *)0x0) {
        local_e0 = local_e8;
        operator_delete(local_e8);
      }
    }
    if (*param_2 == '\0') {
      if (param_2[1] != '\0') {
        pcVar16 = param_2 + 2;
        goto LAB_100388560;
      }
    }
    else if (*(long *)(param_2 + 2) != 0) {
      pcVar16 = *(char **)(param_2 + 10);
LAB_100388560:
      FUN_10037c13c(&local_a8,pcVar16);
      ppuVar13 = &local_a8;
      thunk_FUN_10037c5d4();
      if ((int)ppuVar13 != 0) {
        cVar3 = *param_2;
        pcVar28 = *(char **)(param_2 + 10);
        ppuVar14 = ppuVar13;
        FUN_10039280c();
        pcVar16 = param_2 + 2;
        if (cVar3 != '\0') {
          pcVar16 = pcVar28;
        }
        uVar9 = (ulong)ppuVar13 & 0xffffffff;
        if (bVar6) {
          _memcpy(pvVar15,pcVar16 + ((ulong)ppuVar14 & 0xffffffff),uVar9);
        }
        else {
          FUN_100392cb0(param_3,pcVar16 + ((ulong)ppuVar14 & 0xffffffff),pvVar15,uVar9);
        }
        pvVar15 = (void *)((long)pvVar15 + uVar9);
      }
    }
    pvVar11 = pvVar8;
    FUN_10037d56c(pvVar8);
    FUN_10037dc98(pvVar8,(long)pvVar15 - (long)pvVar11);
    if ((uint *****)local_d0 != (uint *****)0x0) {
      local_c8 = local_d0;
      operator_delete(local_d0);
    }
LAB_1003888ec:
    *(undefined8 *)(param_1 + 0x88) = uVar18;
    if (bVar6) {
LAB_100388994:
      FUN_100380694(param_1,0);
      goto LAB_1003889d0;
    }
  }
  FUN_100380694(param_1,auStack_b8);
LAB_1003889d0:
  *(undefined1 *)(param_1 + 0x99) = 1;
  if (param_4 != 0) {
    FUN_10037ffc4(param_1,1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

