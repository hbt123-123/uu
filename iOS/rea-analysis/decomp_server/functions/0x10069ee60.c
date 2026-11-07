// rea decompile_all
// name: FUN_10069ee60
// address: 0x10069ee60
// body: available
// range: 0x10069ee60-0x10069ef07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ee60(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = operator_new(0x18);
  puVar2[1] = 0x100000001;
  *puVar2 = &PTR_FUN_1009e6ad0;
  puVar2[2] = param_2;
  plVar3 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = puVar2;
  if (plVar3 != (long *)0x0) {
    LOAcquire();
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + -1;
    LORelease();
    if (iVar1 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOAcquire();
      iVar1 = *(int *)((long)plVar3 + 0xc);
      *(int *)((long)plVar3 + 0xc) = iVar1 + -1;
      LORelease();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010069eef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}

