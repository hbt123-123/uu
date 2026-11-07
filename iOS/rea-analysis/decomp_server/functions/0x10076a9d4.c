// rea decompile_all
// name: SentryPredicateDescriptor::expressionDescription:
// address: 0x10076a9d4
// body: available
// range: 0x10076a9d4-0x10076aca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076aca4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryPredicateDescriptor::expressionDescription_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *pcStack_70;
  ID local_68;
  
  IVar1 = objc_stub::FUN_1007e9780(param_3);
  if (IVar1 != 0) {
    if (IVar1 == 0x14) {
      IVar1 = objc_stub::FUN_1007ef3a0(param_3);
      objc_stub::FUN_1007ef3c0(param_1,IVar1);
      IVar1 = objc_stub::FUN_1007f77e0(param_3);
      objc_stub::FUN_1007e9760(param_1,IVar1);
      IVar1 = objc_stub::FUN_1007e98c0(param_3);
      objc_stub::FUN_1007e9760(param_1,IVar1);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_TERNARY__________);
      return IVar1;
    }
    if (IVar1 != 0xe) {
      IVar1 = objc_stub::description(param_3);
      return IVar1;
    }
    IVar1 = objc_stub::FUN_1007e6c80(param_3);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
    IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      local_90 = 0;
      local_80 = 0x3032000000;
      local_78 = FUN_10076acc0;
      pcStack_70 = FUN_10076acd0;
      self = &_OBJC_CLASS___NSMutableArray;
      local_88 = &local_90;
      _objc_alloc();
      IVar1 = objc_stub::FUN_1007e6c80(param_3);
      IVar1 = objc_stub::count(IVar1);
      local_68 = objc_stub::initWithCapacity_((ID)self,IVar1);
      IVar1 = objc_stub::FUN_1007e6c80(param_3);
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0xc2000000;
      local_b0 = FUN_10076acd8;
      puStack_a8 = &DAT_1009e9188;
      local_a0 = param_1;
      puStack_98 = &local_90;
      objc_stub::enumerateObjectsUsingBlock_(IVar1,&local_c0);
      objc_stub::componentsJoinedByString_(local_88[5],&cf__);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
      __Block_object_dispose(&local_90,8);
      return IVar1;
    }
  }
  return (ID)&cf___;
}

