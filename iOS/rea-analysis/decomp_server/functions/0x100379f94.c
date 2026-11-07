// rea decompile_all
// name: MMKV::disableAutoCleanUp
// address: 0x100379f94
// body: available
// range: 0x100379f94-0x10037a017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void MMKV::disableAutoCleanUp(ID param_1,SEL param_2)

{
  long local_28;
  
  FUN_100386734(1,"libMMKV.mm","+[MMKV disableAutoCleanUp]",0x30d,"disable auto clean up");
  local_28 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  DAT_100ad13d0 = 0;
  if (DAT_100ad13d8._os_obj != (_os_object_s *)0x0) {
    _dispatch_source_cancel((dispatch_source_t)DAT_100ad13d8._os_obj);
    _dispatch_release(DAT_100ad13d8);
    DAT_100ad13d8._os_obj = (_os_object_s *)0x0;
  }
  FUN_10037b92c(&local_28);
  return;
}

