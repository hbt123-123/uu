// rea decompile_all
// name: MMKV::removeStorage:mode:
// address: 0x10037b674
// body: available
// range: 0x10037b674-0x10037b687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037b684 to 0x1007f0680 objc_stub::removeStorage:rootPath: (external=false, thunk=false, hasNoReturn=false), 0x10037b4a4 MMKV::removeStorage:rootPath: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

bool MMKV::removeStorage_mode_(ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  bool bVar2;
  
  IVar1 = DAT_100ad13a8;
  if ((param_4 & 1) != 0) {
    IVar1 = 0;
  }
  bVar2 = removeStorage_rootPath_(param_1,param_3,IVar1);
  return bVar2;
}

