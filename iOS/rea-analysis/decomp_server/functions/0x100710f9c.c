// rea decompile_all
// name: SAMethodHelper::replaceInstanceMethodWithDestinationSelector:sourceSelector:fromClass:toClass:
// address: 0x100710f9c
// body: available
// range: 0x100710f9c-0x100710ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100710ff0 to 0x1007de2d8 _class_replaceMethod (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

undefined4 *
SAMethodHelper::replaceInstanceMethodWithDestinationSelector_sourceSelector_fromClass_toClass_
          (ID param_1,SEL param_2,SEL param_3,SEL param_4,CLASS param_5,CLASS param_6)

{
  CLASS CVar1;
  
  _class_getInstanceMethod(param_5,param_4);
  CVar1 = param_5;
  _method_getImplementation();
  _method_getTypeEncoding(param_5);
  _class_replaceMethod(param_6,param_3,CVar1,param_5);
  return (undefined4 *)param_6;
}

