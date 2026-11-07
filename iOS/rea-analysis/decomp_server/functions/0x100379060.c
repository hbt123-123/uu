// rea decompile_all
// name: MMKV::mmkvWithID:cryptKey:rootPath:mode:expectedCapacity:
// address: 0x100379060
// body: available
// range: 0x100379060-0x1003791f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

ID MMKV::mmkvWithID_cryptKey_rootPath_mode_expectedCapacity_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6,
             unsigned_long_long param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  double extraout_d0;
  long local_68;
  
  if ((DAT_100ad1380 & 1) == 0) {
    FUN_10037bd28(param_2,param_1);
  }
  IVar1 = objc_stub::length(param_3);
  if (IVar1 == 0) {
    return 0;
  }
  local_68 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  IVar1 = param_5;
  if (((uint)param_6 >> 1 & 1) != 0) {
    IVar1 = DAT_100ad13a8;
    if (param_5 != 0) {
      IVar1 = param_5;
    }
    if (IVar1 == 0) {
      FUN_100386734(3,"libMMKV.mm","+[MMKV mmkvWithID:cryptKey:rootPath:mode:expectedCapacity:]",
                    0xe3,"Getting a multi-process MMKV [%@] without setting groupDir makes no sense"
                   );
      IVar1 = 0;
    }
  }
  IVar2 = mmapKeyWithMMapID_rootPath_((ID)&objc::class_t::MMKV,param_3,IVar1);
  IVar3 = objc_stub::objectForKey_(DAT_100ad1388,IVar2);
  if (IVar3 == 0) {
    self = &objc::class_t::MMKV;
    _objc_alloc();
    IVar3 = objc_stub::initWithMMapID_cryptKey_rootPath_mode_expectedCapacity_
                      ((ID)self,param_3,param_4,IVar1,param_6,param_7);
    if (*(long *)(IVar3 + 0x18) == 0) {
      IVar3 = 0;
      goto LAB_10037919c;
    }
    *(ID *)(IVar3 + 0x10) = IVar2;
    objc_stub::setObject_forKey_(DAT_100ad1388,IVar3,IVar2);
  }
  NSDate::timeIntervalSinceReferenceDate((ID)&_OBJC_CLASS___NSDate);
  *(long *)(IVar3 + 0x20) = (long)(extraout_d0 * 1000.0);
LAB_10037919c:
  FUN_10037b92c(&local_68);
  return IVar3;
}

