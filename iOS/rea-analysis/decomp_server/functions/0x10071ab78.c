// rea decompile_all
// name: SAAESStorePlugin::setObject:forKey:
// address: 0x10071ab78
// body: available
// range: 0x10071ab78-0x10071ad53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071ad50 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAAESStorePlugin::setObject_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = encryptKey(param_1);
  if (IVar1 == 0) {
    IVar1 = aesCrypt(param_1);
    IVar1 = objc_stub::key(IVar1);
    setEncryptKey_(param_1,IVar1);
    IVar1 = encryptKey(param_1);
    IVar1 = objc_stub::base64EncodedDataWithOptions_(IVar1,0);
    IVar2 = fileStorePlugin(param_1);
    objc_stub::setObject_forKey_(IVar2,IVar1,&cf_StorePlugin_AES);
  }
  IVar1 = base64KeyWithString_(param_1,param_4);
  IVar2 = NSKeyedArchiver::archivedDataWithRootObject_((ID)&_OBJC_CLASS___NSKeyedArchiver,param_3);
  IVar3 = aesCrypt(param_1);
  IVar2 = objc_stub::encryptData_(IVar3,IVar2);
  IVar3 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  NSUserDefaults::setObject_forKey_(IVar3,IVar2,IVar1);
  IVar1 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  NSUserDefaults::synchronize(IVar1);
  return;
}

