// rea decompile_all
// name: FUN_1000a4cc4
// address: 0x1000a4cc4
// body: available
// range: 0x1000a4cc4-0x1000a5b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000a4cc4(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4,byte param_5)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar14;
  ulong uVar15;
  undefined8 extraout_x12;
  long unaff_x20;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_3b0 [16];
  undefined8 auStack_3a0 [2];
  undefined8 auStack_390 [2];
  ulong auStack_380 [4];
  undefined auStack_360 [8];
  char *local_358;
  undefined *local_350;
  uint local_344;
  undefined *local_340;
  long local_338;
  long lStack_330;
  long local_328;
  long local_320;
  long local_318;
  undefined8 local_310;
  long local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined *local_2b0;
  ulong local_2a8;
  undefined1 auStack_240 [16];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  ulong uStack_218;
  byte local_210;
  int local_204;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  byte local_1d8;
  undefined1 auStack_1d0 [119];
  byte local_159 [121];
  int local_e0 [2];
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  byte local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  byte local_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  local_338 = *(long *)(lVar5 + -8);
  lStack_330 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_338 + 0x40));
  lVar5 = 0;
  local_340 = auStack_360 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVMa();
  local_320 = *(long *)(lVar5 + -8);
  local_318 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_320 + 0x40));
  lVar5 = (long)(auStack_360 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_328 = lVar5;
  __s10Foundation4DateVACycfC();
  FUN_100401b14();
  local_230 = param_1;
  uStack_228 = param_2;
  local_220 = param_3;
  uStack_218 = param_4;
  local_210 = param_5;
  FUN_1003fb48c(FUN_1000aabbc,auStack_240,0xd000000000000094,0x8000000100880950,0xd00000000000003f,
                0x8000000100880f00,0x14c,0);
  puVar6 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  puVar7 = puVar6;
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 10;
  *(undefined8 *)(puVar7 + 0x10) = 5;
  *(undefined8 *)(puVar7 + 0x20) = 0x696c632d7473696c;
  *(undefined8 *)(puVar7 + 0x28) = 0xec00000073746e65;
  *(undefined8 *)(puVar7 + 0x30) = 0x742d;
  *(undefined8 *)(puVar7 + 0x38) = 0xe200000000000000;
  *(undefined8 *)(puVar7 + 0x40) = param_1;
  *(undefined8 *)(puVar7 + 0x48) = param_2;
  *(undefined8 *)(puVar7 + 0x50) = 0x462d;
  *(undefined8 *)(puVar7 + 0x58) = 0xe200000000000000;
  *(undefined8 *)(puVar7 + 0x60) = 0x746e65696c637b23;
  *(undefined8 *)(puVar7 + 0x68) = 0xed00007d7974745f;
  _swift_bridgeObjectRetain(param_2);
  FUN_1000a3308(local_e0,puVar7);
  _swift_setDeallocating(puVar7);
  _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),PTR___sSSN_1009957f8);
  if (local_e0[0] == 0) {
    local_b0 = (undefined *)0xa;
    uStack_a8 = 0xe100000000000000;
    local_2b0 = param_3;
    local_2a8 = param_4;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined ***)(lVar5 + -0x10) = &local_b0;
    _swift_bridgeObjectRetain(puStack_d0);
    lVar8 = 0x7fffffffffffffff;
    FUN_10000b9ac(0x7fffffffffffffff,1,FUN_1000ab850,lVar5 + -0x20,local_d8,puStack_d0);
    local_2b8 = 0;
    _swift_bridgeObjectRelease(puStack_d0);
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    FUN_1000a9ec8(&local_80);
    uVar21 = *(ulong *)(lVar8 + 0x10);
    if (uVar21 == 0) {
      _swift_bridgeObjectRelease(lVar8);
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fae0(0,uVar21,0);
      uVar19 = 0;
      puVar22 = (undefined8 *)(lVar8 + 0x38);
      do {
        puVar7 = local_b0;
        if (*(ulong *)(lVar8 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b5c);
          (*pcVar3)();
        }
        uVar9 = puVar22[-3];
        uVar13 = puVar22[-2];
        uVar11 = puVar22[-1];
        uVar24 = *puVar22;
        _swift_bridgeObjectRetain(uVar24);
        __sSS14_fromSubstringySSSshFZ(uVar9,uVar13,uVar11,uVar24);
        _swift_bridgeObjectRelease(uVar24);
        uVar23 = *(ulong *)(puVar7 + 0x10);
        local_b0 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar23) {
          FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar23 + 1,1);
        }
        puVar7 = local_b0;
        uVar19 = uVar19 + 1;
        *(ulong *)(local_b0 + 0x10) = uVar23 + 1;
        *(undefined8 *)(local_b0 + uVar23 * 0x10 + 0x20) = uVar9;
        *(undefined8 *)(local_b0 + uVar23 * 0x10 + 0x28) = uVar13;
        puVar22 = puVar22 + 4;
      } while (uVar21 != uVar19);
      _swift_bridgeObjectRelease(lVar8);
    }
    uVar21 = *(ulong *)(puVar7 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar21 != 0) {
      uVar19 = 0;
      do {
        puVar20 = (ulong *)(puVar7 + uVar19 * 0x10 + 0x28);
        uVar15 = local_2a8;
        puVar10 = local_2b0;
        uVar23 = uVar19;
        while( true ) {
          if (*(ulong *)(puVar7 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b60);
            (*pcVar3)();
          }
          puVar16 = (undefined *)puVar20[-1];
          uVar1 = *puVar20;
          uVar19 = (ulong)puVar16 & 0xffffffffffff;
          if ((uVar1 & 0x2000000000000000) != 0) {
            uVar19 = uVar1 >> 0x38 & 0xf;
          }
          if (((uVar19 != 0) && (puVar16 != puVar10 || uVar1 != uVar15)) &&
             (puVar25 = puVar16,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (puVar16,uVar1,local_2b0,local_2a8,0), uVar15 = local_2a8,
             puVar10 = local_2b0, ((ulong)puVar25 & 1) == 0)) break;
          uVar23 = uVar23 + 1;
          puVar20 = puVar20 + 2;
          if (uVar21 == uVar23) goto LAB_1000a540c;
        }
        _swift_bridgeObjectRetain(uVar1);
        puVar10 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        local_b0 = puVar12;
        if (((ulong)puVar10 & 1) == 0) {
          FUN_10006fae0(0,*(long *)(puVar12 + 0x10) + 1,1);
        }
        uVar15 = *(ulong *)(local_b0 + 0x10);
        if (*(ulong *)(local_b0 + 0x18) >> 1 <= uVar15) {
          FUN_10006fae0(1 < *(ulong *)(local_b0 + 0x18),uVar15 + 1,1);
        }
        uVar19 = uVar23 + 1;
        *(ulong *)(local_b0 + 0x10) = uVar15 + 1;
        *(undefined **)(local_b0 + uVar15 * 0x10 + 0x20) = puVar16;
        *(ulong *)(local_b0 + uVar15 * 0x10 + 0x28) = uVar1;
        puVar12 = local_b0;
      } while (uVar21 - 1 != uVar23);
    }
