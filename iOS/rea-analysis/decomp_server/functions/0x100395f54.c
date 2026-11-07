// rea decompile_all
// name: NEMUKeyCodes::getJoystickKeyCodes
// address: 0x100395f54
// body: available
// range: 0x100395f54-0x10039722b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100397228 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID NEMUKeyCodes::getJoystickKeyCodes(ID param_1,SEL param_2)

{
  undefined *self;
  class_t *pcVar1;
  ID IVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *pcVar3;
  
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc_init();
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_Left_Stick,0x7fffffff,0x7fffffff,0x110);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_Right_Stick,0x7fffffff,0x7fffffff,0x111);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf__,0x7fffffff,0x7fffffff,0x222);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf__,0x7fffffff,0x7fffffff,0x223);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf__,0x7fffffff,0x7fffffff,0x221);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf__,0x7fffffff,0x7fffffff,0x220);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_Start,0x7fffffff,0x7fffffff,0x13b);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_Back,0x7fffffff,0x7fffffff,0x13a);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_Home,0x7fffffff,0x7fffffff,0x13c);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_LA,0x7fffffff,0x7fffffff,0x13d);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_RA,0x7fffffff,0x7fffffff,0x13e);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_LB,0x7fffffff,0x7fffffff,0x136);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_RB,0x7fffffff,0x7fffffff,0x137);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_LT,0x7fffffff,0x7fffffff,0x138);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_RT,0x7fffffff,0x7fffffff,0x139);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_A,0x7fffffff,0x7fffffff,0x130);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_B,0x7fffffff,0x7fffffff,0x131);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_X,0x7fffffff,0x7fffffff,0x133);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_Y,0x7fffffff,0x7fffffff,0x134);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_0;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_1;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_2;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_3;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_4;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_5;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_6;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  pcVar3 = &cf_7;
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_T__);
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,IVar2,0x7fffffff,0x7fffffff,0x7fffffff,in_x6,in_x7,pcVar3);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_0,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_1,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_2,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_3,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_4,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_5,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_6,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_7,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_8,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_9,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_10,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_11,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_12,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_13,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_14,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_15,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_16,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_17,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_18,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_19,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_20,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_21,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_22,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_23,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_24,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_25,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_26,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_27,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_28,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_29,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_30,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_31,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_32,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_33,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_34,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_35,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_36,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_37,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_38,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_39,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_40,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_41,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_42,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_43,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_44,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_45,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_46,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_47,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_48,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  pcVar1 = &objc::class_t::NEMUKeyMapping;
  _objc_alloc();
  IVar2 = objc_stub::initWithText_scanCode_virtualKey_keyCode_
                    ((ID)pcVar1,&cf_49,0x7fffffff,0x7fffffff,0x7fffffff);
  objc_stub::addObject_((ID)self,IVar2);
  IVar2 = objc_stub::copy((ID)self);
  return IVar2;
}

