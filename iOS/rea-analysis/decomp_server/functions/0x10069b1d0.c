// rea decompile_all
// name: FUN_10069b1d0
// address: 0x10069b1d0
// body: available
// range: 0x10069b1d0-0x10069b24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069b1d0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    LOAcquire();
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + -1;
    LORelease();
    if (iVar1 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      LOAcquire();
      iVar1 = *(int *)((long)plVar2 + 0xc);
      *(int *)((long)plVar2 + 0xc) = iVar1 + -1;
      LORelease();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010069b238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}

