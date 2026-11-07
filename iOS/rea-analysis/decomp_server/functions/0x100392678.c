// rea decompile_all
// name: FUN_100392678
// address: 0x100392678
// body: available
// range: 0x100392678-0x1003926ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100392678(ID param_1)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = NSString::class((ID)&_OBJC_CLASS___NSString);
  if ((((IVar2 == param_1) ||
       (IVar2 = NSMutableString::class((ID)&_OBJC_CLASS___NSMutableString), IVar2 == param_1)) ||
      (IVar2 = NSData::class((ID)&_OBJC_CLASS___NSData), IVar2 == param_1)) ||
     (IVar2 = NSMutableData::class((ID)&_OBJC_CLASS___NSMutableData), IVar2 == param_1)) {
    bVar1 = true;
  }
  else {
    IVar2 = NSDate::class((ID)&_OBJC_CLASS___NSDate);
    bVar1 = IVar2 == param_1;
  }
  return bVar1;
}

