// rea decompile_all
// name: SentryClientReport::serialize
// address: 0x100738dac
// body: available
// range: 0x100738dac-0x100738f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100738f94 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100738f98 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryClientReport::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  ID IStack_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = discardedEvents(param_1);
  IVar1 = objc_stub::count(IVar1);
  IVar1 = objc_stub::initWithCapacity_((ID)self,IVar1);
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  IVar2 = discardedEvents(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_140,auStack_d8,0x10);
  if (IVar3 != 0) {
    lVar5 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = objc_stub::serialize(*(ID *)(lStack_138 + IVar6 * 8));
        objc_stub::addObject_(IVar1,IVar4);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_140,auStack_d8,0x10);
    } while (IVar3 != 0);
  }
  local_f8 = &cf_timestamp;
  IVar2 = timestamp(param_1);
  objc_stub::timeIntervalSince1970(IVar2);
  IStack_e8 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  local_f0 = &cf_discarded_events;
  local_e0 = IVar1;
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&IStack_e8,&local_f8,2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

