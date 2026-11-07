// rea decompile_all
// name: FUN_1002f62dc
// address: 0x1002f62dc
// body: available
// range: 0x1002f62dc-0x1002f69f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f62dc(undefined8 param_1,ID param_2,ID param_3,long param_4,long param_5)

{
  int iVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  ulong uStack_110;
  ID local_108 [4];
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar3 = 0;
  local_e0 = param_5;
  FUN_100277ad0();
  lVar13 = *(long *)(lVar3 + -8);
  lVar19 = (long)&uStack_110 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a846d8;
  local_108[1] = lVar19;
  FUN_100004bb4(&DAT_100a846d8,&DAT_100818ff0);
  lVar8 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  uVar14 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = lVar19 - uVar14;
  local_d8 = lVar19 - uVar14;
  puVar18 = (ulong *)(local_d8 - uVar14);
  local_e8 = puVar4;
  _swift_beginAccess(param_4 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_a8,0,0);
  local_108[3] = param_4;
  FUN_10007f314(param_4 + lVar8,auStack_90,&DAT_100a82c40,&DAT_100817200);
  local_108[2] = param_2;
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
  IVar5 = _objc_msgSend(param_3,"protectionSpace");
  pcVar9 = "authenticationMethod";
  IVar5 = _objc_msgSend(IVar5,"authenticationMethod");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar14 = *(ulong *)PTR__NSURLAuthenticationMethodHTTPBasic_1009951e8;
  pcVar10 = pcVar9;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if ((uVar14 == IVar5) && (puVar4 = local_e8, pcVar10 == pcVar9)) {
LAB_1002f64dc:
    _swift_bridgeObjectRelease(pcVar9);
    pcVar9 = pcVar10;
LAB_1002f6520:
    _swift_bridgeObjectRelease(pcVar9);
    IVar5 = _objc_msgSend(param_3,"previousFailureCount");
    if (IVar5 == 0) {
      lVar8 = local_108[3] + _TtC9Alamofire15SessionDelegate::stateProvider;
      lVar17 = lVar8;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar17 == 0) {
        IVar5 = 0;
        uVar14 = 1;
      }
      else {
        lVar16 = *(long *)(lVar8 + 8);
        lVar8 = lVar17;
        _swift_getObjectType();
        IVar6 = _objc_msgSend(param_3,"protectionSpace");
        IVar5 = local_108[2];
        (**(code **)(lVar16 + 0x38))(local_108[2],IVar6,lVar8,lVar16);
        _swift_unknownObjectRelease(lVar17);
        uVar14 = (ulong)(IVar5 == 0);
      }
    }
    else {
      IVar5 = 0;
      uVar14 = 3;
    }
    iVar1 = *(int *)(puVar4 + 0x40);
    pcVar15 = *(code **)(lVar13 + 0x38);
  }
  else {
    pcVar11 = pcVar10;
    local_108[0] = param_3;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar10);
    param_3 = local_108[0];
    puVar4 = local_e8;
    if ((uVar14 & 1) != 0) goto LAB_1002f6520;
    uVar14 = *(ulong *)PTR__NSURLAuthenticationMethodHTTPDigest_1009951f0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar14 == IVar5) &&
       (pcVar10 = pcVar11, param_3 = local_108[0], puVar4 = local_e8, pcVar11 == pcVar9))
    goto LAB_1002f64dc;
    pcVar12 = pcVar11;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar11);
    puVar4 = local_e8;
    param_3 = local_108[0];
    if ((uVar14 & 1) != 0) goto LAB_1002f6520;
    uVar14 = *(ulong *)PTR__NSURLAuthenticationMethodNTLM_1009951f8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    pcVar10 = pcVar12;
    if ((uVar14 == IVar5) && (param_3 = local_108[0], pcVar12 == pcVar9)) goto LAB_1002f64dc;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar12);
    param_3 = local_108[0];
    if ((uVar14 & 1) != 0) goto LAB_1002f6520;
    uVar14 = *(ulong *)PTR__NSURLAuthenticationMethodNegotiate_100995200;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar14 == IVar5) && (param_3 = local_108[0], pcVar10 == pcVar9)) goto LAB_1002f64dc;
    pcVar11 = pcVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar10);
    param_3 = local_108[0];
    if ((uVar14 & 1) != 0) goto LAB_1002f6520;
    uVar14 = *(ulong *)PTR__NSURLAuthenticationMethodServerTrust_100995208;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar14 == IVar5) && (pcVar11 == pcVar9)) {
      _swift_bridgeObjectRelease(pcVar9);
      pcVar9 = pcVar11;
LAB_1002f687c:
      _swift_bridgeObjectRelease(pcVar9);
      lVar8 = local_d8;
      uVar14 = local_d8 + *(int *)(puVar4 + 0x40);
      IVar5 = local_108[0];
      FUN_1002f2c34();
      goto LAB_1002f661c;
    }
    pcVar10 = pcVar11;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar11);
    if ((uVar14 & 1) != 0) goto LAB_1002f687c;
    uVar14 = *(ulong *)PTR__NSURLAuthenticationMethodClientCertificate_1009951e0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if ((uVar14 == IVar5) && (pcVar10 == pcVar9)) {
      _swift_bridgeObjectRelease(pcVar9);
      _swift_bridgeObjectRelease(pcVar10);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(pcVar9);
      _swift_bridgeObjectRelease(pcVar10);
      lVar8 = local_d8;
      if ((uVar14 & 1) == 0) {
        uVar14 = 1;
        (**(code **)(lVar13 + 0x38))(local_d8 + *(int *)(puVar4 + 0x40),1,1,lVar3);
        IVar5 = 0;
        goto LAB_1002f661c;
      }
    }
    IVar5 = local_108[0];
    IVar6 = _objc_msgSend(local_108[0],"previousFailureCount");
    if (IVar6 == 0) {
      lVar8 = local_108[3] + _TtC9Alamofire15SessionDelegate::stateProvider;
      lVar17 = lVar8;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar17 == 0) {
        IVar5 = 0;
        uVar14 = 1;
      }
      else {
        lVar16 = *(long *)(lVar8 + 8);
        lVar8 = lVar17;
        _swift_getObjectType();
        IVar6 = _objc_msgSend(IVar5,"protectionSpace");
        IVar5 = local_108[2];
        (**(code **)(lVar16 + 0x38))(local_108[2],IVar6,lVar8,lVar16);
        _swift_unknownObjectRelease(lVar17);
        uVar14 = (ulong)(IVar5 == 0);
      }
    }
    else {
      IVar5 = 0;
      uVar14 = 3;
    }
    iVar1 = *(int *)(puVar4 + 0x40);
    pcVar15 = *(code **)(lVar13 + 0x38);
  }
  lVar8 = local_d8;
  (*pcVar15)(local_d8 + iVar1,1,1,lVar3);
