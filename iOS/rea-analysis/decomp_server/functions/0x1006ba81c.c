// rea decompile_all
// name: FUN_1006ba81c
// address: 0x1006ba81c
// body: available
// range: 0x1006ba81c-0x1006ba92b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ba928 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006ba81c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   long param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((param_5 == 0) && (*(int *)((long)param_4 + 0x1c) == 0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + 1;
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(long *)(param_1 + 0x180) = param_5;
  uVar6 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)param_4[1] >> 0x20) - 0x1fU < 0xffffffe2),
                              CONCAT24(-(ushort)((int)param_4[1] - 0x1fU < 0xffffffe7),
                                       CONCAT22(-(ushort)((int)((ulong)*param_4 >> 0x20) - 0x1fU <
                                                         0xffffffe7),
                                                -(ushort)((int)*param_4 - 0x20U < 0xffffffea)))),2);
  uVar3 = 0xffffffffffffffd6;
  if ((((uVar6 & 1) == 0) && (0xfffffffa < *(int *)(param_4 + 2) - 8U)) &&
     (*(uint *)((long)param_4 + 0x14) < 0x20001)) {
    if (*(int *)(param_4 + 3) - 1U < 9) {
      uVar4 = *(undefined8 *)((long)param_4 + 0x14);
      uVar8 = *(undefined8 *)((long)param_4 + 0xc);
      uVar7 = *(undefined8 *)((long)param_4 + 4);
      uVar5 = *(undefined8 *)((long)param_4 + 0x1c);
      uVar1 = *(undefined4 *)((long)param_4 + 0x24);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_4;
      *(undefined8 *)(param_1 + 0x20) = uVar8;
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      *(undefined4 *)(param_1 + 0x3c) = 3;
      FUN_1006b6ec4();
      uVar3 = 0;
      if (0xffffffffffffff88 < param_1) {
        uVar3 = param_1;
      }
    }
    else {
      uVar3 = 0xffffffffffffffd6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

