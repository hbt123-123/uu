// rea decompile_all
// name: FUN_1006b28e4
// address: 0x1006b28e4
// body: available
// range: 0x1006b28e4-0x1006b2b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b2b44 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b28e4(ulong param_1,ulong param_2,undefined8 param_3,undefined1 *param_4,int param_5,
                  uint param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int local_674;
  undefined1 auStack_670 [512];
  undefined1 auStack_470 [1024];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (1 << (ulong)(param_6 - 1 & 0x1f)) + param_5 * 2 + 3;
  iVar3 = 1 << (ulong)(param_6 - 2 & 0x1f);
  if (param_6 < 0xd) {
    iVar3 = 0x400;
  }
  local_674 = param_5;
  if ((uVar1 + iVar3 <= param_8) && ((undefined1 *)0x1 < param_4)) {
    lVar5 = (ulong)uVar1 * 4;
    lVar10 = param_8 + (ulong)uVar1 * -4;
    if (param_5 == 0) {
      local_674 = 0xff;
    }
    uVar1 = 0xb;
    if (param_6 != 0) {
      uVar1 = param_6;
    }
    puVar6 = auStack_470;
    FUN_1006b3634(puVar6,&local_674,param_3,param_4,param_7 + lVar5,lVar10);
    if ((((puVar6 < (undefined1 *)0xffffffffffffff89) && (puVar6 != param_4)) &&
        (puVar6 != (undefined1 *)0x1)) && ((undefined1 *)((ulong)param_4 >> 7) <= puVar6)) {
      uVar4 = ((uint)LZCOUNT((int)param_4 + -1) ^ 0x1f) - 2;
      uVar2 = (uint)LZCOUNT((int)param_4) ^ 0x1f;
      uVar9 = ((uint)LZCOUNT(local_674) ^ 0x1f) + 2;
      if (uVar2 + 1 < uVar9) {
        uVar9 = uVar2 + 1;
      }
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      if (uVar9 <= uVar4) {
        uVar9 = uVar4;
      }
      if (uVar9 < 6) {
        uVar9 = 5;
      }
      if (0xb < uVar9) {
        uVar9 = 0xc;
      }
      puVar6 = auStack_670;
      FUN_1006b1e58(puVar6,uVar9,auStack_470);
      if (puVar6 < (undefined1 *)0xffffffffffffff89) {
        uVar1 = 0x200;
        if (local_674 != 0) {
          uVar1 = (uVar9 + uVar9 * local_674 >> 3) + 3;
        }
        uVar7 = param_1;
        FUN_1006b1b38(param_1,param_2,auStack_670,local_674,uVar9,uVar1 <= param_2);
        if ((uVar7 < 0xffffffffffffff89) &&
           (uVar8 = param_7,
           FUN_1006b184c(param_7,auStack_670,local_674,uVar9,param_7 + lVar5,lVar10),
           uVar8 < 0xffffffffffffff89)) {
          FUN_1006b24f4(param_1 + uVar7,(undefined1 *)(param_2 - uVar7),param_3,param_4,param_7,
                        param_4 + (long)((ulong)param_4 >> 7) + 0xc <=
                        (undefined1 *)(param_2 - uVar7));
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

