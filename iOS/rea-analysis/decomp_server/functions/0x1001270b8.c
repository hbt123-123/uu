// rea decompile_all
// name: FUN_1001270b8
// address: 0x1001270b8
// body: available
// range: 0x1001270b8-0x100127177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001270b8(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  puVar1 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  if (*(int *)(*(long *)(puVar1 + -8) + 0x54) == (int)param_2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar1 + -8) + 0x30);
  }
  else {
    if ((int)param_2 == 0x7fffffff) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    puVar1 = &DAT_100a76718;
    FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar1 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x000100127174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return param_1;
}