LAB_1002f661c:
  iVar1 = *(int *)(puVar4 + 0x40);
  *puVar18 = uVar14;
  puVar18[1] = IVar5;
  FUN_1002f2be4(lVar8 + iVar1,(long)puVar18 + (long)iVar1);
  FUN_10007f314(puVar18,lVar19,&DAT_100a846d8,&DAT_100818ff0);
  lVar17 = (long)*(int *)(puVar4 + 0x40);
  lVar8 = lVar19 + lVar17;
  (**(code **)(lVar13 + 0x30))(lVar8,1,lVar3);
  IVar6 = local_108[1];
  if ((int)lVar8 == 1) {
    FUN_100040bb4(lVar19 + lVar17,&DAT_100a82460,&DAT_1008175c0);
  }
  else {
    FUN_10026531c(lVar19 + lVar17,local_108[1]);
    lVar8 = local_108[3] + _TtC9Alamofire15SessionDelegate::stateProvider;
    lVar3 = lVar8;
    _swift_unknownObjectWeakLoadStrong();
    IVar2 = local_108[2];
    if (lVar3 != 0) {
      lVar13 = *(long *)(lVar8 + 8);
      lVar8 = lVar3;
      _swift_getObjectType();
      IVar7 = IVar2;
      (**(code **)(lVar13 + 0x20))(IVar2,lVar8,lVar13);
      _swift_unknownObjectRelease(lVar3);
      if (IVar7 != 0) {
        FUN_1002cada0(IVar2,IVar6);
        _swift_release(IVar7);
      }
    }
    FUN_1000d27dc(IVar6,FUN_100277ad0);
  }
  (**(code **)(local_e0 + 0x10))(local_e0,uVar14,IVar5);
  FUN_100040bb4(puVar18,&DAT_100a846d8,&DAT_100818ff0);
  return;
}

