// rea decompile_all
// name: SentryCrashDoctor::lastFunctionCall:
// address: 0x10075ba4c
// body: available
// range: 0x10075ba4c-0x10075bf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075bf5c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10075bf60 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::lastFunctionCall_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID self;
  ID IVar2;
  ID self_00;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self_01;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined8 uVar10;
  long lVar11;
  ID IVar12;
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
  pcVar1 = &objc::class_t::SentryCrashDoctorFunctionCall;
  _objc_alloc();
  self = objc_stub::init((ID)pcVar1);
  IVar2 = objc_stub::FUN_1007ed980(param_1,param_3);
  IVar2 = objc_stub::objectForKey_(IVar2,&cf_symbol_name);
  objc_stub::setName_(self,IVar2);
  IVar2 = objc_stub::FUN_1007e7600(param_1,param_3);
  self_00 = objc_stub::objectForKey_(IVar2,&cf_notable_addresses);
  IVar3 = objc_stub::FUN_1007e7420(param_1,param_3);
  IVar2 = objc_stub::FUN_1007e5cc0(param_1,IVar2);
  IVar4 = objc_stub::FUN_1007f0100(param_1,IVar3,0);
  objc_stub::FUN_1007f0100(param_1,IVar3,1);
  objc_stub::FUN_1007f0100(param_1,IVar3,2);
  objc_stub::FUN_1007f0100(param_1,IVar3,3);
  IVar3 = objc_stub::FUN_1007e5980((ID)&_OBJC_CLASS___NSArray,IVar4);
  IVar4 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,4);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_130,auStack_f0,0x10);
  if (IVar5 != 0) {
    lVar11 = *local_120;
    do {
      IVar12 = 0;
      do {
        if (*local_120 != lVar11) {
          _objc_enumerationMutation(IVar3);
        }
        uVar10 = *(undefined8 *)(lStack_128 + IVar12 * 8);
        pcVar1 = &objc::class_t::SentryCrashDoctorParam;
        _objc_alloc();
        self_01 = objc_stub::init((ID)pcVar1);
        IVar6 = objc_stub::objectForKey_(IVar2,uVar10);
        IVar6 = objc_stub::unsignedLongLongValue(IVar6);
        objc_stub::FUN_1007f1a80(self_01,IVar6);
        IVar6 = objc_stub::objectForKey_(self_00,uVar10);
        if (IVar6 == 0) {
          objc_stub::address(self_01);
          IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__p);
          objc_stub::FUN_1007f55e0(self_01,IVar6);
        }
        else {
          IVar7 = objc_stub::objectForKey_(IVar6,&cf_type);
          objc_stub::setType_(self_01,IVar7);
          IVar7 = objc_stub::objectForKey_(IVar6,&cf_class);
          IVar8 = objc_stub::objectForKey_(IVar6,&cf_last_deallocated_obj);
          IVar6 = objc_stub::objectForKey_(IVar6,&cf_value);
          IVar9 = objc_stub::type(self_01);
          IVar9 = objc_stub::isEqualToString_(IVar9,&cf_string);
          if ((int)IVar9 == 0) {
            IVar6 = objc_stub::type(self_01);
            IVar6 = objc_stub::isEqualToString_(IVar6,&cf_objc_object);
            if ((int)IVar6 == 0) {
              IVar6 = objc_stub::type(self_01);
              IVar6 = objc_stub::isEqualToString_(IVar6,&cf_objc_class);
              if ((int)IVar6 == 0) goto LAB_10075be64;
              objc_stub::FUN_1007f1f60(self_01,IVar7);
              uVar10 = 0;
            }
            else {
              objc_stub::FUN_1007f1f60(self_01,IVar7);
              uVar10 = 1;
            }
            objc_stub::FUN_1007f36a0(self_01,uVar10);
          }
          else {
            objc_stub::FUN_1007f55e0(self_01,IVar6);
          }
LAB_10075be64:
          objc_stub::FUN_1007f4200(self_01,IVar8);
        }
        objc_stub::addObject_(IVar4,self_01);
        IVar12 = IVar12 + 1;
      } while (IVar5 != IVar12);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_130,auStack_f0,0x10);
    } while (IVar5 != 0);
  }
  objc_stub::FUN_1007f3fe0(self,IVar4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

