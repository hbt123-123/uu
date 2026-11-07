// rea decompile_all
// name: FUN_1001b1d00
// address: 0x1001b1d00
// body: available
// range: 0x1001b1d00-0x1001b1d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b1d00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = &local_30;
  local_30 = param_2;
  uStack_28 = param_3;
  FUN_1000750c8();
  puVar1 = &DAT_100a7cc60;
  FUN_100004bb4(&DAT_100a7cc60,&DAT_1008117b0);
  __sSS10describingSSx_tclufC();
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}

