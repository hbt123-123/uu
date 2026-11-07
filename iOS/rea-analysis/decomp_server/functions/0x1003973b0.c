// rea decompile_all
// name: NEMUKeyCodes::getMouseKeyCodes
// address: 0x1003973b0
// body: available
// range: 0x1003973b0-0x100397583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100397580 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID NEMUKeyCodes::getMouseKeyCodes(ID param_1,SEL param_2)

{
  undefined *self;
  class_t *pcVar1;
  ID IVar2;
  
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc_init();
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_((ID)pcVar1,&cf_left_mouse,1,1,0);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_((ID)pcVar1,&cf_right_mouse,2,2,1);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_((ID)pcVar1,&cf_middle_mouse,4,4,2);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_((ID)pcVar1,&cf_back_mouse,8,8,3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_forward_mouse,0x10,0x10,4);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_wheel_up_mouse,0x224,0xffffffffffffffff,0xffffffffffffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_wheel_down_mouse,0x225,0xffffffffffffffff,0xffffffffffffffff);
  objc_stub::addObject_((ID)self,IVar2);
  IVar2 = objc_stub::copy((ID)self);
  return IVar2;
}

