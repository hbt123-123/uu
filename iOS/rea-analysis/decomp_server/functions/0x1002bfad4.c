// rea decompile_all
// name: FUN_1002bfad4
// address: 0x1002bfad4
// body: available
// range: 0x1002bfad4-0x1002bfbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bfbe0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002bfad4(undefined8 *param_1,ulong param_2)

{
  ID self;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  self = param_1[1];
  if ((param_2 & 1) == 0) {
    uVar2 = uVar3;
    FUN_1002bc258(uVar3);
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = uVar2;
    FUN_1002bf548(uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uVar3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
               PTR___ss11AnyHashableVSHsWP_100995ad8);
    _swift_bridgeObjectRelease(uVar3);
    _objc_msgSend(self,"setHTTPAdditionalHeaders:",uVar2);
  }
  else {
    uVar2 = uVar3;
    _swift_bridgeObjectRetain();
    FUN_1002bc258();
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = uVar2;
    FUN_1002bf548(uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uVar1;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar1,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
               PTR___ss11AnyHashableVSHsWP_100995ad8);
    _swift_bridgeObjectRelease(uVar1);
    _objc_msgSend(self,"setHTTPAdditionalHeaders:",uVar2);
    _swift_bridgeObjectRelease(uVar3);
  }
  return 0;
}

