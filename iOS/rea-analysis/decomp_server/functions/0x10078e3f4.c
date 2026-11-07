// rea decompile_all
// name: SentryCrash::getAttachmentPaths:
// address: 0x10078e3f4
// body: available
// range: 0x10078e3f4-0x10078e5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078e5d0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10078e5d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrash::getAttachmentPaths_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  undefined *local_270;
  undefined8 local_268;
  code *local_260;
  undefined *puStack_258;
  ID local_250;
  ID local_248;
  byte local_23d;
  undefined1 auStack_23c [500];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_10074c2e4(param_3,auStack_23c);
  IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,auStack_23c);
  local_23d = 0;
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::FUN_1007e9960(IVar2,IVar1,&local_23d);
  if ((int)IVar2 == 0 || (local_23d & 1) == 0) {
    IVar3 = *(ID *)PTR____NSArray0___1009953a8;
  }
  else {
    IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    IVar2 = objc_stub::FUN_1007e70e0(IVar2,IVar1,0);
    if (IVar2 == 0) {
      IVar3 = *(ID *)PTR____NSArray0___1009953a8;
    }
    else {
      self = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar3 = objc_stub::count(IVar2);
      IVar3 = objc_stub::initWithCapacity_((ID)self,IVar3);
      local_270 = PTR___NSConcreteStackBlock_100995490;
      local_268 = 0xc2000000;
      local_260 = FUN_10078e5d8;
      puStack_258 = &DAT_1009e9860;
      local_250 = IVar3;
      local_248 = IVar1;
      objc_stub::enumerateObjectsUsingBlock_(IVar2,&local_270);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

