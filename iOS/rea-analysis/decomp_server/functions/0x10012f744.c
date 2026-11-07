// rea decompile_all
// name: FUN_10012f744
// address: 0x10012f744
// body: available
// range: 0x10012f744-0x10012ff0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10012f744(undefined8 param_1,ID param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar14;
  undefined8 unaff_x20;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  undefined1 auStack_f0 [16];
  long alStack_e0 [3];
  undefined1 auStack_c8 [8];
  undefined8 auStack_c0 [2];
  long local_b0;
  long local_a8;
  ID local_a0;
  long local_90;
  undefined *local_88;
  
  _swift_getObjectType();
  puVar2 = &DAT_100a79df0;
  FUN_100004bb4(&DAT_100a79df0,&DAT_10080e9d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar22 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar22;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar22 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar22 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar16 - extraout_x12_01;
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar23 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar23 - extraout_x12_02;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,
                      "URLSession:task:didFinishCollectingMetrics:",param_1,param_2,param_3);
  local_a0 = param_2;
  IVar3 = _objc_msgSend(param_2,"currentRequest");
  local_b0 = lVar23;
  if (IVar3 != 0) {
    __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
              (lVar16);
  }
  lVar23 = 0;
  __s10Foundation10URLRequestVMa();
  lVar20 = *(long *)(lVar23 + -8);
  pcVar24 = *(code **)(lVar20 + 0x38);
  (*pcVar24)(lVar16,IVar3 == 0,1,lVar23);
  FUN_1001303f8(lVar16,lVar15);
  pcVar17 = *(code **)(lVar20 + 0x30);
  lVar16 = lVar15;
  (*pcVar17)(lVar15,1,lVar23);
  if ((int)lVar16 == 1) {
    FUN_100040bb4(lVar15,&DAT_100a79df0,&DAT_10080e9d0);
  }
  else {
    __s10Foundation10URLRequestV3urlAA3URLVSgvg(lVar18);
    (**(code **)(lVar20 + 8))(lVar15,lVar23);
    lVar15 = 0;
    __s10Foundation3URLVMa();
    lVar25 = *(long *)(lVar15 + -8);
    lVar16 = 1;
    local_90 = lVar18;
    (**(code **)(lVar25 + 0x30))(lVar18,1,lVar15);
    if ((int)local_90 == 1) {
      FUN_100040bb4(lVar18,&DAT_100a766c8,&DAT_10080b1d0);
    }
    else {
      __s10Foundation3URLV4hostSSSgvg();
      (**(code **)(lVar25 + 8))(lVar18,lVar15);
      if (lVar16 != 0) goto LAB_10012fae8;
    }
  }
  IVar3 = _objc_msgSend(local_a0,"originalRequest");
  lVar15 = local_a8;
  if (IVar3 != 0) {
    __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
              (local_a8);
  }
  (*pcVar24)(lVar15,IVar3 == 0,1,lVar23);
  FUN_1001303f8(lVar15,lVar22);
  lVar16 = lVar22;
  (*pcVar17)(lVar22,1,lVar23);
  lVar15 = local_b0;
  if ((int)lVar16 == 1) {
    puVar2 = &DAT_100a79df0;
    puVar7 = &DAT_10080e9d0;
    lVar15 = lVar22;
LAB_10012fac0:
    FUN_100040bb4(lVar15,puVar2,puVar7);
  }
  else {
    __s10Foundation10URLRequestV3urlAA3URLVSgvg(local_b0);
    (**(code **)(lVar20 + 8))(lVar22,lVar23);
    lVar22 = 0;
    __s10Foundation3URLVMa();
    lVar23 = *(long *)(lVar22 + -8);
    lVar16 = 1;
    local_90 = lVar15;
    (**(code **)(lVar23 + 0x30))(lVar15,1,lVar22);
    if ((int)local_90 == 1) {
      puVar2 = &DAT_100a766c8;
      puVar7 = &DAT_10080b1d0;
      goto LAB_10012fac0;
    }
    __s10Foundation3URLV4hostSSSgvg();
    (**(code **)(lVar23 + 8))(lVar15,lVar22);
    if (lVar16 != 0) {
      _swift_bridgeObjectRelease(0);
      goto LAB_10012fae8;
    }
  }
  _swift_bridgeObjectRelease_n(0,2);
  lVar16 = -0x1900000000000000;
  local_90 = 0x6e776f6e6b6e75;
