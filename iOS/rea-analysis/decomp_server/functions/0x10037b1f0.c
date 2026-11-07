// rea decompile_all
// name: MMKV::tranlateData:key:kv:
// address: 0x10037b1f0
// body: available
// range: 0x10037b1f0-0x10037b4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037b248 to 0x1007f4de0 objc_stub::setString:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b284 to 0x1007f2360 objc_stub::setData:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b2c0 to 0x1007f23e0 objc_stub::setDate:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b350 to 0x1007f2740 objc_stub::setDouble:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b3a8 to 0x1007f3e00 objc_stub::setObject:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b3dc to 0x1007f3580 objc_stub::setInt32:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b438 to 0x1007f2fe0 objc_stub::setFloat:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037b460 to 0x1007f35a0 objc_stub::setInt64:forKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

bool MMKV::tranlateData_key_kv_(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  IVar1 = NSString::class((ID)&_OBJC_CLASS___NSString);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::setString_forKey_(param_5,param_3,param_4);
    return (bool)IVar1;
  }
  IVar1 = NSData::class((ID)&_OBJC_CLASS___NSData);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::setData_forKey_(param_5,param_3,param_4);
    return (bool)IVar1;
  }
  IVar1 = NSDate::class((ID)&_OBJC_CLASS___NSDate);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::setDate_forKey_(param_5,param_3,param_4);
    return (bool)IVar1;
  }
  IVar1 = NSNumber::class((ID)&_OBJC_CLASS___NSNumber);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = param_3;
    _CFNumberGetType();
    if ((long)IVar1 < 6) {
      if (IVar1 - 1 < 3) {
LAB_10037b3b8:
        IVar1 = objc_stub::intValue(param_3);
        IVar1 = objc_stub::setInt32_forKey_(param_5,IVar1,param_4);
        return (bool)IVar1;
      }
      if (IVar1 == 4) {
LAB_10037b43c:
        IVar1 = objc_stub::longLongValue(param_3);
        IVar1 = objc_stub::setInt64_forKey_(param_5,IVar1,param_4);
        return (bool)IVar1;
      }
      if (IVar1 == 5) {
        objc_stub::floatValue(param_3);
        IVar1 = objc_stub::setFloat_forKey_(param_5,param_4);
        return (bool)IVar1;
      }
    }
    else if (IVar1 < 0x10) {
      if ((1L << (IVar1 & 0x3f) & 0x380U) != 0) goto LAB_10037b3b8;
      if ((1L << (IVar1 & 0x3f) & 0x8c00U) != 0) goto LAB_10037b43c;
      if ((1L << (IVar1 & 0x3f) & 0x2040U) != 0) {
        objc_stub::doubleValue(param_3);
        IVar1 = objc_stub::setDouble_forKey_(param_5,param_4);
        return (bool)IVar1;
      }
    }
    pcVar3 = "unknown number type:%ld, key:%@";
    uVar2 = 0x449;
LAB_10037b488:
    FUN_100386734(2,"libMMKV.mm","+[MMKV tranlateData:key:kv:]",uVar2,pcVar3);
    return 0;
  }
  IVar1 = NSArray::class((ID)&_OBJC_CLASS___NSArray);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((IVar1 & 1) == 0) {
    IVar1 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((int)IVar1 == 0) {
      pcVar3 = "unknown type of key:%@";
      uVar2 = 0x44f;
      goto LAB_10037b488;
    }
  }
  IVar1 = objc_stub::setObject_forKey_(param_5,param_3,param_4);
  return (bool)IVar1;
}

