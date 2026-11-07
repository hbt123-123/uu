// rea decompile_all
// name: FUN_100758cd0
// address: 0x100758cd0
// body: available
// range: 0x100758cd0-0x100758d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100758cd0(long param_1)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  undefined8 local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100995490;
  local_30 = 0xc2000000;
  local_28 = FUN_100758d2c;
  puStack_20 = &DAT_1009e8d80;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_async(PTR___dispatch_main_q_1009954b0,&local_38);
  return;
}

