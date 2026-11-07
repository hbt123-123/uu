// rea decompile_all
// name: SALogMessage::initWithMessage:level:file:function:line:context:timestamp:
// address: 0x1007343e0
// body: available
// range: 0x1007343e0-0x10073450f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

ID SALogMessage::initWithMessage_level_file_function_line_context_timestamp_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
             unsigned_long_long param_7,long_long param_8,ID param_9)

{
  ID IVar1;
  ID IVar2;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::SALogMessage;
  local_70 = param_1;
  IVar1 = NSObject::init((ID)&local_70,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x28) = param_6;
    *(unsigned_long_long *)(IVar1 + 0x30) = param_7;
    *(long_long *)(IVar1 + 0x38) = param_8;
    *(ID *)(IVar1 + 0x40) = param_9;
    IVar2 = objc_stub::lastPathComponent(param_5);
    *(ID *)(IVar1 + 0x20) = IVar2;
  }
  return IVar1;
}

