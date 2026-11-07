// rea decompile_all
// name: FUN_1005ca4d0
// address: 0x1005ca4d0
// body: available
// range: 0x1005ca4d0-0x1005ca57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ca4d0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(puVar2 + -8);
  if (*(int *)(lVar3 + 0x54) == param_3) {
    iVar1 = *(int *)(param_4 + 0x14);
  }
  else {
    if (param_3 == 0x7fffffff) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x18) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    puVar2 = &DAT_100aad5f8;
    FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
    lVar3 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_4 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ca57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}

