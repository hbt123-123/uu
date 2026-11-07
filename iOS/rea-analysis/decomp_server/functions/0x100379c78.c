// rea decompile_all
// name: MMKV::enableAutoKeyExpire:
// address: 0x100379c78
// body: available
// range: 0x100379c78-0x100379ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100379ce0 to 0x10038b044 FUN_10038b044 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

bool MMKV::enableAutoKeyExpire_(ID param_1,SEL param_2,unsigned_int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (((*(char *)(lVar1 + 0xe0) == '\x01') && ((*(byte *)(lVar1 + 0xd8) & 1) == 0)) &&
     (*(long *)(lVar1 + 0x70) == 0)) {
    FUN_100386734(2,"libMMKV.mm","-[MMKV enableAutoKeyExpire:]",0x29a,
                  "enableCompareBeforeSet will be invalid when Expiration is on");
    lVar1 = *(long *)(param_1 + 0x18);
  }
  FUN_10038b044(lVar1,param_3);
  return (bool)lVar1;
}

