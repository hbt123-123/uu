// rea decompile_all
// name: SATrackTimer::handleAllEventsPause:time:
// address: 0x10070eafc
// body: available
// range: 0x10070eafc-0x10070edef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070edec to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SATrackTimer::handleAllEventsPause_time_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined *self_00;
  ID IVar3;
  ID self_01;
  ID IVar4;
  long lVar5;
  ID IVar6;
  ID self_02;
  float fVar7;
  float extraout_s0;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  self = objc_stub::allKeys(param_3);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_140,auStack_100,0x10);
  if (IVar1 != 0) {
    lVar5 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar5) {
          _objc_enumerationMutation(self);
        }
        self_02 = *(ID *)(lStack_138 + IVar6 * 8);
        if ((self_02 == 0) ||
           (IVar2 = objc_stub::isEqualToString_(self_02,&cf__AppEnd), (IVar2 & 1) == 0)) {
          self_00 = &_OBJC_CLASS___NSMutableDictionary;
          _objc_alloc();
          IVar2 = objc_stub::objectForKeyedSubscript_(param_3,self_02);
          IVar2 = objc_stub::initWithDictionary_((ID)self_00,IVar2);
          if (IVar2 != 0) {
            IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_isPause);
            IVar3 = objc_stub::boolValue(IVar3);
            if ((IVar3 & 1) == 0) {
              IVar3 = objc_stub::valueForKey_(IVar2,&cf_eventBegin);
              IVar3 = objc_stub::longValue(IVar3);
              self_01 = objc_stub::objectForKey_(IVar2,&cf_eventAccumulatedDuration);
              IVar4 = objc_stub::valueForKey_(IVar2,&cf_timeUnit);
              IVar4 = objc_stub::intValue(IVar4);
              fVar7 = eventTimerDurationWithCurrentTime_eventStart_timeUnit_
                                (param_1,param_4,IVar3,(long)(int)IVar4);
              if (self_01 != 0) {
                objc_stub::floatValue(self_01);
                fVar7 = fVar7 + extraout_s0;
              }
              IVar3 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,(ulong)(uint)fVar7);
              objc_stub::setObject_forKey_(IVar2,IVar3,&cf_eventAccumulatedDuration);
              IVar3 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,param_4);
              objc_stub::setObject_forKey_(IVar2,IVar3,&cf_eventBegin);
              objc_stub::setObject_forKeyedSubscript_(param_3,IVar2,self_02);
            }
          }
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self,&local_140,auStack_100,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

