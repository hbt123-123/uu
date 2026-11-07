// rea decompile_all
// name: FUN_1006ad468
// address: 0x1006ad468
// body: available
// range: 0x1006ad468-0x1006ad7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ad7d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ad468(ulong *param_1,void *param_2,ulong *param_3,char *param_4)

{
  char *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  size_t sVar8;
  long lVar9;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [64];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar9 = (long)*param_4;
  if (0 < lVar9) {
    lVar4 = 0;
    uVar2 = 0;
    sVar8 = lVar9 * 8;
    do {
      uVar2 = *(ulong *)((long)param_3 + lVar4) | uVar2;
      lVar4 = lVar4 + 8;
    } while (sVar8 - lVar4 != 0);
    if (uVar2 != 0) {
      FUN_1006af210(auStack_98,param_2,param_2,lVar9);
      (**(code **)(param_4 + 0xc0))(auStack_b8,auStack_98);
      FUN_1006af210(auStack_98,param_1,auStack_b8,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(auStack_d8,auStack_98);
      FUN_1006af210(auStack_98,auStack_b8,auStack_b8,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(auStack_b8,auStack_98);
      FUN_1006af210(auStack_98,param_2,param_3,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(param_2,auStack_98);
      FUN_1006af210(auStack_98,param_3,param_3,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(param_3,auStack_98);
      pcVar1 = param_4 + 8;
      FUN_1006adc18(param_1,param_1,param_3,pcVar1,lVar9);
      FUN_1006adc18(param_3,param_3,param_3,pcVar1,lVar9);
      FUN_1006acfd8(param_3,param_1,param_3,pcVar1,lVar9);
      FUN_1006af210(auStack_98,param_1,param_3,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(param_1,auStack_98);
      FUN_1006adc18(param_3,param_1,param_1,pcVar1,lVar9);
      FUN_1006adc18(param_1,param_1,param_3,pcVar1,lVar9);
      if ((*param_1 & 1) == 0) {
        uVar2 = 0;
        puVar3 = param_1 + lVar9;
        do {
          puVar3 = puVar3 + -1;
          uVar5 = *puVar3;
          *puVar3 = uVar2 | uVar5 >> 1;
          uVar2 = uVar5 << 0x3f;
        } while (param_1 < puVar3);
      }
      else {
        lVar4 = 0;
        uVar2 = 0;
        do {
          uVar6 = *(ulong *)((long)param_1 + lVar4);
          uVar5 = uVar6 + uVar2 + *(long *)(pcVar1 + lVar4);
          if (uVar5 != uVar6) {
            uVar2 = (ulong)(uVar5 < uVar6);
          }
          *(ulong *)((long)param_1 + lVar4) = uVar5;
          lVar4 = lVar4 + 8;
        } while (sVar8 - lVar4 != 0);
        uVar5 = 0;
        puVar3 = param_1 + lVar9;
        puVar7 = puVar3;
        do {
          puVar7 = puVar7 + -1;
          uVar6 = *puVar7;
          *puVar7 = uVar5 | uVar6 >> 1;
          uVar5 = uVar6 << 0x3f;
        } while (param_1 < puVar7);
        puVar3[-1] = puVar3[-1] | uVar2 << 0x3f;
      }
      FUN_1006af210(auStack_98,param_1,param_1,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(param_3,auStack_98);
      FUN_1006acfd8(param_3,param_3,auStack_d8,pcVar1,lVar9);
      FUN_1006acfd8(param_3,param_3,auStack_d8,pcVar1,lVar9);
      FUN_1006acfd8(auStack_d8,auStack_d8,param_3,pcVar1,lVar9);
      FUN_1006af210(auStack_98,param_1,auStack_d8,(long)*param_4);
      (**(code **)(param_4 + 0xc0))(param_1,auStack_98);
      FUN_1006acfd8(auStack_b8,param_1,auStack_b8,pcVar1,lVar9);
      puVar3 = param_3;
      lVar4 = lVar9;
      do {
        *param_1 = *puVar3;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      } while (lVar4 != 0);
      lVar4 = 0;
      do {
        param_3[lVar4] = *(ulong *)((long)param_2 + lVar4 * 8);
        lVar4 = lVar4 + 1;
      } while (lVar9 != lVar4);
      _memcpy(param_2,auStack_b8,sVar8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

