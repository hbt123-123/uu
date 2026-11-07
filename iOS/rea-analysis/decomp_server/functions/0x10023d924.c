// rea decompile_all
// name: FUN_10023d924
// address: 0x10023d924
// body: available
// range: 0x10023d924-0x10023e2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023e2c4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010023de74) */

void FUN_10023d924(long param_1,code *param_2,undefined8 param_3)

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
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  void *aBlock;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
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
  puVar25 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar23 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar23 + 0x40));
  lVar26 = (long)puVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar24 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  lVar22 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 0) {
    (*param_2)(0,0,0xe000000000000000);
    goto LAB_10023e288;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_d8 = lVar5;
  local_d0 = puVar7;
  local_c0 = param_3;
  pcStack_b8 = param_2;
  FUN_100008184(uVar20,uVar2);
  uVar8 = uVar20;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar20,uVar2);
  FUN_100006cdc(uVar20,uVar2);
  local_98 = (undefined *)0x0;
  IVar9 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     uVar8,0,&local_98);
  if (IVar9 == 0) {
    puVar7 = local_98;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_98);
    _swift_willThrow(0);
    _swift_errorRelease(puVar7);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_98,IVar9);
    _swift_unknownObjectRelease(IVar9);
    puVar7 = &DAT_100a7e7c8;
    FUN_100004bb4(&DAT_100a7e7c8,&DAT_100813f00);
    ppuVar10 = &local_b0;
    _swift_dynamicCast(ppuVar10,&local_98,PTR___sypN_100995e88 + 8,puVar7,6);
    puVar11 = local_b0;
    if (((ulong)ppuVar10 & 1) != 0) {
      if (*(long *)(local_b0 + 0x10) == 0) {
LAB_10023e25c:
        _swift_bridgeObjectRelease(puVar11);
      }
      else {
        _swift_bridgeObjectRetain(local_b0);
        lVar5 = 0x61746164;
        uVar15 = 0;
        FUN_1001a2c70();
        if ((uVar15 & 1) == 0) {
LAB_10023e268:
          _swift_bridgeObjectRelease_n(puVar11,2);
        }
        else {
          puVar19 = *(undefined **)(*(long *)(puVar11 + 0x38) + lVar5 * 8);
          _swift_unknownObjectRetain(puVar19);
          _swift_bridgeObjectRelease_n(puVar11,2);
          puVar21 = PTR___syXlN_100995e80;
          ppuVar10 = &local_b0;
          local_98 = puVar19;
          _swift_dynamicCast(ppuVar10,&local_98,PTR___syXlN_100995e80 + 8,puVar7,6);
          puVar11 = local_b0;
          if (((ulong)ppuVar10 & 1) == 0) goto LAB_10023e274;
          if (*(long *)(local_b0 + 0x10) == 0) goto LAB_10023e25c;
          _swift_bridgeObjectRetain(local_b0);
          lVar5 = 0x61746164;
          uVar15 = 0;
          FUN_1001a2c70();
          if ((uVar15 & 1) == 0) goto LAB_10023e268;
          puVar7 = *(undefined **)(*(long *)(puVar11 + 0x38) + lVar5 * 8);
          _swift_unknownObjectRetain(puVar7);
          _swift_bridgeObjectRelease_n(puVar11,2);
          ppuVar10 = &local_98;
          local_b0 = puVar7;
          _swift_dynamicCast(ppuVar10,&local_b0,puVar21 + 8,PTR___sSSN_1009957f8,6);
          puVar11 = local_90;
          puVar7 = local_98;
          if (((ulong)ppuVar10 & 1) != 0) {
            IVar9 = 0;
            FUN_100241b14();
            _objc_allocWithZone();
            _objc_msgSend(IVar9,"init");
            puVar21 = puVar11;
            __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
                      (puVar7,puVar11,0);
            _swift_bridgeObjectRelease(puVar11);
            if ((ulong)puVar21 >> 0x3c < 0xf) {
              uVar3 = (uint)((ulong)puVar21 >> 0x20);
              uVar17 = uVar3 >> 0x1e;
              puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
              local_e0 = puVar21;
              if (uVar3 >> 0x1e < 2) {
                if (uVar17 == 0) {
                  puVar21 = (undefined *)((ulong)puVar21 >> 0x30 & 0xff);
                }
                else {
                  iVar18 = (int)((ulong)puVar7 >> 0x20);
                  if (SBORROW4(iVar18,(int)puVar7)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10023e2cc);
                    (*pcVar4)();
                  }
                  puVar21 = (undefined *)(long)(iVar18 - (int)puVar7);
LAB_10023dca8:
                  if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10023e2c4);
                    (*pcVar4)();
                  }
                }
                if (puVar21 != (undefined *)0x0) {
                  puVar11 = puVar21;
                  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                            (puVar21,PTR___ss5UInt8VN_100995d40);
                  *(undefined **)(puVar11 + 0x10) = puVar21;
                  _bzero(puVar11 + 0x20,(size_t)puVar21);
                }
              }
              else if (uVar17 == 2) {
                puVar21 = (undefined *)(*(long *)(puVar7 + 0x18) - *(long *)(puVar7 + 0x10));
                if (SBORROW8(*(long *)(puVar7 + 0x18),*(long *)(puVar7 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10023dc98);
                  (*pcVar4)();
                }
                goto LAB_10023dca8;
              }
              uVar20 = *(undefined8 *)(puVar11 + 0x10);
              _swift_bridgeObjectRetain(puVar11);
              __s10Foundation4DataV9copyBytes2to5countySpys5UInt8VG_SitF
                        (puVar11 + 0x20,uVar20,puVar7,local_e0);
              FUN_100006cc8(puVar7,local_e0);
              _swift_bridgeObjectRelease(puVar11);
              puVar21 = puVar11;
              FUN_100241bf8();
              _swift_bridgeObjectRelease(puVar11);
              puVar7 = puVar21 + 0x20;
              puVar11 = puVar7 + *(long *)(puVar21 + 0x10);
              FUN_1001f8534();
              __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar22);
              puVar19 = puVar7;
              puVar13 = puVar11;
              __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
                        (puVar7,puVar11,lVar22);
              local_e0 = puVar19;
              FUN_100006cdc(puVar7,puVar11);
              _swift_bridgeObjectRelease(puVar21);
              if (puVar13 != (undefined *)0x0) {
                uVar20 = 0;
                __s10Foundation11JSONDecoderCMa();
                _swift_allocObject();
                __s10Foundation11JSONDecoderCACycfc();
                local_98 = local_e0;
                local_e8 = uVar20;
                local_90 = puVar13;
                __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar22);
                FUN_10021e96c();
                uVar15 = 0;
                lVar12 = lVar22;
                __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                          (lVar22,0,PTR___sSSN_1009957f8,uVar20);
                (**(code **)(lVar24 + 8))(lVar22,local_d0);
                _swift_bridgeObjectRelease(puVar13);
                lVar5 = 0;
                if (uVar15 >> 0x3c < 0xf) {
                  lVar5 = lVar12;
                }
                uVar1 = 0xc000000000000000;
                if (uVar15 >> 0x3c < 0xf) {
                  uVar1 = uVar15;
                }
                puVar7 = &DAT_100a7e318;
                FUN_100004bb4(&DAT_100a7e318,&DAT_100813488);
                uVar20 = local_e8;
                puVar11 = &DAT_100a7f928;
                FUN_10024106c(&DAT_100a7f928,&DAT_100a7e318,&DAT_100813488,PTR___sSSSesWP_100995828)
                ;
                __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                          (&local_b0,puVar7,lVar5,uVar1,puVar7,puVar11);
                _swift_release(uVar20);
                FUN_100006cdc(lVar5,uVar1);
                puVar7 = local_b0;
                local_98 = (undefined *)0x0;
                local_90 = (undefined *)0xe000000000000000;
                __ss11_StringGutsV4growyySiF(0x16);
                _swift_bridgeObjectRelease(local_90);
                local_98 = (undefined *)0xd000000000000014;
                local_90 = (undefined *)0x80000001008a75b0;
                local_d0 = puVar7;
                puVar11 = PTR___sSSN_1009957f8;
                __sSD16debugDescriptionSSvg
                          (puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808
                          );
                __sSS6appendyySSF();
                _swift_bridgeObjectRelease(puVar11);
                puVar11 = local_90;
                puVar7 = local_98;
                local_98 = (undefined *)0x0;
                local_90 = (undefined *)0xe000000000000000;
                __ss11_StringGutsV4growyySiF(0x15);
                __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
                IVar9 = 0xd0000000000000ad;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd0000000000000ad,0x80000001008a74d0);
                pcVar16 = "lastPathComponent";
                IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
                __sSS6appendyySSF(IVar9,pcVar16);
                _swift_bridgeObjectRelease(pcVar16);
                __sSS6appendyySSF(0x20,0xe100000000000000);
                local_b0 = (undefined *)0x6c;
                puVar21 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
                __ss23CustomStringConvertibleP11descriptionSSvgTj
                          (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
                __sSS6appendyySSF();
                _swift_bridgeObjectRelease(puVar21);
                __sSS6appendyySSF(0x20,0xe100000000000000);
                __sSS6appendyySSF(0x497365744e746567,0xed0000293a5f2844);
                __sSS6appendyySSF(0xa20,0xe200000000000000);
                local_b0 = puVar7;
                uStack_a8 = puVar11;
                __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                          (&local_b0,&local_98,PTR___sSSN_1009957f8,
                           PTR___ss26DefaultStringInterpolationVN_100995bf0,
                           PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
                _swift_bridgeObjectRelease(puVar11);
                puVar21 = local_90;
                puVar11 = local_98;
                puVar7 = DAT_100b362c0;
                lVar5 = DAT_100b362b8;
                if (DAT_100b362b8 == 0) {
                  _swift_bridgeObjectRelease(local_90);
                }
                else {
                  FUN_10021e878(0);
                  puVar13 = puVar7;
                  _swift_retain();
                  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                  puVar19 = &DAT_1009a72e8;
                  local_e0 = puVar13;
                  _swift_allocObject(&DAT_1009a72e8,0x30,7);
                  *(long *)(puVar19 + 0x10) = lVar5;
                  *(undefined **)(puVar19 + 0x18) = puVar7;
                  *(undefined **)(puVar19 + 0x20) = puVar11;
                  *(undefined **)(puVar19 + 0x28) = puVar21;
                  local_78 = thunk_FUN_100222dd4;
                  local_98 = PTR___NSConcreteStackBlock_100995490;
                  local_90 = (undefined *)0x42000000;
                  local_88 = FUN_1000acdb4;
                  puStack_80 = &DAT_1009a7300;
                  local_70 = puVar19;
                  aBlock = __Block_copy(&local_98);
                  puVar11 = local_70;
                  _swift_retain(puVar7);
                  _swift_release(puVar11);
                  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar26);
                  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar14 = &DAT_100a7e2d0;
                  FUN_100240fdc(&DAT_100a7e2d0,0xff,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
                  puVar11 = &DAT_100a7e2d8;
                  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
                  puVar21 = puVar11;
                  FUN_10021e91c();
                  lVar22 = local_d8;
                  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                            (puVar25,&local_98,puVar11,puVar21,local_d8,puVar14);
                  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                            (0,lVar26,puVar25,aBlock);
                  __Block_release(aBlock);
                  FUN_10007ed2c(lVar5,puVar7);
                  (**(code **)(local_c8 + 8))(puVar25,lVar22);
                  (**(code **)(lVar23 + 8))(lVar26,lVar6);
                }
                pcVar4 = pcStack_b8;
                puVar11 = local_d0;
                if (*(long *)(local_d0 + 0x10) == 0) goto LAB_10023e25c;
                _swift_bridgeObjectRetain(local_d0);
                lVar5 = 0x64695f7365746e;
                uVar15 = 0;
                FUN_1001a2c70();
                if ((uVar15 & 1) != 0) {
                  puVar14 = (undefined8 *)(*(long *)(puVar11 + 0x38) + lVar5 * 0x10);
                  uVar20 = *puVar14;
                  uVar2 = puVar14[1];
                  _swift_bridgeObjectRetain(uVar2);
                  _swift_bridgeObjectRelease_n(puVar11,2);
                  (*pcVar4)(1,uVar20,uVar2);
                  _swift_bridgeObjectRelease(uVar2);
                  goto LAB_10023e288;
                }
                goto LAB_10023e268;
              }
            }
          }
        }
      }
    }
  }
LAB_10023e274:
  (*pcStack_b8)(0,0,0xe000000000000000);
LAB_10023e288:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

