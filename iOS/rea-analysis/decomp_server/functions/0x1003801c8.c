// rea decompile_all
// name: FUN_1003801c8
// address: 0x1003801c8
// body: available
// range: 0x1003801c8-0x100380273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003801c8(void *param_1)

{
  long lVar1;
  long local_28;
  
  FUN_100386734(1,"MMKV.cpp","close",0x156,"close [%s]");
  local_28 = DAT_100b366d8;
  if (DAT_100b366d8 != 0) {
    FUN_100392994();
  }
  FUN_100392994(*(undefined8 *)((long)param_1 + 0xb8));
  lVar1 = DAT_100b366d0;
  FUN_1003850cc(DAT_100b366d0,param_1);
  if (lVar1 != 0) {
    FUN_100385e2c(DAT_100b366d0);
  }
  FUN_10037f5f0();
  operator_delete(param_1);
  FUN_100385098(&local_28);
  return;
}

