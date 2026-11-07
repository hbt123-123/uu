// rea decompile_all
// name: SABaseStoreManager::objForKey:
// address: 0x100715980
// body: available
// range: 0x100715980-0x100715bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100715bb4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SABaseStoreManager::objForKey_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  ulong uVar6;
  
  IVar2 = plugins(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 != 0) {
    uVar6 = 0;
    do {
      IVar2 = plugins(param_1);
      IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,uVar6);
      IVar3 = plugins(param_1);
      IVar3 = objc_stub::objectAtIndexedSubscript_(IVar3,uVar6);
      IVar3 = storeKeyWithPlugin_key_(param_1,IVar3,param_3);
      IVar4 = objectForKey_(IVar2,IVar3);
      if (IVar4 != 0) {
        bVar1 = isRegisteredCustomStorePlugin(param_1);
        if (bVar1 == 0) {
          return IVar4;
        }
        if (uVar6 == 0) {
          return IVar4;
        }
        IVar5 = plugins(param_1);
        self = objc_stub::firstObject(IVar5);
        IVar5 = self;
        _objc_opt_respondsToSelector(self,"isIgnoreOldData");
        if (((IVar5 & 1) != 0) && (IVar5 = objc_stub::isIgnoreOldData(self), (IVar5 & 1) != 0)) {
          return 0;
        }
        IVar5 = storeKeyWithPlugin_key_(param_1,self,param_3);
        setObject_forKey_(self,IVar4,IVar5);
        removeObjectForKey_(IVar2,IVar3);
        return IVar4;
      }
      uVar6 = uVar6 + 1;
      IVar2 = plugins(param_1);
      IVar2 = objc_stub::count(IVar2);
    } while (uVar6 < IVar2);
  }
  return 0;
}

