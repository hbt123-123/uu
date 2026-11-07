// rea decompile_all
// name: FUN_10036b068
// address: 0x10036b068
// body: available
// range: 0x10036b068-0x10036b0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036b0c8 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036b068(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((uint)puVar1 < 9) {
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    puVar3 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30));
  }
  else if ((uint)puVar1 != 9) {
    return;
  }
  _swift_errorRelease(*param_1);
  return;
}