LAB_10012fae8:
  uVar4 = _objc_msgSend(param_3,"transactionMetrics");
  uVar5 = 0;
  FUN_100130448();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  uVar26 = uVar4 & 0xffffffffffffff8;
  local_a0 = lVar16;
  if (uVar4 >> 0x3e == 0) {
    uVar21 = *(ulong *)(uVar26 + 0x10);
  }
  else {
    uVar21 = uVar26;
    if ((long)uVar4 < 0) {
      uVar21 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar14 = 0;
  do {
    uVar13 = uVar14;
    if (uVar21 == uVar13) break;
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar26 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10012fefc);
        (*pcVar17)();
      }
      IVar3 = *(ID *)(uVar4 + uVar13 * 8 + 0x20);
    }
    else {
      IVar3 = uVar13;
      FUN_10016a6f0(uVar13,uVar4);
    }
    if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10012fbb0);
      (*pcVar17)();
    }
    uVar5 = 0;
    IVar3 = _objc_msgSend(IVar3,"isProxyConnection");
    uVar14 = uVar13 + 1;
  } while ((int)IVar3 == 0);
  local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar14 = 0;
  while( true ) {
    if (uVar21 == uVar14) {
      _swift_bridgeObjectRelease(uVar4);
      puVar2 = local_88;
      FUN_100074f60();
      _swift_bridgeObjectRelease(local_88);
      puVar7 = puVar2;
      FUN_100045dc0();
      _swift_bridgeObjectRelease(puVar2);
      puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
      lVar22 = *(long *)(puVar7 + 0x10);
      if (lVar22 == 0) {
        _swift_bridgeObjectRelease(puVar7);
        uVar12 = 0xe400000000000000;
        uVar10 = 0x656e6f6e;
      }
      else {
        FUN_10006fae0(0,lVar22,0);
        puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        do {
          puVar8 = PTR___sSiN_100995968;
          puVar11 = puVar9;
          __ss23CustomStringConvertibleP11descriptionSSvgTj();
          uVar5 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
            FUN_10006fae0(1 < *(ulong *)(puVar2 + 0x18),uVar5 + 1,1);
          }
          *(ulong *)(puVar2 + 0x10) = uVar5 + 1;
          *(undefined **)(puVar2 + uVar5 * 0x10 + 0x20) = puVar8;
          *(undefined **)(puVar2 + uVar5 * 0x10 + 0x28) = puVar11;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        _swift_bridgeObjectRelease(puVar7);
        puVar7 = &DAT_100a756e8;
        FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
        puVar9 = puVar7;
        FUN_10013048c();
        uVar10 = 0x2c;
        uVar12 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar7,puVar9);
        _swift_release(puVar2);
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      IVar3 = local_a0;
      *(long *)(lVar18 + -0x30) = local_90;
      *(ID *)(lVar18 + -0x28) = IVar3;
      *(undefined8 *)(lVar18 + -0x20) = unaff_x20;
      *(bool *)(lVar18 + -0x18) = uVar21 != uVar13;
      *(undefined8 *)(lVar18 + -0x10) = uVar10;
      *(undefined8 *)(lVar18 + -8) = uVar12;
      FUN_1003fb45c(FUN_1001304dc,lVar18 + -0x40,0xd0000000000000a2,0x800000010088f670,
                    0xd000000000000027,0x800000010088f720,0x44,0xb);
      _swift_bridgeObjectRelease(IVar3);
      _swift_bridgeObjectRelease(uVar12);
      return;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar26 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10012fef8);
        (*pcVar17)();
      }
      uVar6 = *(ulong *)(uVar4 + uVar14 * 8 + 0x20);
    }
    else {
      uVar6 = uVar14;
      uVar5 = uVar4;
      FUN_10016a6f0();
    }
    if (SCARRY8(uVar14,1)) break;
    uVar19 = uVar14 + 1;
    __sSo34NSURLSessionTaskTransactionMetricsC10FoundationE10remotePortSiSgvg();
    uVar14 = uVar14 + 1;
    if ((uVar5 & 1) == 0) {
      puVar2 = local_88;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = local_88;
      if (((ulong)puVar2 & 1) == 0) {
        uVar5 = *(long *)(local_88 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        FUN_100034a14(0,uVar5,1,local_88);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      uVar14 = uVar1 + 1;
      local_88 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        local_88 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        uVar5 = uVar14;
        FUN_100034a14(local_88,uVar14,1,puVar7);
      }
      *(ulong *)(local_88 + 0x10) = uVar14;
      *(ulong *)(local_88 + uVar1 * 8 + 0x20) = uVar6;
      uVar14 = uVar19;
    }
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10012fef4);
  (*pcVar17)();
}

