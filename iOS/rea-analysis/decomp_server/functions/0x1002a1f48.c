// rea decompile_all
// name: FUN_1002a1f48
// address: 0x1002a1f48
// body: available
// range: 0x1002a1f48-0x1002a213f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a1f48(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar2 + -8) + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  uVar3 = *(uint *)(lVar9 + 0x50);
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar7 = (ulong)((*(uint *)(*(long *)(lVar2 + -8) + 0x50) | uVar3) & 0xf8 | 7);
  uVar4 = (ulong)uVar3 & 0xff;
  uVar8 = *(ulong *)(lVar9 + 0x40);
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
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
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
  uVar4 = uVar1 + ((lVar5 + 7U & 0xfffffffffffffff8) + uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff))
          + 1;
  if (uVar4 <= uVar6 + 1) {
    uVar4 = uVar6 + 1;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar3 = (uint)uVar4;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 2;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,uVar4);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}

