// rea decompile_all
// name: FUN_10023ec58
// address: 0x10023ec58
// body: available
// range: 0x10023ec58-0x10023f703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023f6b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010023f200) */

void FUN_10023ec58(long param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  ID IVar14;
  void *aBlock;
  undefined8 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  ID local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_98;
  undefined *local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  puVar26 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar24 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  lVar27 = (long)puVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar25 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 0) {
    (*param_2)(0,0,0xe000000000000000,0);
    goto LAB_10023efc4;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_d8 = lVar5;
  local_d0 = puVar7;
  local_c0 = param_3;
  local_b8 = param_2;
  FUN_100008184(uVar11,uVar2);
  uVar8 = uVar11;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar11,uVar2);
  FUN_100006cdc(uVar11,uVar2);
  local_98 = (undefined *)0x0;
  IVar9 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     uVar8,0,&local_98);
  if (IVar9 == 0) {
    puVar7 = local_98;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_98);
    _swift_willThrow(0);
    _swift_errorRelease(puVar7);
    pcVar4 = local_b8;
LAB_10023efac:
    uVar11 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_98,IVar9);
    _swift_unknownObjectRelease(IVar9);
    puVar7 = &DAT_100a7e7c8;
    FUN_100004bb4(&DAT_100a7e7c8,&DAT_100813f00);
    ppuVar10 = &local_b0;
    _swift_dynamicCast(ppuVar10,&local_98,PTR___sypN_100995e88 + 8,puVar7,6);
    puVar12 = local_b0;
    pcVar4 = local_b8;
    if (((ulong)ppuVar10 & 1) == 0) goto LAB_10023efac;
    if (*(long *)(local_b0 + 0x10) == 0) {
      _swift_bridgeObjectRelease(local_b0);
      pcVar4 = local_b8;
      goto LAB_10023efac;
    }
    _swift_bridgeObjectRetain(local_b0);
    lVar5 = 0x61746164;
    uVar17 = 0;
    FUN_1001a2c70();
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease_n(puVar12,2);
      pcVar4 = local_b8;
      goto LAB_10023efac;
    }
    puVar21 = *(undefined **)(*(long *)(puVar12 + 0x38) + lVar5 * 8);
    _swift_unknownObjectRetain(puVar21);
    _swift_bridgeObjectRelease_n(puVar12,2);
    puVar12 = PTR___syXlN_100995e80;
    ppuVar10 = &local_b0;
    local_98 = puVar21;
    _swift_dynamicCast(ppuVar10,&local_98,PTR___syXlN_100995e80 + 8,puVar7,6);
    puVar7 = local_b0;
    pcVar4 = local_b8;
    if (((ulong)ppuVar10 & 1) == 0) goto LAB_10023efac;
    if (*(long *)(local_b0 + 0x10) == 0) {
LAB_10023f000:
      pcVar4 = local_b8;
      _swift_bridgeObjectRelease(puVar7);
      goto LAB_10023efac;
    }
    _swift_bridgeObjectRetain(local_b0);
    lVar5 = 0x61746164;
    uVar17 = 0;
    FUN_1001a2c70();
    if ((uVar17 & 1) == 0) {
LAB_10023f00c:
      _swift_bridgeObjectRelease_n(puVar7,2);
      goto LAB_10023efac;
    }
    puVar21 = *(undefined **)(*(long *)(puVar7 + 0x38) + lVar5 * 8);
    _swift_unknownObjectRetain(puVar21);
    _swift_bridgeObjectRelease_n(puVar7,2);
    ppuVar10 = &local_98;
    local_b0 = puVar21;
    _swift_dynamicCast(ppuVar10,&local_b0,puVar12 + 8,PTR___sSSN_1009957f8,6);
    puVar12 = local_90;
    puVar7 = local_98;
    if (((ulong)ppuVar10 & 1) == 0) goto LAB_10023efac;
    IVar9 = 0;
    FUN_100241b14();
    _objc_allocWithZone();
    local_e0 = _objc_msgSend(IVar9,"init");
    puVar21 = puVar12;
    __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
              (puVar7,puVar12,0);
    _swift_bridgeObjectRelease(puVar12);
    if (0xe < (ulong)puVar21 >> 0x3c) goto LAB_10023efac;
    uVar3 = (uint)((ulong)puVar21 >> 0x20);
    uVar19 = uVar3 >> 0x1e;
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar3 >> 0x1e < 2) {
      if (uVar19 == 0) {
        puVar22 = (undefined *)((ulong)puVar21 >> 0x30 & 0xff);
      }
      else {
        iVar20 = (int)((ulong)puVar7 >> 0x20);
        if (SBORROW4(iVar20,(int)puVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10023f6b8);
          (*pcVar4)();
        }
        puVar22 = (undefined *)(long)(iVar20 - (int)puVar7);
LAB_10023f060:
        if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10023f6b0);
          (*pcVar4)();
        }
      }
      if (puVar22 != (undefined *)0x0) {
        puVar12 = puVar22;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar22,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar12 + 0x10) = puVar22;
        _bzero(puVar12 + 0x20,(size_t)puVar22);
      }
    }
    else if (uVar19 == 2) {
      puVar22 = (undefined *)(*(long *)(puVar7 + 0x18) - *(long *)(puVar7 + 0x10));
      if (SBORROW8(*(long *)(puVar7 + 0x18),*(long *)(puVar7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10023f050);
        (*pcVar4)();
      }
      goto LAB_10023f060;
    }
    uVar11 = *(undefined8 *)(puVar12 + 0x10);
    _swift_bridgeObjectRetain(puVar12);
    __s10Foundation4DataV9copyBytes2to5countySpys5UInt8VG_SitF(puVar12 + 0x20,uVar11,puVar7,puVar21)
    ;
    FUN_100006cc8(puVar7,puVar21);
    _swift_bridgeObjectRelease(puVar12);
    puVar21 = puVar12;
    FUN_100241bf8();
    _swift_bridgeObjectRelease(puVar12);
    puVar7 = puVar21 + 0x20;
    puVar12 = puVar7 + *(long *)(puVar21 + 0x10);
    FUN_1001f8534();
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar23);
    puVar22 = puVar7;
    puVar16 = puVar12;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar7,puVar12,lVar23);
    local_e8 = puVar22;
    FUN_100006cdc(puVar7,puVar12);
    _swift_bridgeObjectRelease(puVar21);
    pcVar4 = local_b8;
    if (puVar16 == (undefined *)0x0) goto LAB_10023efac;
    IVar9 = 0;
    __s10Foundation11JSONDecoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONDecoderCACycfc();
    local_98 = local_e8;
    local_e0 = IVar9;
    local_90 = puVar16;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar23);
    FUN_10021e96c();
    uVar17 = 0;
    lVar13 = lVar23;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar23,0,PTR___sSSN_1009957f8,IVar9);
    (**(code **)(lVar25 + 8))(lVar23,local_d0);
    _swift_bridgeObjectRelease(puVar16);
    lVar5 = 0;
    if (uVar17 >> 0x3c < 0xf) {
      lVar5 = lVar13;
    }
    uVar1 = 0xc000000000000000;
    if (uVar17 >> 0x3c < 0xf) {
      uVar1 = uVar17;
    }
    puVar7 = &DAT_100a7f8f0;
    FUN_100004bb4(&DAT_100a7f8f0,&DAT_100813fd0);
    puVar12 = puVar7;
    FUN_100240ec0();
    IVar9 = local_e0;
    __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
              (&local_b0,puVar7,lVar5,uVar1,puVar7,puVar12);
    local_e8 = (undefined *)0x0;
    _swift_release(IVar9);
    FUN_100006cdc(lVar5,uVar1);
    puVar12 = local_b0;
    local_98 = (undefined *)0x0;
    local_90 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x14);
    _swift_bridgeObjectRelease(local_90);
    local_98 = (undefined *)0xd000000000000012;
    local_90 = (undefined *)0x80000001008a74b0;
    puVar7 = &DAT_100a7f908;
    FUN_100004bb4(&DAT_100a7f908,&DAT_100813fd8);
    local_d0 = puVar12;
    puVar21 = PTR___sSSN_1009957f8;
    __sSD16debugDescriptionSSvg(puVar12,PTR___sSSN_1009957f8,puVar7,PTR___sSSSHsWP_100995808);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar21);
    puVar12 = local_90;
    puVar7 = local_98;
    local_98 = (undefined *)0x0;
    local_90 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar9 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a74d0);
    pcVar18 = "lastPathComponent";
    IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
    __sSS6appendyySSF(IVar9,pcVar18);
    _swift_bridgeObjectRelease(pcVar18);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_b0 = (undefined *)0x9a;
    puVar21 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar21);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000024,0x80000001008a7580);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_b0 = puVar7;
    uStack_a8 = puVar12;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_b0,&local_98,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(puVar12);
    puVar12 = local_90;
    puVar7 = local_98;
    IVar9 = DAT_100b362c0;
    lVar5 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_90);
    }
    else {
      FUN_10021e878(0);
      IVar14 = IVar9;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar21 = &DAT_1009a7298;
      local_e0 = IVar14;
      _swift_allocObject(&DAT_1009a7298,0x30,7);
      *(long *)(puVar21 + 0x10) = lVar5;
      *(ID *)(puVar21 + 0x18) = IVar9;
      *(undefined **)(puVar21 + 0x20) = puVar7;
      *(undefined **)(puVar21 + 0x28) = puVar12;
      local_78 = FUN_100222dd4;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = (undefined *)0x42000000;
      local_88 = FUN_1000acdb4;
      puStack_80 = &DAT_1009a72b0;
      local_70 = puVar21;
      aBlock = __Block_copy(&local_98);
      puVar7 = local_70;
      _swift_retain(IVar9);
      _swift_release(puVar7);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar27);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar15 = &DAT_100a7e2d0;
      FUN_100240fdc(&DAT_100a7e2d0,0xff,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar12 = puVar7;
      FUN_10021e91c();
      lVar23 = local_d8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar26,&local_98,puVar7,puVar12,local_d8,puVar15);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar27,puVar26,aBlock);
      __Block_release(aBlock);
      FUN_10007ed2c(lVar5,IVar9);
      (**(code **)(local_c8 + 8))(puVar26,lVar23);
      (**(code **)(lVar24 + 8))(lVar27,lVar6);
    }
    pcVar4 = local_b8;
    puVar7 = local_d0;
    if (*(long *)(local_d0 + 0x10) == 0) goto LAB_10023f000;
    _swift_bridgeObjectRetain(local_d0);
    lVar5 = 0x64696474;
    uVar17 = 0;
    FUN_1001a2c70();
    if ((uVar17 & 1) == 0) goto LAB_10023f00c;
    puVar21 = *(undefined **)(*(long *)(puVar7 + 0x38) + lVar5 * 8);
    _swift_bridgeObjectRetain(puVar21);
    _swift_bridgeObjectRelease_n(puVar7,2);
    puVar12 = puVar21;
    _swift_bridgeObjectRetain();
    FUN_10023f784();
    puVar7 = local_e8;
    local_98 = puVar12;
    FUN_10023faa0(&local_98);
    if (puVar7 != (undefined *)0x0) {
      _swift_errorRelease(puVar7);
      _swift_release(local_98);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10023f704);
      (*pcVar4)();
    }
    _swift_bridgeObjectRelease(puVar21);
    puVar7 = local_98;
    if (((long)local_98 < 0) || (((ulong)local_98 >> 0x3e & 1) != 0)) {
      puVar12 = local_98;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (puVar12 == (undefined *)0x0) goto LAB_10023f6c8;
LAB_10023f618:
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10023f6f0);
          (*pcVar4)();
        }
        lVar5 = *(long *)(puVar7 + 0x20);
        _swift_retain(lVar5);
      }
      else {
        lVar5 = 0;
        FUN_100230928(0,puVar7);
      }
      _swift_release(puVar7);
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar23 = *(long *)(lVar5 + 0x18);
      _swift_bridgeObjectRetain(lVar23);
      _swift_release(lVar5);
      pcVar4 = local_b8;
      if (lVar23 != 0) {
        lVar5 = lVar6;
        __sSS5countSivg(lVar6,lVar23);
        if (0 < lVar5) {
          (*pcVar4)(1,lVar6,lVar23,1);
          _swift_bridgeObjectRelease(lVar23);
          goto LAB_10023efc4;
        }
        _swift_bridgeObjectRelease(lVar23);
      }
    }
    else {
      if (*(long *)(local_98 + 0x10) != 0) goto LAB_10023f618;
LAB_10023f6c8:
      _swift_release(puVar7);
    }
    uVar11 = 1;
  }
  (*pcVar4)(uVar11,0,0xe000000000000000,0);
LAB_10023efc4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

