// rea decompile_all
// name: FUN_1002f9e88
// address: 0x1002f9e88
// body: available
// range: 0x1002f9e88-0x1002f9f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f9f50 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1002f9e88(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  void *pvVar3;
  
  if (param_1 != param_2) {
    FUN_1000d27dc(param_1,FUN_1002f9800);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar3 != 1) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    puVar2 = &DAT_100a84390;
    FUN_100004bb4(&DAT_100a84390,&DAT_100818cf8);
    *(undefined1 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}

