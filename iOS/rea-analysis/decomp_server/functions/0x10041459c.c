// rea decompile_all
// name: FUN_10041459c
// address: 0x10041459c
// body: available
// range: 0x10041459c-0x1004145e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041459c(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = 0;
  uVar1 = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_100995f08;
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
                    /* WARNING: Could not recover jumptable at 0x0001004145e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x68))(param_1,uVar1,lVar2);
  return;
}

