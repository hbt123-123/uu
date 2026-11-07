// rea decompile_all
// name: FUN_100386734
// address: 0x100386734
// body: available
// range: 0x100386734-0x100386813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100386734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ID IVar1;
  undefined *self;
  
  if (DAT_100a89118 <= (int)param_1) {
    IVar1 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,param_5);
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    objc_stub::initWithFormat_arguments_((ID)self,IVar1,&stack0x00000000);
    if (DAT_100b36708 == (code *)0x0) {
      _NSLog(&cf___s_<_s:_d::_s>__);
    }
    else {
      (*DAT_100b36708)(param_1,param_2,param_4,param_3);
    }
  }
  return;
}

