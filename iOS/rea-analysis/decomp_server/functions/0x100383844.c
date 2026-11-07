// rea decompile_all
// name: FUN_100383844
// address: 0x100383844
// body: available
// range: 0x100383844-0x100383dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100383c9c) */
/* WARNING: Removing unreachable block (ram,0x000100383af4) */
/* WARNING: Removing unreachable block (ram,0x000100383c88) */
/* WARNING: Removing unreachable block (ram,0x000100383d24) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_100383844(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined1 auStack_128 [24];
  int local_110;
  undefined8 *local_108;
  long lStack_100;
  long local_f0;
  undefined8 *******local_e8 [2];
  char local_d1;
  undefined8 ***local_d0;
  undefined8 **local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 uStack_61;
  
  if (DAT_100b366d8 == 0) {
    return (undefined8 *******)0x0;
  }
  local_f0 = DAT_100b366d8;
  FUN_100392994();
  if ((param_4 & 1) == 0) {
    lVar8 = DAT_100b366d0;
    FUN_1003850cc(DAT_100b366d0,param_1);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
LAB_100383924:
      FUN_100386734(1,"MMKV.cpp","restoreOneFromDirectory",0x5a6,
                    "restore one cached mmkv[%s] from [%s] to [%s]");
      local_a0 = *(void **)(lVar8 + 0xb8);
      if (local_a0 != (void *)0x0) {
        FUN_100392994();
      }
      local_b8 = *(undefined8 **)(lVar8 + 0xd0);
      if ((local_b8 != (undefined8 *)0x0) && (*(char *)((long)local_b8 + 0xc) == '\x01')) {
        FUN_10037dd20(*local_b8,*(undefined4 *)(local_b8 + 1));
      }
      FUN_10037ffc4(lVar8,1);
      puVar6 = param_2;
      FUN_100390db0(param_2,*(undefined4 *)(*(long *)(lVar8 + 0x80) + 0x18));
      if ((int)puVar6 == 0) {
        pppppppuVar7 = (undefined8 *******)0x0;
      }
      else {
        sVar3 = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          sVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        FUN_1003856e0(&local_80,sVar3 + 4,auStack_128);
        if (sVar3 != 0) {
          puVar6 = (void *)*param_2;
          if (-1 < *(char *)((long)param_2 + 0x17)) {
            puVar6 = param_2;
          }
          _memmove(&local_80,puVar6,sVar3);
        }
        *(undefined4 *)((long)&local_80 + sVar3) = 0x6372632e;
        *(undefined1 *)((long)&local_80 + sVar3 + 4) = 0;
        uStack_138 = uStack_78;
        local_140 = local_80;
        local_130 = local_70;
        thunk_FUN_10038fa08(auStack_128,&local_140,0,0);
        if (local_130 < 0) {
          operator_delete(local_140);
        }
        pppppppuVar7 = (undefined8 *******)
                       (ulong)((lStack_100 != 0 && local_108 != (undefined8 *)0x0) && -1 < local_110
                              );
        if ((lStack_100 != 0 && local_108 != (undefined8 *)0x0) && -1 < local_110) {
          puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0xa0) + 0x20);
          uVar10 = local_108[10];
          uVar12 = local_108[0xd];
          uVar11 = local_108[0xc];
          uVar16 = local_108[7];
          uVar15 = local_108[6];
          uVar14 = local_108[9];
          uVar13 = local_108[8];
          puVar6[0xb] = local_108[0xb];
          puVar6[10] = uVar10;
          puVar6[0xd] = uVar12;
          puVar6[0xc] = uVar11;
          puVar6[7] = uVar16;
          puVar6[6] = uVar15;
          puVar6[9] = uVar14;
          puVar6[8] = uVar13;
          uVar11 = local_108[1];
          uVar10 = *local_108;
          uVar12 = local_108[2];
          uVar14 = local_108[5];
          uVar13 = local_108[4];
          puVar6[3] = local_108[3];
          puVar6[2] = uVar12;
          puVar6[5] = uVar14;
          puVar6[4] = uVar13;
          puVar6[1] = uVar11;
          *puVar6 = uVar10;
        }
        FUN_100384c44(auStack_128);
      }
      FUN_10037f730(lVar8,0);
      FUN_100386814(lVar8);
      if (((*(byte *)(lVar8 + 0x30) >> 1 & 1) != 0) && (DAT_100b36700 != (code *)0x0)) {
        (*DAT_100b36700)(lVar8 + 0x18);
      }
      FUN_100386734(1,"MMKV.cpp","restoreOneFromDirectory",0x5c3,
                    "finish restore one mmkv[%s], ret: %d");
      FUN_100385fb0(&local_b8);
      FUN_100385098(&local_a0);
      goto LAB_100383da4;
    }
  }
  else {
    plVar9 = *(long **)(DAT_100b366d0 + 0x10);
    if (plVar9 != (long *)0x0) {
      sVar3 = param_3[1];
      puVar6 = (void *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        sVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar6 = param_3;
      }
      do {
        lVar8 = plVar9[5];
        bVar4 = *(byte *)(lVar8 + 0x4f);
        sVar1 = *(size_t *)(lVar8 + 0x40);
        if (-1 < (char)bVar4) {
          sVar1 = (ulong)bVar4;
        }
        if (sVar1 == sVar3) {
          puVar2 = *(void **)(lVar8 + 0x38);
          if (-1 < (char)bVar4) {
            puVar2 = (undefined8 *)(lVar8 + 0x38);
          }
          iVar5 = _memcmp(puVar2,puVar6,sVar3);
          if (iVar5 == 0) goto LAB_100383924;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  sVar3 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    sVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  FUN_1003856e0(&local_80,sVar3 + 4,auStack_128);
  if (sVar3 != 0) {
    puVar6 = (undefined8 *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      puVar6 = param_3;
    }
    _memmove(&local_80,puVar6,sVar3);
  }
  *(undefined4 *)((long)&local_80 + sVar3) = 0x6372632e;
  *(undefined1 *)((long)&local_80 + sVar3 + 4) = 0;
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_90 = local_70;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  thunk_FUN_10038f858(auStack_128,&local_a0,7);
  if (local_110 < 0) {
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else {
    FUN_100386734(1,"MMKV.cpp","restoreOneFromDirectoryByFilePath",0x579,
                  "restore one mmkv[%s] from [%s] to [%s]");
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,local_110);
    local_b0 = 0;
    uStack_a8 = 0;
    local_c8 = &local_b8;
    local_c0 = 1;
    local_bc = 1;
    local_d0 = &local_c8;
    FUN_10037dd20(&local_b8,1);
    puVar6 = param_2;
    FUN_100390c68(param_2,param_3);
    if ((int)puVar6 == 0) {
      pppppppuVar7 = (undefined8 *******)0x0;
    }
    else {
      sVar3 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        sVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      FUN_1003856e0(local_e8,sVar3 + 4,&uStack_61);
      pppppppuVar7 = local_e8[0];
      if (-1 < local_d1) {
        pppppppuVar7 = local_e8;
      }
      if (sVar3 != 0) {
        puVar6 = (undefined8 *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          puVar6 = param_2;
        }
        _memmove(pppppppuVar7,puVar6,sVar3);
      }
      *(undefined4 *)((long)pppppppuVar7 + sVar3) = 0x6372632e;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar7 + sVar3) + 1) = 0;
      pppppppuVar7 = local_e8;
      FUN_100390db0(pppppppuVar7,local_110);
      if (local_d1 < '\0') {
        operator_delete(local_e8[0]);
      }
    }
    FUN_100386734(1,"MMKV.cpp","restoreOneFromDirectoryByFilePath",0x584,
                  "finish restore one mmkv[%s]");
    FUN_100385fb0(&local_d0);
  }
  FUN_100384c70(auStack_128);
LAB_100383da4:
  FUN_100385098(&local_f0);
  return pppppppuVar7;
}

