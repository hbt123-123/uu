// rea decompile_all
// name: FUN_10037ec2c
// address: 0x10037ec2c
// body: available
// range: 0x10037ec2c-0x10037ed9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037ed9c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_10037ec2c(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*param_1 == '\x01') {
    if (*param_2 == '\x01') {
      cVar1 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = cVar1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_2 + 10) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_2 + 0x12) = uVar3;
    }
    else {
      *param_1 = '\0';
      if ((((param_1[1] & 1U) == 0) && (*(long *)(param_1 + 0x12) == 0)) &&
         (*(void **)(param_1 + 10) != (void *)0x0)) {
        _free(*(void **)(param_1 + 10));
      }
      bVar2 = param_2[1];
      param_1[1] = bVar2;
      _memcpy(param_1 + 2,param_2 + 2,(ulong)bVar2);
    }
  }
  else if (*param_2 == '\x01') {
    *param_1 = '\x01';
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
  }
  else {
    bVar2 = param_2[1];
    _memcpy(auStack_50,param_2 + 2,(ulong)bVar2);
    _memcpy(param_2 + 2,param_1 + 2,(ulong)(byte)param_1[1]);
    _memcpy(param_1 + 2,auStack_50,(ulong)bVar2);
    cVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = cVar1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

