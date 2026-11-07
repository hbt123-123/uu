// rea decompile_all
// name: FUN_100687cc4
// address: 0x100687cc4
// body: available
// range: 0x100687cc4-0x100687d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100687cc4(ID *param_1)

{
  char cVar1;
  bool bVar2;
  ID unaff_x20;
  ID IVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  param_1[2] = unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 0x31);
  if (cVar1 == '\0') {
    pcVar4 = "stringValue";
    IVar3 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"stringValue");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  else if (cVar1 == '\x02') {
    bVar2 = *(char *)(unaff_x20 + 0x30) == '\0';
    IVar3 = 0x65757274;
    if (bVar2) {
      IVar3 = 0x65736c6166;
    }
    pcVar4 = (char *)0xe400000000000000;
    if (bVar2) {
      pcVar4 = (char *)0xe500000000000000;
    }
  }
  else if (cVar1 == '\x01') {
    IVar3 = *(ID *)(unaff_x20 + 0x10);
    pcVar4 = *(char **)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(pcVar4);
  }
  else {
    IVar3 = 0;
    pcVar4 = (char *)0xe000000000000000;
  }
  *param_1 = IVar3;
  param_1[1] = (ID)pcVar4;
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = FUN_100687d90;
  return auVar5;
}

