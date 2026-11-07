// rea decompile_all
// name: FUN_10001b0e0
// address: 0x10001b0e0
// body: available
// range: 0x10001b0e0-0x10001b15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001b0e0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar1 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)((int)uVar1 + 1);
  }
  FUN_10000eb08(param_4,param_5);
  uVar1 = param_1 + *(int *)(param_3 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010001b15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x30))(uVar1,param_2,param_4);
  return uVar1;
}

