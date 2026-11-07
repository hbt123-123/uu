// rea decompile_all
// name: FUN_10006be30
// address: 0x10006be30
// body: available
// range: 0x10006be30-0x10006bf03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10006be30(uint *param_1,int param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0) {
    uVar1 = (uVar3 + 10 & 0xfffffffffffffff8) + 0x10;
    uVar2 = uVar1 & 0xfffffff8;
    uVar4 = (uint)uVar2;
    uVar5 = param_2 + 0x80000002;
    iVar6 = 2;
    if (uVar2 != 0) {
      uVar5 = 2;
    }
    if (0xffff < uVar5) {
      iVar6 = 4;
    }
    if (uVar5 < 0x100) {
      iVar6 = 1;
    }
    if (iVar6 == 4) {
      uVar5 = *(uint *)((long)param_1 + uVar1);
    }
    else {
      if (iVar6 == 2) {
        uVar5 = (uint)*(ushort *)((long)param_1 + uVar1);
        if (*(ushort *)((long)param_1 + uVar1) == 0) goto LAB_10006be50;
        goto LAB_10006bee4;
      }
      uVar5 = (uint)*(byte *)((long)param_1 + uVar1);
    }
    if (uVar5 != 0) {
LAB_10006bee4:
      uVar5 = uVar5 - 1;
      if (uVar2 != 0) {
        uVar5 = 0;
        uVar4 = *param_1;
      }
      return (uVar4 | uVar5) ^ 0x80000000;
    }
  }
LAB_10006be50:
  uVar3 = *(ulong *)(((long)param_1 + uVar3 + 10 & 0xfffffffffffffff8) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  return (int)uVar3 + 1;
}

