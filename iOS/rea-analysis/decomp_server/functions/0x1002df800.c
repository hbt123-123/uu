// rea decompile_all
// name: FUN_1002df800
// address: 0x1002df800
// body: available
// range: 0x1002df800-0x1002dfb13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002df800(uint *param_1,uint param_2,uint param_3,long param_4)

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
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  
  lVar10 = 0;
  __s10Foundation10URLRequestVMa();
  lVar24 = *(long *)(lVar10 + -8);
  uVar6 = *(uint *)(lVar24 + 0x54);
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = uVar6 - 1;
  }
  lVar11 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar11 + -8);
  uVar7 = *(uint *)(lVar12 + 0x54);
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4;
  if (uVar4 < 0x7fffffff) {
    uVar5 = 0x7ffffffe;
  }
  lVar17 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar13 = *(ulong *)(lVar17 + 0x40);
  lVar20 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar16 = *(ulong *)(lVar20 + 0x40);
  if (uVar16 <= uVar13) {
    uVar16 = uVar13;
  }
  lVar14 = *(long *)(lVar24 + 0x40);
  if (uVar6 == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar21 = *(long *)(lVar12 + 0x40);
  if (uVar7 == 0) {
    lVar21 = lVar21 + 1;
  }
  uVar18 = (ulong)(*(byte *)(lVar20 + 0x50) | *(byte *)(lVar17 + 0x50));
  sVar2 = uVar16 + (uVar18 + (lVar21 + (uVar13 + (lVar14 + 7U & 0xfffffffffffffff8) + 8 &
                                       (uVar13 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) +
                    0x20 & (uVar18 ^ 0xffffffffffffffff)) + 1;
  uVar23 = (uint)sVar2;
  uVar9 = 0;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    if (uVar23 < 4) {
      uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar23 << 3 & 0x1f)) >>
              (ulong)(uVar23 << 3 & 0x1f)) + 1;
      if (uVar1 >> 0x10 == 0) {
        uVar19 = 1;
        if (0xff < uVar1) {
          uVar19 = 2;
        }
        uVar9 = 0;
        if (1 < uVar1) {
          uVar9 = uVar19;
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
  if (uVar5 < param_2) {
    param_2 = ~uVar5 + param_2;
    if (uVar23 < 4) {
      iVar22 = (param_2 >> (ulong)(uVar23 << 3 & 0x1f)) + 1;
      if (uVar23 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar23 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar8 = (undefined2)uVar3;
        if (uVar23 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar23 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar22 = 1;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar22;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar22;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar22;
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
    if (param_2 != 0) {
      if (uVar3 == uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 0x38);
        lVar11 = lVar10;
        uVar7 = uVar6;
LAB_1002dfa2c:
                    /* WARNING: Could not recover jumptable at 0x0001002dfa44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 1,uVar7,lVar11);
        return;
      }
      puVar15 = (ulong *)((long)param_1 + lVar14 + 7 & 0xfffffffffffffff8);
      if (uVar4 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *puVar15 = (ulong)param_2;
        }
        else {
          *puVar15 = 0;
          *(uint *)puVar15 = param_2 + 0x80000001;
        }
      }
      else if (1 < uVar7) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
        param_1 = (uint *)((long)puVar15 + uVar13 + 8 & ~uVar13);
        goto LAB_1002dfa2c;
      }
    }
  }
  return;
}

