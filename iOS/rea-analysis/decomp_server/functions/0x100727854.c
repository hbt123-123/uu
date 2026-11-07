// rea decompile_all
// name: SACommonUtility::subByteString:byteLength:
// address: 0x100727854
// body: available
// range: 0x100727854-0x100727997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100727988 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SACommonUtility::subByteString_byteLength_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long_long lVar5;
  ulong uVar6;
  
  uVar1 = 0x8000100;
  _CFStringConvertEncodingToNSStringEncoding(0x8000100);
  self = objc_stub::dataUsingEncoding_(param_3,uVar1);
  IVar2 = objc_stub::subdataWithRange_(self,0,param_4);
  puVar3 = &_OBJC_CLASS___NSString;
  _objc_alloc();
  IVar2 = objc_stub::initWithData_encoding_((ID)puVar3,IVar2,uVar1);
  if (IVar2 == 0) {
    uVar6 = 1;
    lVar5 = param_4;
    do {
      lVar5 = lVar5 - 1;
      if ((long)uVar6 < (long)param_4) {
        IVar2 = objc_stub::subdataWithRange_(self,0,lVar5);
        puVar3 = &_OBJC_CLASS___NSString;
        _objc_alloc();
        IVar4 = objc_stub::initWithData_encoding_((ID)puVar3,IVar2,uVar1);
      }
      else {
        IVar4 = 0;
      }
    } while ((uVar6 < 3) && (uVar6 = uVar6 + 1, IVar4 == 0));
    IVar2 = param_3;
    if (IVar4 != 0) {
      return IVar4;
    }
  }
  return IVar2;
}

