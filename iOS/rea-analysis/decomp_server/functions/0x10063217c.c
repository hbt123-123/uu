// rea decompile_all
// name: FUN_10063217c
// address: 0x10063217c
// body: available
// range: 0x10063217c-0x10063235f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063217c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),PTR___sSlTL_1009959e8
             ,PTR___s5IndexSlTl_1009956e8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  sVar1 = (*(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar7 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar10 = 0;
  }
  else if (uVar7 < 4) {
    uVar8 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f))
            + 1;
    if (uVar8 >> 0x10 == 0) {
      uVar6 = 1;
      if (0xff < uVar8) {
        uVar6 = 2;
      }
      uVar10 = 0;
      if (1 < uVar8) {
        uVar10 = uVar6;
      }
    }
    else {
      uVar10 = 4;
    }
  }
  else {
    uVar10 = 1;
  }
  uVar8 = (uint)param_2;
  if (uVar2 < uVar8) {
    uVar8 = ~uVar2 + uVar8;
    if (uVar7 < 4) {
      iVar9 = (uVar8 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = uVar8 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)uVar8;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = uVar8;
      iVar9 = 1;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar9;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar9;
    }
  }
  else {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006322f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))(param_1,param_2,uVar2,lVar4);
      return;
    }
  }
  return;
}

