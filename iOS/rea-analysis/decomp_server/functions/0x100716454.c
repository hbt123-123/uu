// rea decompile_all
// name: SABaseStoreManager::integerForKey:
// address: 0x100716454
// body: available
// range: 0x100716454-0x1007164d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long SABaseStoreManager::integerForKey_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined *puVar1;
  ID IVar2;
  
  self = objectForKey_(param_1,param_3);
  puVar1 = &_OBJC_CLASS___NSNumber;
  _objc_opt_class(&_OBJC_CLASS___NSNumber);
  IVar2 = self;
  _objc_opt_isKindOfClass(self,puVar1);
  if ((IVar2 & 1) == 0) {
    puVar1 = &_OBJC_CLASS___NSString;
    _objc_opt_class(&_OBJC_CLASS___NSString);
    IVar2 = self;
    _objc_opt_isKindOfClass(self,puVar1);
    if ((IVar2 & 1) == 0) {
      return 0;
    }
  }
  IVar2 = objc_stub::integerValue(self);
  return IVar2;
}

