// rea decompile_all
// name: FUN_10039d008
// address: 0x10039d008
// body: available
// range: 0x10039d008-0x10039d077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039d008(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
  _swift_bridgeObjectRelease(param_2);
  lVar1 = param_1 + 0x20;
  __s6Darwin4openys5Int32VSPys4Int8VG_ADtF(lVar1,0);
  _swift_release(param_1);
  _swift_allocObject();
  FUN_10039cf34(lVar1,param_3 & 1);
  return;
}

