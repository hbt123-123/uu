// rea decompile_all
// name: FUN_10023c104
// address: 0x10023c104
// body: available
// range: 0x10023c104-0x10023d5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023d5b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010023d5b8) */

ulong FUN_10023c104(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  void *pvVar15;
  char *pcVar16;
  char *pcVar17;
  ulong uVar18;
  char *pcVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  double dVar24;
  ID local_240;
  undefined *local_238;
  long local_230;
  ulong local_228;
  ulong local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  ID local_1f0;
  undefined *local_1e8;
  char *local_1e0;
  code *local_1d8;
  undefined *puStack_1d0;
  code *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  local_230 = *(long *)(uVar2 - 8);
  local_228 = uVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_230 + 0x40));
  uVar2 = (long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar3 = 0;
  local_220 = uVar2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_200 = *(long *)(IVar3 - 8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_200 + 0x40));
  lVar20 = uVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_210 = lVar20;
  __s8Dispatch0A3QoSVMa();
  local_208 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_208 + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_218 = lVar20;
  __s10Foundation4DateVMa();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1f8 = lVar4;
  local_1f0 = IVar3;
  if (param_2 == 0) {
    puVar7 = &DAT_100a7f930;
    FUN_100004bb4(&DAT_100a7f930,&DAT_100814000);
    _swift_initStackObject();
    dVar24 = 4.94065645841247e-324;
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = 0x7374;
    *(undefined8 *)(puVar7 + 0x28) = 0xe200000000000000;
    __s10Foundation4DateVACycfC(lVar20);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar21 + 8))(lVar20,lVar5);
    if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d598);
      (*pcVar1)();
    }
    if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d5a4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d5b0);
      (*pcVar1)();
    }
    *(long *)(puVar7 + 0x30) = (long)dVar24;
    puVar9 = puVar7;
    FUN_100234634();
    _swift_setDeallocating(puVar7);
    FUN_100040bb4(puVar7 + 0x20,&DAT_100a7f938,&DAT_100814008);
    IVar3 = 0;
    FUN_100241b14();
    _objc_allocWithZone();
    IVar3 = _objc_msgSend(IVar3,"init");
    puVar7 = puVar9;
    FUN_100233230(puVar9);
    puVar10 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(puVar7);
    local_1e8 = (undefined *)0x0;
    pcVar16 = "dataWithJSONObject:options:error:";
    IVar6 = NSJSONSerialization::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                       puVar10,0,&local_1e8);
    if (IVar6 == 0) {
      puVar7 = local_1e8;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_1e8);
      _swift_willThrow(0);
      _swift_errorRelease(puVar7);
