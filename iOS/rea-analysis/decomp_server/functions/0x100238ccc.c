// rea decompile_all
// name: FUN_100238ccc
// address: 0x100238ccc
// body: available
// range: 0x100238ccc-0x100239c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100239c08 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100238fe0) */

void FUN_100238ccc(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulong uVar14;
  char *pcVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  undefined *puVar17;
  long local_120;
  undefined8 local_118;
  undefined *local_110;
  ID local_108;
  char *pcStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar2 + -8);
  local_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar16 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f0 = lVar16;
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar3 + -8);
  lVar2 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  local_e0 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar2;
  local_c8 = param_4;
  uStack_c0 = param_5;
  if ((long)param_1 < 0) {
    local_b0 = (undefined *)0x0;
    local_a8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2c);
    _swift_bridgeObjectRelease(local_a8);
    puVar17 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    puVar11 = PTR___sSiN_100995968;
    local_b0 = (undefined1 *)0xd00000000000001f;
    local_a8 = 0x80000001008a73a0;
    local_80 = *(undefined1 **)((param_1 & 0x7fffffffffffffff) + 0x20);
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(0x3a726f727265202c,0xe900000000000020);
    local_80 = *(undefined1 **)((param_1 & 0x7fffffffffffffff) + 0x30);
    _swift_errorRetain();
    puVar10 = &DAT_100a7f758;
    FUN_100004bb4(&DAT_100a7f758,&DAT_100813ef8);
    __sSS10describingSSx_tclufC(&local_80,puVar10);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    uVar8 = local_a8;
    puVar10 = local_b0;
    local_b0 = (undefined *)0x0;
    local_a8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar5 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0);
    pcVar15 = "lastPathComponent";
    IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
    __sSS6appendyySSF(IVar5,pcVar15);
    _swift_bridgeObjectRelease(pcVar15);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_80 = (undefined1 *)0x87;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar11,puVar17);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar17);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000021,0x80000001008a7340);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_80 = puVar10;
    uStack_78 = uVar8;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_80,&local_b0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(uVar8);
    uVar9 = local_a8;
    puVar10 = local_b0;
    uVar8 = DAT_100b362c0;
    lVar2 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      _swift_retain(uVar8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar11 = &DAT_1009a7080;
      _swift_allocObject(&DAT_1009a7080,0x30,7);
      *(long *)(puVar11 + 0x10) = lVar2;
      *(undefined8 *)(puVar11 + 0x18) = uVar8;
      *(undefined **)(puVar11 + 0x20) = puVar10;
      *(undefined8 *)(puVar11 + 0x28) = uVar9;
      puStack_98 = &DAT_1009a7098;
      local_88 = puVar11;
      goto LAB_100239570;
    }
