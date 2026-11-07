// rea decompile_all
// name: FUN_1006a1a9c
// address: 0x1006a1a9c
// body: available
// range: 0x1006a1a9c-0x1006a1e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a1a9c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *pvVar5;
  byte bVar6;
  byte bVar7;
  void **ppvVar8;
  int iVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  undefined8 ******ppppppuVar13;
  size_t sVar14;
  uint uVar15;
  void *local_100 [2];
  char local_e9;
  undefined8 *****local_e8 [2];
  char local_d1;
  undefined8 ****local_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****local_c0;
  long local_b0;
  long *local_a8;
  long local_a0;
  char local_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined *local_78;
  char local_70;
  
  local_78 = &DAT_100b2c568;
  local_70 = '\0';
  FUN_100696f64(&local_78);
  bVar6 = *(byte *)((long)param_2 + 0x17);
  sVar14 = param_2[1];
  sVar4 = sVar14;
  if (-1 < (char)bVar6) {
    sVar4 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_3 + 0x17);
  sVar1 = param_3[1];
  if (-1 < (char)bVar7) {
    sVar1 = (ulong)bVar7;
  }
  if (sVar4 == sVar1) {
    puVar2 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar2 = param_2;
    }
    puVar3 = (void *)*param_3;
    if (-1 < (char)bVar7) {
      puVar3 = param_3;
    }
    iVar9 = _memcmp(puVar2,puVar3,sVar4);
    if (iVar9 == 0) goto LAB_1006a1de0;
  }
  if ((char)bVar6 < '\0') {
    FUN_100384eb8(&local_90,*param_2,sVar14);
  }
  else {
    uStack_88 = param_2[1];
    local_90 = (void *)*param_2;
    local_80 = param_2[2];
  }
  FUN_10069a9a4(&local_d0,&local_90,0);
  if ((int)local_d0 == 3) {
    local_a0 = param_1 + 0x148;
    local_98 = '\0';
    FUN_100696f64(&local_a0);
    lVar10 = 0;
    _time();
    FUN_10069bb58(&local_b0,&local_90);
    if (local_b0 != 0) {
      do {
        FUN_10069cde4(&local_d0);
        pppppuVar11 = &local_d0;
        FUN_100693888(pppppuVar11,param_4);
        lVar12 = local_b0;
        if ((int)pppppuVar11 == 0) {
          uVar15 = 1;
        }
        else {
          FUN_1006928dc(local_e8,"xlog");
          FUN_100693a1c(lVar12,local_e8);
          if (local_d1 < '\0') {
            operator_delete(local_e8[0]);
          }
          uVar15 = (uint)lVar12 ^ 1;
        }
        lVar12 = local_b0;
        if ((long)local_c0 < 0) {
          operator_delete(local_d0);
          lVar12 = local_b0;
        }
        local_b0 = lVar12;
        if ((uVar15 & 1) == 0) {
          if (0 < *(int *)(param_1 + 0x70)) {
            FUN_100699d54(lVar12,0);
            if ((lVar12 < lVar10) && (lVar10 - lVar12 < (long)(*(int *)(param_1 + 0x70) * 0x15180)))
            goto LAB_1006a1d5c;
          }
          sVar4 = *(size_t *)(param_1 + 0x10);
          if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
            sVar4 = (ulong)*(byte *)(param_1 + 0x1f);
          }
          FUN_1006a5804(local_e8,sVar4 + 1,&local_d0);
          ppppppuVar13 = (undefined8 ******)local_e8[0];
          if (-1 < local_d1) {
            ppppppuVar13 = local_e8;
          }
          if (sVar4 != 0) {
            pvVar5 = *(void **)(param_1 + 8);
            if (-1 < *(char *)(param_1 + 0x1f)) {
              pvVar5 = (void *)(param_1 + 8);
            }
            _memmove(ppppppuVar13,pvVar5,sVar4);
          }
          *(undefined2 *)((long)ppppppuVar13 + sVar4) = 0x2f;
          FUN_10069cde4(local_100,local_b0);
          ppvVar8 = local_100[0];
          if (-1 < local_e9) {
            ppvVar8 = local_100;
          }
          ppppppuVar13 = local_e8;
          std::string::append((char *)ppppppuVar13,(ulong)ppvVar8);
          local_c0 = ppppppuVar13[2];
          ppppuStack_c8 = ppppppuVar13[1];
          local_d0 = *ppppppuVar13;
          ppppppuVar13[1] = (undefined8 *****)0x0;
          ppppppuVar13[2] = (undefined8 *****)0x0;
          *ppppppuVar13 = (undefined8 *****)0x0;
          FUN_1006a2b04();
          if ((long)local_c0 < 0) {
            operator_delete(local_d0);
          }
          if (local_e9 < '\0') {
            operator_delete(local_100[0]);
          }
          if (local_d1 < '\0') {
            operator_delete(local_e8[0]);
          }
          if ((int)ppppppuVar13 == 0) break;
          FUN_10069a560(local_b0,0);
        }
LAB_1006a1d5c:
        FUN_10069b24c(&local_b0,0);
      } while (local_b0 != 0);
    }
    if (local_a8 != (long *)0x0) {
      LOAcquire();
      iVar9 = (int)local_a8[1];
      *(int *)(local_a8 + 1) = iVar9 + -1;
      LORelease();
      if (iVar9 == 1) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
        LOAcquire();
        iVar9 = *(int *)((long)local_a8 + 0xc);
        *(int *)((long)local_a8 + 0xc) = iVar9 + -1;
        LORelease();
        if (iVar9 == 1) {
          (**(code **)(*local_a8 + 0x18))(local_a8);
        }
      }
    }
    if (local_98 == '\x01') {
      FUN_1006972a0(&local_a0);
    }
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
LAB_1006a1de0:
  if (local_70 == '\x01') {
    FUN_1006972a0(&local_78);
  }
  return;
}

