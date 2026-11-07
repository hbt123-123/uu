// rea decompile_all
// name: FUN_100695d38
// address: 0x100695d38
// body: available
// range: 0x100695d38-0x100695eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100695eb4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100695d38(long param_1,int param_2,undefined8 param_3,char *param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 extraout_var;
  int *piVar3;
  int *piVar4;
  char acStack_470 [1024];
  long local_70;
  code *pcVar2;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  iVar1 = param_2;
  ___xlogger_IsEnabledFor_impl();
  piVar4 = (int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(bool *)param_1 = iVar1 != 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *piVar4 = param_2;
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 0x18) = param_5;
    *(undefined8 *)(param_1 + 0x20) = param_6;
    *(undefined4 *)(param_1 + 0x28) = param_7;
    _gettimeofday((timeval *)(param_1 + 0x30),(void *)0x0);
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
    _strncpy((char *)(param_1 + 0x60),param_4,0x80);
    *(undefined1 *)(param_1 + 0xdf) = 0;
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x30);
    _bzero(acStack_470,0x400);
    iVar1 = _snprintf(acStack_470,0x400,"-> %s %s");
    pcVar2 = (code *)CONCAT44(extraout_var,iVar1);
    FUN_100697b4c();
    if ((pcVar2 == (code *)0x0) || (piVar3 = piVar4, (*pcVar2)(piVar4,acStack_470), 0 < (int)piVar3)
       ) {
      ___xlogger_Write_impl(piVar4,acStack_470);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

