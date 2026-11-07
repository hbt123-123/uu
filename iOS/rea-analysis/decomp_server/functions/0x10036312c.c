// rea decompile_all
// name: FUN_10036312c
// address: 0x10036312c
// body: available
// range: 0x10036312c-0x100363627 inclusive
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

void FUN_10036312c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ID IVar10;
  long unaff_x20;
  ID self;
  undefined8 uVar11;
  ID IVar12;
  long lVar13;
  long lVar14;
  ID local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = &DAT_100a888f0;
  FUN_100004bb4(&DAT_100a888f0,&DAT_10081cb80);
  uVar8 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_110 - uVar8;
  lVar13 = lVar14 - uVar8;
  puVar3 = &DAT_100a88a70;
  FUN_100004bb4(&DAT_100a88a70,&DAT_10081cd40);
  lVar9 = lVar13 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_f0 = lVar9;
  FUN_100365888();
  local_f8 = *(long *)(lVar4 + -8);
  lVar9 = lVar9 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_108 = lVar9;
  local_e8 = lVar4;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::responseData);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  uVar11 = *puVar1;
  uVar2 = puVar1[1];
  FUN_100008184(uVar11,uVar2);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar9);
  uVar6 = uVar11;
  uVar7 = uVar2;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(uVar11,uVar2,lVar9);
  local_100 = uVar6;
  FUN_100006cdc(uVar11,uVar2);
  IVar10 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskLock);
  _objc_msgSend(IVar10,"lock");
  lVar4 = _TtC10Filepicker17FilePickerRequest::_task;
  IVar12 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_task);
  _objc_msgSend(IVar10,"unlock");
  if (((IVar12 == 0) || (local_110 = _objc_msgSend(IVar12,"response"), local_110 == 0)) ||
     (IVar12 = local_110, _swift_dynamicCastObjCClass(local_110,&_OBJC_CLASS___NSHTTPURLResponse),
     IVar12 == 0)) {
    _swift_bridgeObjectRelease(uVar7);
  }
  else {
    _objc_msgSend(IVar10,"lock");
    self = *(ID *)(unaff_x20 + lVar4);
    _objc_msgSend(IVar10,"unlock");
    if (self == 0) {
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar13,1,1,lVar4);
      lVar5 = local_e8;
      lVar4 = local_f0;
    }
    else {
      IVar10 = _objc_msgSend(self,"currentRequest");
      lVar5 = local_e8;
      if (IVar10 != 0) {
        __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
                  (lVar14,IVar10);
      }
      lVar4 = local_f0;
      lVar9 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar14,IVar10 == 0,1,lVar9);
      FUN_10035edcc(lVar14,lVar13);
    }
    FUN_100363c40(0);
    lVar9 = _TtC10Filepicker17FilePickerRequest::error;
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker17FilePickerRequest::error,auStack_98,0,0);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar9);
    _swift_errorRetain(uVar11);
    FUN_100364220(lVar4,IVar12,lVar13,local_100,uVar7,uVar11);
    _swift_bridgeObjectRelease(uVar7);
    _swift_errorRelease(uVar11);
    FUN_100040bb4(lVar13,&DAT_100a888f0,&DAT_10081cb80);
    lVar13 = lVar4;
    (**(code **)(local_f8 + 0x30))(lVar4,1,lVar5);
    lVar9 = local_108;
    if ((int)lVar13 == 1) {
      FUN_100040bb4(lVar4,&DAT_100a88a70,&DAT_10081cd40);
    }
    else {
      FUN_100363dc4(lVar4,local_108);
      lVar4 = _TtC10Filepicker14FilePickerTask::status;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_b0,1,0);
      *(undefined8 *)(unaff_x20 + lVar4) = 5;
      lVar4 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
      _swift_beginAccess(lVar4,auStack_c8,0,0);
      lVar13 = lVar4;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar13 != 0) {
        lVar4 = *(long *)(lVar4 + 8);
        _swift_getObjectType();
        (**(code **)(lVar4 + 0x20))();
        _swift_unknownObjectRelease(lVar13);
      }
      lVar4 = _TtC10Filepicker14FilePickerTask::objCDelegate;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,auStack_e0,0,0);
      IVar10 = unaff_x20 + lVar4;
      _swift_unknownObjectWeakLoadStrong();
      if (IVar10 != 0) {
        puVar3 = &DAT_100a88a78;
        FUN_100005c90(&DAT_100a88a78,FUN_100365888,&TargetProtocolConformanceDescriptor_10081cdc0);
        _swift_allocError(lVar5,puVar3,0,0);
        FUN_1000a2210(lVar9);
        lVar4 = lVar5;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar5);
        _swift_errorRelease(lVar5);
        _objc_msgSend(IVar10,"filePickerTask:didFailedWithError:",unaff_x20,lVar4);
        _swift_unknownObjectRelease(IVar10);
      }
      FUN_100363d88(lVar9);
    }
  }
  return;
}

