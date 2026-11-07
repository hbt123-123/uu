// rea decompile_all
// name: FUN_1006a46f8
// address: 0x1006a46f8
// body: available
// range: 0x1006a46f8-0x1006a4757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a4754 to 0x10069f534 FUN_10069f534 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a46f8(undefined8 param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = DAT_100b2c628;
  pvVar2 = operator_new(0x680);
  FUN_1006a0490(pvVar2,param_1,uVar1,0);
  FUN_1006a4014();
  FUN_10069f5c4(pvVar2);
  FUN_10069f534(pvVar2);
  return;
}

