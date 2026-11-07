// rea decompile_all
// name: FUN_1006bdb4c
// address: 0x1006bdb4c
// body: available
// range: 0x1006bdb4c-0x1006bdd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006bdd0c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bdb4c(undefined1 *param_1,long param_2,void *param_3,undefined8 param_4,int param_5,
                  long param_6,undefined8 param_7,undefined1 *param_8,long param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,void *param_13,
                  size_t param_14,undefined8 param_15,undefined8 param_16)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_d2 [106];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_5 < 2) {
    if (param_5 == 0) {
      FUN_1006b184c(param_3,param_10,param_12,param_11,param_15,param_16);
    }
    else if (((param_5 == 1) &&
             (FUN_1006b24c4(param_3,(uint)param_7 & 0xff), param_3 < (void *)0xffffffffffffff89)) &&
            (param_2 != 0)) {
      *param_1 = *param_8;
    }
  }
  else if (param_5 == 2) {
    FUN_1006b1df0(param_4,param_9,param_7);
    uVar1 = *(uint *)(param_6 + (ulong)(byte)param_8[param_9 + -1] * 4);
    if (1 < uVar1) {
      *(uint *)(param_6 + (ulong)(byte)param_8[param_9 + -1] * 4) = uVar1 - 1;
      param_9 = param_9 + -1;
    }
    puVar2 = auStack_d2;
    FUN_1006b1e58(puVar2,param_4,param_6,param_9,param_7);
    if ((puVar2 < (undefined1 *)0xffffffffffffff89) &&
       (FUN_1006b1af4(param_1,param_2,auStack_d2,param_7,param_4),
       param_1 < (undefined1 *)0xffffffffffffff89)) {
      FUN_1006b184c(param_3,auStack_d2,param_7,param_4,param_15,param_16);
    }
  }
  else if (param_5 == 3) {
    _memcpy(param_3,param_13,param_14);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

