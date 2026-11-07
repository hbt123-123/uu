// rea decompile_all
// name: FUN_10030cf14
// address: 0x10030cf14
// body: available
// range: 0x10030cf14-0x10030cfdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030cf64 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10030cf14(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x20);
  (*pcVar4)(param_1,param_2,lVar2);
  lVar3 = 0;
  FUN_10030cc54();
  (*pcVar4)((long)param_1 + (long)*(int *)(lVar3 + 0x14),
            (long)param_2 + (long)*(int *)(lVar3 + 0x14),lVar2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}

