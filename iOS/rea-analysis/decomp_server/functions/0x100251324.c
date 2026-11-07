// rea decompile_all
// name: FUN_100251324
// address: 0x100251324
// body: available
// range: 0x100251324-0x100251b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100251b4c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100251324(undefined8 param_1,int param_2,long param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  int iVar20;
  ulong uVar21;
  char *pcVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lStack_102a0;
  undefined8 *puStack_10298;
  undefined8 *puStack_10290;
  undefined8 *puStack_10288;
  undefined8 *puStack_10280;
  undefined8 *puStack_10278;
  long lStack_10270;
  ulong uStack_10268;
  undefined8 uStack_10260;
  undefined8 uStack_10258;
  code *pcStack_10250;
  undefined8 uStack_10248;
  undefined8 uStack_10240;
  undefined8 uStack_10238;
  code *pcStack_10230;
  undefined8 uStack_10228;
  undefined8 *puStack_10220;
  undefined8 uStack_10218;
  undefined8 uStack_10210;
  undefined8 uStack_10208;
  undefined8 uStack_10200;
  undefined8 *puStack_101f8;
  undefined8 *puStack_101f0;
  undefined8 uStack_101e8;
  undefined8 uStack_101e0;
  undefined4 uStack_101d8;
  int iStack_101d4;
  undefined4 uStack_10160;
  undefined8 uStack_90;
  undefined8 uStack_88;
  void *local_80;
  long local_70;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puStack_10280 = (undefined8 *)0x0;
  puStack_10278 = (undefined8 *)0x0;
  puStack_10288 = (undefined8 *)0x0;
  lStack_102a0 = 0;
  uStack_10208 = 0;
  uStack_10200 = 0;
  if (param_5 == (undefined8 *)0x0) {
    FUN_10024ebe0(&uStack_10260);
  }
  else {
    uStack_10218 = param_5[9];
    puStack_10220 = (undefined8 *)param_5[8];
    uStack_10208 = param_5[0xb];
    uStack_10210 = param_5[10];
    uStack_10200 = param_5[0xc];
    uStack_10258 = param_5[1];
    uStack_10260 = *param_5;
    uStack_10248 = param_5[3];
    pcStack_10250 = (code *)param_5[2];
    uStack_10238 = param_5[5];
    uStack_10240 = param_5[4];
    uStack_10228 = param_5[7];
    pcStack_10230 = (code *)param_5[6];
  }
  uVar19 = 0xb;
  if (param_2 != 0) {
    uVar19 = 7;
  }
  puVar7 = &uStack_10260;
  FUN_10024e884(puVar7,param_1,uVar19);
  puStack_101f8 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    if (param_2 == 1) {
      if (param_3 != 0) goto LAB_1002518a4;
      FUN_10024e8ac(&uStack_10260,puVar7,0,2);
    }
    uStack_88 = 0;
    uStack_90 = 0;
    puStack_101f0 = puStack_101f8;
    iStack_101d4 = param_2;
    FUN_10024e8c0();
    uStack_10160 = 0;
    pvVar8 = _malloc(0x101e8);
    puVar7 = puStack_101f8;
    uStack_101e8 = 0;
    uStack_101e0 = 0;
    uStack_101d8 = 0;
    if (pvVar8 == (void *)0x0) {
      (*pcStack_10230)(puStack_10220,puStack_101f8);
      goto LAB_1002518a8;
    }
    local_80 = (void *)0x0;
    if (param_2 == 2) {
      pvVar9 = _malloc(0x404);
      if (pvVar9 == (void *)0x0) {
LAB_1002514a4:
        uVar23 = 0;
      }
      else {
        puVar10 = &uStack_10260;
        FUN_10024e8ac(puVar10,puVar7,0,2);
        if (puVar10 != (undefined8 *)0x0) {
          _free(pvVar9);
          goto LAB_1002514a4;
        }
        puVar10 = &uStack_10260;
        FUN_10024e8c0(puVar10,puVar7);
        puVar12 = puVar10;
        if ((undefined8 *)0xfffe < puVar10) {
          puVar12 = (undefined8 *)0xffff;
        }
        puVar24 = (undefined8 *)0x4;
        do {
          if (puVar12 <= puVar24) {
LAB_10025162c:
            uVar23 = 0;
            break;
          }
          puVar24 = puVar24 + 0x80;
          if (puVar12 <= puVar24) {
            puVar24 = puVar12;
          }
          puVar13 = puVar24;
          if ((undefined8 *)0x403 < puVar24) {
            puVar13 = (undefined8 *)0x404;
          }
          puVar11 = &uStack_10260;
          FUN_10024e8ac(puVar11,puVar7,(long)puVar10 - (long)puVar24,0);
          if ((puVar11 != (undefined8 *)0x0) ||
             (puVar11 = puStack_10220, (*pcStack_10250)(puStack_10220,puVar7,pvVar9,puVar13),
             puVar11 != puVar13)) goto LAB_10025162c;
          if ((undefined8 *)0x3 < puVar10) {
            uVar21 = (ulong)((int)puVar13 - 4);
            uVar23 = (long)puVar10 + (uVar21 - (long)puVar24);
            pcVar22 = (char *)((long)pvVar9 + uVar21 + 1);
            iVar20 = (int)puVar13 + -3;
            do {
              if ((((pcVar22[-1] == 'P') && (*pcVar22 == 'K')) && (pcVar22[1] == '\x05')) &&
                 (pcVar22[2] == '\x06')) goto LAB_100251624;
              uVar23 = uVar23 - 1;
              pcVar22 = pcVar22 + -1;
              iVar1 = iVar20 + -1;
              bVar6 = 0 < iVar20;
              iVar20 = iVar1;
            } while (iVar1 != 0 && bVar6);
          }
          uVar23 = 0;
LAB_100251624:
        } while (uVar23 == 0);
        _free(pvVar9);
      }
      puVar7 = &uStack_10260;
      FUN_10024e8ac(puVar7,puStack_101f8,uVar23,0);
      puVar10 = &uStack_10260;
      FUN_100251b50(puVar10,puStack_101f8,&puStack_10298);
      puVar12 = &uStack_10260;
      FUN_100251c08(puVar12,puStack_101f8,&uStack_90);
      puVar24 = &uStack_10260;
      FUN_100251c08(puVar24,puStack_101f8,&uStack_88);
      puStack_10290 = (undefined8 *)0x0;
      puVar13 = &uStack_10260;
      FUN_100251c08(puVar13,puStack_101f8,&puStack_10298);
      if ((int)puVar13 == 0) {
        bVar6 = ((int)puVar24 == 0 && ((int)puVar12 == 0 && (int)puVar10 == 0)) &&
                puVar7 == (undefined8 *)0x0;
        puStack_10290 = puStack_10298;
        puVar7 = puStack_10298;
      }
      else {
        bVar6 = false;
        puVar7 = (undefined8 *)0x0;
      }
      puStack_10288 = (undefined8 *)0x0;
      puVar10 = &uStack_10260;
      FUN_100251c08(puVar10,puStack_101f8,&puStack_10298);
      if ((int)puVar10 == 0) {
        puStack_10288 = puStack_10298;
        puVar10 = puStack_10298;
      }
      else {
        bVar6 = false;
        puVar10 = (undefined8 *)0x0;
      }
      puStack_10278 = (undefined8 *)0x0;
      puVar12 = &uStack_10260;
      FUN_100251b50(puVar12,puStack_101f8,&puStack_10298);
      if ((int)puVar12 == 0) {
        puStack_10278 = puStack_10298;
        bVar6 = (bool)(puVar10 == puVar7 & bVar6);
        puVar7 = puStack_10298;
      }
      else {
        bVar6 = false;
        puVar7 = (undefined8 *)0x0;
      }
      puStack_10280 = (undefined8 *)0x0;
      puVar12 = &uStack_10260;
      FUN_100251b50(puVar12,puStack_101f8,&puStack_10298);
      if ((int)puVar12 == 0) {
        puStack_10280 = puStack_10298;
        puVar12 = puStack_10298;
      }
      else {
        bVar6 = false;
        puVar12 = (undefined8 *)0x0;
      }
      puVar24 = &uStack_10260;
      FUN_100251c08(puVar24,puStack_101f8,&lStack_102a0);
      puVar13 = puStack_101f8;
      if (((int)puVar24 == 0) && (bVar6)) {
        if ((puVar10 == (undefined8 *)0xffff) || (puVar12 == (undefined8 *)0xffffffff)) {
          puVar7 = &uStack_10260;
          FUN_10024e8ac(puVar7,puStack_101f8,uVar23 - 0x14,0);
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = &uStack_10260;
            FUN_100251b50(puVar7,puVar13,&lStack_10270);
            if (((int)puVar7 == 0) && (lStack_10270 == 0x7064b50)) {
              puVar7 = &uStack_10260;
              FUN_100251b50(puVar7,puVar13,&lStack_10270);
              if ((int)puVar7 == 0) {
                puVar7 = &uStack_10260;
                FUN_100251c80(puVar7,puVar13,&uStack_10268);
                if ((int)puVar7 == 0) {
                  puVar7 = &uStack_10260;
                  FUN_100251b50(puVar7,puVar13,&lStack_10270);
                  if ((int)puVar7 == 0) {
                    puVar7 = &uStack_10260;
                    FUN_10024e8ac(puVar7,puVar13,uStack_10268,0);
                    if (puVar7 == (undefined8 *)0x0) {
                      puVar7 = &uStack_10260;
                      FUN_100251b50(puVar7,puVar13,&lStack_10270);
                      if ((((int)puVar7 == 0) && (lStack_10270 == 0x6064b50)) && (uStack_10268 != 0)
                         ) {
                        puVar10 = &uStack_10260;
                        FUN_10024e8ac(puVar10,puStack_101f8,uStack_10268,0);
                        puVar7 = &uStack_10260;
                        FUN_100251b50(puVar7,puStack_101f8,&puStack_10298);
                        puVar12 = &uStack_10260;
                        FUN_100251c80(puVar12,puStack_101f8,&uStack_10268);
                        puVar24 = &uStack_10260;
                        FUN_100251c08(puVar24,puStack_101f8,&puStack_10298);
                        puVar13 = &uStack_10260;
                        FUN_100251c08(puVar13,puStack_101f8,&puStack_10298);
                        puVar11 = &uStack_10260;
                        FUN_100251b50(puVar11,puStack_101f8,&uStack_90);
                        puVar14 = &uStack_10260;
                        FUN_100251b50(puVar14,puStack_101f8,&uStack_88);
                        puVar15 = &uStack_10260;
                        FUN_100251c80(puVar15,puStack_101f8,&puStack_10290);
                        puVar16 = &uStack_10260;
                        FUN_100251c80(puVar16,puStack_101f8,&puStack_10288);
                        puVar5 = puStack_10288;
                        puVar4 = puStack_10290;
                        puVar17 = &uStack_10260;
                        FUN_100251c80(puVar17,puStack_101f8,&puStack_10278);
                        puVar18 = &uStack_10260;
                        FUN_100251c80(puVar18,puStack_101f8,&puStack_10280);
                        if ((((((int)puVar18 == 0) && ((int)puVar17 == 0)) &&
                             ((puVar5 == puVar4 &&
                              (((int)puVar16 == 0 &&
                               (((int)puVar14 == 0 && (int)puVar11 == 0) && (int)puVar15 == 0))))))
                            && ((int)puVar13 == 0)) &&
                           ((((int)puVar24 == 0 && ((int)puVar12 == 0 && (int)puVar7 == 0)) &&
                            (uVar23 = uStack_10268, puVar12 = puStack_10280, puVar7 = puStack_10278,
                            puVar10 == (undefined8 *)0x0)))) goto LAB_1002517a0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_1002517a0:
          lVar3 = lStack_102a0;
          lVar2 = uVar23 - ((long)puVar7 + (long)puVar12);
          if ((ulong)((long)puVar7 + (long)puVar12) <= uVar23) {
            if ((lStack_102a0 != 0) &&
               (local_80 = _malloc(lStack_102a0 + 1), local_80 != (void *)0x0)) {
              puVar10 = puStack_10220;
              (*pcStack_10250)(puStack_10220,puStack_101f8,local_80,lVar3);
              *(undefined1 *)((long)local_80 + (long)puVar10) = 0;
            }
            pvVar9 = _malloc(0xff0);
            puVar10 = &uStack_10260;
            FUN_10024e8ac(puVar10,puStack_101f8,lVar2 + (long)puVar12,0);
            iVar20 = -(uint)(puVar10 != (undefined8 *)0x0);
            if ((puVar7 != (undefined8 *)0x0) && (puVar10 == (undefined8 *)0x0)) {
              while( true ) {
                puVar10 = puVar7;
                if ((undefined8 *)0xfef < puVar7) {
                  puVar10 = (undefined8 *)0xff0;
                }
                puVar24 = puStack_10220;
                (*pcStack_10250)(puStack_10220,puStack_101f8,pvVar9,puVar10);
                if (puVar24 != puVar10) break;
                puVar24 = &uStack_101e8;
                FUN_100251db8(puVar24,pvVar9,puVar10);
                iVar20 = (int)puVar24;
                puVar7 = (undefined8 *)((long)puVar7 - (long)puVar10);
                if ((puVar7 == (undefined8 *)0x0) || (iVar20 != 0)) goto LAB_100251b0c;
              }
              iVar20 = -1;
            }
LAB_100251b0c:
            if (pvVar9 != (void *)0x0) {
              _free(pvVar9);
            }
            puVar7 = &uStack_10260;
            FUN_10024e8ac(puVar7,puStack_101f8,lVar2 + (long)puVar12,0);
            bVar6 = puVar7 == (undefined8 *)0x0 && iVar20 == 0;
            goto joined_r0x0001002514c4;
          }
        }
      }
      (*pcStack_10230)(puStack_10220,puStack_101f8);
    }
    else {
      bVar6 = true;
joined_r0x0001002514c4:
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = local_80;
      }
      if (bVar6) {
        _memcpy(pvVar8,&uStack_10260,0x101e8);
        if (*(long *)((long)pvVar8 + 0x101c8) != 0) {
          iVar20 = 0;
          if (*(long *)((long)pvVar8 + 0x101d8) != 0) {
            iVar20 = (int)*(long *)((long)pvVar8 + 0x101d8) + -1;
          }
          pvVar9 = pvVar8;
          FUN_10025388c(pvVar8,iVar20,*(int *)((long)pvVar8 + 0x8c) == 2);
          if (((int)pvVar9 != -1) ||
             ((*(int *)((long)pvVar8 + 0x8c) == 2 &&
              (pvVar9 = pvVar8, FUN_10025388c(pvVar8,iVar20,0), (int)pvVar9 == 0)))) {
            *(long *)((long)pvVar8 + 66000) = (long)iVar20;
          }
          FUN_10024e8ac(pvVar8,*(undefined8 *)((long)pvVar8 + 0x68),0,2);
        }
        goto LAB_1002518a8;
      }
      if (local_80 != (void *)0x0) {
        _free(local_80);
      }
    }
    _free(pvVar8);
  }
LAB_1002518a4:
  pvVar8 = (void *)0x0;
LAB_1002518a8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return pvVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

