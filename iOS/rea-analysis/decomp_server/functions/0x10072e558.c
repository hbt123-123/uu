// rea decompile_all
// name: SADelegateProxy::proxyDelegate:selectors:
// address: 0x10072e558
// body: available
// range: 0x10072e558-0x10072e8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072e8e0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SADelegateProxy::proxyDelegate_selectors_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  class_t *self_00;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  
  IVar1 = param_3;
  _object_isClass();
  if (((IVar1 & 1) == 0) && (IVar1 = objc_stub::count(param_4), IVar1 != 0)) {
    IVar1 = param_1;
    _objc_opt_class();
    IVar2 = NSMutableSet::setWithSet_((ID)&_OBJC_CLASS___NSMutableSet,param_4);
    self = objc_stub::sensorsdata_delegateObject(param_3);
    if (self == 0) {
      self_00 = &objc::class_t::SADelegateProxyObject;
      _objc_alloc();
      self = objc_stub::initWithDelegate_proxy_((ID)self_00,param_3,IVar1);
      objc_stub::setSensorsdata_delegateObject_(param_3,self);
    }
    IVar3 = objc_stub::selectors(self);
    NSMutableSet::minusSet_(IVar2,IVar3);
    IVar3 = NSMutableSet::count(IVar2);
    if (IVar3 != 0) {
      IVar3 = objc_stub::sensorsClass(self);
      if (IVar3 == 0) {
        IVar3 = objc_stub::kvoClass(self);
        if (IVar3 != 0) {
          puVar5 = &_OBJC_CLASS___NSObject;
          _objc_opt_class(&_OBJC_CLASS___NSObject);
          _objc_opt_isKindOfClass(param_3,puVar5);
          if ((param_3 & 1) != 0) {
            IVar3 = objc_stub::selectors(self);
            IVar3 = objc_stub::containsObject_(IVar3,&cf_removeObserver_forKeyPath_);
            if ((IVar3 & 1) == 0) {
              NSMutableSet::addObject_(IVar2,&cf_removeObserver_forKeyPath_);
            }
          }
          IVar3 = objc_stub::kvoClass(self);
          addInstanceMethodWithSelectors_fromClass_toClass_(param_1,IVar2,IVar1,IVar3);
          IVar1 = objc_stub::selectors(self);
          objc_stub::unionSet_(IVar1,IVar2);
          return;
        }
        IVar3 = objc_stub::sensorsClassName(self);
        IVar4 = SAClassHelper::allocateClassWithObject_className_
                          ((ID)&objc::class_t::SAClassHelper,param_3,IVar3);
        SAClassHelper::registerClass_((ID)&objc::class_t::SAClassHelper,IVar4);
        puVar5 = &_OBJC_CLASS___NSObject;
        _objc_opt_class(&_OBJC_CLASS___NSObject);
        IVar3 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar5);
        if ((IVar3 & 1) != 0) {
          IVar3 = objc_stub::selectors(self);
          IVar3 = objc_stub::containsObject_(IVar3,&cf_addObserver_forKeyPath_options_context_);
          if ((IVar3 & 1) == 0) {
            NSMutableSet::addObject_(IVar2,&cf_addObserver_forKeyPath_options_context_);
          }
        }
        IVar3 = objc_stub::selectors(self);
        IVar3 = objc_stub::containsObject_(IVar3,&cf_class);
        if ((IVar3 & 1) == 0) {
          NSMutableSet::addObject_(IVar2,&cf_class);
        }
        addInstanceMethodWithSelectors_fromClass_toClass_(param_1,IVar2,IVar1,IVar4);
        IVar1 = objc_stub::selectors(self);
        objc_stub::unionSet_(IVar1,IVar2);
      }
      else {
        IVar3 = objc_stub::sensorsClass(self);
        addInstanceMethodWithSelectors_fromClass_toClass_(param_1,IVar2,IVar1,IVar3);
        IVar1 = objc_stub::selectors(self);
        objc_stub::unionSet_(IVar1,IVar2);
        IVar1 = param_3;
        _object_getClass();
        IVar2 = objc_stub::sensorsClass(self);
        IVar1 = objc_stub::isSubclassOfClass_(IVar1,IVar2);
        if ((IVar1 & 1) != 0) {
          return;
        }
        IVar4 = objc_stub::sensorsClass(self);
      }
      SAClassHelper::setObject_toClass_((ID)&objc::class_t::SAClassHelper,param_3,IVar4);
    }
  }
  return;
}