LAB_1000a540c:
    _swift_bridgeObjectRelease(puVar7);
    lVar8 = *(long *)(puVar12 + 0x10);
    if (lVar8 == 0) {
      _swift_release(puVar12);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(lVar5 + -0x20) = param_1;
      *(undefined8 *)(lVar5 + -0x18) = param_2;
      lVar8 = local_328;
      *(long *)(lVar5 + -0x10) = local_328;
      FUN_1003fb48c(FUN_1000aac18,lVar5 + -0x30,0xd000000000000094,0x8000000100880950,
                    0xd00000000000003f,0x8000000100880f00,0x15b,0);
      puVar16 = (undefined *)0x0;
      puVar25 = (undefined *)0x0;
      lVar18 = local_318;
    }
    else {
      bVar4 = (param_5 & 1) == 0;
      local_2a8 = 0x732d65726f6e6769;
      if (bVar4) {
        local_2a8 = 0x2d65726f6e676921;
      }
      uVar9 = 0xeb00000000657a69;
      if (bVar4) {
        uVar9 = 0xec000000657a6973;
      }
      uVar11 = 0;
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      lVar18 = 0;
      local_2c8 = *(undefined8 *)(unaff_x20 + 0x60);
      local_2d0 = *(undefined8 *)(unaff_x20 + 0x68);
      local_358 = s___TmuxController___kill_session_n_100880a30 + 0x20;
      local_2d8 = *(undefined8 *)(unaff_x20 + 0x40);
      local_2e0 = *(undefined8 *)(unaff_x20 + 0x48);
      local_2e8 = *(undefined8 *)(unaff_x20 + 0x18);
      local_308 = -lVar8;
      local_350 = puVar12 + 0x28;
      uVar14 = 1;
      uStack_2f8 = 8;
      local_300 = 4;
      local_2c0 = uVar11;
      local_2b0 = puVar12;
      do {
        puVar22 = (undefined8 *)(local_350 + lVar18 * 0x10);
        lVar18 = lVar18 + 1;
        local_344 = uVar14;
        while( true ) {
          if (*(ulong *)(local_2b0 + 0x10) <= lVar18 - 1U) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b64);
            (*pcVar3)();
          }
          uVar11 = puVar22[-1];
          uVar13 = *puVar22;
          puVar12 = puVar6;
          _swift_initStackObject(puVar6,auStack_1d0);
          *(undefined8 *)(puVar12 + 0x18) = 10;
          *(undefined8 *)(puVar12 + 0x10) = 5;
          *(undefined8 *)(puVar12 + 0x20) = 0x2d68736572666572;
          *(undefined8 *)(puVar12 + 0x28) = 0xee00746e65696c63;
          *(undefined8 *)(puVar12 + 0x30) = 0x742d;
          *(undefined8 *)(puVar12 + 0x38) = 0xe200000000000000;
          *(undefined8 *)(puVar12 + 0x40) = uVar11;
          *(undefined8 *)(puVar12 + 0x48) = uVar13;
          *(undefined8 *)(puVar12 + 0x50) = 0x662d;
          *(undefined8 *)(puVar12 + 0x58) = 0xe200000000000000;
          *(ulong *)(puVar12 + 0x60) = local_2a8;
          *(undefined8 *)(puVar12 + 0x68) = uVar9;
          puVar7 = puVar6;
          local_310 = uVar11;
          _swift_allocObject(puVar6,0x60,7);
          uVar24 = local_2d0;
          uVar11 = local_2e0;
          *(undefined8 *)(puVar7 + 0x18) = uStack_2f8;
          *(undefined8 *)(puVar7 + 0x10) = local_300;
          *(undefined8 *)(puVar7 + 0x20) = 0x532d;
          *(undefined8 *)(puVar7 + 0x28) = 0xe200000000000000;
          *(undefined8 *)(puVar7 + 0x30) = local_2c8;
          *(undefined8 *)(puVar7 + 0x38) = local_2d0;
          *(undefined8 *)(puVar7 + 0x40) = 0x662d;
          *(undefined8 *)(puVar7 + 0x48) = 0xe200000000000000;
          *(undefined8 *)(puVar7 + 0x50) = local_2d8;
          *(undefined8 *)(puVar7 + 0x58) = local_2e0;
          local_200 = puVar7;
          _swift_bridgeObjectRetain_n(uVar13,2);
          _swift_bridgeObjectRetain(uVar9);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(puVar12);
          FUN_10005f920();
          puVar7 = local_200;
          __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ
                    (&local_200,local_2e8);
          if (((ulong)local_200 & 0x100) == 0) {
            FUN_1000a7cf4(&local_b0,puVar7);
            _swift_bridgeObjectRelease(puVar7);
            puVar7 = local_98;
            uVar11 = local_a0;
            puVar10 = puStack_90;
            iVar17 = (int)local_b0;
            bVar2 = local_88;
          }
          else {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(undefined8 *)(lVar5 + -0x10) = extraout_x12;
            *(undefined **)(lVar5 + -8) = puVar7;
            uVar11 = local_2b8;
            __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                      (&local_200,FUN_1000ab868,lVar5 + -0x20,&DAT_10099a388);
            local_2b8 = uVar11;
            _swift_bridgeObjectRelease(puVar7);
            puVar7 = puStack_1e8;
            uVar11 = local_1f0;
            puVar10 = local_1e0;
            iVar17 = (int)local_200;
            bVar2 = local_1d8;
          }
          _swift_setDeallocating(puVar12);
          _swift_arrayDestroy(puVar12 + 0x20,*(undefined8 *)(puVar12 + 0x10),PTR___sSSN_1009957f8);
          if (iVar17 != 0) break;
          _swift_bridgeObjectRelease(puVar10);
          _swift_bridgeObjectRelease(uVar11);
          _swift_bridgeObjectRelease(uVar13);
          lVar18 = lVar18 + 1;
          puVar22 = puVar22 + 2;
          if (local_308 + lVar18 == 1) {
            local_159[0] = (byte)local_344 & 1;
            if ((local_344 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar9);
              puVar6 = local_2b0;
            }
            else {
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(undefined8 *)(lVar5 + -0x30) = param_1;
              *(undefined8 *)(lVar5 + -0x28) = param_2;
              puVar6 = local_2b0;
              *(ulong *)(lVar5 + -0x20) = local_2a8;
              *(undefined8 *)(lVar5 + -0x18) = uVar9;
              *(undefined **)(lVar5 + -0x10) = puVar6;
              FUN_1003fb48c(FUN_1000aac08,lVar5 + -0x40,0xd000000000000094,0x8000000100880950,
                            0xd00000000000003f,0x8000000100880f00,0x16e,0);
              _swift_bridgeObjectRelease(uVar9);
            }
            goto LAB_1000a5a88;
          }
        }
        local_344 = (uint)bVar2;
        if ((bVar2 & 1) == 0) {
          puVar12 = puVar10;
          local_200 = puVar7;
          puStack_1f8 = puVar10;
          _swift_bridgeObjectRetain(puVar10);
          puVar7 = local_340;
          __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_340);
          FUN_10009ff0c();
          puVar16 = puVar7;
          puVar25 = PTR___sSSN_1009957f8;
          __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                    (puVar7,PTR___sSSN_1009957f8,puVar12);
          (**(code **)(local_338 + 8))(puVar7,lStack_330);
          _swift_bridgeObjectRelease(puVar10);
          uVar24 = local_310;
          uVar21 = (ulong)puVar16 & 0xffffffffffff;
          if (((ulong)puVar25 & 0x2000000000000000) != 0) {
            uVar21 = (ulong)puVar25 >> 0x38 & 0xf;
          }
          if (uVar21 == 0) {
            _swift_bridgeObjectRelease(puVar25);
            local_200 = (undefined *)0x0;
            puStack_1f8 = (undefined *)0xe000000000000000;
            __ss11_StringGutsV4growyySiF(0x17);
            _swift_bridgeObjectRelease(puStack_1f8);
            local_200 = (undefined *)0x2d68736572666572;
            puStack_1f8 = (undefined *)0xee00746e65696c63;
            __sSS6appendyySSF(0x1000000000000013,(ulong)local_358 | 0x8000000000000000);
            puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
            local_204 = iVar17;
            __ss23CustomStringConvertibleP11descriptionSSvgTj
                      (PTR___ss5Int32VN_100995c78,
                       PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
            __sSS6appendyySSF();
            _swift_bridgeObjectRelease(puVar7);
            puVar16 = local_200;
            puVar25 = puStack_1f8;
          }
        }
        else {
          local_200 = (undefined *)0x2d68736572666572;
          puStack_1f8 = (undefined *)0xee00746e65696c63;
          __sSS6appendyySSF(0xe88ca1e8a789e620,0xad0000b697e685b6);
          puVar16 = local_200;
          uVar24 = local_310;
          puVar25 = puStack_1f8;
        }
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)(lVar5 + -0x40) = param_1;
        *(undefined8 *)(lVar5 + -0x38) = param_2;
        *(undefined8 *)(lVar5 + -0x30) = uVar24;
        *(undefined8 *)(lVar5 + -0x28) = uVar13;
        *(ulong *)(lVar5 + -0x20) = local_2a8;
        *(undefined8 *)(lVar5 + -0x18) = uVar9;
        *(undefined **)(lVar5 + -0x10) = puVar16;
        *(undefined **)(lVar5 + -8) = puVar25;
        FUN_1003fb4bc(FUN_1000aabe4,lVar5 + -0x50,0xd000000000000094,0x8000000100880950,
                      0xd00000000000003f,0x8000000100880f00,0x166,0);
        _swift_bridgeObjectRelease(puVar10);
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(uVar13);
        if ((local_344 & 1) != 0) {
          _swift_bridgeObjectRelease(uVar9);
          _swift_release(local_2b0);
          lVar18 = local_318;
          lVar8 = local_328;
          goto LAB_1000a5b04;
        }
        lVar8 = local_308 + lVar18;
        _swift_bridgeObjectRelease(puVar25);
        uVar14 = 0;
      } while (lVar8 != 0);
      _swift_bridgeObjectRelease(uVar9);
      local_159[0] = 0;
      puVar6 = local_2b0;
