// rea decompile_all
// name: SentryStacktrace::serialize
// address: 0x100789638
// body: available
// range: 0x100789638-0x100789887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100789880 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100789884 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryStacktrace::serialize(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
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
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::frames(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_f0,0x10);
  if (IVar3 != 0) {
    lVar6 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar2);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar4 = objc_stub::serialize(self_00);
        IVar4 = objc_stub::allKeys(IVar4);
        IVar4 = objc_stub::count(IVar4);
        if (IVar4 != 0) {
          IVar4 = objc_stub::serialize(self_00);
          objc_stub::addObject_(IVar1,IVar4);
        }
        IVar5 = IVar5 + 1;
      } while (IVar3 != IVar5);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(self,IVar1,&cf_frames);
  }
  IVar1 = objc_stub::FUN_1007f01e0(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f01e0(param_1);
    objc_stub::setValue_forKey_(self,IVar1,&cf_registers);
  }
  IVar1 = objc_stub::FUN_1007f5a60(param_1);
  objc_stub::FUN_1007f1de0((ID)&objc::class_t::SentryDictionary,IVar1,&cf_snapshot,self);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