LAB_10023d1ac:
      uVar23 = 0;
      local_220 = 0xc000000000000000;
    }
    else {
      local_238 = puVar9;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      uVar2 = local_220;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(local_220,0);
      IVar8 = IVar6;
      pcVar19 = pcVar16;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar6,pcVar16,uVar2);
      if (pcVar19 == (char *)0x0) {
        FUN_100006cdc(IVar6,pcVar16);
        puVar9 = local_238;
        goto LAB_10023d1ac;
      }
      FUN_100242668();
      IVar11 = IVar8;
      FUN_100241bf8();
      _swift_bridgeObjectRelease(IVar8);
      uVar22 = *(undefined8 *)(IVar11 + 0x10);
      puVar7 = &_OBJC_CLASS___NSData;
      _objc_allocWithZone();
      IVar8 = _objc_msgSend((ID)puVar7,"initWithBytes:length:",IVar11 + 0x20,uVar22);
      pcVar17 = "base64EncodedStringWithOptions:";
      puVar7 = (undefined *)_objc_msgSend(IVar8,"base64EncodedStringWithOptions:",0);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      local_240 = IVar3;
      _swift_bridgeObjectRelease(pcVar19);
      _swift_bridgeObjectRelease(IVar11);
      uVar22 = 0;
      local_1e8 = puVar7;
      local_1e0 = pcVar17;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(uVar2,0);
      FUN_10021e96c();
      uVar18 = 0;
      uVar23 = uVar2;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (uVar2,0,PTR___sSSN_1009957f8,uVar22);
      FUN_100006cdc(IVar6,pcVar16);
      (**(code **)(local_230 + 8))(uVar2,local_228);
      _swift_bridgeObjectRelease(pcVar17);
      puVar9 = local_238;
      local_220 = uVar18;
      if (0xe < uVar18 >> 0x3c) goto LAB_10023d1ac;
    }
    local_1e8 = (undefined *)0x0;
    local_1e0 = (char *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x24);
    _swift_bridgeObjectRelease(local_1e0);
    puVar10 = PTR___sSiN_100995968;
    puVar7 = PTR___sSSN_1009957f8;
    local_1e8 = (undefined *)0xd000000000000022;
    local_1e0 = (char *)0x80000001008a7600;
    puVar14 = puVar9;
    puVar12 = PTR___sSSN_1009957f8;
    __sSD16debugDescriptionSSvg
              (puVar9,PTR___sSSN_1009957f8,PTR___sSiN_100995968,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(puVar14,puVar12);
    _swift_bridgeObjectRelease(puVar12);
    pcVar16 = local_1e0;
    puVar9 = local_1e8;
    local_1e8 = (undefined *)0x0;
    local_1e0 = (char *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar3 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a74d0);
    pcVar19 = "lastPathComponent";
    IVar3 = _objc_msgSend(IVar3,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
    __sSS6appendyySSF(IVar3,pcVar19);
    _swift_bridgeObjectRelease(pcVar19);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_1b8 = (undefined *)0x3c;
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (puVar10,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0x6b736174,0xe400000000000000);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_1b8 = puVar9;
    uStack_1b0 = pcVar16;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_1b8,&local_1e8,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(pcVar16);
    pcVar16 = local_1e0;
    puVar9 = local_1e8;
    puVar7 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) goto LAB_10023d524;
    FUN_10021e878(0);
    _swift_retain(puVar7);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_1009a7388;
    _swift_allocObject(&DAT_1009a7388,0x30,7);
    *(long *)(puVar10 + 0x10) = lVar4;
    *(undefined **)(puVar10 + 0x18) = puVar7;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    *(char **)(puVar10 + 0x28) = pcVar16;
    puStack_1d0 = &DAT_1009a73a0;
    local_1c0 = puVar10;
  }
  else {
    if (param_2 != 1) {
      puVar7 = &DAT_100a7f178;
      FUN_100004bb4(&DAT_100a7f178,&DAT_100814010);
      _swift_initStackObject();
      dVar24 = 1.48219693752374e-323;
      *(undefined8 *)(puVar7 + 0x18) = 6;
      *(undefined8 *)(puVar7 + 0x10) = 3;
      *(undefined8 *)(puVar7 + 0x20) = 0x76666469;
      puVar9 = PTR___sSSN_1009957f8;
      *(undefined8 *)(puVar7 + 0x28) = 0xe400000000000000;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      *(undefined8 *)(puVar7 + 0x38) = 0xe000000000000000;
      *(undefined **)(puVar7 + 0x48) = puVar9;
      *(undefined8 *)(puVar7 + 0x50) = 0x64695f7365746e;
      *(undefined8 *)(puVar7 + 0x58) = 0xe700000000000000;
      *(undefined8 *)(puVar7 + 0x60) = param_1;
      *(long *)(puVar7 + 0x68) = param_2;
      *(undefined **)(puVar7 + 0x78) = puVar9;
      *(undefined8 *)(puVar7 + 0x80) = 0x7374;
      *(undefined8 *)(puVar7 + 0x88) = 0xe200000000000000;
      _swift_bridgeObjectRetain(param_2);
      __s10Foundation4DateVACycfC(lVar20);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar21 + 8))(lVar20,lVar5);
      if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d59c);
        (*pcVar1)();
      }
      if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d5a8);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d5b4);
        (*pcVar1)();
      }
      *(undefined **)(puVar7 + 0xa8) = PTR___sSiN_100995968;
      *(long *)(puVar7 + 0x90) = (long)dVar24;
      puVar10 = puVar7;
      FUN_100234418();
      _swift_setDeallocating(puVar7);
      puVar9 = &DAT_100a7f180;
      FUN_100004bb4(&DAT_100a7f180,&DAT_100813c98);
      _swift_arrayDestroy(puVar7 + 0x20,3,puVar9);
      FUN_100232fdc(param_3);
      puVar7 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native(puVar10);
      local_1e8 = puVar10;
      FUN_1002379a8(param_3,FUN_10023fa68,0,puVar7,&local_1e8);
      _swift_bridgeObjectRelease(param_3);
      puVar10 = local_1e8;
      local_1e8 = (undefined *)0x0;
      local_1e0 = (char *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x25);
      _swift_bridgeObjectRelease(local_1e0);
      puVar9 = PTR___sypN_100995e88;
      puVar7 = PTR___sSSN_1009957f8;
      local_1e8 = (undefined *)0xd000000000000023;
      local_1e0 = (char *)0x80000001008a7630;
      puVar14 = PTR___sSSN_1009957f8;
      __sSD16debugDescriptionSSvg
                (puVar10,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar14);
      pcVar16 = local_1e0;
      puVar14 = local_1e8;
      local_1e8 = (undefined *)0x0;
      local_1e0 = (char *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x15);
      __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
      IVar3 = 0xd0000000000000ad;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a74d0);
      pcVar19 = "lastPathComponent";
      IVar3 = _objc_msgSend(IVar3,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
      __sSS6appendyySSF(IVar3,pcVar19);
      _swift_bridgeObjectRelease(pcVar19);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      local_1b8 = (undefined *)0x34;
      puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar12);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      __sSS6appendyySSF(0x6b736174,0xe400000000000000);
      __sSS6appendyySSF(0xa20,0xe200000000000000);
      local_1b8 = puVar14;
      uStack_1b0 = pcVar16;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_1b8,&local_1e8,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      _swift_bridgeObjectRelease(pcVar16);
      pcVar16 = local_1e0;
      puVar14 = local_1e8;
      puVar7 = DAT_100b362c0;
      lVar4 = DAT_100b362b8;
      if (DAT_100b362b8 == 0) {
        _swift_bridgeObjectRelease(local_1e0);
      }
      else {
        FUN_10021e878(0);
        puVar12 = puVar7;
        _swift_retain();
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar9 = &DAT_1009a73d8;
        local_238 = puVar12;
        _swift_allocObject(&DAT_1009a73d8,0x30,7);
        *(long *)(puVar9 + 0x10) = lVar4;
        *(undefined **)(puVar9 + 0x18) = puVar7;
        *(undefined **)(puVar9 + 0x20) = puVar14;
        *(char **)(puVar9 + 0x28) = pcVar16;
        local_1c8 = thunk_FUN_100222dd4;
        local_1e8 = PTR___NSConcreteStackBlock_100995490;
        local_1e0 = (char *)0x42000000;
        local_1d8 = FUN_1000acdb4;
        puStack_1d0 = &DAT_1009a73f0;
        local_1c0 = puVar9;
        pvVar15 = __Block_copy(&local_1e8);
        puVar9 = local_1c0;
        _swift_retain(puVar7);
        _swift_release(puVar9);
        lVar5 = local_218;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_218);
        local_1e8 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar13 = &DAT_100a7e2d0;
        FUN_100240fdc(&DAT_100a7e2d0,0xff,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar9 = &DAT_100a7e2d8;
        FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
        puVar14 = puVar9;
        FUN_10021e91c();
        IVar3 = local_1f0;
        lVar20 = local_210;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_210,&local_1e8,puVar9,puVar14,local_1f0,puVar13);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar5,lVar20,pvVar15);
        __Block_release(pvVar15);
        FUN_10007ed2c(lVar4,puVar7);
        (**(code **)(local_200 + 8))(lVar20,IVar3);
        puVar9 = PTR___sypN_100995e88;
        (**(code **)(local_208 + 8))(lVar5,local_1f8);
      }
      IVar3 = 0;
      FUN_100241b14();
      _objc_allocWithZone();
      IVar3 = _objc_msgSend(IVar3,"init");
      puVar7 = puVar10;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (puVar10,PTR___sSSN_1009957f8,puVar9 + 8,PTR___sSSSHsWP_100995808);
      _swift_release(puVar10);
      local_1e8 = (undefined *)0x0;
      pcVar16 = "dataWithJSONObject:options:error:";
      IVar6 = NSJSONSerialization::dataWithJSONObject_options_error_
                        ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                         puVar7,0,&local_1e8);
      if (IVar6 == 0) {
        puVar7 = local_1e8;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_1e8);
        _swift_willThrow(0);
        _swift_errorRelease(puVar7);
      }
      else {
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        uVar2 = local_220;
        __sSS10FoundationE8EncodingV4utf8ACvgZ(local_220,0);
        IVar8 = IVar6;
        pcVar19 = pcVar16;
        __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar6,pcVar16,uVar2);
        if (pcVar19 == (char *)0x0) {
          FUN_100006cdc(IVar6,pcVar16);
        }
        else {
          FUN_100242668();
          IVar11 = IVar8;
          FUN_100241bf8();
          _swift_bridgeObjectRelease(IVar8);
          uVar22 = *(undefined8 *)(IVar11 + 0x10);
          puVar7 = &_OBJC_CLASS___NSData;
          _objc_allocWithZone();
          IVar8 = _objc_msgSend((ID)puVar7,"initWithBytes:length:",IVar11 + 0x20,uVar22);
          pcVar17 = "base64EncodedStringWithOptions:";
          local_1f0 = IVar3;
          puVar7 = (undefined *)_objc_msgSend(IVar8,"base64EncodedStringWithOptions:",0);
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _swift_bridgeObjectRelease(pcVar19);
          _swift_bridgeObjectRelease(IVar11);
          uVar22 = 0;
          local_1e8 = puVar7;
          local_1e0 = pcVar17;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(uVar2,0);
          FUN_10021e96c();
          uVar18 = 0;
          uVar23 = uVar2;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (uVar2,0,PTR___sSSN_1009957f8,uVar22);
          FUN_100006cdc(IVar6,pcVar16);
          (**(code **)(local_230 + 8))(uVar2,local_228);
          _swift_bridgeObjectRelease(pcVar17);
          if (uVar18 >> 0x3c < 0xf) goto LAB_10023d550;
        }
      }
      uVar23 = 0;
      goto LAB_10023d550;
    }
    puVar7 = &DAT_100a7f930;
    FUN_100004bb4(&DAT_100a7f930,&DAT_100814000);
    _swift_initStackObject();
    dVar24 = 4.94065645841247e-324;
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = 0x7374;
    *(undefined8 *)(puVar7 + 0x28) = 0xe200000000000000;
    __s10Foundation4DateVACycfC(lVar20);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar21 + 8))(lVar20,lVar5);
    if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d594);
      (*pcVar1)();
    }
    if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d5a0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023d5ac);
      (*pcVar1)();
    }
    *(long *)(puVar7 + 0x30) = (long)dVar24;
    puVar9 = puVar7;
    FUN_100234634();
    _swift_setDeallocating(puVar7);
    FUN_100040bb4(puVar7 + 0x20,&DAT_100a7f938,&DAT_100814008);
    IVar3 = 0;
    FUN_100241b14();
    _objc_allocWithZone();
    IVar3 = _objc_msgSend(IVar3,"init");
    puVar7 = puVar9;
    FUN_100233230(puVar9);
    puVar10 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(puVar7);
    local_1e8 = (undefined *)0x0;
    pcVar16 = "dataWithJSONObject:options:error:";
    IVar6 = NSJSONSerialization::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                       puVar10,0,&local_1e8);
    if (IVar6 == 0) {
      puVar7 = local_1e8;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_1e8);
      _swift_willThrow(0);
      _swift_errorRelease(puVar7);
