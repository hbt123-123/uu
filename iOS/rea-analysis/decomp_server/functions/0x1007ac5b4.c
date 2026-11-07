// rea decompile_all
// name: SentryFileManager::handleEnvelopesLimit
// address: 0x1007ac5b4
// body: available
// range: 0x1007ac5b4-0x1007aca27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007aca24 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManager::handleEnvelopesLimit(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *self;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID self_00;
  ID IVar9;
  long lVar10;
  long lVar11;
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
  IVar1 = objc_stub::FUN_1007e92e0(param_1);
  IVar1 = objc_stub::FUN_1007e52c0(param_1,IVar1);
  IVar2 = objc_stub::count(IVar1);
  IVar3 = objc_stub::FUN_1007ee180(param_1);
  if (0 < (long)(IVar2 - IVar3)) {
    lVar10 = 0;
    do {
      IVar4 = objc_stub::FUN_1007e92e0(param_1);
      IVar5 = objc_stub::objectAtIndexedSubscript_(IVar1,lVar10);
      IVar4 = objc_stub::stringByAppendingPathComponent_(IVar4,IVar5);
      self = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar5 = objc_stub::copy(IVar1);
      IVar5 = objc_stub::FUN_1007eb460((ID)self,IVar5);
      objc_stub::removeObjectAtIndex_(IVar5,lVar10);
      IVar6 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      IVar6 = objc_stub::FUN_1007e70c0(IVar6,IVar4);
      IVar6 = objc_stub::FUN_1007e92c0((ID)&objc::class_t::SentrySerialization,IVar6);
      IVar7 = objc_stub::FUN_1007e92e0(param_1);
      IVar5 = objc_stub::FUN_1007ee4c0
                        ((ID)&objc::class_t::SentryMigrateSessionInit,IVar6,IVar7,IVar5);
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      IVar6 = objc_stub::items(IVar6);
      IVar7 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar6,&local_130,auStack_f0,0x10);
      if (IVar7 != 0) {
        lVar11 = *local_120;
        do {
          IVar9 = 0;
          do {
            if (*local_120 != lVar11) {
              _objc_enumerationMutation(IVar6);
            }
            self_00 = *(ID *)(lStack_128 + IVar9 * 8);
            IVar8 = objc_stub::header(self_00);
            IVar8 = objc_stub::type(IVar8);
            FUN_1007494b0();
            if (((uint)IVar5 & (uint)(IVar8 == 3)) == 0) {
              objc_stub::FUN_1007e9260(*(ID *)(param_1 + 0xa0),self_00,IVar8);
            }
            IVar9 = IVar9 + 1;
          } while (IVar7 != IVar9);
          IVar7 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar6,&local_130,auStack_f0,0x10);
        } while (IVar7 != 0);
      }
      objc_stub::FUN_1007f0340(param_1,IVar4);
      lVar10 = lVar10 + 1;
    } while (lVar10 != IVar2 - IVar3);
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((IVar1 & 1) != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::FUN_1007e92e0(param_1);
      objc_stub::lastPathComponent(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Removed_ldfile_s_from<__>);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

