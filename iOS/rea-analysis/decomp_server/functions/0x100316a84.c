// rea decompile_all
// name: FUN_100316a84
// address: 0x100316a84
// body: available
// range: 0x100316a84-0x100316ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100316a84(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  size_t sVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar8 = *(long *)(lVar6 + -8);
  iVar4 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = iVar4 - 1;
  }
  uVar9 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar9 = 0x7fffffff;
  }
  sVar10 = *(size_t *)(lVar8 + 0x40);
  if (iVar4 == 0) {
    sVar10 = sVar10 + 1;
  }
  sVar1 = (sVar10 + 7 & 0xfffffffffffffff8) + 0x40;
  uVar7 = 0;
  if (uVar9 < param_3) {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar9) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar7 = 0;
    if (1 < uVar3) {
      uVar7 = uVar11;
    }
  }
  iVar5 = param_2 - uVar9;
  if (param_2 < uVar9 || iVar5 == 0) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < 0x7fffffff) {
        if ((int)param_2 < 0) {
          param_2 = param_2 & 0x7fffffff;
        }
        else {
          param_2 = param_2 - 1;
        }
        *(ulong *)(((long)param_1 + sVar10 + 7 & 0xfffffffffffffff8) + 0x10) = (ulong)param_2;
      }
      else {
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100316c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1,iVar4,lVar6);
          return;
        }
        uVar7 = (uint)sVar10;
        uVar9 = 0xffffffff;
        if (uVar7 < 4) {
          uVar9 = ~(-1 << (ulong)((uVar7 & 3) << 3));
        }
        if (uVar7 != 0) {
          uVar9 = uVar9 & ~uVar2 + param_2;
          uVar2 = 4;
          if (uVar7 < 4) {
            uVar2 = uVar7;
          }
          _bzero(param_1,sVar10);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)param_1 = (char)uVar9;
            }
            else {
              *(short *)param_1 = (short)uVar9;
            }
          }
          else if (uVar2 == 3) {
            *(short *)param_1 = (short)uVar9;
            *(char *)((long)param_1 + 2) = (char)(uVar9 >> 0x10);
          }
          else {
            *param_1 = uVar9;
          }
        }
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,sVar1);
      *param_1 = ~uVar9 + param_2;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar5;
    }
  }
  return;
}

