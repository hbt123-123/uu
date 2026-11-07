// rea decompile_all
// name: FUN_10037ccb4
// address: 0x10037ccb4
// body: available
// range: 0x10037ccb4-0x10037ce23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037ce20 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10037ccb4(long param_1)

{
  ulong uVar1;
  void **ppvVar2;
  void **ppvVar3;
  logic_error *this;
  long lVar4;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80;
  void *pvStack_78;
  void *local_70;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *local_40;
  void *pvStack_38;
  void *local_30;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == *(ulong *)(param_1 + 8)) {
    std::to_string(uVar1);
    ppvVar2 = local_98;
    std::string::insert((ulong)ppvVar2,(char *)0x0);
    pvStack_78 = ppvVar2[1];
    local_80 = *ppvVar2;
    local_70 = ppvVar2[2];
    ppvVar2[1] = (void *)0x0;
    ppvVar2[2] = (void *)0x0;
    *ppvVar2 = (void *)0x0;
    ppvVar2 = &local_80;
    std::string::append((char *)ppvVar2);
    pvStack_58 = ppvVar2[1];
    local_60 = *ppvVar2;
    local_50 = ppvVar2[2];
    ppvVar2[1] = (void *)0x0;
    ppvVar2[2] = (void *)0x0;
    *ppvVar2 = (void *)0x0;
    std::to_string(*(ulong *)(param_1 + 8));
    ppvVar2 = local_b0[0];
    if (-1 < local_99) {
      ppvVar2 = local_b0;
    }
    ppvVar3 = &local_60;
    std::string::append((char *)ppvVar3,(ulong)ppvVar2);
    pvStack_38 = ppvVar3[1];
    local_40 = *ppvVar3;
    local_30 = ppvVar3[2];
    ppvVar3[1] = (void *)0x0;
    ppvVar3[2] = (void *)0x0;
    *ppvVar3 = (void *)0x0;
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    this = (logic_error *)0x10;
    ___cxa_allocate_exception();
    std::logic_error::logic_error(this,(string *)this);
    *(undefined **)this = PTR_vtable_1009951c8 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_1009965b8,PTR__out_of_range_1009950f0);
  }
  *(ulong *)(param_1 + 0x10) = uVar1 + 1;
  lVar4 = *(long *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar4 + 1;
  return (long)*(char *)(*(long *)(param_1 + 0x28) + lVar4);
}

