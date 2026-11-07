// rea decompile_all
// name: FUN_10038bec4
// address: 0x10038bec4
// body: available
// range: 0x10038bec4-0x10038bf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038bf38 to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10038bf4c to 0x10038bda8 FUN_10038bda8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038bec4(long *param_1,ulong param_2)

{
  long *plVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  plVar1 = param_1 + 2;
  lVar4 = *param_1;
  if ((ulong)(*plVar1 - lVar4 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10038bda8();
    }
    lVar5 = param_1[1];
    FUN_10038c0f4();
    lVar4 = (long)plVar1 + (lVar5 - lVar4);
    sVar3 = param_1[1] - *param_1;
    pvVar6 = (void *)(lVar4 - sVar3);
    _memcpy(pvVar6,(void *)*param_1,sVar3);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)pvVar6;
    param_1[1] = lVar4;
    param_1[2] = (long)(plVar1 + param_2);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}

