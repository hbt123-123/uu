// rea decompile_all
// name: FUN_10075818c
// address: 0x10075818c
// body: available
// range: 0x10075818c-0x100758487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100758484 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10075818c(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ulong uVar6;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    if ((param_3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,param_2,0,param_4);
      }
    }
    else if (param_2 == 0) {
      lVar4 = *(long *)(param_1 + 0x48);
      IVar1 = objc_stub::class(*(ID *)(param_1 + 0x20));
      IVar1 = objc_stub::description(IVar1);
      FUN_10079f85c(IVar1,0,&cf_filteredReportswasnil);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,0,0,IVar1);
      }
    }
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
  }
  else {
    objc_stub::addObject_(*(ID *)(param_1 + 0x28),param_2);
    lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar6 = *(long *)(lVar4 + 0x18) + 1;
    *(ulong *)(lVar4 + 0x18) = uVar6;
    if (uVar6 < *(ulong *)(param_1 + 0x68)) {
      IVar1 = objc_stub::objectAtIndex_
                        (*(ID *)(param_1 + 0x30),
                         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18));
      objc_stub::filterReports_onCompletion_
                (IVar1,*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28));
    }
    else {
      IVar1 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x28),0);
      IVar1 = objc_stub::count(IVar1);
      self = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
      if (IVar1 != 0) {
        IVar5 = 0;
        do {
          self_00 = NSMutableDictionary::dictionaryWithCapacity_
                              ((ID)&_OBJC_CLASS___NSMutableDictionary,
                               *(undefined8 *)(param_1 + 0x68));
          if (*(long *)(param_1 + 0x68) != 0) {
            uVar6 = 0;
            do {
              IVar2 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x28),uVar6);
              IVar3 = objc_stub::count(IVar2);
              if (IVar5 < IVar3) {
                IVar2 = objc_stub::objectAtIndex_(IVar2,IVar5);
                IVar3 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x40),uVar6);
                NSMutableDictionary::setObject_forKey_(self_00,IVar2,IVar3);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(ulong *)(param_1 + 0x68));
          }
          NSMutableArray::addObject_(self,self_00);
          IVar5 = IVar5 + 1;
        } while (IVar5 != IVar1);
      }
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,self,param_3,param_4);
      }
      (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
    }
  }
  return 0;
}

