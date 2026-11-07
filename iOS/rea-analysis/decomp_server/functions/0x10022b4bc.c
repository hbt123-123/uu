// rea decompile_all
// name: FUN_10022b4bc
// address: 0x10022b4bc
// body: available
// range: 0x10022b4bc-0x10022c3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022c3bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10022b4bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  undefined **ppuVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long lVar19;
  undefined *puVar20;
  ID aIStack_1a0 [4];
  undefined1 auStack_180 [8];
  undefined *local_178;
  char *local_170;
  undefined1 *local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  char *local_110;
  char *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d0;
  char *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar6 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = 0;
  local_168 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_138 = *(long *)(lVar6 + -8);
  local_130 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_138 + 0x40));
  lVar18 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_140 = lVar18;
  __s8Dispatch0A3QoSVMa();
  local_150 = *(long *)(lVar6 + -8);
  local_148 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_150 + 0x40));
  lVar18 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar18;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
  local_d0 = (undefined *)0x0;
  local_120 = &_OBJC_CLASS___NSJSONSerialization;
  IVar7 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     param_1,4,&local_d0);
  if (IVar7 == 0) {
    puVar20 = local_d0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_d0);
    _swift_willThrow(0);
    _swift_errorRelease(puVar20);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_d0,IVar7);
    _swift_unknownObjectRelease(IVar7);
    puVar20 = &DAT_100a7ef30;
    FUN_100004bb4(&DAT_100a7ef30,&DAT_100813b38);
    ppuVar8 = &local_a0;
    _swift_dynamicCast(ppuVar8,&local_d0,PTR___sypN_100995e88 + 8,puVar20,6);
    if (((ulong)ppuVar8 & 1) != 0) {
      local_d0 = (undefined *)0x0;
      local_c8 = (char *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1b);
      _swift_bridgeObjectRelease(local_c8);
      puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      puVar20 = PTR___sSiN_100995968;
      local_d0 = (undefined *)0x1000000000000019;
      local_c8 = (char *)0x80000001008a67b0;
      local_128 = local_a0;
      local_100 = *(undefined **)(local_a0 + 0x10);
      puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      local_a0 = local_100;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar10);
      pcVar16 = local_c8;
      puVar10 = local_d0;
      local_d0 = (undefined *)0x0;
      local_c8 = (char *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x15);
      __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
      IVar7 = 0xd00000000000009e;
      local_108 = s__Request__Events_Count_1008a67d0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a67d0);
      pcVar14 = "lastPathComponent";
      IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
      __sSS6appendyySSF(IVar7,pcVar14);
      _swift_bridgeObjectRelease(pcVar14);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      local_a0 = (undefined *)0xe;
      __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar20,puVar11);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar11);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      local_110 = "unt-ios/FCount/Core/Core.swift";
      __sSS6appendyySSF(0xd000000000000011,0x80000001008a6870);
      __sSS6appendyySSF(0xa20,0xe200000000000000);
      local_a0 = puVar10;
      uStack_98 = pcVar16;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_a0,&local_d0,PTR___sSSN_1009957f8,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      _swift_bridgeObjectRelease(pcVar16);
      pcVar16 = local_c8;
      puVar10 = local_d0;
      uVar1 = DAT_100b362c0;
      lVar6 = DAT_100b362b8;
      puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar20 = PTR___NSConcreteStackBlock_100995490;
      if (DAT_100b362b8 == 0) {
        _swift_bridgeObjectRelease(local_c8);
      }
      else {
        FUN_10021e878(0);
        _swift_retain(uVar1);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar12 = &DAT_1009a6450;
        _swift_allocObject(&DAT_1009a6450,0x30,7);
        *(long *)(puVar12 + 0x10) = lVar6;
        *(undefined8 *)(puVar12 + 0x18) = uVar1;
        *(undefined **)(puVar12 + 0x20) = puVar10;
        *(char **)(puVar12 + 0x28) = pcVar16;
        local_b0 = thunk_FUN_100222dd4;
        local_d0 = puVar20;
        local_c8 = (char *)0x42000000;
        local_c0 = FUN_1000acdb4;
        puStack_b8 = &DAT_1009a6468;
        local_a8 = puVar12;
        pvVar9 = __Block_copy(&local_d0);
        puVar10 = local_a8;
        _swift_retain(uVar1);
        _swift_release(puVar10);
        lVar19 = local_158;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_158);
        local_d0 = puVar11;
        FUN_10021e8d8();
        puVar20 = &DAT_100a7e2d8;
        FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
        puVar11 = puVar20;
        FUN_10021e91c();
        lVar4 = local_130;
        lVar3 = local_140;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_140,&local_d0,puVar20,puVar11,local_130,puVar10);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar19,lVar3,pvVar9);
        __Block_release(pvVar9);
        FUN_10007ed2c(lVar6,uVar1);
        (**(code **)(local_138 + 8))(lVar3,lVar4);
        (**(code **)(local_150 + 8))(lVar19,local_148);
      }
      if (local_100 != (undefined *)0x0) {
        local_160 = -(long)local_100;
        puVar20 = (undefined *)0x4;
        puVar11 = PTR___sSSN_1009957f8;
        puVar10 = PTR___sypN_100995e88;
        do {
          lVar19 = *(long *)(local_128 + (long)puVar20 * 8);
          lVar6 = *(long *)(lVar19 + 0x10);
          _swift_bridgeObjectRetain(lVar19);
          if (lVar6 == 0) {
LAB_10022baec:
            local_a0 = (undefined *)0x0;
            uStack_98 = 0xe000000000000000;
            local_88 = puVar11;
          }
          else {
            lVar6 = 0x746e657665;
            uVar15 = 0;
            FUN_1001a2c70(0x746e657665);
            if ((uVar15 & 1) == 0) goto LAB_10022baec;
            FUN_10003e8bc(*(long *)(lVar19 + 0x38) + lVar6 * 0x20,&local_d0);
            FUN_10007f3d4(&local_d0,&local_a0);
          }
          local_d0 = (undefined *)0x0;
          local_c8 = (char *)0xe000000000000000;
          local_100 = puVar20;
          __ss11_StringGutsV4growyySiF(0x19);
          __sSS6appendyySSF(0x747365757165525b,0xed00002e6f4e205d);
          puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          puVar13 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          local_118 = puVar20 + -3;
          local_e8 = puVar20 + -3;
          __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar13);
          __sSS6appendyySSF(0x203a746e65766520,0xe800000000000000);
          __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                    (&local_a0,&local_d0,puVar10 + 8,
                     PTR___ss26DefaultStringInterpolationVN_100995bf0,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
          pcVar16 = local_c8;
          puVar20 = local_d0;
          local_d0 = (undefined *)0x0;
          local_c8 = (char *)0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x15);
          __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
          IVar7 = 0xd00000000000009e;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd00000000000009e,(ulong)local_108 | 0x8000000000000000);
          pcVar14 = "lastPathComponent";
          IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
          __sSS6appendyySSF(IVar7,pcVar14);
          _swift_bridgeObjectRelease(pcVar14);
          __sSS6appendyySSF(0x20,0xe100000000000000);
          local_e8 = (undefined *)0x12;
          __ss23CustomStringConvertibleP11descriptionSSvgTj(PTR___sSiN_100995968,puVar12);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar12);
          __sSS6appendyySSF(0x20,0xe100000000000000);
          __sSS6appendyySSF(0xd000000000000011,(ulong)local_110 | 0x8000000000000000);
          __sSS6appendyySSF(0xa20,0xe200000000000000);
          local_e8 = puVar20;
          local_e0 = pcVar16;
          __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                    (&local_e8,&local_d0,puVar11,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
          _swift_bridgeObjectRelease(pcVar16);
          pcVar16 = local_c8;
          puVar20 = local_d0;
          uVar1 = DAT_100b362c0;
          lVar6 = DAT_100b362b8;
          if (DAT_100b362b8 == 0) {
            _swift_bridgeObjectRelease(local_c8);
          }
          else {
            FUN_10021e878(0);
            _swift_retain(uVar1);
            __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
            puVar11 = &DAT_1009a6400;
            _swift_allocObject(&DAT_1009a6400,0x30,7);
            *(long *)(puVar11 + 0x10) = lVar6;
            *(undefined8 *)(puVar11 + 0x18) = uVar1;
            *(undefined **)(puVar11 + 0x20) = puVar20;
            *(char **)(puVar11 + 0x28) = pcVar16;
            local_b0 = thunk_FUN_100222dd4;
            local_d0 = PTR___NSConcreteStackBlock_100995490;
            local_c8 = (char *)0x42000000;
            local_c0 = FUN_1000acdb4;
            puStack_b8 = &DAT_1009a6418;
            local_a8 = puVar11;
            pvVar9 = __Block_copy(&local_d0);
            puVar11 = local_a8;
            _swift_retain(uVar1);
            _swift_release(puVar11);
            lVar3 = local_158;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_158);
            local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
            FUN_10021e8d8();
            puVar20 = &DAT_100a7e2d8;
            FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
            puVar10 = puVar20;
            FUN_10021e91c();
            lVar5 = local_130;
            lVar4 = local_140;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_140,&local_d0,puVar20,puVar10,local_130,puVar11);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar3,lVar4,pvVar9);
            __Block_release(pvVar9);
            FUN_10007ed2c(lVar6,uVar1);
            puVar11 = PTR___sSSN_1009957f8;
            (**(code **)(local_138 + 8))(lVar4,lVar5);
            puVar10 = PTR___sypN_100995e88;
            (**(code **)(local_150 + 8))(lVar3,local_148);
          }
          lVar6 = lVar19;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (lVar19,puVar11,puVar10 + 8,PTR___sSSSHsWP_100995808);
          _swift_bridgeObjectRelease(lVar19);
          local_d0 = (undefined *)0x0;
          pcVar16 = "dataWithJSONObject:options:error:";
          puVar12 = (undefined *)
                    _objc_msgSend((ID)local_120,"dataWithJSONObject:options:error:",lVar6,1,
                                  &local_d0);
          puVar20 = local_100;
          if (puVar12 == (undefined *)0x0) {
            puVar12 = local_d0;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_d0);
            _swift_willThrow(0);
            _swift_errorRelease(puVar12);
          }
          else {
            __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
            puVar2 = local_168;
            __sSS10FoundationE8EncodingV4utf8ACvgZ(local_168,0);
            puVar13 = puVar12;
            pcVar14 = pcVar16;
            __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
                      (puVar12,pcVar16,puVar2);
            if (pcVar14 == (char *)0x0) {
              FUN_100006cdc(puVar12,pcVar16);
            }
            else {
              local_e8 = (undefined *)0x2020;
              local_e0 = 0xe200000000000000;
              local_f8 = 0x20202020;
              local_f0 = 0xe400000000000000;
              local_178 = puVar12;
              local_170 = pcVar16;
              local_d0 = puVar13;
              local_c8 = pcVar14;
              FUN_10021e96c();
              *(undefined **)(lVar18 + -0x10) = puVar13;
              *(undefined **)(lVar18 + -8) = puVar13;
              ppuVar8 = &local_e8;
              puVar17 = &local_f8;
              *(undefined **)(lVar18 + -0x20) = puVar11;
              *(undefined **)(lVar18 + -0x18) = puVar13;
              __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                        (ppuVar8,puVar17,0,0,0,1,puVar11,puVar11);
              _swift_bridgeObjectRelease(pcVar14);
              local_d0 = (undefined *)0x0;
              local_c8 = (char *)0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x1b);
              _swift_bridgeObjectRelease(local_c8);
              puVar10 = PTR___sSiN_100995968;
              local_d0 = (undefined *)0x747365757165525b;
              local_c8 = (char *)0xed00002e6f4e205d;
              local_e8 = local_118;
              puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
              __ss23CustomStringConvertibleP11descriptionSSvgTj
                        (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
              __sSS6appendyySSF();
              _swift_bridgeObjectRelease(puVar12);
              __sSS6appendyySSF(0x20736d6172617020,0xea0000000000200a);
              __sSS6appendyySSF(ppuVar8,puVar17);
              _swift_bridgeObjectRelease(puVar17);
              pcVar16 = local_c8;
              puVar12 = local_d0;
              local_d0 = (undefined *)0x0;
              local_c8 = (char *)0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x15);
              __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
              IVar7 = 0xd00000000000009e;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd00000000000009e,(ulong)local_108 | 0x8000000000000000);
              pcVar14 = "lastPathComponent";
              IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
              __sSS6appendyySSF(IVar7,pcVar14);
              _swift_bridgeObjectRelease(pcVar14);
              __sSS6appendyySSF(0x20,0xe100000000000000);
              local_e8 = (undefined *)0x16;
              puVar13 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
              __ss23CustomStringConvertibleP11descriptionSSvgTj
                        (puVar10,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
              __sSS6appendyySSF();
              _swift_bridgeObjectRelease(puVar13);
              __sSS6appendyySSF(0x20,0xe100000000000000);
              __sSS6appendyySSF(0xd000000000000011,(ulong)local_110 | 0x8000000000000000);
              __sSS6appendyySSF(0xa20,0xe200000000000000);
              local_e8 = puVar12;
              local_e0 = pcVar16;
              __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                        (&local_e8,&local_d0,puVar11,
                         PTR___ss26DefaultStringInterpolationVN_100995bf0,
                         PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
              _swift_bridgeObjectRelease(pcVar16);
              pcVar16 = local_c8;
              puVar10 = local_d0;
              uVar1 = DAT_100b362c0;
              lVar6 = DAT_100b362b8;
              if (DAT_100b362b8 == 0) {
                FUN_100006cdc(local_178,local_170);
                _swift_bridgeObjectRelease(pcVar16);
                puVar10 = PTR___sypN_100995e88;
              }
              else {
                FUN_10021e878(0);
                _swift_retain(uVar1);
                __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                puVar20 = &DAT_1009a63b0;
                _swift_allocObject(&DAT_1009a63b0,0x30,7);
                *(long *)(puVar20 + 0x10) = lVar6;
                *(undefined8 *)(puVar20 + 0x18) = uVar1;
                *(undefined **)(puVar20 + 0x20) = puVar10;
                *(char **)(puVar20 + 0x28) = pcVar16;
                local_b0 = FUN_100222dd4;
                local_d0 = PTR___NSConcreteStackBlock_100995490;
                local_c8 = (char *)0x42000000;
                local_c0 = FUN_1000acdb4;
                puStack_b8 = &DAT_1009a63c8;
                local_a8 = puVar20;
                pvVar9 = __Block_copy(&local_d0);
                puVar11 = local_a8;
                _swift_retain(uVar1);
                _swift_release(puVar11);
                lVar19 = local_158;
                __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_158);
                local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
                FUN_10021e8d8();
                puVar20 = &DAT_100a7e2d8;
                FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
                puVar10 = puVar20;
                FUN_10021e91c();
                lVar4 = local_130;
                lVar3 = local_140;
                __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                          (local_140,&local_d0,puVar20,puVar10,local_130,puVar11);
                __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                          (0,lVar19,lVar3,pvVar9);
                FUN_100006cdc(local_178,local_170);
                __Block_release(pvVar9);
                FUN_10007ed2c(lVar6,uVar1);
                puVar11 = PTR___sSSN_1009957f8;
                (**(code **)(local_138 + 8))(lVar3,lVar4);
                puVar20 = local_100;
                (**(code **)(local_150 + 8))(lVar19,local_148);
                puVar10 = PTR___sypN_100995e88;
              }
            }
          }
          FUN_10003f094(&local_a0);
          puVar20 = puVar20 + 1;
        } while (puVar20 + local_160 != (undefined *)0x4);
      }
      _swift_bridgeObjectRelease(local_128);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

