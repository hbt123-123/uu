// rea decompile_all
// name: MMKV::onAppTerminate
// address: 0x100379dc8
// body: available
// range: 0x100379dc8-0x100379e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MMKV::onAppTerminate(ID param_1,SEL param_2)

{
  void *pvVar1;
  
  FUN_100392994(DAT_100ad1390);
  objc_stub::enumerateKeysAndObjectsUsingBlock_
            (DAT_100ad1388,&PTR___NSConcreteGlobalBlock_1009b59b8);
  DAT_100ad1388 = 0;
  DAT_100ad13a0 = 0;
  DAT_100ad13a8 = 0;
  FUN_10037ff10(0);
  FUN_1003929fc(DAT_100ad1390);
  if (DAT_100ad1390 != (void *)0x0) {
    pvVar1 = DAT_100ad1390;
    thunk_FUN_100392960();
    operator_delete(pvVar1);
  }
  DAT_100ad1390 = (void *)0x0;
  return;
}

