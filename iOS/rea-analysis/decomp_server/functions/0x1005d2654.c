// rea decompile_all
// name: FUN_1005d2654
// address: 0x1005d2654
// body: available
// range: 0x1005d2654-0x1005d26bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1005d2654(void)

{
  ID IVar1;
  char *pcVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pcVar2 = "serviceName";
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"serviceName");
  if (IVar1 == 0) {
    IVar1 = 0;
    pcVar2 = (char *)0xe000000000000000;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  auVar3._8_8_ = pcVar2;
  auVar3._0_8_ = IVar1;
  return auVar3;
}

