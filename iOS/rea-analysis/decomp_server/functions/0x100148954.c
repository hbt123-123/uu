// rea decompile_all
// name: FUN_100148954
// address: 0x100148954
// body: available
// range: 0x100148954-0x100148c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100148954(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *self;
  undefined1 *puVar3;
  ID IVar4;
  ulong uVar5;
  ulong self_00;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *local_98;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(FUN_100148c8c,0,0xd0000000000000ab,0x8000000100891c00,0xd000000000000019,
                  0x8000000100891cb0,0xa0,0);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x20);
    pcVar6 = *(code **)(*plVar7 + 0xf0);
    _swift_retain(plVar7);
    (*pcVar6)();
    _swift_release(plVar7);
    uVar1 = _objc_msgSend(*(ID *)(param_1 + 0x18),"operations");
    uVar2 = 0;
    FUN_100148e14(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar1,uVar2);
    if (uVar1 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar1 & 0xffffffffffffff8;
      if ((long)uVar1 < 0) {
        uVar8 = uVar1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar8 != 0) {
      if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100148c8c);
        (*pcVar6)();
      }
      uVar9 = 0;
      local_98 = &DAT_d000000000000013;
      do {
        if ((uVar1 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(uVar1 + uVar9 * 8 + 0x20);
        }
        else {
          uVar5 = uVar9;
          FUN_10016a1d0(uVar9,uVar1);
        }
        uVar2 = 0;
        FUN_10015240c(0);
        self_00 = uVar5;
        _swift_dynamicCastClass(uVar5,uVar2);
        if (self_00 == 0) {
          FUN_100177d4c();
          _swift_dynamicCastClass(uVar5,self_00);
          self_00 = uVar5;
          if (uVar5 != 0) goto LAB_100148b10;
        }
        else {
          FUN_100152230();
          self = &_OBJC_CLASS___NSError;
          _objc_allocWithZone();
          puVar3 = local_98;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (&DAT_d000000000000013,0x8000000100891cd0);
          IVar4 = _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",puVar3,0x186a9,0);
          FUN_100151e58(IVar4);
          FUN_100401b14(0);
          FUN_1003fb45c(FUN_100150664,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000011,
                        0x8000000100891db0,0x141,7);
LAB_100148b10:
          _objc_msgSend(self_00,"cancel");
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
    _swift_bridgeObjectRelease(uVar1);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10014960c,param_1,0xd0000000000000ab,0x8000000100891c00,0xd000000000000019,
                  0x8000000100891cb0,0xac,0);
    _swift_release(param_1);
  }
  return;
}

