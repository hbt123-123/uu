// rea decompile_all
// name: FUN_100304cb8
// address: 0x100304cb8
// body: available
// range: 0x100304cb8-0x100304f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100304cb8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar12 + 0x40);
  lVar13 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar8 = *(ulong *)(lVar13 + 0x40);
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar4 + -8);
  iVar3 = *(int *)(lVar14 + 0x54);
  lVar4 = *(long *)(lVar14 + 0x40);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar15 + 0x50);
  uVar8 = (ulong)uVar7 & 0xff;
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar10 = *(ulong *)(lVar15 + 0x40);
  uVar1 = (uVar10 + uVar8 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) &
          (uVar8 ^ 0xffffffffffffffff)) + uVar10;
  uVar8 = (uVar10 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  if (uVar1 <= uVar8 + 1) {
    uVar1 = uVar8 + 1;
  }
  uVar8 = uVar10;
  if (uVar10 < 0x19) {
    uVar8 = 0x18;
  }
  if (uVar1 <= uVar8 + 1) {
    uVar1 = uVar8 + 1;
  }
  uVar8 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar8 < 0x11) {
    uVar8 = 0x10;
  }
  if (uVar1 <= uVar8 + 1) {
    uVar1 = uVar8 + 1;
  }
  if (uVar1 < 0x2a) {
    uVar1 = 0x29;
  }
  uVar7 = *(uint *)(*(long *)(lVar5 + -8) + 0x50) | uVar7;
  uVar8 = (ulong)(uVar7 & 0xf8 | 7);
  if (iVar3 == 0) {
    lVar4 = lVar4 + 1;
  }
  lVar4 = uVar1 + ((lVar4 + 7U & 0xfffffffffffffff8) + uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff));
  if (uVar6 <= lVar4 + 1U) {
    uVar6 = lVar4 + 1;
  }
  if (uVar6 < 0x19) {
    uVar6 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = (ulong)((*(uint *)(lVar12 + 0x50) | *(uint *)(lVar13 + 0x50) |
                  *(uint *)(lVar14 + 0x50) | uVar7) & 0xf8 | 7);
  if (param_2 < 0xfc) goto LAB_100304f0c;
  lVar12 = uVar6 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + 1;
  uVar9 = (uint)lVar12;
  uVar7 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar7 & 0x1f))) - 0xfb >> (ulong)(uVar7 & 0x1f)) + 1;
    if (uVar11 >> 0x10 == 0) {
      if (uVar11 < 0x100) {
        if (uVar11 < 2) goto LAB_100304f0c;
        goto LAB_100304e58;
      }
      uVar11 = (uint)*(ushort *)((long)param_1 + lVar12);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + lVar12);
    }
    if (uVar11 != 0) goto LAB_100304eac;
  }
  else {
LAB_100304e58:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar12);
    if (*(byte *)((long)param_1 + lVar12) != 0) {
LAB_100304eac:
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar11 - 1 << (ulong)(uVar7 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar9 < 4) {
          uVar7 = uVar9;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      return (uVar7 | uVar2) + 0xfc;
    }
  }
LAB_100304f0c:
  uVar7 = (uint)*(byte *)(((ulong)((long)param_1 + uVar8 + 8) & ~uVar8) + uVar6);
  iVar3 = 0;
  if (4 < uVar7) {
    iVar3 = (uVar7 ^ 0xff) + 1;
  }
  return iVar3;
}

