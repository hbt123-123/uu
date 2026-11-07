// rea decompile_all
// name: MMKV::enableCompareBeforeSet
// address: 0x100379cec
// body: available
// range: 0x100379cec-0x100379d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100379d64 to 0x10038ba50 FUN_10038ba50 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool MMKV::enableCompareBeforeSet(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xd8) == '\x01') {
    pcVar3 = "enableCompareBeforeSet is invalid when Expiration is on";
    uVar2 = 0x2a8;
  }
  else {
    if (*(long *)(lVar1 + 0x70) == 0) {
      FUN_10038ba50();
      return (bool)lVar1;
    }
    pcVar3 = "enableCompareBeforeSet is invalid when key encryption is on";
    uVar2 = 0x2af;
  }
  FUN_100386734(2,"libMMKV.mm","-[MMKV enableCompareBeforeSet]",uVar2,pcVar3);
  return 0;
}

