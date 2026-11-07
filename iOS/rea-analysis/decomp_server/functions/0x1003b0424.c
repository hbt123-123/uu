// rea decompile_all
// name: FUN_1003b0424
// address: 0x1003b0424
// body: available
// range: 0x1003b0424-0x1003b04eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b0498 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1003b0424(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = &DAT_100a8baa8;
  FUN_100004bb4(&DAT_100a8baa8,&DAT_1008209a0);
  lVar4 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}

