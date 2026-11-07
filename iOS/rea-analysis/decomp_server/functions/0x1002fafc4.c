// rea decompile_all
// name: FUN_1002fafc4
// address: 0x1002fafc4
// body: available
// range: 0x1002fafc4-0x1002fb1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002fb1ac) */

undefined8 FUN_1002fafc4(ID param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FUN_1002c9ef0();
  IVar3 = param_1;
  _swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___NSURLSessionWebSocketTask);
  if (IVar3 != 0) {
    puVar2 = &DAT_1009afad8;
    _swift_allocObject(&DAT_1009afad8,0x20,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(ID *)(puVar2 + 0x18) = IVar3;
    _swift_retain();
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7receive17completionHandleryys6ResultOyAbCE7MessageOs5Error_pGc_tF
              (FUN_10030d7dc,puVar2);
    _swift_release(puVar2);
    lVar5 = *(long *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar6);
    _swift_beginAccess(lVar5 + 0x18,&local_58,0x21,0);
    FUN_1002fb1c0(lVar5 + 0x18);
    _swift_endAccess(&local_58);
    _os_unfair_lock_unlock(uVar6);
    return 0;
  }
  local_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x35);
  __sSS6appendyySSF(0xd000000000000015,0x80000001008aa8a0);
  pcVar4 = "description";
  IVar3 = _objc_msgSend(param_1,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
  __sSS6appendyySSF(IVar3,pcVar4);
  _swift_bridgeObjectRelease(pcVar4);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008aa8c0);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,local_58,uStack_50,"Alamofire/WebSocketRequest.swift",0x20,2,0xbd,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002fb1ac);
  (*pcVar1)();
}

