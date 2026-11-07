// rea decompile_all
// name: FUN_10069ae38
// address: 0x10069ae38
// body: available
// range: 0x10069ae38-0x10069aeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ae38(int *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int iStack_34;
  
  iVar2 = *(int *)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0 || iVar3 == 0xffff) {
    FUN_100698904(&local_38,param_2,param_3);
    *(int *)(param_2 + 0x20) = local_38;
    *(int *)(param_2 + 0x24) = iStack_34;
    iVar3 = iStack_34;
    iVar2 = local_38;
  }
  else if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    lVar1 = param_2;
    FUN_10069f164();
    *(long *)(param_3 + 2) = lVar1;
    iVar2 = *(int *)(param_2 + 0x20);
    iVar3 = *(int *)(param_2 + 0x24);
  }
  *param_1 = iVar2;
  param_1[1] = iVar3;
  return;
}