LAB_1000a5a88:
      lVar18 = local_318;
      lVar8 = local_328;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(lVar5 + -0x30) = param_1;
      *(undefined8 *)(lVar5 + -0x28) = param_2;
      *(undefined **)(lVar5 + -0x20) = puVar6;
      *(byte **)(lVar5 + -0x18) = local_159;
      *(long *)(lVar5 + -0x10) = lVar8;
      FUN_1003fb48c(FUN_1000aabf8,lVar5 + -0x40,0xd000000000000094,0x8000000100880950,
                    0xd00000000000003f,0x8000000100880f00,0x170,0);
      _swift_release(puVar6);
      puVar16 = (undefined *)0x0;
      puVar25 = (undefined *)0x0;
    }
  }
  else {
    uStack_a8 = uStack_c0;
    local_b0 = local_c8;
    if ((local_b8 & 1) == 0) {
      puStack_1f8 = (undefined *)uStack_c0;
      local_200 = local_c8;
      _swift_bridgeObjectRetain(uStack_c0);
      puVar6 = local_340;
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_340);
      FUN_10009ff0c();
      puVar16 = puVar6;
      puVar25 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (puVar6,PTR___sSSN_1009957f8,uStack_c0);
      (**(code **)(local_338 + 8))(puVar6,lStack_330);
      FUN_1000a9ec8(&local_b0);
      uVar21 = (ulong)puVar16 & 0xffffffffffff;
      if (((ulong)puVar25 & 0x2000000000000000) != 0) {
        uVar21 = (ulong)puVar25 >> 0x38 & 0xf;
      }
      if (uVar21 == 0) {
        _swift_bridgeObjectRelease(puVar25);
        local_200 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x17);
        _swift_bridgeObjectRelease(puStack_1f8);
        local_200 = (undefined *)0x696c632d7473696c;
        puStack_1f8 = (undefined *)0xec00000073746e65;
        __sSS6appendyySSF(0x1000000000000013,0x8000000100880a50);
        local_80 = (undefined *)CONCAT44(local_80._4_4_,local_e0[0]);
        puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        puVar16 = local_200;
        puVar25 = puStack_1f8;
      }
    }
    else {
      local_200 = (undefined *)0x696c632d7473696c;
      puStack_1f8 = (undefined *)0xec00000073746e65;
      __sSS6appendyySSF(0xe88ca1e8a789e620,0xad0000b697e685b6);
      puVar16 = local_200;
      puVar25 = puStack_1f8;
    }
    puStack_1f8 = puStack_d0;
    local_200 = local_d8;
    FUN_1000a9ec8(&local_200);
    FUN_1000a9ec8(&local_b0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar5 + -0x20) = param_1;
    *(undefined8 *)(lVar5 + -0x18) = param_2;
    *(undefined **)(lVar5 + -0x10) = puVar16;
    *(undefined **)(lVar5 + -8) = puVar25;
    FUN_1003fb4bc(FUN_1000aabcc,lVar5 + -0x30,0xd000000000000094,0x8000000100880950,
                  0xd00000000000003f,0x8000000100880f00,0x151,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar5 + -0x20) = param_1;
    *(undefined8 *)(lVar5 + -0x18) = param_2;
    lVar8 = local_328;
    *(long *)(lVar5 + -0x10) = local_328;
    FUN_1003fb4bc(FUN_1000aabd8,lVar5 + -0x30,0xd000000000000094,0x8000000100880950,
                  0xd00000000000003f,0x8000000100880f00,0x152,0);
    lVar18 = local_318;
  }
LAB_1000a5b04:
  (**(code **)(local_320 + 8))(lVar8,lVar18);
  auVar26._8_8_ = puVar25;
  auVar26._0_8_ = puVar16;
  return auVar26;
}

