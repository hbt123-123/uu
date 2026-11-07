// rea decompile_all
// name: FUN_10023a848
// address: 0x10023a848
// body: available
// range: 0x10023a848-0x10023ba57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023a848(double param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ID IVar10;
  void *pvVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  ID IVar15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  char *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  code *local_160;
  code *local_158;
  long local_150;
  code *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  undefined8 local_128;
  code *local_120;
  undefined *local_118;
  code *local_110;
  undefined *local_108;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar4 = &DAT_100a7e450;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)&local_1d0 - extraout_x8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar20 = *(long *)(lVar5 + -8);
  local_140 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  lVar19 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = 0;
  local_148 = (code *)(lVar19 - extraout_x12);
  __s10Foundation10URLRequestVMa();
  local_170 = *(long *)(lVar5 + -8);
  local_168 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_170 + 0x40));
  lVar17 = (lVar19 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_178 = lVar17;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_1b0 = *(long *)(lVar5 + -8);
  local_1a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1b0 + 0x40));
  lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_1c0 = lVar17;
  __s8Dispatch0A3QoSVMa();
  local_1c8 = *(long *)(lVar5 + -8);
  local_1b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1c8 + 0x40));
  lVar17 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a7e718;
  local_1d0 = lVar17;
  FUN_100004bb4(&DAT_100a7e718,&DAT_100813648);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_00;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  local_138 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_138 + 0x40));
  lVar18 = lVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_188 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_01;
  local_198 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_02;
  local_180 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_150 = param_3;
  FUN_1002254e8(param_3,param_4);
  if (((param_2 & 1) == 0) && (lVar6 = local_150, FUN_10022496c(local_150,param_4), lVar6 != 0)) {
    local_158 = (code *)lVar6;
    FUN_100224200(0);
    FUN_100224090(lVar23,local_150,param_4);
    lVar6 = local_140;
    lVar7 = lVar23;
    (**(code **)(lVar20 + 0x30))(lVar23,1,local_140);
    pcVar24 = local_148;
    if ((int)lVar7 == 1) {
      _swift_release(local_158);
      FUN_100040bb4(lVar23,&DAT_100a7e450,&DAT_100813ef0);
    }
    else {
      (**(code **)(lVar20 + 0x20))(local_148,lVar23,lVar6);
      __s10Foundation4DateVACycfC(lVar19);
      __s10Foundation4DateV17timeIntervalSinceySdACF(pcVar24);
      pcVar21 = *(code **)(lVar20 + 8);
      (*pcVar21)(lVar19,lVar6);
      if (param_1 < 86400.0) {
        local_130 = (undefined *)0x0;
        local_128 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar10 = 0xd0000000000000ad;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0)
        ;
        pcVar16 = "lastPathComponent";
        IVar10 = _objc_msgSend(IVar10,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar10);
        __sSS6appendyySSF(IVar10,pcVar16);
        _swift_bridgeObjectRelease(pcVar16);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_90 = 0x6b;
        puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar4);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000021,0x80000001008a7340);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_90 = 0xd00000000000002a;
        uStack_88 = 0x80000001008a7370;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_90,&local_130,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        uVar2 = local_128;
        puVar4 = local_130;
        uVar1 = DAT_100b362c0;
        lVar5 = DAT_100b362b8;
        if (DAT_100b362b8 == 0) {
          _swift_bridgeObjectRelease(local_128);
        }
        else {
          FUN_10021e878(0);
          _swift_retain(uVar1);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar8 = &DAT_1009a7030;
          _swift_allocObject(&DAT_1009a7030,0x30,7);
          *(long *)(puVar8 + 0x10) = lVar5;
          *(undefined8 *)(puVar8 + 0x18) = uVar1;
          *(undefined **)(puVar8 + 0x20) = puVar4;
          *(undefined8 *)(puVar8 + 0x28) = uVar2;
          local_110 = thunk_FUN_100222dd4;
          local_130 = PTR___NSConcreteStackBlock_100995490;
          local_128 = 0x42000000;
          local_120 = FUN_1000acdb4;
          local_118 = &DAT_1009a7048;
          local_108 = puVar8;
          pvVar11 = __Block_copy(&local_130);
          puVar4 = local_108;
          _swift_retain(uVar1);
          _swift_release(puVar4);
          lVar17 = local_1d0;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_1d0);
          local_130 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar9 = &DAT_100a7e2d0;
          FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar4 = &DAT_100a7e2d8;
          FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
          puVar8 = puVar4;
          FUN_10021e91c();
          lVar19 = local_1a8;
          lVar18 = local_1c0;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_1c0,&local_130,puVar4,puVar8,local_1a8,puVar9);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar17,lVar18,pvVar11);
          __Block_release(pvVar11);
          FUN_10007ed2c(lVar5,uVar1);
          lVar6 = local_140;
          pcVar24 = local_148;
          (**(code **)(local_1b0 + 8))(lVar18,lVar19);
          (**(code **)(local_1c8 + 8))(lVar17,local_1b8);
        }
        pcVar3 = local_158;
        lVar5 = DAT_100a7de20;
        _swift_retain(local_158);
        if (lVar5 != -1) {
          _swift_once(&DAT_100a7de20,FUN_100234cec);
        }
        *(undefined1 *)(DAT_100a7f1f8 + 0x11) = 0;
        _swift_beginAccess(&DAT_100b36348,&local_130,1,0);
        uVar1 = DAT_100b36348;
        DAT_100b36348 = (long)pcVar3;
        _swift_release(pcVar3);
        _swift_release(uVar1);
        (*pcVar21)(pcVar24,lVar6);
        return;
      }
      (*pcVar21)(pcVar24,lVar6);
      _swift_release(local_158);
    }
  }
  local_130 = (undefined *)0x0;
  local_128 = 0xe000000000000000;
  _swift_bridgeObjectRetain(param_4);
  __ss11_StringGutsV4growyySiF(0x11);
  _swift_bridgeObjectRelease(local_128);
  local_130 = (undefined *)0x6e6f43207465475b;
  local_128 = 0xed0000205d676966;
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,&local_90,0,0);
  puVar9 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::apiHost);
  _swift_beginAccess(puVar9,auStack_a8,0,0);
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  _swift_bridgeObjectRetain(uVar2);
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar17,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  lVar19 = local_138;
  local_148 = *(code **)(local_138 + 0x30);
  lVar20 = lVar17;
  (*local_148)(lVar17,1,lVar5);
  if ((int)lVar20 == 1) {
    if (DAT_100a7dde8 != -1) {
      _swift_once(&DAT_100a7dde8,FUN_1002238e0);
    }
    lVar20 = lVar5;
    FUN_10021bec0(lVar5,&DAT_100b362e8);
    (**(code **)(lVar19 + 0x10))(lVar18,lVar20,lVar5);
    lVar20 = lVar17;
    (*local_148)(lVar17,1,lVar5);
    if ((int)lVar20 != 1) {
      FUN_100040bb4(lVar17,&DAT_100a7e718,&DAT_100813648);
    }
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar18,lVar17,lVar5);
  }
  local_160 = *(code **)(lVar19 + 0x20);
  (*local_160)(lVar18 - extraout_x12_04,lVar18,lVar5);
  puVar4 = &DAT_100a7f750;
  FUN_100005c90(&DAT_100a7f750,PTR___s10Foundation3URLVMa_100996188,
                PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1009961b8);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(lVar5,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  local_158 = *(code **)(lVar19 + 8);
  (*local_158)(lVar18 - extraout_x12_04,lVar5);
  local_1a0 = "[POST] Failure: Code ";
  __sSS6appendyySSF(&DAT_d000000000000013,0x80000001008a7320);
  uVar1 = local_128;
  puVar4 = local_130;
  local_130 = (undefined *)0x0;
  local_128 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar10 = 0xd0000000000000ad;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0);
  pcVar16 = "lastPathComponent";
  IVar10 = _objc_msgSend(IVar10,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar10);
  __sSS6appendyySSF(IVar10,pcVar16);
  _swift_bridgeObjectRelease(pcVar16);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_c0 = (undefined *)0x72;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0xd000000000000021,0x80000001008a7340);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_c0 = puVar4;
  uStack_b8 = uVar1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_c0,&local_130,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = local_128;
  puVar4 = local_130;
  uVar1 = DAT_100b362c0;
  lVar17 = DAT_100b362b8;
  local_140 = param_4;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_128);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar1);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar8 = &DAT_1009a6fe0;
    _swift_allocObject(&DAT_1009a6fe0,0x30,7);
    *(long *)(puVar8 + 0x10) = lVar17;
    *(undefined8 *)(puVar8 + 0x18) = uVar1;
    *(undefined **)(puVar8 + 0x20) = puVar4;
    *(undefined8 *)(puVar8 + 0x28) = uVar2;
    local_110 = thunk_FUN_100222dd4;
    local_130 = PTR___NSConcreteStackBlock_100995490;
    local_128 = 0x42000000;
    local_120 = FUN_1000acdb4;
    local_118 = &DAT_1009a6ff8;
    local_108 = puVar8;
    pvVar11 = __Block_copy(&local_130);
    puVar4 = local_108;
    _swift_retain(uVar1);
    _swift_release(puVar4);
    lVar18 = local_1d0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_1d0);
    local_130 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar8 = puVar4;
    FUN_10021e91c();
    lVar20 = local_1a8;
    lVar19 = local_1c0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_1c0,&local_130,puVar4,puVar8,local_1a8,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar18,lVar19,pvVar11);
    __Block_release(pvVar11);
    FUN_10007ed2c(lVar17,uVar1);
    (**(code **)(local_1b0 + 8))(lVar19,lVar20);
    (**(code **)(local_1c8 + 8))(lVar18,local_1b8);
  }
  lVar23 = local_178;
  lVar20 = local_180;
  puVar4 = &DAT_1009a6f68;
  _swift_allocObject(&DAT_1009a6f68,0x30,7);
  lVar7 = local_140;
  lVar6 = local_150;
  *(long *)(puVar4 + 0x10) = local_150;
  *(long *)(puVar4 + 0x18) = local_140;
  *(code **)(puVar4 + 0x20) = FUN_100235fd4;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  FUN_10021e878(0);
  _swift_bridgeObjectRetain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar9 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::apiHost);
  _swift_beginAccess(puVar9,&local_c0,0,0);
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  _swift_bridgeObjectRetain(uVar2);
  lVar18 = local_190;
  __s10Foundation3URLV6stringACSgSSh_tcfC(local_190,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  lVar12 = lVar18;
  (*local_148)(lVar18,1,lVar5);
  lVar22 = local_138;
  lVar19 = local_188;
  lVar17 = local_198;
  if ((int)lVar12 == 1) {
    if (DAT_100a7dde8 != -1) {
      _swift_once(&DAT_100a7dde8,FUN_1002238e0);
    }
    lVar12 = lVar5;
    FUN_10021bec0(lVar5,&DAT_100b362e8);
    (**(code **)(lVar22 + 0x10))(lVar17,lVar12,lVar5);
    lVar12 = lVar18;
    (*local_148)(lVar18,1,lVar5);
    if ((int)lVar12 != 1) {
      FUN_100040bb4(lVar18,&DAT_100a7e718,&DAT_100813648);
    }
  }
  else {
    (*local_160)(local_198,lVar18,lVar5);
    lVar19 = local_188;
    lVar22 = local_138;
  }
  pcVar24 = local_160;
  (*local_160)(lVar20,lVar17,lVar5);
  pcVar16 = local_1a0;
  puVar13 = &DAT_d000000000000013;
  __sSS5countSivg(&DAT_d000000000000013,(ulong)local_1a0 | 0x8000000000000000);
  if (0 < (long)puVar13) {
    __s10Foundation3URLV22appendingPathComponentyACSSF
              (lVar19,&DAT_d000000000000013,(ulong)pcVar16 | 0x8000000000000000);
    (*local_158)(lVar20,lVar5);
    (*pcVar24)(lVar20,lVar19,lVar5);
  }
  (**(code **)(lVar22 + 0x10))(lVar19,lVar20,lVar5);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (lVar23,0x404e000000000000,lVar19,0);
  __s10Foundation10URLRequestV10httpMethodSSSgvs(0x54534f50,0xe400000000000000);
  puVar8 = &DAT_100a7e440;
  FUN_100004bb4(&DAT_100a7e440,&DAT_1008134a8);
  _swift_initStackObject();
  lVar17 = local_140;
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined8 *)(puVar8 + 0x20) = 0x542d687475412d58;
  *(undefined8 *)(puVar8 + 0x28) = 0xec0000006e656b6f;
  *(long *)(puVar8 + 0x30) = lVar6;
  *(long *)(puVar8 + 0x38) = local_140;
  _swift_bridgeObjectRetain(local_140);
  puVar14 = puVar8;
  FUN_100234524(puVar8);
  _swift_setDeallocating(puVar8);
  FUN_100040bb4(puVar8 + 0x20,&DAT_100a7e448,&DAT_100813ee0);
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar14);
  if (DAT_100a7ddf0 != -1) {
    _swift_once(&DAT_100a7ddf0,FUN_1002239c4);
  }
  IVar10 = DAT_100b36300;
  IVar15 = DAT_100b36300;
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  puVar8 = &DAT_1009a6f90;
  _swift_allocObject(&DAT_1009a6f90,0x28,7);
  *(long *)(puVar8 + 0x10) = lVar7;
  *(code **)(puVar8 + 0x18) = FUN_10023ba6c;
  *(undefined **)(puVar8 + 0x20) = puVar4;
  local_110 = FUN_10023baa4;
  local_130 = PTR___NSConcreteStackBlock_100995490;
  local_128 = 0x42000000;
  local_120 = FUN_1000bef80;
  local_118 = &DAT_1009a6fa8;
  local_108 = puVar8;
  pvVar11 = __Block_copy(&local_130);
  puVar8 = local_108;
  _swift_retain(puVar4);
  _swift_release(puVar8);
  IVar10 = _objc_msgSend(IVar10,"dataTaskWithRequest:completionHandler:",IVar15,pvVar11);
  __Block_release(pvVar11);
  _objc_msgSend(IVar10,"resume");
  (**(code **)(local_170 + 8))(lVar23,local_168);
  (*local_158)(lVar20,lVar5);
  _swift_bridgeObjectRelease(lVar17);
  _swift_release(puVar4);
  return;
}