LAB_100239670:
    _swift_bridgeObjectRelease(local_a8);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    FUN_100008184(uVar8,uVar9);
    uVar4 = uVar8;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar8,uVar9);
    FUN_100006cdc(uVar8,uVar9);
    local_b0 = (undefined *)0x0;
    IVar5 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                       uVar4,0,&local_b0);
    if (IVar5 == 0) {
      puVar10 = local_b0;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_b0);
      _swift_willThrow(0);
      _swift_errorRelease(puVar10);
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0,IVar5);
      _swift_unknownObjectRelease(IVar5);
      puVar10 = &DAT_100a7e7c8;
      FUN_100004bb4(&DAT_100a7e7c8,&DAT_100813f00);
      ppuVar6 = &local_80;
      _swift_dynamicCast(ppuVar6,&local_b0,PTR___sypN_100995e88 + 8,puVar10,6);
      puVar7 = local_80;
      if (((ulong)ppuVar6 & 1) != 0) {
        if (*(long *)(local_80 + 0x10) == 0) {
          _swift_bridgeObjectRelease(local_80);
        }
        else {
          _swift_bridgeObjectRetain(local_80);
          lVar2 = 0x61746164;
          uVar14 = 0;
          FUN_1001a2c70();
          if ((uVar14 & 1) == 0) {
            _swift_bridgeObjectRelease_n(puVar7,2);
          }
          else {
            puVar17 = *(undefined **)(*(long *)(puVar7 + 0x38) + lVar2 * 8);
            _swift_unknownObjectRetain(puVar17);
            _swift_bridgeObjectRelease_n(puVar7,2);
            puVar11 = PTR___syXlN_100995e80;
            ppuVar6 = &local_80;
            local_b0 = puVar17;
            _swift_dynamicCast(ppuVar6,&local_b0,PTR___syXlN_100995e80 + 8,puVar10,6);
            if (((ulong)ppuVar6 & 1) != 0) {
              puVar7 = local_80;
              __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                        (local_80,PTR___sSSN_1009957f8,puVar11 + 8,PTR___sSSSHsWP_100995808);
              _swift_bridgeObjectRelease(local_80);
              local_b0 = (undefined *)0x0;
              pcVar15 = "dataWithJSONObject:options:error:";
              IVar5 = NSJSONSerialization::dataWithJSONObject_options_error_
                                ((ID)&_OBJC_CLASS___NSJSONSerialization,
                                 "dataWithJSONObject:options:error:",puVar7,0,&local_b0);
              if (IVar5 != 0) {
                __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
                uVar8 = 0;
                __s10Foundation11JSONDecoderCMa();
                _swift_allocObject();
                __s10Foundation11JSONDecoderCACycfc();
                uVar9 = 0;
                FUN_10022b35c(0);
                puVar10 = &DAT_100a7e7c0;
                FUN_100005c90(&DAT_100a7e7c0,FUN_10022b35c,
                              &TargetProtocolConformanceDescriptor_100813938);
                __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                          (&local_b0,uVar9,IVar5,pcVar15,uVar9,puVar10);
                local_108 = IVar5;
                pcStack_100 = pcVar15;
                _swift_release(uVar8);
                local_110 = local_b0;
                FUN_100224698(local_b0,param_2,param_3);
                if (((ulong)local_b0 & 1) == 0) {
                  local_b0 = (undefined *)0x0;
                  local_a8 = 0xe000000000000000;
                  __ss11_StringGutsV4growyySiF(0x15);
                  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
                  IVar5 = 0xd0000000000000ad;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd0000000000000ad,0x80000001008a71e0);
                  pcVar15 = "lastPathComponent";
                  IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5)
                  ;
                  __sSS6appendyySSF(IVar5,pcVar15);
                  _swift_bridgeObjectRelease(pcVar15);
                  __sSS6appendyySSF(0x20,0xe100000000000000);
                  local_80 = (undefined1 *)0x7f;
                  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
                  __ss23CustomStringConvertibleP11descriptionSSvgTj
                            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
                  __sSS6appendyySSF();
                  _swift_bridgeObjectRelease(puVar10);
                  __sSS6appendyySSF(0x20,0xe100000000000000);
                  __sSS6appendyySSF(0xd000000000000021,0x80000001008a7340);
                  __sSS6appendyySSF(0xa20,0xe200000000000000);
                  local_80 = &DAT_d00000000000003b;
                  uStack_78 = 0x80000001008a73c0;
                  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                            (&local_80,&local_b0,PTR___sSSN_1009957f8,
                             PTR___ss26DefaultStringInterpolationVN_100995bf0,
                             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
                  uVar9 = local_a8;
                  puVar10 = local_b0;
                  uVar8 = DAT_100b362c0;
                  lVar2 = DAT_100b362b8;
                  if (DAT_100b362b8 != 0) {
                    FUN_10021e878(0);
                    uVar4 = uVar8;
                    _swift_retain();
                    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                    puVar11 = &DAT_1009a7120;
                    local_118 = uVar4;
                    _swift_allocObject(&DAT_1009a7120,0x30,7);
                    *(long *)(puVar11 + 0x10) = lVar2;
                    *(undefined8 *)(puVar11 + 0x18) = uVar8;
                    *(undefined **)(puVar11 + 0x20) = puVar10;
                    *(undefined8 *)(puVar11 + 0x28) = uVar9;
                    puStack_98 = &DAT_1009a7138;
                    local_88 = puVar11;
                    goto LAB_100239ac4;
                  }
LAB_100239bd4:
                  _swift_bridgeObjectRelease(local_a8);
                }
                else {
                  local_b0 = (undefined *)0x0;
                  local_a8 = 0xe000000000000000;
                  __ss11_StringGutsV4growyySiF(0x15);
                  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
                  IVar5 = 0xd0000000000000ad;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd0000000000000ad,0x80000001008a71e0);
                  pcVar15 = "lastPathComponent";
                  IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5)
                  ;
                  __sSS6appendyySSF(IVar5,pcVar15);
                  _swift_bridgeObjectRelease(pcVar15);
                  __sSS6appendyySSF(0x20,0xe100000000000000);
                  local_80 = (undefined1 *)0x7d;
                  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
                  __ss23CustomStringConvertibleP11descriptionSSvgTj
                            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
                  __sSS6appendyySSF();
                  _swift_bridgeObjectRelease(puVar10);
                  __sSS6appendyySSF(0x20,0xe100000000000000);
                  __sSS6appendyySSF(0xd000000000000021,0x80000001008a7340);
                  __sSS6appendyySSF(0xa20,0xe200000000000000);
                  local_80 = (undefined1 *)0xd000000000000029;
                  uStack_78 = 0x80000001008a7400;
                  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                            (&local_80,&local_b0,PTR___sSSN_1009957f8,
                             PTR___ss26DefaultStringInterpolationVN_100995bf0,
                             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
                  uVar9 = local_a8;
                  puVar10 = local_b0;
                  uVar8 = DAT_100b362c0;
                  lVar2 = DAT_100b362b8;
                  if (DAT_100b362b8 == 0) goto LAB_100239bd4;
                  FUN_10021e878(0);
                  uVar4 = uVar8;
                  _swift_retain();
                  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                  puVar11 = &DAT_1009a7170;
                  local_118 = uVar4;
                  _swift_allocObject(&DAT_1009a7170,0x30,7);
                  *(long *)(puVar11 + 0x10) = lVar2;
                  *(undefined8 *)(puVar11 + 0x18) = uVar8;
                  *(undefined **)(puVar11 + 0x20) = puVar10;
                  *(undefined8 *)(puVar11 + 0x28) = uVar9;
                  puStack_98 = &DAT_1009a7188;
                  local_88 = puVar11;
LAB_100239ac4:
                  local_90 = thunk_FUN_100222dd4;
                  local_a8 = 0x42000000;
                  local_a0 = FUN_1000acdb4;
                  local_b0 = PTR___NSConcreteStackBlock_100995490;
                  pvVar12 = __Block_copy(&local_b0);
                  puVar10 = local_88;
                  _swift_retain(uVar8);
                  _swift_release(puVar10);
                  lVar16 = local_e0;
                  local_120 = lVar2;
                  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
                  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar13 = &DAT_100a7e2d0;
                  FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
                  puVar10 = &DAT_100a7e2d8;
                  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
                  puVar11 = puVar10;
                  FUN_10021e91c();
                  lVar1 = local_d0;
                  lVar2 = local_f0;
                  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                            (local_f0,&local_b0,puVar10,puVar11,local_d0,puVar13);
                  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                            (0,lVar16,lVar2,pvVar12);
                  __Block_release(pvVar12);
                  FUN_10007ed2c(local_120,uVar8);
                  (**(code **)(local_e8 + 8))(lVar2,lVar1);
                  (**(code **)(local_d8 + 8))(lVar16,lVar3);
                }
                puVar10 = local_110;
                _swift_retain(local_110);
                (*param_4)();
                _swift_release_n(puVar10,2);
                FUN_100006cdc(local_108,pcStack_100);
                goto LAB_100239684;
              }
              puVar10 = local_b0;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_b0);
              _swift_willThrow(0);
              _swift_errorRelease(puVar10);
            }
          }
        }
      }
    }
    local_b0 = (undefined *)0x0;
    local_a8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2c);
    _swift_bridgeObjectRelease(local_a8);
    puVar17 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    puVar11 = PTR___sSiN_100995968;
    local_b0 = (undefined1 *)0xd00000000000001f;
    local_a8 = 0x80000001008a73a0;
    local_80 = *(undefined1 **)(param_1 + 0x20);
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(0x3a726f727265202c,0xe900000000000020);
    local_80 = *(undefined1 **)(param_1 + 0x30);
    _swift_errorRetain();
    puVar10 = &DAT_100a7f758;
    FUN_100004bb4(&DAT_100a7f758,&DAT_100813ef8);
    __sSS10describingSSx_tclufC(&local_80,puVar10);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    uVar8 = local_a8;
    puVar10 = local_b0;
    local_b0 = (undefined *)0x0;
    local_a8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar5 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0);
    pcVar15 = "lastPathComponent";
    IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
    __sSS6appendyySSF(IVar5,pcVar15);
    _swift_bridgeObjectRelease(pcVar15);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_80 = (undefined1 *)0x84;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar11,puVar17);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar17);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000021,0x80000001008a7340);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_80 = puVar10;
    uStack_78 = uVar8;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_80,&local_b0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(uVar8);
    uVar9 = local_a8;
    puVar10 = local_b0;
    uVar8 = DAT_100b362c0;
    lVar2 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) goto LAB_100239670;
    FUN_10021e878(0);
    _swift_retain(uVar8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar11 = &DAT_1009a70d0;
    _swift_allocObject(&DAT_1009a70d0,0x30,7);
    *(long *)(puVar11 + 0x10) = lVar2;
    *(undefined8 *)(puVar11 + 0x18) = uVar8;
    *(undefined **)(puVar11 + 0x20) = puVar10;
    *(undefined8 *)(puVar11 + 0x28) = uVar9;
    puStack_98 = &DAT_1009a70e8;
    local_88 = puVar11;
LAB_100239570:
    local_90 = thunk_FUN_100222dd4;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    pvVar12 = __Block_copy(&local_b0);
    puVar10 = local_88;
    _swift_retain(uVar8);
    _swift_release(puVar10);
    lVar16 = local_e0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e0);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar11 = puVar10;
    FUN_10021e91c();
    lVar1 = local_d0;
    lVar3 = local_f0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_f0,&local_b0,puVar10,puVar11,local_d0,puVar13);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar16,lVar3,pvVar12);
    __Block_release(pvVar12);
    FUN_10007ed2c(lVar2,uVar8);
    (**(code **)(local_e8 + 8))(lVar3,lVar1);
    (**(code **)(local_d8 + 8))(lVar16,local_f8);
  }
  (*local_c8)(0);
LAB_100239684:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

