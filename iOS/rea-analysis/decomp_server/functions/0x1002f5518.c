// rea decompile_all
// name: _TtC9Alamofire15SessionDelegate::URLSession:webSocketTask:didOpenWithProtocol:
// address: 0x1002f5518
// body: available
// range: 0x1002f5518-0x1002f5637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f5634 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC9Alamofire15SessionDelegate::URLSession_webSocketTask_didOpenWithProtocol_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = (SEL)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  lVar2 = param_1 + stateProvider;
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    _swift_getObjectType();
    (**(code **)(lVar3 + 0x20))(param_4,lVar2,lVar3);
    _swift_unknownObjectRelease(lVar1);
    if ((undefined8 *)param_4 != (undefined8 *)0x0) {
      if (*(class_t **)param_4 == &objc::class_t::_TtC9Alamofire16WebSocketRequest) {
        FUN_1002fa000(param_5,param_2);
        _swift_release(param_4);
      }
      else {
        _swift_release(param_4);
      }
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}

