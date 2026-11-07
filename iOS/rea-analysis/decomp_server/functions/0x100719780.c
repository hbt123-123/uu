// rea decompile_all
// name: SASecurityPolicy::initWithCoder:
// address: 0x100719780
// body: available
// range: 0x100719780-0x10071990f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SASecurityPolicy::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  
  IVar1 = init(param_1);
  if (IVar1 != 0) {
    puVar2 = &_OBJC_CLASS___NSNumber;
    _objc_opt_class(&_OBJC_CLASS___NSNumber);
    pcVar3 = "SSLPinningMode";
    _NSStringFromSelector("SSLPinningMode");
    IVar4 = objc_stub::decodeObjectOfClass_forKey_(param_3,puVar2,pcVar3);
    IVar4 = objc_stub::unsignedIntegerValue(IVar4);
    setSSLPinningMode_(IVar1,IVar4);
    pcVar3 = "allowInvalidCertificates";
    _NSStringFromSelector("allowInvalidCertificates");
    IVar4 = objc_stub::decodeBoolForKey_(param_3,pcVar3);
    setAllowInvalidCertificates_(IVar1,(bool)IVar4);
    pcVar3 = "validatesDomainName";
    _NSStringFromSelector("validatesDomainName");
    IVar4 = objc_stub::decodeBoolForKey_(param_3,pcVar3);
    setValidatesDomainName_(IVar1,(bool)IVar4);
    puVar2 = &_OBJC_CLASS___NSArray;
    _objc_opt_class(&_OBJC_CLASS___NSArray);
    pcVar3 = "pinnedCertificates";
    _NSStringFromSelector("pinnedCertificates");
    IVar4 = objc_stub::decodeObjectOfClass_forKey_(param_3,puVar2,pcVar3);
    setPinnedCertificates_(IVar1,IVar4);
  }
  return IVar1;
}

