// rea decompile_all
// name: _TtC8UUCommon27UUMacHistoryFileStorePlugin::objectForKey:
// address: 0x10039d750
// body: available
// range: 0x10039d750-0x10039d853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039d850 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC8UUCommon27UUMacHistoryFileStorePlugin::objectForKey_(ID param_1,SEL param_2,ID param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_10039d4c4(auStack_60,param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (local_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_10003f030(auStack_60,local_48);
    lVar3 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar2,local_48);
    (**(code **)(lVar3 + 8))(puVar2,local_48);
    FUN_10003f094(auStack_60);
  }
  return (ID)puVar1;
}

