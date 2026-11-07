// rea decompile_all
// name: FUN_100632600
// address: 0x100632600
// body: available
// range: 0x100632600-0x1006326bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_100632600(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar7 + 0x54);
  if (uVar5 < param_2) {
    uVar1 = (*(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar6 = (uint)uVar2;
    uVar8 = 2;
    uVar4 = uVar8;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
    }
    if (0xffff < uVar4) {
      uVar8 = 4;
    }
    if (uVar4 < 0x100) {
      uVar8 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar8;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_100632680;
    }
    else if (uVar3 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_100632680:
        uVar8 = uVar8 - 1;
        if (uVar2 != 0) {
          uVar8 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar5 + (uVar6 | uVar8) + 1);
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar1);
      if (uVar8 != 0) goto LAB_100632680;
    }
    if (uVar5 == 0) {
      return (uint *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001006326b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))();
  return param_1;
}

