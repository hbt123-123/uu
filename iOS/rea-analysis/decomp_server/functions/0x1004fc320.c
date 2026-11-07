// rea decompile_all
// name: FUN_1004fc320
// address: 0x1004fc320
// body: available
// range: 0x1004fc320-0x1004fc437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_1004fc320(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 < param_2) {
    lVar1 = (*(long *)(lVar8 + 0x40) + 0x37U & 0xfffffffffffffff8) + 9;
    uVar9 = (uint)lVar1;
    uVar7 = 2;
    uVar4 = uVar7;
    if (uVar9 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar7 = 4;
    }
    if (uVar4 < 0x100) {
      uVar7 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar7;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar7 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1004fc3bc;
    }
    else if (uVar3 == 2) {
      uVar7 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1004fc3bc:
        uVar5 = uVar7 - 1 << (ulong)((uVar9 & 3) << 3);
        if (uVar9 < 4) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar5 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar7 | uVar5) + 1);
      }
    }
    else {
      uVar7 = *(uint *)((long)param_1 + lVar1);
      if (uVar7 != 0) goto LAB_1004fc3bc;
    }
  }
  if (0x7ffffffd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001004fc3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar6 = *(ulong *)(((ulong)((long)param_1 + *(long *)(lVar8 + 0x40) + 7) & 0xfffffffffffffff8) +
                    0x18);
  if (0xfffffffe < uVar6) {
    uVar6 = 0xffffffff;
  }
  uVar2 = 0;
  if (1 < (uint)uVar6 + 1) {
    uVar2 = (uint)uVar6;
  }
  return (uint *)(ulong)uVar2;
}

