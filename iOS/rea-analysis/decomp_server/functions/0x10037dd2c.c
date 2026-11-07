// rea decompile_all
// name: FUN_10037dd2c
// address: 0x10037dd2c
// body: available
// range: 0x10037dd2c-0x10037ddb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10037dd2c(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
  if (*param_1 < 0) {
    return (int *)0x0;
  }
  if (param_2 == 0) {
    plVar2 = (long *)(param_1 + 2);
    lVar1 = *plVar2;
    if ((lVar1 != 0) || (*(long *)(param_1 + 4) != 0)) goto LAB_10037dd88;
    FUN_10037ddc4(param_1,0,param_3,0,param_4);
    if (((ulong)param_1 & 1) == 0) {
      return (int *)0x0;
    }
  }
  else {
    plVar2 = (long *)(param_1 + 4);
    lVar1 = *plVar2;
    if (lVar1 != 0) goto LAB_10037dd88;
    FUN_10037ddc4();
    if ((int)param_1 == 0) {
      return param_1;
    }
  }
  lVar1 = *plVar2;
LAB_10037dd88:
  *plVar2 = lVar1 + 1;
  return (int *)0x1;
}

