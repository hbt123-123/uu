// rea decompile_all
// name: FUN_1005ca410
// address: 0x1005ca410
// body: available
// range: 0x1005ca410-0x1005ca4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1005ca410(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = (undefined *)0x0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(puVar2 + -8);
  if (*(int *)(lVar3 + 0x54) == (int)param_2) {
    iVar1 = *(int *)(param_3 + 0x14);
  }
  else {
    if ((int)param_2 == 0x7fffffff) {
      uVar4 = *(ulong *)(param_1 + *(int *)(param_3 + 0x18) + 8);
      if (0xfffffffe < uVar4) {
        uVar4 = 0xffffffff;
      }
      return (ulong)((int)uVar4 + 1);
    }
    puVar2 = &DAT_100aad5f8;
    FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
    lVar3 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x28);
  }
  uVar4 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001005ca4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x30))(uVar4,param_2,puVar2);
  return uVar4;
}

