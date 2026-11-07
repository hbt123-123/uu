// rea decompile_all
// name: FUN_1002727d4
// address: 0x1002727d4
// body: available
// range: 0x1002727d4-0x100272853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002727d4(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
                    /* WARNING: Could not recover jumptable at 0x000100272850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x14),param_2,param_2,puVar1);
  return;
}

