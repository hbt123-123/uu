// rea decompile_all
// name: FUN_100263d30
// address: 0x100263d30
// body: available
// range: 0x100263d30-0x100263e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100263d30(ID param_1,long param_2)

{
  ID self;
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0xa8))();
  if (param_1 != 0) {
    self = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 8))();
    _swift_unknownObjectRelease(param_1);
    puVar1 = (undefined *)_objc_msgSend(self,"HTTPAdditionalHeaders");
    if (puVar1 != (undefined *)0x0) {
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (puVar1,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                 PTR___ss11AnyHashableVSHsWP_100995ad8);
      puVar2 = puVar1;
      FUN_100263e10();
      _swift_bridgeObjectRelease(puVar1);
      if (puVar2 != (undefined *)0x0) {
        return puVar2;
      }
    }
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100264bbc(PTR___swiftEmptyArrayStorage_100995ea0);
  _swift_bridgeObjectRelease(0);
  return puVar1;
}

