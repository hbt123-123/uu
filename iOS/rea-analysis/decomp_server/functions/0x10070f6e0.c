// rea decompile_all
// name: FUN_10070f6e0
// address: 0x10070f6e0
// body: available
// range: 0x10070f6e0-0x10070f743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10070f6e0(ID param_1)

{
  ID IVar1;
  ID IVar2;
  int iVar3;
  ID IVar4;
  
  IVar1 = objc_stub::length(param_1);
  if (IVar1 == 0) {
    iVar3 = 0;
  }
  else {
    IVar4 = 0;
    iVar3 = 0;
    do {
      IVar2 = objc_stub::characterAtIndex_(param_1,IVar4);
      iVar3 = (int)IVar2 + iVar3 * 0x1f;
      IVar4 = IVar4 + 1;
    } while (IVar1 != IVar4);
  }
  return iVar3;
}

