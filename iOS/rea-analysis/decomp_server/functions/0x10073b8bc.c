// rea decompile_all
// name: SentryNetworkTrackingIntegration::swizzleURLSessionTask
// address: 0x10073b8bc
// body: available
// range: 0x10073b8bc-0x10073ba9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073ba98 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryNetworkTrackingIntegration::swizzleURLSessionTask(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID self;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  const_void__ in_x7;
  ID self_00;
  long lVar6;
  ID IVar7;
  undefined *local_190;
  undefined8 local_188;
  code *local_180;
  undefined *puStack_178;
  cfstringStruct *local_170;
  undefined *local_168;
  undefined8 local_160;
  code *local_158;
  undefined *puStack_150;
  cfstringStruct *local_148;
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
  self = SentryNSURLSessionTaskSearch::urlSessionTaskClassesToTrack
                   ((ID)&objc::class_t::SentryNSURLSessionTaskSearch);
  pcVar2 = &cf_setState_;
  _NSSelectorFromString();
  pcVar3 = &cf_resume;
  _NSSelectorFromString();
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_140,auStack_100,0x10);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  if (IVar4 != 0) {
    lVar6 = *local_130;
    do {
      IVar7 = 0;
      do {
        if (*local_130 != lVar6) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_138 + IVar7 * 8);
        IVar5 = objc_stub::class(self_00);
        local_168 = puVar1;
        local_160 = 0xc0000000;
        local_158 = FUN_10073ba9c;
        puStack_150 = &DAT_1009e87a0;
        local_148 = pcVar3;
        SentrySwizzle::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
                  ((ID)&objc::class_t::SentrySwizzle,(SEL)pcVar3,IVar5,(ID)&local_168,2,
                   (unsigned_long_long)pcVar3,in_x7);
        IVar5 = objc_stub::class(self_00);
        local_190 = puVar1;
        local_188 = 0xc0000000;
        local_180 = FUN_10073bb88;
        puStack_178 = &DAT_1009e87a0;
        local_170 = pcVar2;
        SentrySwizzle::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
                  ((ID)&objc::class_t::SentrySwizzle,(SEL)pcVar2,IVar5,(ID)&local_190,2,
                   (unsigned_long_long)pcVar2,in_x7);
        IVar7 = IVar7 + 1;
      } while (IVar4 != IVar7);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self,&local_140,auStack_100,0x10);
    } while (IVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

