// rea decompile_all
// name: SALog::log:level:file:function:line:context:format:
// address: 0x10071a058
// body: available
// range: 0x10071a058-0x10071a12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x44 bytes */

void SALog::log_level_file_function_line_context_format_
               (ID param_1,SEL param_2,bool param_3,unsigned_long_long param_4,const_char__ param_5,
               const_char__ param_6,unsigned_long_long param_7,long_long param_8,ID param_9)

{
  bool bVar1;
  undefined *self;
  ID IVar2;
  
  bVar1 = enableLog(param_1);
  if (param_9 != 0 && bVar1 != 0) {
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    IVar2 = objc_stub::initWithFormat_arguments_((ID)self,param_9,&stack0x00000008);
    objc_stub::log_message_level_file_function_line_context_
              (param_1,(ulong)param_3,IVar2,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

