// rea decompile_all
// name: FUN_100707294
// address: 0x100707294
// body: available
// range: 0x100707294-0x100707503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070749c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100707294(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                  uint param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  int local_68;
  uint uStack_64;
  int local_60;
  uint uStack_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100b2c700 != -1) {
    FUN_1007da510();
  }
  if (DAT_100b2c708 != 0) {
    uStack_64 = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    uStack_5c = param_6 << 0x10 | (param_7 & 0xff) << 8 | param_8 & 0xff;
    local_68 = param_1;
    local_60 = param_5;
    __availability_version_check(2,&local_68);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
      return;
    }
    goto LAB_10070749c;
  }
  if (param_1 == 1) {
    if (DAT_100b2c6f8 == -1) {
      iVar1 = DAT_100b2c6e8 - param_2;
    }
    else {
      FUN_1007da4f0();
      iVar1 = DAT_100b2c6e8 - param_2;
    }
    if (param_2 < DAT_100b2c6e8) {
LAB_100707438:
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
        return;
      }
      goto LAB_10070749c;
    }
    if (iVar1 < 0 == SBORROW4(DAT_100b2c6e8,param_2)) {
      if ((int)param_3 < DAT_100b2c6ec) goto LAB_100707438;
      if ((int)param_3 <= DAT_100b2c6ec) {
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
          return;
        }
        goto LAB_10070749c;
      }
    }
  }
  else {
    if (param_5 == 1) {
      if (DAT_100b2c6f8 != -1) goto LAB_1007074d4;
      bVar2 = SBORROW4(DAT_100b2c6e8,param_6);
      iVar1 = DAT_100b2c6e8 - param_6;
      if (param_6 < DAT_100b2c6e8) goto LAB_100707438;
    }
    else {
      FUN_1007da530();
LAB_1007074d4:
      FUN_1007da4f0();
      bVar2 = SBORROW4(DAT_100b2c6e8,param_6);
      iVar1 = DAT_100b2c6e8 - param_6;
      if (param_6 < DAT_100b2c6e8) goto LAB_100707438;
    }
    if (iVar1 < 0 == bVar2) {
      if ((int)param_7 < DAT_100b2c6ec) goto LAB_100707438;
      if ((int)param_7 <= DAT_100b2c6ec) {
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
          return;
        }
        goto LAB_10070749c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
LAB_10070749c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

