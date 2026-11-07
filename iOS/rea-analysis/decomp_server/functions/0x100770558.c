// rea decompile_all
// name: SentryTracer::toTransaction
// address: 0x100770558
// body: available
// range: 0x100770558-0x100770983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077097c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100770980 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::toTransaction(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *self;
  undefined8 uVar2;
  class_t *self_00;
  ID self_01;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID self_02;
  ID IVar7;
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
  lVar6 = (long)_children;
  IVar1 = objc_stub::count(*(ID *)(param_1 + lVar6));
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::initWithCapacity_((ID)self,IVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  _objc_sync_enter();
  objc_stub::addObjectsFromArray_(IVar1,*(undefined8 *)(param_1 + lVar6));
  _objc_sync_exit(uVar2);
  self_00 = &objc::class_t::SentryTransaction;
  _objc_alloc();
  self_01 = objc_stub::FUN_1007ec3c0((ID)self_00,param_1,IVar1);
  IVar3 = objc_stub::FUN_1007f7700(param_1);
  IVar3 = objc_stub::name(IVar3);
  objc_stub::FUN_1007f5300(self_01,IVar3);
  IVar3 = objc_stub::FUN_1007ed300(param_1);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::FUN_1007f5f40(param_1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Tracerstarttime__llu);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    }
    IVar3 = objc_stub::FUN_1007f5f40(param_1);
    objc_stub::FUN_1007f4d20(self_01,IVar3);
    objc_stub::FUN_1007eff80((ID)&objc::class_t::SentryTraceProfiler);
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar3 = objc_stub::dateProvider(IVar3);
    IVar3 = objc_stub::systemTime(IVar3);
    objc_stub::FUN_1007f2b60(self_01,IVar3);
  }
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::frames(param_1);
  if (IVar4 != 0) {
    IVar4 = objc_stub::frames(param_1);
    objc_stub::addObjectsFromArray_(IVar3,IVar4);
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar4 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar1);
        }
        self_02 = *(ID *)(lStack_128 + IVar7 * 8);
        IVar5 = objc_stub::frames(self_02);
        if (IVar5 != 0) {
          IVar5 = objc_stub::frames(self_02);
          objc_stub::addObjectsFromArray_(IVar3,IVar5);
        }
        IVar7 = IVar7 + 1;
      } while (IVar4 != IVar7);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
  IVar1 = objc_stub::count(IVar3);
  if (IVar1 != 0) {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::debugImageProvider(IVar1);
    IVar1 = objc_stub::FUN_1007ea520(IVar1,IVar3);
    objc_stub::setDebugMeta_(self_01,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self_01;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

