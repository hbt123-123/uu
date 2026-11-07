// rea decompile_all
// name: SAEventObjectFactory::eventObjectWithH5Event:
// address: 0x1007345a4
// body: available
// range: 0x1007345a4-0x10073475b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100734704 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAEventObjectFactory::eventObjectWithH5Event_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  undefined **ppuVar3;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_type);
  IVar2 = objc_stub::isEqualToString_(IVar1,&cf_track);
  if ((IVar2 & 1) == 0) {
    IVar2 = objc_stub::isEqualToString_(IVar1,&cf_track_signup);
    if ((IVar2 & 1) == 0) {
      IVar2 = objc_stub::isEqualToString_(IVar1,&cf_track_id_bind);
      if ((IVar2 & 1) == 0) {
        IVar2 = objc_stub::isEqualToString_(IVar1,&cf_track_id_unbind);
        if ((IVar2 & 1) == 0) {
          IVar2 = objc_stub::isEqualToString_(IVar1,&cf_profile_set);
          if (((((IVar2 & 1) == 0) &&
               (IVar2 = objc_stub::isEqualToString_(IVar1,&cf_profile_set_once), (IVar2 & 1) == 0))
              && (IVar2 = objc_stub::isEqualToString_(IVar1,&cf_profile_unset), (IVar2 & 1) == 0))
             && (IVar2 = objc_stub::isEqualToString_(IVar1,&cf_profile_delete), (IVar2 & 1) == 0)) {
            IVar2 = objc_stub::isEqualToString_(IVar1,&cf_profile_append);
            if ((IVar2 & 1) == 0) {
              IVar1 = objc_stub::isEqualToString_(IVar1,&cf_profile_increment);
              ppuVar3 = &PTR_SAProfileIncrementEventObject_100a65d20;
              if ((int)IVar1 == 0) {
                ppuVar3 = &PTR_SABaseEventObject_100a65b90;
              }
            }
            else {
              ppuVar3 = &PTR_SAProfileAppendEventObject_100a65d28;
            }
          }
          else {
            ppuVar3 = &PTR_SAProfileEventObject_100a65cf8;
          }
        }
        else {
          ppuVar3 = &PTR_SAUnbindEventObject_100a65d08;
        }
      }
      else {
        ppuVar3 = &PTR_SABindEventObject_100a65d00;
      }
    }
    else {
      ppuVar3 = &PTR_SASignUpEventObject_100a65ce8;
    }
  }
  else {
    ppuVar3 = &PTR_SACustomEventObject_100a65d10;
  }
  self = *ppuVar3;
  _objc_alloc();
  IVar1 = objc_stub::initWithH5Event_((ID)self,param_3);
  return IVar1;
}

