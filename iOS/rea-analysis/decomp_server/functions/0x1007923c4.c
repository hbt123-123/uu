// rea decompile_all
// name: SentryScope::initWithMaxBreadcrumbs:
// address: 0x1007923c4
// body: available
// range: 0x1007923c4-0x100792553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryScope::initWithMaxBreadcrumbs_(ID param_1,SEL param_2,long_long param_3)

{
  ID self;
  undefined *puVar1;
  ID IVar2;
  class_t *self_00;
  undefined8 uVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryScope;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    if ((long)param_3 < 1) {
      param_3 = 0;
    }
    *(long_long *)(self + 0x48) = param_3;
    *(undefined8 *)(self + 0x50) = 0;
    puVar1 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar2 = objc_stub::initWithCapacity_((ID)puVar1,*(undefined8 *)(self + 0x48));
    uVar3 = *(undefined8 *)(self + 0x68);
    *(ID *)(self + 0x68) = IVar2;
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    objc_stub::FUN_1007f4f00(self,IVar2);
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    objc_stub::FUN_1007f2dc0(self,IVar2);
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    objc_stub::FUN_1007f2060(self,IVar2);
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::FUN_1007f1c00(self,IVar2);
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::FUN_1007f2ee0(self,IVar2);
    puVar1 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar1);
    uVar3 = *(undefined8 *)(self + 8);
    *(ID *)(self + 8) = IVar2;
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray,uVar3);
    objc_stub::FUN_1007f3e80(self,IVar2);
    self_00 = &objc::class_t::SentryPropagationContext;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self_00);
    objc_stub::FUN_1007f4320(self,IVar2);
  }
  return self;
}

