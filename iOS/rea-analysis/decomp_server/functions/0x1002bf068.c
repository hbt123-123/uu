// rea decompile_all
// name: FUN_1002bf068
// address: 0x1002bf068
// body: available
// range: 0x1002bf068-0x1002bf11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002bf068(void)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  IVar2 = _objc_msgSend(unaff_x20,"allHeaderFields");
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar2,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  IVar3 = IVar2;
  FUN_1002bf120();
  _swift_bridgeObjectRelease(IVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (IVar3 != 0) {
    _swift_bridgeObjectRetain(IVar3);
    FUN_1002bb634();
    _swift_bridgeObjectRelease_n(IVar3,2);
  }
  return puVar1;
}

