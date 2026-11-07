// rea decompile_all
// name: FUN_1005d219c
// address: 0x1005d219c
// body: available
// range: 0x1005d219c-0x1005d21ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

bool FUN_1005d219c(void)

{
  bool bVar1;
  void *aBlock;
  ID IVar2;
  long unaff_x20;
  
  IVar2 = *(ID *)(unaff_x20 + 0x10);
  aBlock = (void *)_objc_msgSend(IVar2,"invalidationHandler");
  bVar1 = false;
  if (aBlock != (void *)0x0) {
    __Block_release(aBlock);
    IVar2 = _objc_msgSend(IVar2,"processIdentifier");
    bVar1 = 0 < (int)IVar2;
  }
  return bVar1;
}

