// rea decompile_all
// name: MMKV::initializeMMKV:groupDir:logLevel:
// address: 0x100378de4
// body: available
// range: 0x100378de4-0x100378e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID MMKV::initializeMMKV_groupDir_logLevel_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  
  IVar1 = initializeMMKV_logLevel_handler_((ID)&objc::class_t::MMKV,param_3,param_5,0);
  DAT_100ad13a8 = objc_stub::stringByAppendingPathComponent_(param_4,&cf_mmkv);
  FUN_100386734(1,"libMMKV.mm","+[MMKV initializeMMKV:groupDir:logLevel:]",0x84,"groupDir: %@");
  return IVar1;
}

