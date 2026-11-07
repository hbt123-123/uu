// rea decompile_all
// name: FUN_10030a060
// address: 0x10030a060
// body: available
// range: 0x10030a060-0x10030a333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10030a060(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  iVar11 = *(int *)(*(long *)(lVar5 + -8) + 0x54);
  lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar6 + -8);
  uVar12 = *(uint *)(lVar14 + 0x50);
  uVar8 = (ulong)uVar12 & 0xff;
  lVar6 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar10 = *(ulong *)(lVar14 + 0x40);
  uVar2 = (uVar10 + uVar8 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) &
          (uVar8 ^ 0xffffffffffffffff)) + uVar10;
  uVar8 = (uVar10 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  if (uVar2 <= uVar8 + 1) {
    uVar2 = uVar8 + 1;
  }
  uVar8 = uVar10;
  if (uVar10 < 0x19) {
    uVar8 = 0x18;
  }
  if (uVar2 <= uVar8 + 1) {
    uVar2 = uVar8 + 1;
  }
  uVar8 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar8 < 0x11) {
    uVar8 = 0x10;
  }
  if (uVar2 <= uVar8 + 1) {
    uVar2 = uVar8 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  uVar8 = (ulong)((*(uint *)(*(long *)(lVar6 + -8) + 0x50) | uVar12) & 0xf8 | 7);
  if (iVar11 == 0) {
    lVar5 = lVar5 + 1;
  }
  lVar5 = uVar2 + ((lVar5 + 7U & 0xfffffffffffffff8) + uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff));
  if (uVar7 <= lVar5 + 1U) {
    uVar7 = lVar5 + 1;
  }
  if (uVar7 < 0x19) {
    uVar7 = 0x18;
  }
  sVar1 = uVar7 + 1;
  uVar12 = (uint)sVar1;
  if (param_3 < 0xfc) {
    uVar13 = 0;
  }
  else if (uVar12 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar12 << 3 & 0x1f))) - 0xfb >> (ulong)(uVar12 << 3 & 0x1f))
            + 1;
    if (uVar3 >> 0x10 == 0) {
      uVar9 = 1;
      if (0xff < uVar3) {
        uVar9 = 2;
      }
      uVar13 = 0;
      if (1 < uVar3) {
        uVar13 = uVar9;
      }
    }
    else {
      uVar13 = 4;
    }
  }
  else {
    uVar13 = 1;
  }
  if (param_2 < 0xfc) {
    if (uVar13 < 2) {
      if (uVar13 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar13 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfc;
    if (uVar12 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar12 << 3 & 0x1f)) + 1;
      if (uVar12 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar12 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar3;
        if (uVar12 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar12 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (uVar13 < 2) {
      if (uVar13 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar11;
      }
    }
    else if (uVar13 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar11;
    }
  }
  return;
}

