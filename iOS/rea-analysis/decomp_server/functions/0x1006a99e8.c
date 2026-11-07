// rea decompile_all
// name: FUN_1006a99e8
// address: 0x1006a99e8
// body: available
// range: 0x1006a99e8-0x1006a9a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1006a99e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  plVar3 = plVar4;
  if (plVar5 != (long *)0x0) {
    do {
      lVar2 = param_1 + 0x10;
      FUN_1006a9a74(lVar2,plVar5 + 4,param_2);
      lVar1 = 8;
      if ((int)lVar2 == 0) {
        lVar1 = 0;
        plVar3 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if (plVar3 != plVar4) {
      param_1 = param_1 + 0x10;
      FUN_1006a9a74(param_1,param_2,plVar3 + 4);
      if ((int)param_1 == 0) {
        return plVar3;
      }
    }
  }
  return plVar4;
}

