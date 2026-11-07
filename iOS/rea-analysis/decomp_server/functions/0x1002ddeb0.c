// rea decompile_all
// name: FUN_1002ddeb0
// address: 0x1002ddeb0
// body: available
// range: 0x1002ddeb0-0x1002de1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ddeb0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  size_t sVar15;
  int iVar16;
  uint uVar17;
  
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar8 = *(long *)(lVar5 + -8);
  iVar16 = *(int *)(lVar8 + 0x54);
  uVar3 = 0;
  if (iVar16 != 0) {
    uVar3 = iVar16 - 1;
  }
  uVar9 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar9 = 0x7ffffffe;
  }
  lVar10 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar13 = *(ulong *)(lVar10 + 0x40);
  lVar12 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar14 = *(ulong *)(lVar12 + 0x40);
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  sVar15 = *(size_t *)(lVar8 + 0x40);
  if (iVar16 == 0) {
    sVar15 = sVar15 + 1;
  }
  uVar13 = (ulong)(*(byte *)(lVar12 + 0x50) | *(byte *)(lVar10 + 0x50));
  sVar2 = uVar14 + (uVar13 + (sVar15 + 7 & 0xfffffffffffffff8) + 0x28 &
                   (uVar13 ^ 0xffffffffffffffff)) + 1;
  uVar17 = (uint)sVar2;
  uVar6 = 0;
  if (uVar9 <= param_3 && param_3 - uVar9 != 0) {
    if (uVar17 < 4) {
      uVar1 = ((param_3 - uVar9) + ~(-1 << (ulong)(uVar17 << 3 & 0x1f)) >>
              (ulong)(uVar17 << 3 & 0x1f)) + 1;
      if (uVar1 >> 0x10 == 0) {
        uVar11 = 1;
        if (0xff < uVar1) {
          uVar11 = 2;
        }
        uVar6 = 0;
        if (1 < uVar1) {
          uVar6 = uVar11;
        }
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  if (uVar9 < param_2) {
    param_2 = ~uVar9 + param_2;
    if (uVar17 < 4) {
      iVar16 = (param_2 >> (ulong)(uVar17 << 3 & 0x1f)) + 1;
      if (uVar17 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar17 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar17 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar17 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar16 = 1;
    }
    if (uVar6 < 2) {
      if (uVar6 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar16;
      }
    }
    else if (uVar6 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar16;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar16;
    }
  }
  else {
    if (uVar6 < 2) {
      if (uVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (uVar3 < 0x7ffffffe) {
        puVar7 = (ulong *)((long)param_1 + sVar15 + 7 & 0xfffffffffffffff8);
        if (param_2 < 0x7fffffff) {
          *puVar7 = (ulong)param_2;
        }
        else {
          *puVar7 = 0;
          *(uint *)puVar7 = param_2 + 0x80000001;
        }
      }
      else {
        if (param_2 <= uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001002de120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1,iVar16,lVar5);
          return;
        }
        uVar6 = (uint)sVar15;
        uVar9 = 0xffffffff;
        if (uVar6 < 4) {
          uVar9 = ~(-1 << (ulong)((uVar6 & 3) << 3));
        }
        if (uVar6 != 0) {
          uVar9 = uVar9 & ~uVar3 + param_2;
          uVar3 = 4;
          if (uVar6 < 4) {
            uVar3 = uVar6;
          }
          _bzero(param_1,sVar15);
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              *(char *)param_1 = (char)uVar9;
            }
            else {
              *(short *)param_1 = (short)uVar9;
            }
          }
          else if (uVar3 == 3) {
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

