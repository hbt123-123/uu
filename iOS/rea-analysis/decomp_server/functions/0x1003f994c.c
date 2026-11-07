// rea decompile_all
// name: FUN_1003f994c
// address: 0x1003f994c
// body: available
// range: 0x1003f994c-0x1003f99eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_1003f994c(byte *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((int)param_2 == 0xfd) {
    iVar1 = -2;
    if (1 < *param_1) {
      iVar1 = (*param_1 + 0x7ffffffe & 0x7fffffff) - 1;
    }
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return (byte *)(ulong)(iVar1 + 1);
  }
  puVar2 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  param_1 = param_1 + *(int *)(param_3 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x0001003f99e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
  return param_1;
}

