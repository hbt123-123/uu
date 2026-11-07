// rea decompile_all
// name: _TtC10Filepicker17FilepickerManager::uploadFileURL:toURL:token:headers:delegate:
// address: 0x10037159c
// body: available
// range: 0x10037159c-0x1003716f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003716e4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID _TtC10Filepicker17FilepickerManager::uploadFileURL_toURL_token_headers_delegate_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  long lVar1;
  ID IVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ID IVar6;
  long lVar7;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = &stack0xffffffffffffffa0 + -uVar3;
  IVar6 = (long)puVar5 - uVar3;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(IVar6,param_3);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar5,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = (SEL)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_6 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_6,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  }
  _swift_unknownObjectRetain(param_7);
  IVar2 = IVar6;
  FUN_1003711e4(IVar6,puVar5,param_5,param_2,param_6,param_7);
  _swift_unknownObjectRelease(param_7);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(param_2);
  pcVar4 = *(code **)(lVar7 + 8);
  (*pcVar4)(puVar5,lVar1);
  (*pcVar4)(IVar6,lVar1);
  return IVar2;
}

