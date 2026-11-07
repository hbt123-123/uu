// rea decompile_all
// name: FUN_10039251c
// address: 0x10039251c
// body: available
// range: 0x10039251c-0x100392677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10039251c(char *param_1,ID param_2)

{
  ID IVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  if (param_2 == 0) {
    return (undefined1 *)0x0;
  }
  if (*param_1 == '\0') {
    if (param_1[1] == '\0') {
      return (undefined1 *)0x0;
    }
    param_1 = param_1 + 2;
  }
  else {
    if (*(long *)(param_1 + 2) == 0) {
      return (undefined1 *)0x0;
    }
    param_1 = *(char **)(param_1 + 10);
  }
  FUN_10037c13c(auStack_38,param_1);
  IVar1 = NSString::class((ID)&_OBJC_CLASS___NSString);
  if (IVar1 == param_2) {
    puVar2 = auStack_38;
    FUN_10037d2b4(puVar2);
    return puVar2;
  }
  IVar1 = NSMutableString::class((ID)&_OBJC_CLASS___NSMutableString);
  if (IVar1 == param_2) {
    puVar2 = auStack_38;
    FUN_10037d2b4(puVar2);
    puVar2 = (undefined1 *)
             NSMutableString::stringWithString_((ID)&_OBJC_CLASS___NSMutableString,puVar2);
    return puVar2;
  }
  IVar1 = NSData::class((ID)&_OBJC_CLASS___NSData);
  if (IVar1 != param_2) {
    IVar1 = NSMutableData::class((ID)&_OBJC_CLASS___NSMutableData);
    if (IVar1 == param_2) {
      puVar2 = auStack_38;
      FUN_10037d484(puVar2);
      puVar2 = (undefined1 *)NSMutableData::dataWithData_((ID)&_OBJC_CLASS___NSMutableData,puVar2);
      return puVar2;
    }
    IVar1 = NSDate::class((ID)&_OBJC_CLASS___NSDate);
    if (IVar1 != param_2) {
      _NSStringFromClass();
      FUN_100386734(3,"MiniPBCoder_OSX.cpp","decodeObject",0xd1,"%@ not recognized");
      return (undefined1 *)0x0;
    }
    FUN_10037c1dc(auStack_38);
    puVar2 = (undefined1 *)NSDate::dateWithTimeIntervalSince1970_((ID)&_OBJC_CLASS___NSDate);
    return puVar2;
  }
  puVar2 = auStack_38;
  FUN_10037d484(puVar2);
  return puVar2;
}

