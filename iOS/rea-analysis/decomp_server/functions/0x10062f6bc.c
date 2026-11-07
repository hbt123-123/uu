// rea decompile_all
// name: FUN_10062f6bc
// address: 0x10062f6bc
// body: available
// range: 0x10062f6bc-0x10062f7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10062f7e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062f6bc(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined1 local_29;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_29 = 0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  iVar4 = (int)param_1;
  if (uVar2 >> 0x1e < 2) {
    lVar5 = 0;
    if (uVar6 != 0) {
      lVar5 = (long)iVar4;
    }
  }
  else {
    lVar5 = 0;
    if (uVar6 == 2) {
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
  lVar1 = lVar5 + 1;
  if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10062f7d4);
    (*pcVar3)();
  }
  if (lVar1 < lVar5) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10062f7d8);
    (*pcVar3)();
  }
  if (lVar5 != lVar1) {
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        __s10Foundation4DataV06InlineB0V9copyBytes2to4fromySv_SnySiGtF
                  (&local_29,lVar5,lVar1,param_1,param_2 & 0xffffffffffffff);
        goto LAB_10062f7a4;
      }
      if ((((param_1 >> 0x20 < lVar1) || (lVar5 < iVar4)) || (param_1 >> 0x20 < lVar5)) ||
         (lVar1 < iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10062f7e0);
        (*pcVar3)();
      }
    }
    else {
      if (uVar6 != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10062f7e8);
        (*pcVar3)();
      }
      if (lVar5 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10062f7dc);
        (*pcVar3)();
      }
      if (*(long *)(param_1 + 0x18) < lVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10062f76c);
        (*pcVar3)();
      }
    }
    __s10Foundation13__DataStorageC9copyBytes2to4fromySv_SnySiGtF(&local_29,lVar5);
  }
LAB_10062f7a4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_29);
  }
  return;
}

