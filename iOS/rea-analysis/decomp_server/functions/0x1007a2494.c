// rea decompile_all
// name: FUN_1007a2494
// address: 0x1007a2494
// body: available
// range: 0x1007a2494-0x1007a2aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a2aa4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007a2494(long param_1,ID param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  class_t *self;
  ID IVar7;
  ID IVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  char acStack_7b [19];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  iVar2 = _snprintf((char *)0x0,0,"%llu");
  pcVar3 = _malloc((long)(iVar2 + 1));
  _snprintf(pcVar3,(long)(iVar2 + 1),"%llu");
  IVar4 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar3,1);
  _free(pcVar3);
  IVar5 = objc_stub::threadMetadata(param_2);
  IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,IVar4);
  if (IVar5 == 0) {
    IVar5 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar6 = objc_stub::threadMetadata(param_2);
    objc_stub::setObject_forKeyedSubscript_(IVar6,IVar5,IVar4);
  }
  IVar4 = NSMutableDictionary::objectForKeyedSubscript_(IVar5,&cf_name);
  if (IVar4 != 0) goto LAB_1007a2638;
  puVar10 = *(ulong **)(param_1 + 0x28);
  puVar9 = puVar10 + 1;
  if (*(char *)((long)puVar10 + 0x1f) < '\0') {
    if (puVar10[2] != 0) {
      puVar9 = (ulong *)*puVar9;
      goto LAB_1007a2608;
    }
  }
  else if (*(char *)((long)puVar10 + 0x1f) != '\0') {
LAB_1007a2608:
    IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,puVar9);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,IVar4,&cf_name);
    goto LAB_1007a2638;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x50);
  if ((uVar1 != 0) && (*puVar10 == (ulong)uVar1)) {
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,&cf_main,&cf_name);
  }
LAB_1007a2638:
  if ((*(int *)(*(long *)(param_1 + 0x28) + 0x20) != -1) &&
     (IVar4 = NSMutableDictionary::objectForKeyedSubscript_(IVar5,&cf_priority), IVar4 == 0)) {
    IVar4 = NSNumber::numberWithInt_
                      ((ID)&_OBJC_CLASS___NSNumber,
                       (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x20));
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,IVar4,&cf_priority);
  }
  IVar4 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x38) != *(long *)(*(long *)(param_1 + 0x28) + 0x30)) {
    uVar11 = 0;
    do {
      _snprintf(acStack_7b,0x13,"0x%016llx");
      IVar5 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_7b,1);
      IVar6 = objc_stub::frameIndexLookup(param_2);
      IVar6 = objc_stub::objectForKeyedSubscript_(IVar6,IVar5);
      if (IVar6 == 0) {
        IVar6 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
        NSMutableDictionary::setObject_forKeyedSubscript_(IVar6,IVar5,&cf_instruction_addr);
        IVar7 = objc_stub::frames(param_2);
        IVar7 = objc_stub::count(IVar7);
        IVar7 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar7);
        NSMutableArray::addObject_(IVar4,IVar7);
        IVar8 = objc_stub::frameIndexLookup(param_2);
        objc_stub::setObject_forKeyedSubscript_(IVar8,IVar7,IVar5);
        IVar5 = objc_stub::frames(param_2);
        objc_stub::addObject_(IVar5,IVar6);
      }
      else {
        NSMutableArray::addObject_(IVar4,IVar6);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) -
                              *(long *)(*(long *)(param_1 + 0x28) + 0x30) >> 3));
  }
  self = &objc::class_t::SentrySample;
  _objc_alloc();
  IVar5 = objc_stub::init((ID)self);
  objc_stub::setAbsoluteTimestamp_(IVar5,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
  IVar6 = SentryDependencyContainer::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar6 = SentryDependencyContainer::dateProvider(IVar6);
  IVar6 = objc_stub::date(IVar6);
  objc_stub::timeIntervalSince1970(IVar6);
  objc_stub::setAbsoluteNSDateInterval_(IVar5);
  objc_stub::setThreadID_(IVar5,**(undefined8 **)(param_1 + 0x28));
  IVar6 = NSMutableArray::componentsJoinedByString_(IVar4,&cf__);
  IVar7 = objc_stub::stackIndexLookup(param_2);
  IVar7 = objc_stub::objectForKeyedSubscript_(IVar7,IVar6);
  if (IVar7 == 0) {
    IVar7 = objc_stub::stacks(param_2);
    IVar7 = objc_stub::count(IVar7);
    IVar7 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar7);
    objc_stub::setStackIndex_(IVar5,IVar7);
    IVar8 = objc_stub::stackIndexLookup(param_2);
    objc_stub::setObject_forKeyedSubscript_(IVar8,IVar7,IVar6);
    IVar6 = objc_stub::stacks(param_2);
    objc_stub::addObject_(IVar6,IVar4);
  }
  else {
    objc_stub::setStackIndex_(IVar5,IVar7);
  }
  IVar4 = objc_stub::samples(param_2);
  objc_stub::addObject_(IVar4,IVar5);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

