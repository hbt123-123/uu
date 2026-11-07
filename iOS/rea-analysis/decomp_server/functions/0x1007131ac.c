// rea decompile_all
// name: SASuperPropertyPlugin::unregisterSameLetterSuperProperties:
// address: 0x1007131ac
// body: available
// range: 0x1007131ac-0x10071341b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100713418 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SASuperPropertyPlugin::unregisterSameLetterSuperProperties_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined *local_170;
  undefined8 local_168;
  code *local_160;
  undefined *puStack_158;
  undefined8 local_150;
  ID local_148;
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
  IVar2 = objc_stub::allKeys(param_3);
  IVar2 = objc_stub::copy(IVar2);
  IVar3 = superProperties(param_1);
  IVar3 = objc_stub::allKeys(IVar3);
  IVar3 = objc_stub::copy(IVar3);
  self = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_140,auStack_100,0x10);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  if (IVar4 != 0) {
    lVar5 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        local_150 = *(undefined8 *)(lStack_138 + IVar6 * 8);
        local_170 = puVar1;
        local_168 = 0xc2000000;
        local_160 = FUN_10071341c;
        puStack_158 = &DAT_1009e7b48;
        local_148 = self;
        objc_stub::enumerateObjectsUsingBlock_(IVar3,&local_170);
        IVar6 = IVar6 + 1;
      } while (IVar4 != IVar6);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_140,auStack_100,0x10);
    } while (IVar4 != 0);
  }
  IVar2 = NSMutableArray::count(self);
  if (IVar2 != 0) {
    IVar2 = properties(param_1);
    IVar2 = NSMutableDictionary::dictionaryWithDictionary_
                      ((ID)&_OBJC_CLASS___NSMutableDictionary,IVar2);
    NSMutableDictionary::removeObjectsForKeys_(IVar2,self);
    IVar2 = NSDictionary::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSDictionary,IVar2);
    setSuperProperties_(param_1,IVar2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

