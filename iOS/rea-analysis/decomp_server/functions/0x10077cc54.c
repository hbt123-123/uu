// rea decompile_all
// name: FUN_10077cc54
// address: 0x10077cc54
// body: available
// range: 0x10077cc54-0x10077cf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077cf54 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10077cf58 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10077cc54(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  ID self_00;
  long lVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 != 0) {
    IVar1 = objc_stub::class(param_1);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar1 = objc_stub::isSubclassOfClass_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
      lStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      IVar2 = objc_stub::allKeys(param_1);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_f0,0x10);
      if (IVar3 != 0) {
        lVar6 = *local_120;
        do {
          IVar5 = 0;
          do {
            if (*local_120 != lVar6) {
              _objc_enumerationMutation(IVar2);
            }
            self_00 = *(ID *)(lStack_128 + IVar5 * 8);
            self = objc_stub::objectForKey_(param_1,self_00);
            IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar4 = objc_stub::isKindOfClass_(self_00,IVar4);
            if ((int)IVar4 == 0) {
              self_00 = objc_stub::description(self_00);
            }
            IVar4 = objc_stub::hasPrefix_(self_00,&cf___sentry);
            if ((IVar4 & 1) == 0) {
              IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
              IVar4 = objc_stub::isKindOfClass_(self,IVar4);
              if ((int)IVar4 == 0) {
                IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                IVar4 = objc_stub::isKindOfClass_(self,IVar4);
                if ((int)IVar4 == 0) {
                  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
                  IVar4 = objc_stub::isKindOfClass_(self,IVar4);
                  if ((int)IVar4 == 0) {
                    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
                    IVar4 = objc_stub::isKindOfClass_(self,IVar4);
                    if ((int)IVar4 == 0) {
                      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDate);
                      IVar4 = objc_stub::isKindOfClass_(self,IVar4);
                      if ((int)IVar4 == 0) {
                        self = objc_stub::description(self);
                      }
                      else {
                        FUN_1007868c4();
                      }
                      objc_stub::setValue_forKey_(IVar1,self,self_00);
                      goto LAB_10077cecc;
                    }
                    self = objc_stub::FUN_1007f0c60((ID)&objc::class_t::SentryArray,self);
                  }
                  else {
                    FUN_10077cc54(self);
                  }
                  objc_stub::setValue_forKey_(IVar1,self,self_00);
                  goto LAB_10077cecc;
                }
              }
              objc_stub::setValue_forKey_(IVar1,self,self_00);
            }
LAB_10077cecc:
            IVar5 = IVar5 + 1;
          } while (IVar3 != IVar5);
          IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_130,auStack_f0,0x10);
        } while (IVar3 != 0);
      }
      goto LAB_10077cf14;
    }
  }
  IVar1 = 0;
LAB_10077cf14:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

