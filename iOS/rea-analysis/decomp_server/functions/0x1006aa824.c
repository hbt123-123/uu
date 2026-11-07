// rea decompile_all
// name: FUN_1006aa824
// address: 0x1006aa824
// body: available
// range: 0x1006aa824-0x1006aa96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aa968 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aa824(long param_1,ulong param_2,ulong param_3,char *param_4,ulong *param_5)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    std::string::assign(param_4,param_2);
    *param_5 = 0;
  }
  else {
    local_60 = 0;
    uVar2 = param_3 & 7;
    *param_5 = uVar2;
    if (7 < param_3) {
      uVar2 = 0;
      do {
        puVar1 = (uint *)(param_2 + uVar2 * 8);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        iVar5 = 0x10;
        iVar6 = -0x61c88647;
        do {
          uVar3 = (*(int *)(param_1 + 0x10) + (uVar4 >> 5) ^ *(int *)(param_1 + 0xc) + uVar4 * 0x10
                  ^ uVar4 + iVar6) + uVar3;
          uVar4 = (*(int *)(param_1 + 0x14) + uVar3 * 0x10 ^ iVar6 + uVar3 ^
                  *(int *)(param_1 + 0x18) + (uVar3 >> 5)) + uVar4;
          iVar6 = iVar6 + -0x61c88647;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        local_60 = CONCAT44(uVar4,uVar3);
        std::string::append(param_4,(ulong)&local_60);
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_3 >> 3);
      uVar2 = *param_5;
    }
    std::string::append(param_4,(param_2 + param_3) - uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

