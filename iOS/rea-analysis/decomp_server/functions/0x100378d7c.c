// rea decompile_all
// name: FUN_100378d7c
// address: 0x100378d7c
// body: available
// range: 0x100378d7c-0x100378de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100378dd4 to 0x1007eed00 objc_stub::onMMKVContentChange: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100378d7c(long *param_1)

{
  long *plVar1;
  ID self;
  ID IVar2;
  
  IVar2 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVContentChange:");
  self = DAT_100ad1398;
  if ((int)IVar2 != 0) {
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,plVar1);
    objc_stub::onMMKVContentChange_(self,IVar2);
    return;
  }
  return;
}

