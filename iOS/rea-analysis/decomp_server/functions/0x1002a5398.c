// rea decompile_all
// name: FUN_1002a5398
// address: 0x1002a5398
// body: available
// range: 0x1002a5398-0x1002a5463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1002a5398(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  if (*(int *)(*(long *)(puVar2 + -8) + 0x54) == (int)param_2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x30);
  }
  else {
    if ((int)param_2 == 0x7ffffffe) {
      uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
      if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
      }
      iVar1 = (int)uVar3 + -1;
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      return (ulong)(iVar1 + 1);
    }
    puVar2 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a5460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar2);
  return param_1;
}

