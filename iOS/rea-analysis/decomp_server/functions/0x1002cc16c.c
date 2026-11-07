// rea decompile_all
// name: FUN_1002cc16c
// address: 0x1002cc16c
// body: available
// range: 0x1002cc16c-0x1002cc287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cc16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [24];
  
  self = &_OBJC_CLASS___NSURLCredential;
  _objc_allocWithZone();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  IVar2 = _objc_msgSend((ID)self,"initWithUser:password:persistence:",param_1,param_3,param_5);
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar3);
  lVar1 = (long)plVar4 + *(long *)(*plVar4 + 0x60);
  _swift_beginAccess(lVar1,auStack_68,1,0);
  *(ID *)(lVar1 + 0x140) = IVar2;
  _os_unfair_lock_unlock(uVar3);
  _swift_retain();
  return;
}

