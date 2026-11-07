// rea decompile_all
// name: FUN_100350410
// address: 0x100350410
// body: available
// range: 0x100350410-0x1003505ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100350410(undefined8 param_1,code *param_2,long param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  ID self;
  ID IVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  if (param_4 == '\0') {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    IVar3 = _objc_msgSend((ID)param_2,"stringFromDate:",param_1);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
  }
  else if (param_4 == '\x01') {
    (*param_2)(param_1);
  }
  else {
    uVar1 = param_3 + (ulong)(param_2 >= (code *)0x2);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_2 < (code *)0x2))) {
      if (param_2 == (code *)0x0 && param_3 == 0) {
        return;
      }
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    }
    else {
      if (param_2 != (code *)0x2 || param_3 != 0) {
        if (DAT_100a81be8 != -1) {
          _swift_once(&DAT_100a81be8,FUN_100350368);
        }
        lVar2 = DAT_100a87e78;
        uVar4 = *(undefined8 *)(*(long *)(DAT_100a87e78 + 0x10) + 0x10);
        _os_unfair_lock_lock(uVar4);
        _swift_beginAccess(lVar2 + 0x18,auStack_58,0,0);
        self = *(ID *)(lVar2 + 0x18);
        IVar3 = self;
        __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
        IVar3 = _objc_msgSend(self,"stringFromDate:",IVar3);
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
        _os_unfair_lock_unlock(uVar4);
        return;
      }
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    }
    __sSd11descriptionSSvg();
  }
  return;
}

