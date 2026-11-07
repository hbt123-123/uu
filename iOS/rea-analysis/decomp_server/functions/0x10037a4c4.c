// rea decompile_all
// name: MMKV::mmkvBasePath
// address: 0x10037a4c4
// body: available
// range: 0x10037a4c4-0x10037a537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID MMKV::mmkvBasePath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  
  IVar1 = objc_stub::length((ID)DAT_100ad13a0);
  pcVar3 = DAT_100ad13a0;
  if (IVar1 == 0) {
    IVar1 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    IVar1 = objc_stub::firstObject(IVar1);
    IVar2 = objc_stub::length(IVar1);
    if (IVar2 == 0) {
      pcVar3 = &cf___;
    }
    else {
      DAT_100ad13a0 = (cfstringStruct *)objc_stub::stringByAppendingPathComponent_(IVar1,&cf_mmkv);
      pcVar3 = DAT_100ad13a0;
    }
  }
  return (ID)pcVar3;
}

