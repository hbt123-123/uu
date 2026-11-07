// rea decompile_all
// name: FUN_1002c8860
// address: 0x1002c8860
// body: available
// range: 0x1002c8860-0x1002c89ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002c8860(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar6 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar6);
  lVar7 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar7,auStack_58,0,0);
  FUN_100082394((long)plVar4 + lVar7,auStack_60 + lVar2,FUN_1002c76a8);
  uVar5 = *(ulong *)(&stack0x000000f0 + lVar2);
  _swift_bridgeObjectRetain(uVar5);
  FUN_1000d27dc(auStack_60 + lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar6);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar3 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(uVar5);
    uVar6 = 0;
  }
  else {
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c89ac);
        (*pcVar1)();
      }
      uVar6 = *(undefined8 *)(uVar5 + 0x20);
    }
    else {
      uVar6 = 0;
      FUN_100169c28(0,uVar5,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00,&DAT_100a82760);
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  return uVar6;
}

