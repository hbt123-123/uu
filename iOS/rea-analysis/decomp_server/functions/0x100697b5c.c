// rea decompile_all
// name: ___xlogger_Write_impl
// address: 0x100697b5c
// body: available
// range: 0x100697b5c-0x100697c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___xlogger_Write_impl(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  
  if (DAT_100b2c458 == (code *)0x0) {
    return;
  }
  if (param_1 == (undefined4 *)0x0) {
    if (param_2 != (char *)0x0) goto LAB_100697c08;
  }
  else {
    puVar1 = param_1;
    if (*(long *)(param_1 + 0xe) == -1) {
      FUN_100697e58();
      *(undefined4 **)(param_1 + 0xe) = puVar1;
    }
    if (*(long *)(param_1 + 0x10) == -1) {
      FUN_100697ecc();
      *(undefined4 **)(param_1 + 0x10) = puVar1;
    }
    if (*(long *)(param_1 + 0x12) == -1) {
      FUN_100697ef8();
      *(undefined4 **)(param_1 + 0x12) = puVar1;
    }
    if (param_2 != (char *)0x0) goto LAB_100697c08;
    *param_1 = 5;
  }
  param_2 = "NULL == _log";
LAB_100697c08:
                    /* WARNING: Could not recover jumptable at 0x000100697c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100b2c458)(param_1,param_2);
  return;
}

