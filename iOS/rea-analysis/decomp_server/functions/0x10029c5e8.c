// rea decompile_all
// name: FUN_10029c5e8
// address: 0x10029c5e8
// body: available
// range: 0x10029c5e8-0x10029c7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10029c5e8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  iVar9 = *(int *)(*(long *)(lVar2 + -8) + 0x54);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar5 = *(uint *)(lVar10 + 0x50);
  uVar4 = (ulong)uVar5 & 0xff;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar8 = *(ulong *)(lVar10 + 0x40);
  uVar1 = (uVar8 + uVar4 + (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) & (uVar4 ^ 0xffffffffffffffff)
          ) + uVar8;
  uVar4 = (uVar8 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar1 <= uVar4 + 1) {
    uVar1 = uVar4 + 1;
  }
  uVar4 = uVar8;
  if (uVar8 < 0x19) {
    uVar4 = 0x18;
  }
  if (uVar1 <= uVar4 + 1) {
    uVar1 = uVar4 + 1;
  }
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (uVar1 <= uVar4 + 1) {
    uVar1 = uVar4 + 1;
  }
  if (uVar1 < 0x2a) {
    uVar1 = 0x29;
  }
  uVar4 = (ulong)((*(uint *)(*(long *)(lVar3 + -8) + 0x50) | uVar5) & 0xf8 | 7);
  if (iVar9 == 0) {
    lVar2 = lVar2 + 1;
  }
  uVar4 = uVar1 + ((lVar2 + 7U & 0xfffffffffffffff8) + uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff))
          + 1;
  if (uVar4 <= uVar6 + 1) {
    uVar4 = uVar6 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) {
LAB_10029c7c0:
    iVar9 = 0;
    if (1 < *(byte *)((long)param_1 + uVar4)) {
      iVar9 = (*(byte *)((long)param_1 + uVar4) ^ 0xff) + 1;
    }
  }
  else {
    uVar6 = (uVar4 & 0xfffffffffffffff8) + 0x10;
    param_2 = param_2 - 0xfd;
    uVar1 = uVar6 & 0xfffffff8;
    uVar5 = (uint)uVar1;
    iVar9 = 2;
    if (uVar1 != 0) {
      param_2 = 2;
    }
    if (0xffff < param_2) {
      iVar9 = 4;
    }
    if (param_2 < 0x100) {
      iVar9 = 1;
    }
    if (iVar9 == 4) {
      uVar7 = *(uint *)((long)param_1 + uVar6);
joined_r0x00010029c794:
      if (uVar7 == 0) goto LAB_10029c7c0;
    }
    else {
      if (iVar9 != 2) {
        uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
        goto joined_r0x00010029c794;
      }
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
      if (*(ushort *)((long)param_1 + uVar6) == 0) goto LAB_10029c7c0;
    }
    uVar7 = uVar7 - 1;
    if (uVar1 != 0) {
      uVar7 = 0;
      uVar5 = *param_1;
    }
    iVar9 = (uVar5 | uVar7) + 0xff;
  }
  return iVar9;
}

