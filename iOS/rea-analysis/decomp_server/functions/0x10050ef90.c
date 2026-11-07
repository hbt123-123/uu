// rea decompile_all
// name: FUN_10050ef90
// address: 0x10050ef90
// body: available
// range: 0x10050ef90-0x10050f08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10050f084 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050ef90(void *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  size_t sVar4;
  long unaff_x20;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 != (void *)0x0) {
    dVar2 = 0.0;
    sVar4 = param_2 - (long)param_1;
    uVar3 = 1;
    if (((long)sVar4 < 1) || (*(long *)(unaff_x20 + 0x18) <= (long)sVar4)) goto LAB_10050f04c;
    if (*(void **)(unaff_x20 + 0x10) == (void *)0x0) {
LAB_10050f088:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10050f08c);
      (*pcVar1)();
    }
    _memmove(*(void **)(unaff_x20 + 0x10),param_1,sVar4);
    local_40 = *(char **)(unaff_x20 + 0x10);
    local_40[sVar4] = '\0';
    if (local_40 == (char *)0x0) goto LAB_10050f088;
    dVar2 = _strtod(local_40,&local_40);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10050f090);
      (*pcVar1)();
    }
    if (((local_40 != (char *)0x0) && ((char *)(*(long *)(unaff_x20 + 0x10) + sVar4) == local_40))
       && (((param_3 & 1) == 0 || ((ulong)ABS(dVar2) < 0x7ff0000000000000)))) {
      uVar3 = 0;
      goto LAB_10050f04c;
    }
  }
  dVar2 = 0.0;
  uVar3 = 1;
LAB_10050f04c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(dVar2,uVar3);
  }
  return;
}

