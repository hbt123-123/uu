// rea decompile_all
// name: FUN_1002f24d4
// address: 0x1002f24d4
// body: available
// range: 0x1002f24d4-0x1002f2be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f24d4(undefined8 param_1,ID param_2,ID param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  ulong local_100;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar2 = 0;
  FUN_100277ad0();
  lVar12 = *(long *)(lVar2 + -8);
  uVar5 = (long)&local_100 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a846d8;
  local_100 = uVar5;
  FUN_100004bb4(&DAT_100a846d8,&DAT_100818ff0);
  lVar7 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  uVar13 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = uVar5 - uVar13;
  lVar17 = lVar18 - uVar13;
  puVar16 = (ulong *)(lVar17 - uVar13);
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_a8,0,0);
  FUN_10007f314(unaff_x20 + lVar7,auStack_90,&DAT_100a82c40,&DAT_100817200);
  if (local_78 == 0) {
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_90,auStack_d0);
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_d0,local_b8);
    (**(code **)(lStack_b0 + 0x18))(param_1,param_2,param_3,local_b8,lStack_b0);
    FUN_10003f094(auStack_d0);
  }
  IVar4 = _objc_msgSend(param_3,"protectionSpace");
  pcVar8 = "authenticationMethod";
  IVar4 = _objc_msgSend(IVar4,"authenticationMethod");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = *(ulong *)PTR__NSURLAuthenticationMethodHTTPBasic_1009951e8;
  pcVar9 = pcVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if ((uVar5 == IVar4) && (pcVar9 == pcVar8)) {
LAB_1002f26bc:
    _swift_bridgeObjectRelease(pcVar8);
    pcVar8 = pcVar9;
LAB_1002f26f8:
    _swift_bridgeObjectRelease(pcVar8);
    IVar4 = _objc_msgSend(param_3,"previousFailureCount");
    if (IVar4 == 0) {
      lVar7 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
      lVar6 = lVar7;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 == 0) {
        param_3 = 0;
        uVar5 = 1;
      }
      else {
        lVar15 = *(long *)(lVar7 + 8);
        lVar7 = lVar6;
        _swift_getObjectType();
        IVar4 = _objc_msgSend(param_3,"protectionSpace");
        param_3 = param_2;
        (**(code **)(lVar15 + 0x38))(param_2,IVar4,lVar7,lVar15);
        _swift_unknownObjectRelease(lVar6);
        uVar5 = (ulong)(param_3 == 0);
      }
    }
    else {
      param_3 = 0;
      uVar5 = 3;
    }
    iVar1 = *(int *)(puVar3 + 0x40);
    pcVar14 = *(code **)(lVar12 + 0x38);
  }
  else {
    pcVar10 = pcVar9;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar9);
    if ((uVar5 & 1) != 0) goto LAB_1002f26f8;
    uVar5 = *(ulong *)PTR__NSURLAuthenticationMethodHTTPDigest_1009951f0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar5 == IVar4) && (pcVar9 = pcVar10, pcVar10 == pcVar8)) goto LAB_1002f26bc;
    pcVar11 = pcVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar10);
    if ((uVar5 & 1) != 0) goto LAB_1002f26f8;
    uVar5 = *(ulong *)PTR__NSURLAuthenticationMethodNTLM_1009951f8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    pcVar9 = pcVar11;
    if ((uVar5 == IVar4) && (pcVar11 == pcVar8)) goto LAB_1002f26bc;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar11);
    if ((uVar5 & 1) != 0) goto LAB_1002f26f8;
    uVar5 = *(ulong *)PTR__NSURLAuthenticationMethodNegotiate_100995200;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar5 == IVar4) && (pcVar9 == pcVar8)) goto LAB_1002f26bc;
    pcVar10 = pcVar9;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar9);
    if ((uVar5 & 1) != 0) goto LAB_1002f26f8;
    uVar5 = *(ulong *)PTR__NSURLAuthenticationMethodServerTrust_100995208;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar5 == IVar4) && (pcVar10 == pcVar8)) {
      _swift_bridgeObjectRelease(pcVar8);
      pcVar8 = pcVar10;
LAB_1002f2a48:
      _swift_bridgeObjectRelease(pcVar8);
      uVar5 = lVar17 + *(int *)(puVar3 + 0x40);
      FUN_1002f2c34();
      goto LAB_1002f28e0;
    }
    pcVar9 = pcVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar10);
    if ((uVar5 & 1) != 0) goto LAB_1002f2a48;
    uVar5 = *(ulong *)PTR__NSURLAuthenticationMethodClientCertificate_1009951e0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar5 == IVar4) && (pcVar9 == pcVar8)) {
      _swift_bridgeObjectRelease(pcVar8);
      _swift_bridgeObjectRelease(pcVar9);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(pcVar8);
      _swift_bridgeObjectRelease(pcVar9);
      if ((uVar5 & 1) == 0) {
        uVar5 = 1;
        (**(code **)(lVar12 + 0x38))(lVar17 + *(int *)(puVar3 + 0x40),1,1,lVar2);
        param_3 = 0;
        goto LAB_1002f28e0;
      }
    }
    IVar4 = _objc_msgSend(param_3,"previousFailureCount");
    if (IVar4 == 0) {
      lVar7 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
      lVar6 = lVar7;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 == 0) {
        param_3 = 0;
        uVar5 = 1;
      }
      else {
        lVar15 = *(long *)(lVar7 + 8);
        lVar7 = lVar6;
        _swift_getObjectType();
        IVar4 = _objc_msgSend(param_3,"protectionSpace");
        param_3 = param_2;
        (**(code **)(lVar15 + 0x38))(param_2,IVar4,lVar7,lVar15);
        _swift_unknownObjectRelease(lVar6);
        uVar5 = (ulong)(param_3 == 0);
      }
    }
    else {
      param_3 = 0;
      uVar5 = 3;
    }
    iVar1 = *(int *)(puVar3 + 0x40);
    pcVar14 = *(code **)(lVar12 + 0x38);
  }
  (*pcVar14)(lVar17 + iVar1,1,1,lVar2);
LAB_1002f28e0:
  iVar1 = *(int *)(puVar3 + 0x40);
  *puVar16 = uVar5;
  puVar16[1] = param_3;
  FUN_1002f2be4(lVar17 + iVar1,(long)puVar16 + (long)iVar1);
  FUN_10007f314(puVar16,lVar18,&DAT_100a846d8,&DAT_100818ff0);
  lVar17 = (long)*(int *)(puVar3 + 0x40);
  lVar7 = lVar18 + lVar17;
  (**(code **)(lVar12 + 0x30))(lVar7,1,lVar2);
  uVar13 = local_100;
  if ((int)lVar7 == 1) {
    FUN_100040bb4(lVar18 + lVar17,&DAT_100a82460,&DAT_1008175c0);
  }
  else {
    FUN_10026531c(lVar18 + lVar17,local_100);
    lVar7 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
    lVar2 = lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar12 = *(long *)(lVar7 + 8);
      lVar7 = lVar2;
      _swift_getObjectType();
      IVar4 = param_2;
      (**(code **)(lVar12 + 0x20))(param_2,lVar7,lVar12);
      _swift_unknownObjectRelease(lVar2);
      if (IVar4 != 0) {
        FUN_1002cada0(param_2,uVar13);
        _swift_release(IVar4);
      }
    }
    FUN_1000d27dc(uVar13,FUN_100277ad0);
  }
  (*param_4)(uVar5,param_3);
  FUN_100040bb4(puVar16,&DAT_100a846d8,&DAT_100818ff0);
  return;
}

