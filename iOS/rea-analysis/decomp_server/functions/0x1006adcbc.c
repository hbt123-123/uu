// rea decompile_all
// name: FUN_1006adcbc
// address: 0x1006adcbc
// body: available
// range: 0x1006adcbc-0x1006ade6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ade6c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006adcbc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long local_30 [4];
  
  lVar1 = 0;
  local_30[3] = *(long *)PTR____stack_chk_guard_1009954a0;
  do {
    *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = 0;
  uVar2 = 0;
  local_30[1] = *(undefined8 *)(param_2 + 0x20);
  local_30[0] = *(long *)(param_2 + 0x18);
  local_30[2] = *(undefined8 *)(param_2 + 0x28);
  do {
    uVar4 = *(ulong *)(param_1 + lVar1);
    uVar3 = uVar4 + uVar2 + *(long *)((long)local_30 + lVar1);
    if (uVar3 != uVar4) {
      uVar2 = (ulong)(uVar3 < uVar4);
    }
    *(ulong *)(param_1 + lVar1) = uVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = 0;
  uVar3 = 0;
  local_30[0] = 0;
  local_30[2] = *(undefined8 *)(param_2 + 0x20);
  local_30[1] = *(undefined8 *)(param_2 + 0x18);
  do {
    uVar6 = *(ulong *)(param_1 + lVar1);
    uVar4 = uVar6 + uVar3 + *(long *)((long)local_30 + lVar1);
    if (uVar4 != uVar6) {
      uVar3 = (ulong)(uVar4 < uVar6);
    }
    *(ulong *)(param_1 + lVar1) = uVar4;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = 0;
  uVar4 = 0;
  local_30[0] = *(long *)(param_2 + 0x28);
  local_30[1] = *(long *)(param_2 + 0x28);
  local_30[2] = 0;
  do {
    uVar7 = *(ulong *)(param_1 + lVar1);
    uVar6 = uVar7 + uVar4 + *(long *)((long)local_30 + lVar1);
    if (uVar6 != uVar7) {
      uVar4 = (ulong)(uVar6 < uVar7);
    }
    *(ulong *)(param_1 + lVar1) = uVar6;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = uVar3 + uVar2 + uVar4;
  if ((int)lVar1 == 0) goto LAB_1006ade18;
  do {
    do {
      lVar5 = 0;
      uVar2 = 0;
      do {
        uVar3 = *(long *)((long)&DAT_1009e7040 + lVar5) + uVar2;
        if (uVar3 != 0) {
          uVar2 = (ulong)(*(ulong *)(param_1 + lVar5) < uVar3);
        }
        *(ulong *)(param_1 + lVar5) = *(ulong *)(param_1 + lVar5) - uVar3;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar1 = (long)(int)lVar1 - uVar2;
    } while ((int)lVar1 != 0);
LAB_1006ade18:
    uVar2 = 2;
    do {
      if (((uint)uVar2 >> 7 & 1) != 0) break;
      uVar3 = uVar2 & 0x7f;
      uVar4 = *(ulong *)(param_1 + uVar3 * 8);
      if (uVar4 < (ulong)(&DAT_1009e7040)[uVar3]) {
        if (*(long *)PTR____stack_chk_guard_1009954a0 != local_30[3]) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return;
      }
      uVar2 = uVar2 - 1;
    } while (uVar4 <= (ulong)(&DAT_1009e7040)[uVar3]);
  } while( true );
}

