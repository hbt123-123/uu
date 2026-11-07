// rea decompile_all
// name: FUN_10001527c
// address: 0x10001527c
// body: available
// range: 0x10001527c-0x10001553b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001527c(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  
  lVar20 = *(long *)(param_4 + 0x10);
  lVar21 = *(long *)(lVar20 + -8);
  uVar6 = *(uint *)(lVar21 + 0x54);
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = uVar6 - 1;
  }
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar10 + -8);
  uVar7 = *(uint *)(lVar11 + 0x54);
  uVar4 = uVar3;
  if (uVar3 <= uVar7) {
    uVar4 = uVar7;
  }
  uVar5 = uVar4;
  if (uVar4 < 0x7fffffff) {
    uVar5 = 0x7ffffffe;
  }
  uVar15 = (ulong)*(byte *)(lVar21 + 0x50);
  lVar13 = *(long *)(lVar21 + 0x40);
  if (uVar6 == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  sVar2 = (uVar12 + 0x28 +
           (lVar13 + 7 + (uVar15 + 1 & (uVar15 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) &
          (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  uVar19 = (uint)sVar2;
  uVar17 = (uint)param_2;
  uVar9 = 0;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    if (uVar19 < 4) {
      uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar19 << 3 & 0x1f)) >>
              (ulong)(uVar19 << 3 & 0x1f)) + 1;
      if (uVar1 >> 0x10 == 0) {
        uVar16 = 1;
        if (0xff < uVar1) {
          uVar16 = 2;
        }
        uVar9 = 0;
        if (1 < uVar1) {
          uVar9 = uVar16;
        }
      }
      else {
        uVar9 = 4;
      }
    }
    else {
      uVar9 = 1;
    }
  }
  if (uVar5 < uVar17) {
    uVar17 = ~uVar5 + uVar17;
    if (uVar19 < 4) {
      iVar18 = (uVar17 >> (ulong)(uVar19 << 3 & 0x1f)) + 1;
      if (uVar19 != 0) {
        uVar3 = uVar17 & (-1 << (ulong)(uVar19 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar8 = (undefined2)uVar3;
        if (uVar19 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar19 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar17;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar17;
      iVar18 = 1;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar18;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar18;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar18;
    }
  }
  else {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar17 != 0) {
      uVar15 = (long)param_1 + uVar15 + 1 & ~uVar15;
      if (uVar3 == uVar5) {
        if (1 < uVar6) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
          param_2 = (ulong)(uVar17 + 1);
          lVar10 = lVar20;
          uVar7 = uVar6;
LAB_1000154a8:
                    /* WARNING: Could not recover jumptable at 0x0001000154c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(uVar15,param_2,uVar7,lVar10);
          return;
        }
      }
      else {
        piVar14 = (int *)(lVar13 + 7 + uVar15 & 0xfffffffffffffff8);
        if (0x7ffffffe < uVar4) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
          uVar15 = uVar12 + 0x28 + (long)piVar14 & ~uVar12;
          goto LAB_1000154a8;
        }
        if (uVar17 < 0x7fffffff) {
          *(ulong *)(piVar14 + 4) = param_2 & 0xffffffff;
        }
        else {
          piVar14[8] = 0;
          piVar14[9] = 0;
          piVar14[2] = 0;
          piVar14[3] = 0;
          piVar14[0] = 0;
          piVar14[1] = 0;
          piVar14[6] = 0;
          piVar14[7] = 0;
          piVar14[4] = 0;
          piVar14[5] = 0;
          *piVar14 = uVar17 + 0x80000001;
        }
      }
    }
  }
  return;
}

