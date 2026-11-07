// rea decompile_all
// name: FUN_10022fe04
// address: 0x10022fe04
// body: available
// range: 0x10022fe04-0x100230927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100230654) */

void FUN_10022fe04(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar17;
  long extraout_x12;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_180 [8];
  long local_178;
  long local_170;
  code *local_168;
  ulong local_160;
  long local_158;
  ulong local_150;
  long local_148;
  long local_140;
  undefined1 *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long lStack_e0;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar4 + -8);
  lVar20 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_138 = auStack_180 + -(lVar20 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = (long)(auStack_180 + -(lVar20 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar5 = 0;
  local_130 = lVar16;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_108 = *(long *)(lVar5 + -8);
  local_100 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar16 = lVar16 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_110 = lVar16;
  __s8Dispatch0A3QoSVMa();
  local_120 = *(long *)(lVar5 + -8);
  local_118 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  local_128 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    local_f8 = param_1;
    FUN_10023202c();
    if (param_1 != 0) {
      puVar18 = *(undefined **)(param_1 + 0x10);
      if (puVar18 != (undefined *)0x0) {
        local_d0 = (undefined *)0x0;
        local_c8 = 0xe000000000000000;
        local_178 = param_1;
        local_148 = lVar19;
        local_140 = lVar4;
        __ss11_StringGutsV4growyySiF(0x38);
        __sSS6appendyySSF(&DAT_d000000000000013,0x80000001008a6b50);
        puVar9 = PTR___sSiN_100995968;
        puVar13 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        local_a0 = puVar18;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar13);
        __sSS6appendyySSF(0x1000000000000023,0x80000001008a6b70);
        uVar12 = local_c8;
        puVar18 = local_d0;
        local_d0 = (undefined *)0x0;
        local_c8 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar6 = 0xd0000000000000a6;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0)
        ;
        pcVar14 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        __sSS6appendyySSF(IVar6,pcVar14);
        _swift_bridgeObjectRelease(pcVar14);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_a0 = (undefined *)0xc0;
        puVar13 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (puVar9,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar13);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000012,0x80000001008a6b30);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_a0 = puVar18;
        uStack_98 = uVar12;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_a0,&local_d0,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        _swift_bridgeObjectRelease(uVar12);
        uVar15 = local_c8;
        puVar13 = local_d0;
        uVar12 = DAT_100b362c0;
        lVar4 = DAT_100b362b8;
        puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar18 = PTR___NSConcreteStackBlock_100995490;
        if (DAT_100b362b8 == 0) {
          _swift_bridgeObjectRelease(local_c8);
        }
        else {
          FUN_10021e878(0);
          _swift_retain(uVar12);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar7 = &DAT_1009a6808;
          _swift_allocObject(&DAT_1009a6808,0x30,7);
          *(long *)(puVar7 + 0x10) = lVar4;
          *(undefined8 *)(puVar7 + 0x18) = uVar12;
          *(undefined **)(puVar7 + 0x20) = puVar13;
          *(undefined8 *)(puVar7 + 0x28) = uVar15;
          local_b0 = thunk_FUN_100222dd4;
          local_d0 = puVar18;
          local_c8 = 0x42000000;
          local_c0 = FUN_1000acdb4;
          puStack_b8 = &DAT_1009a6820;
          local_a8 = puVar7;
          pvVar8 = __Block_copy(&local_d0);
          puVar18 = local_a8;
          _swift_retain(uVar12);
          _swift_release(puVar18);
          lVar5 = local_128;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
          local_d0 = puVar9;
          puVar10 = &DAT_100a7e2d0;
          FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar18 = &DAT_100a7e2d8;
          FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
          puVar9 = puVar18;
          FUN_10021e91c();
          lVar19 = local_100;
          lVar16 = local_110;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_110,&local_d0,puVar18,puVar9,local_100,puVar10);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar5,lVar16,pvVar8);
          __Block_release(pvVar8);
          FUN_10007ed2c(lVar4,uVar12);
          (**(code **)(local_108 + 8))(lVar16,lVar19);
          (**(code **)(local_120 + 8))(lVar5,local_118);
        }
        lVar5 = local_178;
        lVar4 = *(long *)(local_178 + 0x10);
        if (lVar4 == 0) {
          _swift_release(local_f8);
        }
        else {
          local_150 = (ulong)*(byte *)(local_148 + 0x50);
          lVar5 = local_178 + (local_150 + 0x20 & (local_150 ^ 0xffffffffffffffff));
          local_158 = *(long *)(local_148 + 0x48);
          local_160 = local_150 + 0x18 & (local_150 ^ 0xffffffffffffffff);
          pcVar17 = *(code **)(local_148 + 0x10);
          local_170 = local_160 + lVar20;
          lVar20 = local_130;
          lVar16 = local_148;
          lVar19 = local_140;
          local_168 = pcVar17;
          do {
            (*pcVar17)(lVar20,lVar5,lVar19);
            uVar15 = 0;
            lVar11 = lVar20;
            __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
            uVar12 = 0;
            local_e8 = uVar15;
            lStack_e0 = lVar11;
            FUN_10023a78c();
            if (DAT_100a7dde0 != -1) {
              _swift_once(&DAT_100a7dde0,FUN_100223714);
            }
            puVar1 = local_138;
            uVar15 = DAT_100b362e0;
            (*pcVar17)(local_138,lVar20,lVar19);
            puVar18 = &DAT_1009a6790;
            _swift_allocObject(&DAT_1009a6790,local_170,local_150 | 7);
            lVar20 = local_f8;
            *(long *)(puVar18 + 0x10) = local_f8;
            (**(code **)(lVar16 + 0x20))(puVar18 + local_160,puVar1,lVar19);
            puVar9 = &DAT_1009a67b8;
            _swift_allocObject(&DAT_1009a67b8,0x40,7);
            lVar16 = lStack_e0;
            uVar3 = local_e8;
            *(long *)(puVar9 + 0x10) = lStack_e0;
            *(undefined8 *)(puVar9 + 0x18) = local_e8;
            *(undefined8 *)(puVar9 + 0x20) = uVar12;
            *(undefined8 *)(puVar9 + 0x28) = uVar15;
            *(code **)(puVar9 + 0x30) = FUN_100232574;
            *(undefined **)(puVar9 + 0x38) = puVar18;
            local_b0 = FUN_1002325f0;
            local_d0 = PTR___NSConcreteStackBlock_100995490;
            local_c8 = 0x42000000;
            local_c0 = FUN_1000acdb4;
            puStack_b8 = &DAT_1009a67d0;
            local_a8 = puVar9;
            pvVar8 = __Block_copy(&local_d0);
            _swift_retain(lVar20);
            FUN_100008184(lVar16,uVar3);
            local_f0 = uVar15;
            _swift_retain(puVar18);
            lVar11 = local_128;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
            local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
            puVar10 = &DAT_100a7e2d0;
            FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar9 = &DAT_100a7e2d8;
            FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
            puVar13 = puVar9;
            FUN_10021e91c();
            lVar2 = local_100;
            lVar16 = local_110;
            lVar19 = local_140;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_110,&local_a0,puVar9,puVar13,local_100,puVar10);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar11,lVar16,pvVar8);
            __Block_release(pvVar8);
            _swift_release(puVar18);
            lVar20 = local_130;
            pcVar17 = local_168;
            (**(code **)(local_108 + 8))(lVar16,lVar2);
            lVar16 = local_148;
            (**(code **)(local_120 + 8))(lVar11,local_118);
            _swift_release(local_a8);
            FUN_100006cdc(lStack_e0,local_e8);
            lVar11 = local_158;
            (**(code **)(lVar16 + 8))(lVar20,lVar19);
            lVar5 = lVar5 + lVar11;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          _swift_release(local_f8);
          lVar5 = local_178;
        }
        _swift_bridgeObjectRelease(lVar5);
        return;
      }
      _swift_bridgeObjectRelease();
    }
    local_d0 = (undefined *)0x0;
    local_c8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0);
    pcVar14 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_a0 = (undefined *)0xbd;
    puVar18 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar18);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000012,0x80000001008a6b30);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_a0 = (undefined *)0xd00000000000002a;
    uStack_98 = 0x80000001008a6b00;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_a0,&local_d0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar15 = local_c8;
    puVar18 = local_d0;
    uVar12 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_c8);
      _swift_release(local_f8);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar12);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a6740;
      _swift_allocObject(&DAT_1009a6740,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar4;
      *(undefined8 *)(puVar9 + 0x18) = uVar12;
      *(undefined **)(puVar9 + 0x20) = puVar18;
      *(undefined8 *)(puVar9 + 0x28) = uVar15;
      local_b0 = thunk_FUN_100222dd4;
      local_d0 = PTR___NSConcreteStackBlock_100995490;
      local_c8 = 0x42000000;
      local_c0 = FUN_1000acdb4;
      puStack_b8 = &DAT_1009a6758;
      local_a8 = puVar9;
      pvVar8 = __Block_copy(&local_d0);
      puVar18 = local_a8;
      _swift_retain(uVar12);
      _swift_release(puVar18);
      lVar5 = local_128;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar18 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar9 = puVar18;
      FUN_10021e91c();
      lVar19 = local_100;
      lVar16 = local_110;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_110,&local_d0,puVar18,puVar9,local_100,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar5,lVar16,pvVar8);
      __Block_release(pvVar8);
      _swift_release(local_f8);
      FUN_10007ed2c(lVar4,uVar12);
      (**(code **)(local_108 + 8))(lVar16,lVar19);
      (**(code **)(local_120 + 8))(lVar5,local_118);
    }
  }
  return;
}

