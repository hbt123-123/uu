// rea decompile_all
// name: FUN_10030a334
// address: 0x10030a334
// body: available
// range: 0x10030a334-0x10030a517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10030a334(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  uVar9 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40);
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar5 + -8) + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  uVar4 = *(uint *)(lVar12 + 0x50);
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar10 = (ulong)((*(uint *)(*(long *)(lVar5 + -8) + 0x50) | uVar4) & 0xf8 | 7);
  uVar9 = (ulong)uVar4 & 0xff;
  uVar11 = *(ulong *)(lVar12 + 0x40);
  uVar1 = (uVar11 + uVar9 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) &
          (uVar9 ^ 0xffffffffffffffff)) + uVar11;
  uVar9 = (uVar11 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar9 <= uVar11) {
    uVar9 = uVar11;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  if (uVar1 <= uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  uVar9 = uVar11;
  if (uVar11 < 0x19) {
    uVar9 = 0x18;
  }
  if (uVar1 <= uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  uVar9 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar9 <= uVar11) {
    uVar9 = uVar11;
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
  lVar8 = uVar1 + ((lVar8 + 7U & 0xfffffffffffffff8) + uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)
                  );
  if (uVar7 <= lVar8 + 1U) {
    uVar7 = lVar8 + 1;
  }
  if (uVar7 < 0x19) {
    uVar7 = 0x18;
  }
  bVar3 = *(byte *)((long)param_1 + uVar7);
  uVar4 = (uint)bVar3;
  if (4 < bVar3) {
    uVar6 = (uint)uVar7;
    uVar2 = 4;
    if (uVar6 < 4) {
      uVar2 = uVar6;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        return uVar4;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    if (uVar6 < 4) {
      uVar4 = (uVar4 | bVar3 - 5 << (ulong)((uVar6 & 3) << 3)) + 5;
    }
    else {
      uVar4 = uVar4 + 5;
    }
  }
  return uVar4;
}

