// rea decompile_all
// name: SALog::log:message:level:file:function:line:context:
// address: 0x100719e48
// body: available
// range: 0x100719e48-0x100719ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100719ee4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x44 bytes */

void SALog::log_message_level_file_function_line_context_
               (ID param_1,SEL param_2,bool param_3,ID param_4,unsigned_long_long param_5,
               const_char__ param_6,const_char__ param_7,unsigned_long_long param_8,
               long_long param_9)

{
  ID self;
  
  self = sharedLog(param_1);
  objc_stub::log_message_level_file_function_line_context_
            (self,(ulong)param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

