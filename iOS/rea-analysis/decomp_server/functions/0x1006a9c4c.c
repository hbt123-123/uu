// rea decompile_all
// name: FUN_1006a9c4c
// address: 0x1006a9c4c
// body: available
// range: 0x1006a9c4c-0x1006a9ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1006a9c4c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while( true ) {
      plVar4 = plVar2;
      lVar1 = param_1 + 0x10;
      FUN_1006a9a74(lVar1,param_3,plVar4 + 4);
      if ((int)lVar1 == 0) break;
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1006a9cc8;
    }
    lVar1 = param_1 + 0x10;
    FUN_1006a9a74(lVar1,plVar4 + 4,param_3);
    if ((int)lVar1 == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_1006a9cc8:
  *param_2 = plVar4;
  return plVar3;
}

