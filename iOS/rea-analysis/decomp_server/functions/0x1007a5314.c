// rea decompile_all
// name: FUN_1007a5314
// address: 0x1007a5314
// body: available
// range: 0x1007a5314-0x1007a537f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a5314(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 2);
  if (-1 < iVar2) {
    puVar1 = param_1;
    FUN_1007a4a44();
    if ((int)puVar1 != 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 2);
  }
  *(int *)(param_1 + 2) = iVar2 + 1;
  *(undefined1 *)((long)param_1 + (long)iVar2 + 0x15) = 1;
  *(undefined1 *)((long)param_1 + 0xdc) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001007a537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)("{",1,param_1[1]);
  return;
}

