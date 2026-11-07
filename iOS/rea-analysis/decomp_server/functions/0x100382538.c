// rea decompile_all
// name: FUN_100382538
// address: 0x100382538
// body: available
// range: 0x100382538-0x100382a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100382744) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_100382538(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  long *plVar10;
  long local_108;
  undefined8 *******local_100 [2];
  char local_e9;
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
  undefined4 local_88;
  undefined1 auStack_84 [20];
  int local_70;
  undefined1 uStack_61;
  
  if (DAT_100b366d8 == 0) {
    return (undefined8 *******)0x0;
  }
  local_108 = DAT_100b366d8;
  FUN_100392994();
  if ((param_4 & 1) == 0) {
    lVar9 = DAT_100b366d0;
    FUN_1003850cc(DAT_100b366d0,param_1);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
LAB_100382618:
      FUN_100386734(1,"MMKV.cpp","backupOneToDirectory",0x501,
                    "backup one cached mmkv[%s] from [%s] to [%s]");
      local_a0 = *(void **)(lVar9 + 0xb8);
      if (local_a0 != (void *)0x0) {
        FUN_100392994();
      }
      local_b8 = *(undefined8 **)(lVar9 + 200);
      if ((local_b8 != (undefined8 *)0x0) && (*(char *)((long)local_b8 + 0xc) == '\x01')) {
        FUN_10037dd20(*local_b8,*(undefined4 *)(local_b8 + 1));
      }
      FUN_10037ffc4(lVar9,1);
      lVar6 = lVar9 + 0x38;
      FUN_100390abc(lVar6,param_2);
      if ((int)lVar6 == 0) {
        pppppppuVar8 = (undefined8 *******)0x0;
      }
      else {
        sVar3 = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          sVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        FUN_1003856e0(&local_88,sVar3 + 4,local_e8);
        if (sVar3 != 0) {
          puVar7 = (void *)*param_2;
          if (-1 < *(char *)((long)param_2 + 0x17)) {
            puVar7 = param_2;
          }
          _memmove(&local_88,puVar7,sVar3);
        }
        *(undefined4 *)((long)&local_88 + sVar3) = 0x6372632e;
        auStack_84[sVar3] = 0;
        pppppppuVar8 = (undefined8 *******)(lVar9 + 0x50);
        FUN_100390abc(pppppppuVar8,&local_88);
      }
      FUN_100386734(1,"MMKV.cpp","backupOneToDirectory",0x50c,"finish backup one mmkv[%s], ret: %d")
      ;
      FUN_100385fb0(&local_b8);
      FUN_100385098(&local_a0);
      goto LAB_1003829e8;
    }
  }
  else {
    plVar10 = *(long **)(DAT_100b366d0 + 0x10);
    if (plVar10 != (long *)0x0) {
      sVar3 = param_3[1];
      puVar7 = (void *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        sVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar7 = param_3;
      }
      do {
        lVar9 = plVar10[5];
        bVar4 = *(byte *)(lVar9 + 0x4f);
        sVar1 = *(size_t *)(lVar9 + 0x40);
        if (-1 < (char)bVar4) {
          sVar1 = (ulong)bVar4;
        }
        if (sVar1 == sVar3) {
          puVar2 = *(void **)(lVar9 + 0x38);
          if (-1 < (char)bVar4) {
            puVar2 = (undefined8 *)(lVar9 + 0x38);
          }
          iVar5 = _memcmp(puVar2,puVar7,sVar3);
          if (iVar5 == 0) goto LAB_100382618;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100384eb8(&local_a0,*param_3,param_3[1]);
  }
  else {
    uStack_98 = param_3[1];
    local_a0 = (void *)*param_3;
    local_90 = param_3[2];
  }
  thunk_FUN_10038f858(&local_88,&local_a0,1);
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  if (local_70 < 0) {
    pppppppuVar8 = (undefined8 *******)0x0;
  }
  else {
    FUN_100386734(1,"MMKV.cpp","backupOneToDirectoryByFilePath",0x4d6,
                  "backup one mmkv[%s] from [%s] to [%s]");
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,local_70);
    local_b0 = 0;
    uStack_a8 = 0;
    local_c8 = &local_b8;
    local_c0 = 0;
    local_bc = 1;
    local_d0 = &local_c8;
    FUN_10037dd20(&local_b8,0);
    puVar7 = param_3;
    FUN_100390abc(param_3,param_2);
    if ((int)puVar7 == 0) {
      pppppppuVar8 = (undefined8 *******)0x0;
    }
    else {
      sVar3 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        sVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      FUN_1003856e0(local_e8,sVar3 + 4,local_100);
      pppppppuVar8 = local_e8[0];
      if (-1 < local_d1) {
        pppppppuVar8 = local_e8;
      }
      if (sVar3 != 0) {
        puVar7 = (undefined8 *)*param_3;
        if (-1 < *(char *)((long)param_3 + 0x17)) {
          puVar7 = param_3;
        }
        _memmove(pppppppuVar8,puVar7,sVar3);
      }
      *(undefined4 *)((long)pppppppuVar8 + sVar3) = 0x6372632e;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar8 + sVar3) + 1) = 0;
      sVar3 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        sVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      FUN_1003856e0(local_100,sVar3 + 4,&uStack_61);
      pppppppuVar8 = local_100[0];
      if (-1 < local_e9) {
        pppppppuVar8 = local_100;
      }
      if (sVar3 != 0) {
        puVar7 = (undefined8 *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          puVar7 = param_2;
        }
        _memmove(pppppppuVar8,puVar7,sVar3);
      }
      *(undefined4 *)((long)pppppppuVar8 + sVar3) = 0x6372632e;
      *(undefined1 *)((undefined4 *)((long)pppppppuVar8 + sVar3) + 1) = 0;
      pppppppuVar8 = local_e8;
      FUN_100390abc(pppppppuVar8,local_100);
      if (local_e9 < '\0') {
        operator_delete(local_100[0]);
      }
      if (local_d1 < '\0') {
        operator_delete(local_e8[0]);
      }
    }
    FUN_100386734(1,"MMKV.cpp","backupOneToDirectoryByFilePath",0x4e2,"finish backup one mmkv[%s]");
    FUN_100385fb0(&local_d0);
  }
  FUN_100384c70(&local_88);
LAB_1003829e8:
  FUN_100385098(&local_108);
  return pppppppuVar8;
}

