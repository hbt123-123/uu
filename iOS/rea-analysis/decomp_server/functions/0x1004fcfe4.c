// rea decompile_all
// name: FUN_1004fcfe4
// address: 0x1004fcfe4
// body: available
// range: 0x1004fcfe4-0x1004fd233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fcfe4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  size_t sVar10;
  uint uVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar8 = *(long *)(lVar4 + -8);
  iVar6 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar6 != 0) {
    uVar2 = iVar6 - 1;
  }
  uVar9 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar9 = 0x7ffffffe;
  }
  sVar10 = *(size_t *)(lVar8 + 0x40);
  if (iVar6 == 0) {
    sVar10 = sVar10 + 1;
  }
  sVar1 = (sVar10 + 0x37 & 0xfffffffffffffff8) + 9;
  uVar5 = 0;
  if (uVar9 < param_3) {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar9) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar11;
    }
  }
  if (uVar9 < param_2) {
    param_2 = ~uVar9 + param_2;
    _bzero(param_1,sVar1);
    iVar6 = 1;
    if ((uint)sVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  else {
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
      if (uVar2 < 0x7ffffffe) {
        piVar7 = (int *)((long)param_1 + sVar10 + 7 & 0xfffffffffffffff8);
        if (param_2 < 0x7fffffff) {
          *(ulong *)(piVar7 + 6) = (ulong)param_2;
        }
        else {
          piVar7[8] = 0;
          piVar7[9] = 0;
          piVar7[2] = 0;
          piVar7[3] = 0;
          piVar7[0] = 0;
          piVar7[1] = 0;
          piVar7[6] = 0;
          piVar7[7] = 0;
          piVar7[4] = 0;
          piVar7[5] = 0;
          *piVar7 = param_2 + 0x80000001;
        }
      }
      else {
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001004fd1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1,iVar6,lVar4);
          return;
        }
        uVar5 = (uint)sVar10;
        uVar9 = 0xffffffff;
        if (uVar5 < 4) {
          uVar9 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar9 = uVar9 & ~uVar2 + param_2;
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
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
  return;
}

