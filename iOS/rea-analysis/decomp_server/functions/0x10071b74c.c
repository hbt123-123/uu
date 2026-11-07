// rea decompile_all
// name: FUN_10071b74c
// address: 0x10071b74c
// body: available
// range: 0x10071b74c-0x10071b9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071b9f4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10071b9f8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10071b74c(ID param_1)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  undefined *puVar4;
  ID self_01;
  long lVar5;
  ID IVar6;
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
  IVar1 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  self = objc_stub::allKeys(param_1);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self);
        }
        self_01 = *(ID *)(lStack_128 + IVar6 * 8);
        IVar3 = objc_stub::conformsToProtocol_(self_01,&objc::protocol_t::SAPropertyKeyProtocol);
        if ((int)IVar3 != 0) {
          self_00 = objc_stub::objectForKey_(param_1,self_01);
          puVar4 = &_OBJC_CLASS___NSString;
          _objc_opt_class(&_OBJC_CLASS___NSString);
          IVar3 = self_00;
          _objc_opt_isKindOfClass(self_00,puVar4);
          if ((IVar3 & 1) == 0) {
            puVar4 = &_OBJC_CLASS___NSNumber;
            _objc_opt_class(&_OBJC_CLASS___NSNumber);
            IVar3 = self_00;
            _objc_opt_isKindOfClass(self_00,puVar4);
            if ((IVar3 & 1) != 0) goto LAB_10071b87c;
            puVar4 = &_OBJC_CLASS___NSDate;
            _objc_opt_class(&_OBJC_CLASS___NSDate);
            IVar3 = self_00;
            _objc_opt_isKindOfClass(self_00,puVar4);
            if ((IVar3 & 1) != 0) goto LAB_10071b87c;
            puVar4 = &_OBJC_CLASS___NSArray;
            _objc_opt_class(&_OBJC_CLASS___NSArray);
            IVar3 = self_00;
            _objc_opt_isKindOfClass(self_00,puVar4);
            if ((IVar3 & 1) == 0) {
              puVar4 = &_OBJC_CLASS___NSDictionary;
              _objc_opt_class(&_OBJC_CLASS___NSDictionary);
              IVar3 = self_00;
              _objc_opt_isKindOfClass(self_00,puVar4);
              if ((IVar3 & 1) == 0) {
                puVar4 = &_OBJC_CLASS___NSSet;
                _objc_opt_class(&_OBJC_CLASS___NSSet);
                IVar3 = self_00;
                _objc_opt_isKindOfClass(self_00,puVar4);
                if ((IVar3 & 1) == 0) {
                  NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,self_00,self_01);
                }
                else {
                  IVar3 = objc_stub::allObjects(self_00);
                  IVar3 = objc_stub::sensorsdata_copyArrayOrDictionary_(param_1,IVar3);
                  NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,IVar3,self_01);
                }
                goto LAB_10071b8a8;
              }
            }
            IVar3 = objc_stub::sensorsdata_copyArrayOrDictionary_(param_1,self_00);
          }
          else {
LAB_10071b87c:
            IVar3 = objc_stub::copy(self_00);
          }
          NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,IVar3,self_01);
        }
LAB_10071b8a8:
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar2 != 0);
  }
  IVar1 = NSMutableDictionary::copy(IVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

