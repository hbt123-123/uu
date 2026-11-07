// rea decompile_all
// name: FUN_10033d63c
// address: 0x10033d63c
// body: available
// range: 0x10033d63c-0x10033d6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033d63c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (DAT_100a81bb0 != -1) {
    _swift_once(&DAT_100a81bb0,FUN_10033d594);
  }
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar2 = lVar1;
  FUN_10021bec0();
                    /* WARNING: Could not recover jumptable at 0x00010033d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}

