// rea decompile_all
// name: FUN_1002f01f0
// address: 0x1002f01f0
// body: available
// range: 0x1002f01f0-0x1002f041f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f01f0(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar4 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = iVar4 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar4 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = (sVar6 + (uVar9 + 0x38 & (uVar9 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x40;
  uVar5 = 0;
  if (uVar7 < param_3) {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar7) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  iVar4 = param_2 - uVar7;
  if (param_2 < uVar7 || iVar4 == 0) {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar2 < 0) {
        puVar11 = (uint *)(((long)param_1 + 0x2fU & 0xfffffffffffffff8) + uVar9 + 0x10 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001002f03f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & ~uVar2 + param_2;
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
      else if ((int)param_2 < 0) {
        param_1[2] = 0;
        param_1[1] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        *param_1 = (ulong)(param_2 & 0x7fffffff);
      }
      else {
        param_1[3] = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar4 = 1;
      _bzero(param_1,sVar1);
      *(uint *)param_1 = ~uVar7 + param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar4;
    }
  }
  return;
}

