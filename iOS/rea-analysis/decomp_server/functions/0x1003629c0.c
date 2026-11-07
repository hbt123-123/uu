// rea decompile_all
// name: FUN_1003629c0
// address: 0x1003629c0
// body: available
// range: 0x1003629c0-0x100362ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100362c48) */

void FUN_1003629c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ID *pIVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ID IVar17;
  long unaff_x20;
  ID IVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 local_b0 [4];
  undefined1 auStack_90 [24];
  
  if (param_3 != 0) {
    lVar15 = param_3;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
    FUN_100363c40();
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,
                        "urlSession:task:didCompleteWithError:",param_1,param_2,lVar15);
    _swift_errorRetain(param_3);
    FUN_100363628(param_3);
    _swift_errorRelease(param_3);
    return;
  }
  FUN_100363c40();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"urlSession:task:didCompleteWithError:"
                      ,param_1,param_2,0);
  IVar17 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskLock);
  _objc_msgSend(IVar17,"lock");
  IVar18 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_task);
  _objc_msgSend(IVar17,"unlock");
  if (((IVar18 != 0) && (IVar17 = _objc_msgSend(IVar18,"response"), IVar17 != 0)) &&
     (_swift_dynamicCastObjCClass(IVar17,&_OBJC_CLASS___NSHTTPURLResponse), IVar17 != 0)) {
    IVar18 = IVar17;
    FUN_10035fba4();
    IVar7 = _objc_msgSend(IVar17,"statusCode");
    lVar12 = *(long *)(IVar18 + 0x10);
    lVar15 = 0x20;
    do {
      if (lVar12 == 0) {
        _swift_bridgeObjectRelease(IVar18);
        goto LAB_100362c7c;
      }
      pIVar1 = (ID *)(IVar18 + lVar15);
      lVar15 = lVar15 + 8;
      lVar12 = lVar12 + -1;
    } while (*pIVar1 != IVar7);
    _swift_bridgeObjectRelease(IVar18);
    plVar2 = (long *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::responseData);
    _swift_beginAccess(plVar2,auStack_90,0,0);
    lVar15 = *plVar2;
    uVar3 = (uint)((ulong)plVar2[1] >> 0x20);
    uVar16 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar13 = (ulong)plVar2[1] >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)((ulong)lVar15 >> 0x20);
        if (SBORROW4(iVar14,(int)lVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100362eec);
          (*pcVar6)();
        }
        uVar13 = (ulong)(iVar14 - (int)lVar15);
      }
    }
    else {
      if (uVar16 != 2) goto LAB_100362c7c;
      uVar13 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
      if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100362bac);
        (*pcVar6)();
      }
    }
    if (0 < (long)uVar13) {
      uVar8 = 0;
      __s10Foundation11JSONDecoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONDecoderCACycfc();
      uVar9 = 0;
      FUN_10036e994(0);
      lVar15 = *plVar2;
      lVar12 = plVar2[1];
      FUN_100008184(lVar15,lVar12);
      puVar10 = &DAT_100a88a80;
      FUN_100005c90(&DAT_100a88a80,FUN_10036e994,&TargetProtocolConformanceDescriptor_10081d040);
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (local_b0,uVar9,lVar15,lVar12,uVar9,puVar10);
      FUN_100006cdc(lVar15,lVar12);
      _swift_release(uVar8);
      lVar12 = _TtC10Filepicker14FilePickerTask::responseBody;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::responseBody,local_b0,1,0);
      *(undefined8 *)(unaff_x20 + lVar12) = local_b0[0];
      lVar15 = _TtC10Filepicker14FilePickerTask::status;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_c8,1,0);
      *(undefined8 *)(unaff_x20 + lVar15) = 2;
      lVar15 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
      _swift_beginAccess(lVar15,auStack_e0,0,0);
      lVar11 = lVar15;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar11 != 0) {
        lVar20 = *(long *)(unaff_x20 + lVar12);
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100362ef0);
          (*pcVar6)();
        }
        lVar19 = *(long *)(lVar15 + 8);
        lVar15 = lVar11;
        _swift_getObjectType();
        IVar18 = _objc_msgSend(IVar17,"allHeaderFields");
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                  (IVar18,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                   PTR___ss11AnyHashableVSHsWP_100995ad8);
        (**(code **)(lVar19 + 8))(unaff_x20,lVar20,IVar18,lVar15,lVar19);
        _swift_bridgeObjectRelease(IVar18);
        _swift_unknownObjectRelease(lVar11);
      }
      lVar15 = _TtC10Filepicker14FilePickerTask::objCDelegate;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,auStack_f8,0,0);
      IVar18 = unaff_x20 + lVar15;
      _swift_unknownObjectWeakLoadStrong();
      if (IVar18 == 0) {
        return;
      }
      lVar15 = *(long *)(unaff_x20 + lVar12);
      if (lVar15 != 0) {
        IVar7 = _objc_msgSend(IVar17,"allHeaderFields");
        puVar5 = PTR___sypN_100995e88;
        puVar4 = PTR___ss11AnyHashableVSHsWP_100995ad8;
        puVar10 = PTR___ss11AnyHashableVN_100995ad0;
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                  (IVar7,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                   PTR___ss11AnyHashableVSHsWP_100995ad8);
        IVar17 = IVar7;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(IVar7,puVar10,puVar5 + 8,puVar4);
        _swift_bridgeObjectRelease(IVar7);
        _objc_msgSend(IVar18,"filePickerTask:didUploadSuccessWithResponse:responseHeader:",unaff_x20
                      ,lVar15,IVar17);
        _swift_unknownObjectRelease(IVar18);
        return;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100362ef4);
      (*pcVar6)();
    }
  }
LAB_100362c7c:
  FUN_10036312c();
  return;
}

