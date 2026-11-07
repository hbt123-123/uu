// rea decompile_all
// name: MMKV::mmkvWithID:cryptKey:rootPath:mode:
// address: 0x100379050
// body: available
// range: 0x100379050-0x10037905f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037905c to 0x1007ee580 objc_stub::mmkvWithID:cryptKey:rootPath:mode:expectedCapacity: (external=false, thunk=false, hasNoReturn=false), 0x100379060 MMKV::mmkvWithID:cryptKey:rootPath:mode:expectedCapacity: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID MMKV::mmkvWithID_cryptKey_rootPath_mode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  ID IVar1;
  
  IVar1 = mmkvWithID_cryptKey_rootPath_mode_expectedCapacity_
                    ((ID)&objc::class_t::MMKV,param_3,param_4,param_5,param_6,0);
  return IVar1;
}

