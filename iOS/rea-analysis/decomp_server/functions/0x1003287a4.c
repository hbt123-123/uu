// rea decompile_all
// name: FUN_1003287a4
// address: 0x1003287a4
// body: available
// range: 0x1003287a4-0x100328813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003287a4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  if ((param_2 & 1) == 0) {
    FUN_100004bb4(&DAT_100a85d18,&DAT_10081a3c8);
    __sScC6resume9returningyxn_tF();
  }
  else {
    local_28 = param_1;
    _swift_errorRetain();
    puVar1 = &DAT_100a85d18;
    FUN_100004bb4(&DAT_100a85d18,&DAT_10081a3c8);
    __sScC6resume8throwingyq_n_tF(&local_28,puVar1);
  }
  return;
}

