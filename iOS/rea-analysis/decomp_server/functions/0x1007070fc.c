// rea decompile_all
// name: FUN_1007070fc
// address: 0x1007070fc
// body: available
// range: 0x1007070fc-0x10070728b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100707258 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007070fc(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  int local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100b2c700 != -1) {
    FUN_1007da510();
  }
  if (DAT_100b2c708 != 0) {
    uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    local_40 = param_1;
    __availability_version_check(1,&local_40);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
      return;
    }
    goto LAB_100707258;
  }
  if (param_1 == 1) {
    if (DAT_100b2c6f8 == -1) {
      iVar1 = DAT_100b2c6e8 - param_2;
    }
    else {
      FUN_1007da4f0();
      iVar1 = DAT_100b2c6e8 - param_2;
    }
    if (DAT_100b2c6e8 <= param_2) {
      if (iVar1 < 0 == SBORROW4(DAT_100b2c6e8,param_2)) {
        if ((int)param_3 < DAT_100b2c6ec) goto LAB_1007071fc;
        if (DAT_100b2c6ec < (int)param_3) goto LAB_1007071cc;
        lVar2 = *(long *)PTR____stack_chk_guard_1009954a0;
      }
      else {
LAB_1007071cc:
        lVar2 = *(long *)PTR____stack_chk_guard_1009954a0;
      }
      if (lVar2 == local_38) {
        return;
      }
      goto LAB_100707258;
    }
  }
LAB_1007071fc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
LAB_100707258:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

