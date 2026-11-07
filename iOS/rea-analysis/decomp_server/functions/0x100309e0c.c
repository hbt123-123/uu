// rea decompile_all
// name: FUN_100309e0c
// address: 0x100309e0c
// body: available
// range: 0x100309e0c-0x10030a05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100309e0c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar9 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar8 <= uVar9) {
    uVar8 = uVar9;
  }
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  iVar4 = *(int *)(*(long *)(lVar5 + -8) + 0x54);
  lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar12 + 0x50);
  uVar9 = (ulong)uVar3 & 0xff;
  lVar6 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar10 = *(ulong *)(lVar12 + 0x40);
  uVar1 = (uVar10 + uVar9 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) &
          (uVar9 ^ 0xffffffffffffffff)) + uVar10;
  uVar9 = (uVar10 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  if (uVar1 <= uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  uVar9 = uVar10;
  if (uVar10 < 0x19) {
    uVar9 = 0x18;
  }
  if (uVar1 <= uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  uVar9 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  if (uVar9 < 0x11) {
    uVar9 = 0x10;
  }
  if (uVar1 <= uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  if (uVar1 < 0x2a) {
    uVar1 = 0x29;
  }
  uVar9 = (ulong)((*(uint *)(*(long *)(lVar6 + -8) + 0x50) | uVar3) & 0xf8 | 7);
  if (iVar4 == 0) {
    lVar5 = lVar5 + 1;
  }
  lVar5 = uVar1 + ((lVar5 + 7U & 0xfffffffffffffff8) + uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff));
  if (uVar8 <= lVar5 + 1U) {
    uVar8 = lVar5 + 1;
  }
  if (uVar8 < 0x19) {
    uVar8 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfc) goto LAB_10030a020;
  uVar9 = uVar8 + 1;
  uVar7 = (uint)uVar9;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfb >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar11 >> 0x10 == 0) {
      if (uVar11 < 0x100) {
        if (uVar11 < 2) goto LAB_10030a020;
        goto LAB_100309f74;
      }
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar9);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar9);
    }
    if (uVar11 != 0) goto LAB_100309fc8;
  }
  else {
LAB_100309f74:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar9);
    if (*(byte *)((long)param_1 + uVar9) != 0) {
LAB_100309fc8:
      uVar2 = 0;
      if (uVar7 < 4) {
        uVar2 = uVar11 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar7 != 0) {
        uVar3 = 4;
        if (uVar7 < 4) {
          uVar3 = uVar7;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar9 = (ulong)(byte)*param_1;
          }
          else {
            uVar9 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar9 = (ulong)(uint3)*param_1;
        }
        else {
          uVar9 = (ulong)*param_1;
        }
      }
      return ((uint)uVar9 | uVar2) + 0xfc;
    }
  }
LAB_10030a020:
  iVar4 = 0;
  if (4 < *(byte *)((long)param_1 + uVar8)) {
    iVar4 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar4;
}

