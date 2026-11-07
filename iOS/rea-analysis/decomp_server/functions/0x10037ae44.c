// rea decompile_all
// name: MMKV::restoreAllMultiProcessFromDirectory:
// address: 0x10037ae44
// body: available
// range: 0x10037ae44-0x10037ae9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037ae9c to 0x1007f0a60 objc_stub::restoreAll:fromDirectory: (external=false, thunk=false, hasNoReturn=false), 0x10037ac08 MMKV::restoreAll:fromDirectory: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

unsigned_long_long MMKV::restoreAllMultiProcessFromDirectory_(ID param_1,SEL param_2,ID param_3)

{
  unsigned_long_long uVar1;
  
  if (DAT_100ad13a8 == 0) {
    FUN_100386734(3,"libMMKV.mm","+[MMKV restoreAllMultiProcessFromDirectory:]",0x3ef,
                  "Restore multi-process MMKV without setting groupDir makes no sense.");
  }
  uVar1 = restoreAll_fromDirectory_((ID)&objc::class_t::MMKV,DAT_100ad13a8,param_3);
  return uVar1;
}

