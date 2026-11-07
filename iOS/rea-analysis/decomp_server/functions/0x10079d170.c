// rea decompile_all
// name: SentryUser::initWithDictionary:
// address: 0x10079d170
// body: available
// range: 0x10079d170-0x10079d473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079d470 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryUser::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID self_00;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self_01;
  ID IVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  objc_super local_100;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_100.super_class = &objc::class_t::SentryUser;
  local_100.receiver = param_1;
  self = _objc_msgSendSuper2(&local_100,"init");
  if (self != 0) {
    IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_140,auStack_f0,0x10);
    if (IVar2 != 0) {
      lVar7 = *local_130;
      do {
        IVar6 = 0;
        do {
          if (*local_130 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          self_01 = *(ID *)(lStack_138 + IVar6 * 8);
          self_00 = objc_stub::valueForKey_(param_3,self_01);
          if (self_00 != 0) {
            IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar3 = objc_stub::isKindOfClass_(self_00,IVar3);
            IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
            IVar4 = objc_stub::isKindOfClass_(self_00,IVar4);
            IVar5 = objc_stub::isEqualToString_(self_01,&cf_id);
            uVar8 = (uint)IVar3;
            if ((int)IVar5 == 0 || uVar8 == 0) {
              IVar3 = objc_stub::isEqualToString_(self_01,&cf_email);
              if (((uint)IVar3 & uVar8) == 1) {
                objc_stub::FUN_1007f27c0(self,self_00);
              }
              else {
                IVar3 = objc_stub::isEqualToString_(self_01,&cf_username);
                if (((uint)IVar3 & uVar8) == 1) {
                  objc_stub::FUN_1007f55a0(self,self_00);
                }
                else {
                  IVar3 = objc_stub::isEqualToString_(self_01,&cf_ip_address);
                  if (((uint)IVar3 & uVar8) == 1) {
                    objc_stub::setIpAddress_(self,self_00);
                  }
                  else {
                    IVar3 = objc_stub::isEqualToString_(self_01,&cf_segment);
                    if (((uint)IVar3 & uVar8) == 1) {
                      objc_stub::FUN_1007f4840(self,self_00);
                    }
                    else {
                      IVar3 = objc_stub::isEqualToString_(self_01,&cf_data);
                      if (((uint)IVar3 & (uint)IVar4) == 1) {
                        objc_stub::setData_(self,self_00);
                      }
                      else {
                        objc_stub::setObject_forKeyedSubscript_(IVar1,self_00,self_01);
                      }
                    }
                  }
                }
              }
            }
            else {
              objc_stub::setUserId_(self,self_00);
            }
          }
          IVar6 = IVar6 + 1;
        } while (IVar2 != IVar6);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_140,auStack_f0,0x10);
      } while (IVar2 != 0);
    }
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 != 0) {
      IVar1 = objc_stub::copy(IVar1);
      objc_stub::FUN_1007f5420(self,IVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

