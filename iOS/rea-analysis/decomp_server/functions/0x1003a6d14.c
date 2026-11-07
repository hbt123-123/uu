// rea decompile_all
// name: FUN_1003a6d14
// address: 0x1003a6d14
// body: available
// range: 0x1003a6d14-0x1003a6d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a6d98 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a6d14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  if ((int)lVar1 == 1) {
    return;
  }
  puVar3 = &DAT_100a7c630;
  FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(puVar3 + 0x30) + 8));
  FUN_100006cdc(*(undefined8 *)(param_1 + *(int *)(puVar3 + 0x40)),
                ((undefined8 *)(param_1 + *(int *)(puVar3 + 0x40)))[1]);
  return;
}

