// rea decompile_all
// name: FUN_100709bb8
// address: 0x100709bb8
// body: available
// range: 0x100709bb8-0x100709fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100709bb8(ID param_1,undefined8 param_2,ID param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self;
  ID IVar5;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  long local_70;
  undefined8 uStack_68;
  
  bVar1 = false;
  if ((param_3 != 0) && (param_4 != 0)) {
    IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__p);
    IVar3 = objc_stub::sensorsdata_KVO_observerInfos(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,IVar2);
    if (IVar3 == 0) {
      IVar3 = NSArray::array((ID)&_OBJC_CLASS___NSArray);
    }
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0xc2000000;
    local_80 = FUN_100709fa8;
    puStack_78 = &DAT_1009e78d8;
    local_70 = param_4;
    uStack_68 = param_5;
    IVar4 = NSPredicate::predicateWithBlock_((ID)&_OBJC_CLASS___NSPredicate,&local_90);
    IVar4 = NSArray::filteredArrayUsingPredicate_(IVar3,IVar4);
    IVar4 = NSArray::count(IVar4);
    bVar1 = IVar4 == 0;
    if (IVar4 == 0) {
      self = &objc::class_t::SAKVOObject;
      _objc_alloc();
      IVar4 = objc_stub::initWithKeyPath_context_((ID)self,param_4,param_5);
      IVar3 = NSMutableArray::arrayWithArray_((ID)&_OBJC_CLASS___NSMutableArray,IVar3);
      NSMutableArray::addObject_(IVar3,IVar4);
      IVar3 = NSMutableArray::copy(IVar3);
      IVar5 = objc_stub::sensorsdata_KVO_observerInfos(param_1);
      objc_stub::setObject_forKeyedSubscript_(IVar5,IVar3,IVar2);
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__p);
      IVar3 = objc_stub::sensorsdata_KVO_targetInfos(param_3);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,IVar2);
      IVar5 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
      if (IVar3 != 0) {
        NSMutableArray::addObjectsFromArray_(IVar5,IVar3);
      }
      NSMutableArray::addObject_(IVar5,IVar4);
      IVar3 = NSMutableArray::copy(IVar5);
      IVar4 = objc_stub::sensorsdata_KVO_targetInfos(param_3);
      objc_stub::setObject_forKeyedSubscript_(IVar4,IVar3,IVar2);
      IVar2 = objc_stub::sensorsdata_KVO_observers(param_1);
      if (IVar2 == 0) {
        IVar2 = NSHashTable::weakObjectsHashTable((ID)&_OBJC_CLASS___NSHashTable);
        objc_stub::setSensorsdata_KVO_observers_(param_1,IVar2);
      }
      IVar2 = objc_stub::sensorsdata_KVO_targets(param_3);
      if (IVar2 == 0) {
        IVar2 = NSHashTable::weakObjectsHashTable((ID)&_OBJC_CLASS___NSHashTable);
        objc_stub::setSensorsdata_KVO_targets_(param_3,IVar2);
      }
      IVar2 = objc_stub::sensorsdata_KVO_observers(param_1);
      objc_stub::addObject_(IVar2,param_3);
      IVar2 = objc_stub::sensorsdata_KVO_targets(param_3);
      objc_stub::addObject_(IVar2,param_1);
    }
  }
  return bVar1;
}

