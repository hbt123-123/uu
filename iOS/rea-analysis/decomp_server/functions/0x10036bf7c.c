// rea decompile_all
// name: FUN_10036bf7c
// address: 0x10036bf7c
// body: available
// range: 0x10036bf7c-0x10036bfe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036bfd8 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036bf7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((uint)lVar1 < 0xc) {
    lVar1 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    puVar2 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    _swift_errorRelease(*(undefined8 *)(param_1 + *(int *)(puVar2 + 0x30)));
    return;
  }
  return;
}

