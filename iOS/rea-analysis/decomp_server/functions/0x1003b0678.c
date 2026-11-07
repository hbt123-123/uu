// rea decompile_all
// name: FUN_1003b0678
// address: 0x1003b0678
// body: available
// range: 0x1003b0678-0x1003b06d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b0678(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 1;
  }
  puVar2 = &DAT_100a8baa8;
  FUN_100004bb4(&DAT_100a8baa8,&DAT_1008209a0);
                    /* WARNING: Could not recover jumptable at 0x0001003b06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,iVar1,param_3,puVar2);
  return;
}

