// rea decompile_all
// name: SentryThreadInspector::getCurrentThreads
// address: 0x10074b650
// body: available
// range: 0x10074b650-0x10074b91f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074b918 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10074b91c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryThreadInspector::getCurrentThreads(ID param_1,SEL param_2)

{
  uint uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self_00;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  undefined1 auStack_540 [1232];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  IVar2 = self;
  FUN_1007871b4();
  IVar3 = objc_stub::FUN_1007edfa0(param_1);
  objc_stub::FUN_1007e9b00(IVar3,auStack_540);
  IVar3 = objc_stub::FUN_1007edfa0(param_1);
  IVar3 = objc_stub::FUN_1007ea9a0(IVar3,auStack_540);
  if (0 < (int)(uint)IVar3) {
    uVar7 = 0;
    do {
      IVar4 = objc_stub::FUN_1007edfa0(param_1);
      IVar4 = objc_stub::FUN_1007ea980(IVar4,auStack_540,uVar7);
      self_00 = &objc::class_t::SentryThread;
      _objc_alloc();
      IVar5 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uVar7);
      IVar5 = objc_stub::initWithThreadId_((ID)self_00,IVar5);
      IVar6 = objc_stub::FUN_1007edfa0(param_1);
      IVar6 = objc_stub::FUN_1007ed200(IVar6,IVar4);
      IVar6 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar6);
      objc_stub::FUN_1007f36e0(IVar5,IVar6);
      IVar6 = objc_stub::FUN_1007ea9e0(param_1,IVar4);
      objc_stub::setName_(IVar5,IVar6);
      IVar6 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
      objc_stub::setCrashed_(IVar5,IVar6);
      IVar6 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)(IVar4 == IVar2));
      objc_stub::FUN_1007f2220(IVar5,IVar6);
      if (IVar4 == IVar2) {
        IVar6 = objc_stub::FUN_1007f5d80(param_1);
        IVar6 = objc_stub::FUN_1007e60e0(IVar6);
        objc_stub::setStacktrace_(IVar5,IVar6);
      }
      IVar6 = objc_stub::FUN_1007edfa0(param_1);
      IVar4 = objc_stub::FUN_1007ed200(IVar6,IVar4);
      if ((int)IVar4 == 0) {
        objc_stub::addObject_(self,IVar5);
      }
      else {
        objc_stub::insertObject_atIndex_(self,IVar5,0);
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while ((uint)IVar3 != uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

