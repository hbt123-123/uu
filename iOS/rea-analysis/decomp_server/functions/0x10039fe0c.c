// rea decompile_all
// name: FUN_10039fe0c
// address: 0x10039fe0c
// body: available
// range: 0x10039fe0c-0x10039ff4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10039fe0c(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10039fefc;
  uVar5 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 >> 0x10 != 0) {
      uVar8 = *(uint *)((long)param_1 + uVar5);
      if (uVar8 == 0) goto LAB_10039fefc;
      goto LAB_10039fea4;
    }
    if (0xff < uVar8) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
      if (uVar8 != 0) goto LAB_10039fea4;
      goto LAB_10039fefc;
    }
    if (uVar8 < 2) goto LAB_10039fefc;
  }
  uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  if (*(byte *)((long)param_1 + uVar5) == 0) {
LAB_10039fefc:
    if ((int)uVar2 < 0) {
      uVar7 = (long)param_1 + uVar7 + 8 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010039ff2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x30))(uVar7);
      return uVar7;
    }
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
LAB_10039fea4:
  uVar2 = 0;
  if (uVar4 < 4) {
    uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
  }
  if (uVar4 != 0) {
    uVar3 = 4;
    if (uVar4 < 4) {
      uVar3 = uVar4;
    }
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        uVar5 = (ulong)(byte)*param_1;
      }
      else {
        uVar5 = (ulong)(ushort)*param_1;
      }
    }
    else if (uVar3 == 3) {
      uVar5 = (ulong)(uint3)*param_1;
    }
    else {
      uVar5 = (ulong)(uint)*param_1;
    }
  }
  return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
}

