// rea decompile_all
// name: FUN_100254f08
// address: 0x100254f08
// body: available
// range: 0x100254f08-0x100255317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100255314 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100254f08(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ID self;
  ID IVar5;
  undefined *self_00;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar9 = auStack_80 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar4 + -8);
  lVar10 = (long)puVar9 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar5 = self;
  FUN_100254688();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar8);
  IVar5 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar5);
  lVar3 = 0;
  if ((int)IVar5 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar1);
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar10,uVar7,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    self_00 = &_OBJC_CLASS___NSArray;
    _objc_allocWithZone();
    puVar6 = self_00;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    IVar5 = _objc_msgSend((ID)self_00,"initWithContentsOfURL:",puVar6);
    (**(code **)(lVar14 + 8))(lVar10,lVar4);
    if (IVar5 != 0) {
      local_78 = 0;
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (IVar5,&local_78,PTR___s10Foundation4DataVN_1009961e8);
      lVar3 = local_78;
      if (local_78 != 0) {
        _swift_bridgeObjectRetain(local_78);
        IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
        _swift_bridgeObjectRetain(uVar1);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        local_78 = 0;
        IVar5 = NSFileManager::removeItemAtPath_error_
                          (IVar5,"removeItemAtPath:error:",uVar7,&local_78);
        if ((int)IVar5 == 0) {
          lVar4 = local_78;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
          _swift_willThrow(0);
          _swift_errorRelease(lVar4);
          uVar11 = *(ulong *)(lVar3 + 0x10);
        }
        else {
          uVar11 = *(ulong *)(lVar3 + 0x10);
        }
        if (uVar11 != 0) {
          uVar12 = 0;
          plVar13 = (long *)(lVar3 + 0x28);
          do {
            if (*(ulong *)(lVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100255310);
              (*pcVar2)();
            }
            lVar4 = plVar13[-1];
            lVar10 = *plVar13;
            local_78 = 0;
            local_70 = 0xe000000000000000;
            FUN_100008184(lVar4,lVar10);
            __ss11_StringGutsV4growyySiF(0x10);
            _swift_bridgeObjectRelease(local_70);
            local_78 = 0x6863616320656e4f;
            local_70 = 0xee0020676f6c2065;
            __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar9);
            lVar14 = lVar10;
            __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(lVar4,lVar10,puVar9);
            if (lVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100255314);
              (*pcVar2)();
            }
            uVar12 = uVar12 + 1;
            __sSS6appendyySSF();
            _swift_bridgeObjectRelease(lVar14);
            FUN_100006cdc(lVar4,lVar10);
            _swift_bridgeObjectRelease(local_70);
            plVar13 = plVar13 + 2;
          } while (uVar11 != uVar12);
        }
        _swift_bridgeObjectRelease(lVar3);
        goto LAB_1002552d0;
      }
    }
    IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    local_78 = 0;
    IVar5 = NSFileManager::removeItemAtPath_error_(IVar5,"removeItemAtPath:error:",uVar7,&local_78);
    if ((int)IVar5 == 0) {
      lVar3 = local_78;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
      _swift_willThrow(0);
      _swift_errorRelease(lVar3);
    }
    lVar3 = 0;
  }
LAB_1002552d0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

