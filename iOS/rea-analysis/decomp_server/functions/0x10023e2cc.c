// rea decompile_all
// name: FUN_10023e2cc
// address: 0x10023e2cc
// body: available
// range: 0x10023e2cc-0x10023ec57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023ec50 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010023e818) */

void FUN_10023e2cc(long param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ID IVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  void *aBlock;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined1 *local_d0;
  long local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  puVar28 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar26 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar26 + 0x40));
  lVar29 = (long)puVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined1 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar27 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar27 + 0x40));
  lVar25 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 0) {
    (*param_2)(0,0);
    goto LAB_10023ec14;
  }
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_d8 = lVar6;
  local_d0 = puVar8;
  local_c0 = param_3;
  pcStack_b8 = param_2;
  FUN_100008184(uVar24,uVar2);
  uVar9 = uVar24;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar24,uVar2);
  FUN_100006cdc(uVar24,uVar2);
  local_98 = (undefined *)0x0;
  IVar10 = NSJSONSerialization::JSONObjectWithData_options_error_
                     ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                      uVar9,0,&local_98);
  if (IVar10 == 0) {
    puVar12 = local_98;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_98);
    _swift_willThrow(0);
    _swift_errorRelease(puVar12);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_98,IVar10);
    _swift_unknownObjectRelease(IVar10);
    puVar12 = &DAT_100a7e7c8;
    FUN_100004bb4(&DAT_100a7e7c8,&DAT_100813f00);
    ppuVar11 = &local_b0;
    _swift_dynamicCast(ppuVar11,&local_98,PTR___sypN_100995e88 + 8,puVar12,6);
    puVar8 = local_b0;
    if (((ulong)ppuVar11 & 1) != 0) {
      if (*(long *)(local_b0 + 0x10) == 0) {
LAB_10023ebec:
        _swift_bridgeObjectRelease(puVar8);
      }
      else {
        _swift_bridgeObjectRetain(local_b0);
        lVar6 = 0x61746164;
        uVar18 = 0;
        FUN_1001a2c70();
        if ((uVar18 & 1) == 0) {
LAB_10023ebf8:
          _swift_bridgeObjectRelease_n(puVar8,2);
        }
        else {
          puVar22 = *(undefined **)(*(long *)(puVar8 + 0x38) + lVar6 * 8);
          _swift_unknownObjectRetain(puVar22);
          _swift_bridgeObjectRelease_n(puVar8,2);
          puVar13 = PTR___syXlN_100995e80;
          ppuVar11 = &local_b0;
          local_98 = puVar22;
          _swift_dynamicCast(ppuVar11,&local_98,PTR___syXlN_100995e80 + 8,puVar12,6);
          puVar8 = local_b0;
          if (((ulong)ppuVar11 & 1) == 0) goto LAB_10023ec04;
          if (*(long *)(local_b0 + 0x10) == 0) goto LAB_10023ebec;
          _swift_bridgeObjectRetain(local_b0);
          lVar6 = 0x61746164;
          uVar18 = 0;
          FUN_1001a2c70();
          if ((uVar18 & 1) == 0) goto LAB_10023ebf8;
          puVar23 = *(undefined1 **)(*(long *)(puVar8 + 0x38) + lVar6 * 8);
          _swift_unknownObjectRetain(puVar23);
          _swift_bridgeObjectRelease_n(puVar8,2);
          ppuVar11 = &local_98;
          local_b0 = puVar23;
          _swift_dynamicCast(ppuVar11,&local_b0,puVar13 + 8,PTR___sSSN_1009957f8,6);
          puVar8 = local_90;
          puVar12 = local_98;
          if (((ulong)ppuVar11 & 1) != 0) {
            IVar10 = 0;
            FUN_100241b14();
            _objc_allocWithZone();
            _objc_msgSend(IVar10,"init");
            puVar23 = puVar8;
            __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
                      (puVar12,puVar8,0);
            _swift_bridgeObjectRelease(puVar8);
            if ((ulong)puVar23 >> 0x3c < 0xf) {
              uVar4 = (uint)((ulong)puVar23 >> 0x20);
              uVar20 = uVar4 >> 0x1e;
              puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
              local_e0 = puVar23;
              if (uVar4 >> 0x1e < 2) {
                if (uVar20 == 0) {
                  puVar22 = (undefined *)((ulong)puVar23 >> 0x30 & 0xff);
                }
                else {
                  iVar21 = (int)((ulong)puVar12 >> 0x20);
                  if (SBORROW4(iVar21,(int)puVar12)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10023ec58);
                    (*pcVar5)();
                  }
                  puVar22 = (undefined *)(long)(iVar21 - (int)puVar12);
LAB_10023e64c:
                  if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10023ec50);
                    (*pcVar5)();
                  }
                }
                if (puVar22 != (undefined *)0x0) {
                  puVar13 = puVar22;
                  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                            (puVar22,PTR___ss5UInt8VN_100995d40);
                  *(undefined **)(puVar13 + 0x10) = puVar22;
                  _bzero(puVar13 + 0x20,(size_t)puVar22);
                }
              }
              else if (uVar20 == 2) {
                puVar22 = (undefined *)(*(long *)(puVar12 + 0x18) - *(long *)(puVar12 + 0x10));
                if (SBORROW8(*(long *)(puVar12 + 0x18),*(long *)(puVar12 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10023e63c);
                  (*pcVar5)();
                }
                goto LAB_10023e64c;
              }
              uVar24 = *(undefined8 *)(puVar13 + 0x10);
              _swift_bridgeObjectRetain(puVar13);
              __s10Foundation4DataV9copyBytes2to5countySpys5UInt8VG_SitF
                        (puVar13 + 0x20,uVar24,puVar12,local_e0);
              FUN_100006cc8(puVar12,local_e0);
              _swift_bridgeObjectRelease(puVar13);
              puVar12 = puVar13;
              FUN_100241bf8();
              _swift_bridgeObjectRelease(puVar13);
              puVar8 = puVar12 + 0x20;
              puVar23 = puVar8 + *(long *)(puVar12 + 0x10);
              FUN_1001f8534();
              __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar25);
              puVar14 = puVar8;
              puVar17 = puVar23;
              __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
                        (puVar8,puVar23,lVar25);
              local_e0 = puVar14;
              FUN_100006cdc(puVar8,puVar23);
              _swift_bridgeObjectRelease(puVar12);
              if (puVar17 != (undefined1 *)0x0) {
                uVar24 = 0;
                __s10Foundation11JSONDecoderCMa();
                _swift_allocObject();
                __s10Foundation11JSONDecoderCACycfc();
                local_98 = local_e0;
                local_e8 = uVar24;
                local_90 = puVar17;
                __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar25);
                FUN_10021e96c();
                uVar18 = 0;
                lVar15 = lVar25;
                __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                          (lVar25,0,PTR___sSSN_1009957f8,uVar24);
                (**(code **)(lVar27 + 8))(lVar25,local_d0);
                _swift_bridgeObjectRelease(puVar17);
                lVar6 = 0;
                if (uVar18 >> 0x3c < 0xf) {
                  lVar6 = lVar15;
                }
                uVar1 = 0xc000000000000000;
                if (uVar18 >> 0x3c < 0xf) {
                  uVar1 = uVar18;
                }
                puVar12 = &DAT_100a7f950;
                FUN_100004bb4(&DAT_100a7f950,&DAT_100814030);
                uVar24 = local_e8;
                puVar13 = &DAT_100a7f958;
                FUN_10024106c(&DAT_100a7f958,&DAT_100a7f950,&DAT_100814030,PTR___sSbSesWP_1009958e0)
                ;
                __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                          (&local_b0,puVar12,lVar6,uVar1,puVar12,puVar13);
                _swift_release(uVar24);
                FUN_100006cdc(lVar6,uVar1);
                puVar12 = local_b0;
                local_98 = (undefined *)0x0;
                local_90 = (undefined1 *)0xe000000000000000;
                __ss11_StringGutsV4growyySiF(0x1a);
                _swift_bridgeObjectRelease(local_90);
                local_98 = &DAT_d000000000000018;
                local_90 = (undefined1 *)0x80000001008a7660;
                local_d0 = puVar12;
                puVar13 = PTR___sSSN_1009957f8;
                __sSD16debugDescriptionSSvg
                          (puVar12,PTR___sSSN_1009957f8,PTR___sSbN_1009958c8,
                           PTR___sSSSHsWP_100995808);
                __sSS6appendyySSF();
                _swift_bridgeObjectRelease(puVar13);
                puVar8 = local_90;
                local_e0 = local_98;
                local_98 = (undefined *)0x0;
                local_90 = (undefined1 *)0xe000000000000000;
                __ss11_StringGutsV4growyySiF(0x15);
                __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
                IVar10 = 0xd0000000000000ad;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd0000000000000ad,0x80000001008a74d0);
                pcVar19 = "lastPathComponent";
                IVar10 = _objc_msgSend(IVar10,"lastPathComponent");
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar10);
                __sSS6appendyySSF(IVar10,pcVar19);
                _swift_bridgeObjectRelease(pcVar19);
                __sSS6appendyySSF(0x20,0xe100000000000000);
                local_b0 = (undefined *)0x83;
                puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
                __ss23CustomStringConvertibleP11descriptionSSvgTj
                          (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
                __sSS6appendyySSF();
                _swift_bridgeObjectRelease(puVar12);
                __sSS6appendyySSF(0x20,0xe100000000000000);
                __sSS6appendyySSF(0xd000000000000011,0x80000001008a7680);
                __sSS6appendyySSF(0xa20,0xe200000000000000);
                local_b0 = local_e0;
                uStack_a8 = puVar8;
                __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                          (&local_b0,&local_98,PTR___sSSN_1009957f8,
                           PTR___ss26DefaultStringInterpolationVN_100995bf0,
                           PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
                _swift_bridgeObjectRelease(puVar8);
                puVar23 = local_90;
                puVar12 = local_98;
                puVar8 = DAT_100b362c0;
                lVar6 = DAT_100b362b8;
                if (DAT_100b362b8 == 0) {
                  _swift_bridgeObjectRelease(local_90);
                }
                else {
                  FUN_10021e878(0);
                  puVar14 = puVar8;
                  _swift_retain();
                  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                  puVar13 = &DAT_1009a7428;
                  local_e0 = puVar14;
                  _swift_allocObject(&DAT_1009a7428,0x30,7);
                  *(long *)(puVar13 + 0x10) = lVar6;
                  *(undefined1 **)(puVar13 + 0x18) = puVar8;
                  *(undefined **)(puVar13 + 0x20) = puVar12;
                  *(undefined1 **)(puVar13 + 0x28) = puVar23;
                  local_78 = thunk_FUN_100222dd4;
                  local_98 = PTR___NSConcreteStackBlock_100995490;
                  local_90 = (undefined1 *)0x42000000;
                  local_88 = FUN_1000acdb4;
                  puStack_80 = &DAT_1009a7440;
                  local_70 = puVar13;
                  aBlock = __Block_copy(&local_98);
                  puVar12 = local_70;
                  _swift_retain(puVar8);
                  _swift_release(puVar12);
                  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar29);
                  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar16 = &DAT_100a7e2d0;
                  FUN_100240fdc(&DAT_100a7e2d0,0xff,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
                  puVar12 = &DAT_100a7e2d8;
                  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
                  puVar13 = puVar12;
                  FUN_10021e91c();
                  lVar25 = local_d8;
                  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                            (puVar28,&local_98,puVar12,puVar13,local_d8,puVar16);
                  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                            (0,lVar29,puVar28,aBlock);
                  __Block_release(aBlock);
                  FUN_10007ed2c(lVar6,puVar8);
                  (**(code **)(local_c8 + 8))(puVar28,lVar25);
                  (**(code **)(lVar26 + 8))(lVar29,lVar7);
                }
                pcVar5 = pcStack_b8;
                puVar8 = local_d0;
                if (*(long *)(local_d0 + 0x10) == 0) goto LAB_10023ebec;
                _swift_bridgeObjectRetain(local_d0);
                lVar6 = 0x656c62616e65;
                uVar18 = 0;
                FUN_1001a2c70();
                if ((uVar18 & 1) != 0) {
                  uVar3 = *(undefined1 *)(*(long *)(puVar8 + 0x38) + lVar6);
                  _swift_bridgeObjectRelease_n(puVar8,2);
                  (*pcVar5)(1,uVar3);
                  goto LAB_10023ec14;
                }
                goto LAB_10023ebf8;
              }
            }
          }
        }
      }
    }
  }
LAB_10023ec04:
  (*pcStack_b8)(0,0);
LAB_10023ec14:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