LAB_10023cf24:
      uVar23 = 0;
      local_220 = 0xc000000000000000;
    }
    else {
      local_238 = puVar9;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      uVar2 = local_220;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(local_220,0);
      IVar8 = IVar6;
      pcVar19 = pcVar16;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar6,pcVar16,uVar2);
      if (pcVar19 == (char *)0x0) {
        FUN_100006cdc(IVar6,pcVar16);
        puVar9 = local_238;
        goto LAB_10023cf24;
      }
      FUN_100242668();
      IVar11 = IVar8;
      FUN_100241bf8();
      _swift_bridgeObjectRelease(IVar8);
      uVar22 = *(undefined8 *)(IVar11 + 0x10);
      puVar7 = &_OBJC_CLASS___NSData;
      _objc_allocWithZone();
      IVar8 = _objc_msgSend((ID)puVar7,"initWithBytes:length:",IVar11 + 0x20,uVar22);
      pcVar17 = "base64EncodedStringWithOptions:";
      puVar7 = (undefined *)_objc_msgSend(IVar8,"base64EncodedStringWithOptions:",0);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      local_240 = IVar3;
      _swift_bridgeObjectRelease(pcVar19);
      _swift_bridgeObjectRelease(IVar11);
      uVar22 = 0;
      local_1e8 = puVar7;
      local_1e0 = pcVar17;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(uVar2,0);
      FUN_10021e96c();
      uVar18 = 0;
      uVar23 = uVar2;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (uVar2,0,PTR___sSSN_1009957f8,uVar22);
      FUN_100006cdc(IVar6,pcVar16);
      (**(code **)(local_230 + 8))(uVar2,local_228);
      _swift_bridgeObjectRelease(pcVar17);
      puVar9 = local_238;
      local_220 = uVar18;
      if (0xe < uVar18 >> 0x3c) goto LAB_10023cf24;
    }
    local_1e8 = (undefined *)0x0;
    local_1e0 = (char *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x27);
    _swift_bridgeObjectRelease(local_1e0);
    puVar10 = PTR___sSiN_100995968;
    puVar7 = PTR___sSSN_1009957f8;
    local_1e8 = (undefined *)0xd000000000000025;
    local_1e0 = (char *)0x80000001008a75d0;
    puVar14 = puVar9;
    puVar12 = PTR___sSSN_1009957f8;
    __sSD16debugDescriptionSSvg
              (puVar9,PTR___sSSN_1009957f8,PTR___sSiN_100995968,PTR___sSSSHsWP_100995808);
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(puVar14,puVar12);
    _swift_bridgeObjectRelease(puVar12);
    pcVar16 = local_1e0;
    puVar9 = local_1e8;
    local_1e8 = (undefined *)0x0;
    local_1e0 = (char *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar3 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a74d0);
    pcVar19 = "lastPathComponent";
    IVar3 = _objc_msgSend(IVar3,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
    __sSS6appendyySSF(IVar3,pcVar19);
    _swift_bridgeObjectRelease(pcVar19);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_1b8 = (undefined *)0x43;
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (puVar10,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0x6b736174,0xe400000000000000);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_1b8 = puVar9;
    uStack_1b0 = pcVar16;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_1b8,&local_1e8,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(pcVar16);
    pcVar16 = local_1e0;
    puVar9 = local_1e8;
    puVar7 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
LAB_10023d524:
      _swift_bridgeObjectRelease(local_1e0);
      goto LAB_10023d550;
    }
    FUN_10021e878(0);
    _swift_retain(puVar7);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_1009a7338;
    _swift_allocObject(&DAT_1009a7338,0x30,7);
    *(long *)(puVar10 + 0x10) = lVar4;
    *(undefined **)(puVar10 + 0x18) = puVar7;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    *(char **)(puVar10 + 0x28) = pcVar16;
    puStack_1d0 = &DAT_1009a7350;
    local_1c0 = puVar10;
  }
  local_1c8 = thunk_FUN_100222dd4;
  local_1e0 = (char *)0x42000000;
  local_1d8 = FUN_1000acdb4;
  local_1e8 = PTR___NSConcreteStackBlock_100995490;
  pvVar15 = __Block_copy(&local_1e8);
  puVar9 = local_1c0;
  _swift_retain(puVar7);
  _swift_release(puVar9);
  lVar5 = local_218;
  local_228 = uVar23;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_218);
  local_1e8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar13 = &DAT_100a7e2d0;
  FUN_100240fdc(&DAT_100a7e2d0,0xff,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar9 = &DAT_100a7e2d8;
  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
  puVar10 = puVar9;
  FUN_10021e91c();
  IVar3 = local_1f0;
  lVar20 = local_210;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_210,&local_1e8,puVar9,puVar10,local_1f0,puVar13);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar5,lVar20,pvVar15);
  __Block_release(pvVar15);
  FUN_10007ed2c(lVar4,puVar7);
  (**(code **)(local_200 + 8))(lVar20,IVar3);
  uVar23 = local_228;
  (**(code **)(local_208 + 8))(lVar5,local_1f8);
LAB_10023d550:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar23;
}

