// rea decompile_all
// name: FUN_10029c7ec
// address: 0x10029c7ec
// body: available
// range: 0x10029c7ec-0x10029ca27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029c7ec(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  iVar6 = *(int *)(*(long *)(lVar3 + -8) + 0x54);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar4 + -8);
  uVar9 = *(uint *)(lVar10 + 0x50);
  uVar5 = (ulong)uVar9 & 0xff;
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar8 = *(ulong *)(lVar10 + 0x40);
  uVar2 = (uVar8 + uVar5 + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) & (uVar5 ^ 0xffffffffffffffff)
          ) + uVar8;
  uVar5 = (uVar8 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar5 <= uVar8) {
    uVar5 = uVar8;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar2 <= uVar5 + 1) {
    uVar2 = uVar5 + 1;
  }
  uVar5 = uVar8;
  if (uVar8 < 0x19) {
    uVar5 = 0x18;
  }
  if (uVar2 <= uVar5 + 1) {
    uVar2 = uVar5 + 1;
  }
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 <= uVar8) {
    uVar5 = uVar8;
  }
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (uVar2 <= uVar5 + 1) {
    uVar2 = uVar5 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  uVar5 = (ulong)((*(uint *)(*(long *)(lVar4 + -8) + 0x50) | uVar9) & 0xf8 | 7);
  if (iVar6 == 0) {
    lVar3 = lVar3 + 1;
  }
  uVar5 = uVar2 + ((lVar3 + 7U & 0xfffffffffffffff8) + uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff))
          + 1;
  if (uVar5 <= uVar7 + 1) {
    uVar5 = uVar7 + 1;
  }
  sVar1 = (uVar5 & 0xfffffffffffffff8) + 0x10;
  if (param_3 < 0xff) {
    uVar9 = 0;
  }
  else {
    param_3 = param_3 - 0xfd;
    uVar9 = 2;
    if ((int)sVar1 != 0) {
      param_3 = 2;
    }
    if (0xffff < param_3) {
      uVar9 = 4;
    }
    if (param_3 < 0x100) {
      uVar9 = 1;
    }
  }
  if (param_2 < 0xff) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    iVar6 = param_2 - 0xfe;
    if ((int)sVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 - 0xff;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  return;
}

