// rea decompile_all
// name: FUN_10005f200
// address: 0x10005f200
// body: available
// range: 0x10005f200-0x10005f30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10005f200(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_10005f2e0;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfe >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 >> 0x10 != 0) {
      uVar7 = *(uint *)((long)param_1 + uVar6);
      if (uVar7 == 0) goto LAB_10005f2e0;
      goto LAB_10005f288;
    }
    if (0xff < uVar7) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
      if (uVar7 != 0) goto LAB_10005f288;
      goto LAB_10005f2e0;
    }
    if (uVar7 < 2) goto LAB_10005f2e0;
  }
  uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  if (*(byte *)((long)param_1 + uVar6) == 0) {
LAB_10005f2e0:
    iVar2 = 0;
    if (1 < *(byte *)((long)param_1 + uVar5)) {
      iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
    }
    return iVar2;
  }
LAB_10005f288:
  uVar1 = 0;
  if (uVar4 < 4) {
    uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
  }
  if (uVar4 != 0) {
    uVar3 = 4;
    if (uVar4 < 4) {
      uVar3 = uVar4;
    }
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        uVar6 = (ulong)(byte)*param_1;
      }
      else {
        uVar6 = (ulong)(ushort)*param_1;
      }
    }
    else if (uVar3 == 3) {
      uVar6 = (ulong)(uint3)*param_1;
    }
    else {
      uVar6 = (ulong)*param_1;
    }
  }
  return ((uint)uVar6 | uVar1) + 0xff;
}

