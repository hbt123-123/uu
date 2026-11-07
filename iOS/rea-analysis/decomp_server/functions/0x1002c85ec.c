// rea decompile_all
// name: FUN_1002c85ec
// address: 0x1002c85ec
// body: available
// range: 0x1002c85ec-0x1002c8797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002c85ec(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong self;
  ID IVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar5 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar7 = *(undefined8 *)(plVar5[2] + 0x10);
  _os_unfair_lock_lock(uVar7);
  lVar8 = *(long *)(*plVar5 + 0x60);
  _swift_beginAccess((long)plVar5 + lVar8,auStack_58,0,0);
  FUN_100082394((long)plVar5 + lVar8,auStack_60 + lVar2,FUN_1002c76a8);
  uVar6 = *(ulong *)(&stack0x000000f0 + lVar2);
  _swift_bridgeObjectRetain(uVar6);
  FUN_1000d27dc(auStack_60 + lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar7);
  if (uVar6 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar6 & 0xffffffffffffff8;
    if ((long)uVar6 < 0) {
      uVar3 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    self = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c8774);
      (*pcVar1)();
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if ((long)self < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c8794);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= self) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c8798);
        (*pcVar1)();
      }
      self = *(ID *)(uVar6 + self * 8 + 0x20);
    }
    else {
      FUN_100169c28(self,uVar6,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00,&DAT_100a82760);
    }
    _swift_bridgeObjectRelease(uVar6);
    IVar4 = _objc_msgSend(self,"response");
    if (IVar4 != 0) {
      _swift_dynamicCastObjCClass(IVar4,&_OBJC_CLASS___NSHTTPURLResponse);
    }
  }
  return;
}

