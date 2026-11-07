// rea decompile_all
// name: thunk_FUN_1002c8d2c
// address: 0x1002c8d28
// body: available
// range: 0x1002c8d28-0x1002c8d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong thunk_FUN_1002c8d2c(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
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
  uVar6 = *(ulong *)(&stack0x000000f8 + lVar2);
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
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c8e6c);
      (*pcVar1)();
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c8e8c);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c8e90);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar6 + uVar4 * 8 + 0x20);
    }
    else {
      FUN_100169c28(uVar4,uVar6,&PTR__OBJC_CLASS___NSURLSessionTaskMetrics_100a65a08,&DAT_100a833b0)
      ;
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  return uVar4;
}

