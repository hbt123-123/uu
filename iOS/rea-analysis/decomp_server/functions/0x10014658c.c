// rea decompile_all
// name: FUN_10014658c
// address: 0x10014658c
// body: available
// range: 0x10014658c-0x1001468cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014658c(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong self;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ID IVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 0x20);
    puVar5 = &DAT_10099eba0;
    _swift_allocObject(&DAT_10099eba0,0x14,7);
    *(int *)(puVar5 + 0x10) = param_2;
    pcVar8 = *(code **)(*plVar10 + 0xe8);
    _swift_retain(plVar10);
    (*pcVar8)(FUN_1001496c4,puVar5);
    _swift_release(plVar10);
    _swift_release(puVar5);
    uVar2 = _objc_msgSend(*(ID *)(param_1 + 0x18),"operations");
    uVar3 = 0;
    FUN_100148e14(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
    if (uVar2 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar2 & 0xffffffffffffff8;
      if ((long)uVar2 < 0) {
        uVar9 = uVar2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar9 != 0) {
      if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001468d0);
        (*pcVar8)();
      }
      uVar11 = 0;
      do {
        if ((uVar2 & 0xc000000000000001) == 0) {
          self = *(ulong *)(uVar2 + uVar11 * 8 + 0x20);
        }
        else {
          self = uVar11;
          FUN_10016a1d0(uVar11,uVar2);
        }
        uVar3 = 0;
        FUN_10015240c(0);
        _swift_dynamicCastClass(self,uVar3);
        if (self != 0) {
          lVar4 = self + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
          _swift_weakLoadStrong();
          if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x14), _swift_release(), iVar1 == param_2))
          {
            FUN_100401b14();
            FUN_1003fb45c(FUN_1001468d0,0,0xd0000000000000ab,0x8000000100891c00,0xd000000000000024,
                          0x80000001008921d0,0x44,7);
            FUN_100152230();
            puVar5 = &_OBJC_CLASS___NSError;
            _objc_allocWithZone();
            puVar6 = &DAT_d000000000000013;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (&DAT_d000000000000013,0x8000000100891cd0);
            IVar7 = _objc_msgSend((ID)puVar5,"initWithDomain:code:userInfo:",puVar6,0x186a9,0);
            FUN_100151e58(IVar7);
            FUN_1003fb45c(FUN_100150664,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000011,
                          0x8000000100891db0,0x141,7);
            _objc_msgSend(self,"cancel");
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}

