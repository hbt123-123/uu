// rea decompile_all
// name: SentryScope::addBreadcrumb:
// address: 0x100792820
// body: available
// range: 0x100792820-0x100792a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100792a84 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::addBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  undefined8 uVar5;
  ID self;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar4 = objc_stub::maxBreadcrumbs(param_1);
  if (IVar4 != 0) {
    IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar4 != 0) {
      IVar4 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m"
                        );
      IVar4 = objc_stub::lastPathComponent(IVar4);
      objc_stub::stringByDeletingPathExtension(IVar4);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Addbreadcrumb___);
      IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,1);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    _objc_sync_enter();
    objc_stub::FUN_1007f3de0(*(ID *)(param_1 + 0x68),param_3,*(undefined8 *)(param_1 + 0x50));
    uVar2 = *(ulong *)(param_1 + 0x48);
    uVar1 = *(long *)(param_1 + 0x50) + 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *(ulong *)(param_1 + 0x50) = uVar1 - uVar3 * uVar2;
    IVar4 = objc_stub::serialize(param_3);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    self = objc_stub::FUN_1007eec60(param_1);
    IVar6 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
    if (IVar6 != 0) {
      lVar7 = *local_120;
      do {
        IVar8 = 0;
        do {
          if (*local_120 != lVar7) {
            _objc_enumerationMutation(self);
          }
          objc_stub::FUN_1007e5180(*(ID *)(lStack_128 + IVar8 * 8),IVar4);
          IVar8 = IVar8 + 1;
        } while (IVar6 != IVar8);
        IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self,&local_130,auStack_e8,0x10);
      } while (IVar6 != 0);
    }
    _objc_sync_exit(uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

