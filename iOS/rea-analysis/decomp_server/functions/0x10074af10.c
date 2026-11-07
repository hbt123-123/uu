// rea decompile_all
// name: FUN_10074af10
// address: 0x10074af10
// body: available
// range: 0x10074af10-0x10074afa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074af68 to 0x10074a3cc FUN_10074a3cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10074af10(long *param_1,void *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  iVar2 = (int)param_3;
  if (iVar3 - *(int *)((long)param_1 + 0xc) < iVar2) {
    FUN_10074aec8(param_1);
    iVar3 = (int)param_1[1];
  }
  if (iVar3 < iVar2) {
    uVar1 = (ulong)*(uint *)(param_1 + 2);
    FUN_10074a3cc(uVar1,param_2,param_3);
    return uVar1;
  }
  _memcpy((void *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)),param_2,(long)iVar2);
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + iVar2;
  return 1;
}

