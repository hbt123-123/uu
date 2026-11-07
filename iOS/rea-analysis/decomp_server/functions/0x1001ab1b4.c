// rea decompile_all
// name: FUN_1001ab1b4
// address: 0x1001ab1b4
// body: available
// range: 0x1001ab1b4-0x1001abc23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001ab1b4(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ID IVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong self;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  ulong uVar19;
  long extraout_x12;
  ulong uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  double dVar25;
  undefined1 auStack_470 [16];
  long alStack_460 [2];
  undefined1 auStack_450 [8];
  long local_448;
  long local_440;
  long local_438;
  undefined1 *local_430;
  ulong local_428;
  ulong local_420;
  ulong local_418;
  char *local_410;
  long local_408;
  long local_400;
  char *local_3f8;
  ID local_3f0;
  ulong local_3e8;
  undefined1 auStack_3e0 [24];
  long local_3c8;
  double local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  long lStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined7 uStack_300;
  undefined4 uStack_2f9;
  double local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  long lStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  long lStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined3 local_238;
  undefined5 uStack_235;
  undefined3 uStack_230;
  undefined4 uStack_22d;
  undefined4 uStack_229;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined7 uStack_1d8;
  undefined4 uStack_1d1;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long local_f8;
  ulong local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined3 uStack_98;
  undefined5 local_95;
  undefined3 uStack_90;
  undefined8 uStack_8d;
  
  puVar6 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_430 = auStack_450 + -extraout_x8;
  __s10Foundation4DateVMa();
  local_408 = *(long *)(lVar7 + -8);
  local_400 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_408 + 0x40));
  lVar7 = (long)(auStack_450 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_438 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = lVar7 - extraout_x12;
  IVar8 = 0;
  local_440 = lVar7;
  __s10Foundation3URLVMa();
  local_3f8 = *(char **)(IVar8 - 8);
  local_3f0 = IVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_3f8 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cd7cc();
  IVar8 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar9 = NSWorkspace::runningApplications(IVar8,"runningApplications");
  uVar10 = 0;
  FUN_10004003c(0,&DAT_100a76f20,&PTR__OBJC_CLASS___NSRunningApplication_100a658a8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar10);
  if (uVar9 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = uVar9 & 0xffffffffffffff8;
    if ((long)uVar9 < 0) {
      uVar24 = uVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar24 == 0) {
    _swift_bridgeObjectRelease(uVar9);
    lVar18 = *(long *)(param_1 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar20 = 0;
    local_3e8 = uVar9 & 0xc000000000000001;
    local_428 = uVar9 & 0xffffffffffffff8;
    pcVar22 = (char *)lVar7;
    local_448 = param_1;
    local_420 = uVar24;
    local_418 = uVar9;
    local_410 = (char *)lVar7;
    do {
      if (local_3e8 == 0) {
        if (*(ulong *)(local_428 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abb98);
          (*pcVar5)();
        }
        self = *(ID *)(uVar9 + uVar20 * 8 + 0x20);
      }
      else {
        self = uVar20;
        FUN_100169ff8(uVar20,uVar9);
      }
      uVar1 = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abb90);
        (*pcVar5)();
      }
      pcVar15 = "bundleURL";
      IVar8 = _objc_msgSend(self,"bundleURL");
      if (IVar8 != 0) {
        __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(pcVar22);
        uVar24 = 0;
        __s10Foundation3URLV4pathSSvg();
        puVar14 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = uVar24;
        pcVar16 = pcVar15;
        local_150 = puVar6;
        FUN_1001a2c70();
        uVar19 = (ulong)~(uint)pcVar16 & 1;
        lVar18 = *(long *)(puVar6 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(puVar6 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abb94);
          (*pcVar5)();
        }
        if (*(long *)(puVar6 + 0x18) < lVar18) {
          FUN_10006b254(lVar18,puVar14);
          uVar9 = uVar24;
          pcVar17 = pcVar15;
          FUN_1001a2c70();
          pcVar22 = local_410;
          puVar6 = local_150;
          if (((uint)pcVar16 & 1) != ((uint)pcVar17 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abc24);
            (*pcVar5)();
          }
        }
        else {
          pcVar22 = local_410;
          puVar6 = local_150;
          if (((ulong)puVar14 & 1) == 0) {
            FUN_100065760();
            pcVar22 = local_410;
            puVar6 = local_150;
          }
        }
        local_410 = pcVar22;
        local_150 = puVar6;
        if (((ulong)pcVar16 & 1) == 0) {
          *(ulong *)(puVar6 + (uVar9 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar6 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
          puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar9 * 0x10);
          *puVar2 = uVar24;
          puVar2[1] = (ulong)pcVar15;
          *(ulong *)(*(long *)(puVar6 + 0x38) + uVar9 * 8) = self;
          (**(code **)((long)local_3f8 + 8))(pcVar22,local_3f0);
          if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abb9c);
            (*pcVar5)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
          uVar9 = local_418;
          uVar24 = local_420;
        }
        else {
          _swift_bridgeObjectRelease(pcVar15);
          puVar6 = local_150;
          pcVar22 = local_410;
          *(ulong *)(*(long *)(local_150 + 0x38) + uVar9 * 8) = self;
          (**(code **)((long)local_3f8 + 8))(local_410,local_3f0);
          uVar9 = local_418;
          uVar24 = local_420;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar1 != uVar24);
    _swift_bridgeObjectRelease(uVar9);
    lVar18 = *(long *)(local_448 + 0x10);
    param_1 = local_448;
    puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar14;
  if (lVar18 == 0) {
    _swift_bridgeObjectRelease(puVar6);
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  local_3f8 = "com.streamer.applist.queue";
  local_410 = "syncRemoteApps(_:)";
  puVar21 = (undefined8 *)(param_1 + 0x98);
  local_3e8 = lVar18;
  do {
    local_3e8 = local_3e8 + -1;
    uStack_b8 = puVar21[4];
    uStack_c0 = puVar21[3];
    uStack_a8 = puVar21[6];
    local_b0 = puVar21[5];
    uStack_a0 = puVar21[7];
    uStack_98 = (undefined3)puVar21[8];
    uStack_8d = *(undefined8 *)((long)puVar21 + 0x4b);
    local_95 = (undefined5)*(undefined8 *)((long)puVar21 + 0x43);
    uStack_90 = (undefined3)((ulong)*(undefined8 *)((long)puVar21 + 0x43) >> 0x28);
    lVar18 = puVar21[-4];
    uStack_100 = puVar21[-5];
    lVar23 = puVar21[-2];
    uVar9 = puVar21[-3];
    uStack_d8 = *puVar21;
    uStack_e0 = puVar21[-1];
    uStack_c8 = puVar21[2];
    local_d0 = puVar21[1];
    uStack_138 = puVar21[-0xc];
    uStack_140 = puVar21[-0xd];
    uStack_128 = puVar21[-10];
    local_130 = puVar21[-0xb];
    uStack_118 = puVar21[-8];
    uStack_120 = puVar21[-9];
    uStack_108 = puVar21[-6];
    local_110 = puVar21[-7];
    uStack_148 = puVar21[-0xe];
    local_150 = (undefined *)puVar21[-0xf];
    uStack_188 = puVar21[-8];
    uStack_190 = puVar21[-9];
    uStack_178 = puVar21[-6];
    local_180 = puVar21[-7];
    uStack_168 = puVar21[-4];
    uStack_170 = puVar21[-5];
    local_160 = puVar21[-3];
    uStack_1b8 = puVar21[-0xe];
    local_1c0 = (double)puVar21[-0xf];
    lStack_1a8 = puVar21[-0xc];
    uStack_1b0 = puVar21[-0xd];
    uStack_198 = puVar21[-10];
    local_1a0 = puVar21[-0xb];
    uStack_218 = puVar21[1];
    local_220 = *puVar21;
    uStack_208 = puVar21[3];
    local_210 = puVar21[2];
    local_1e0 = puVar21[8];
    uStack_1f8 = puVar21[5];
    local_200 = puVar21[4];
    uStack_1e8 = puVar21[7];
    local_1f0 = puVar21[6];
    uStack_1d8 = (undefined7)puVar21[9];
    uStack_1d1._1_3_ = (undefined3)((uint)*(undefined4 *)((long)puVar21 + 0x4f) >> 8);
    uStack_1d1._0_1_ = (undefined1)((ulong)puVar21[9] >> 0x38);
    local_f8 = lVar18;
    local_f0 = uVar9;
    lStack_e8 = lVar23;
    if (*(long *)(puVar6 + 0x10) == 0) {
      FUN_1000acd04(&local_150,&local_2f0);
      FUN_1000acd04(&local_150,&local_2f0);
      uVar10 = 0;
    }
    else {
      FUN_1000acd04(&local_150,&local_2f0);
      FUN_1000acd04(&local_150,&local_2f0);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(puVar6);
      uVar24 = uVar9;
      FUN_1001a2c70();
      _swift_bridgeObjectRelease(uVar9);
      if ((uVar24 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar6);
        uVar10 = 0;
      }
      else {
        IVar8 = *(ID *)(*(long *)(puVar6 + 0x38) + lVar18 * 8);
        _swift_bridgeObjectRelease(puVar6);
        uVar10 = 0x614468636e75616c;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x614468636e75616c,0xea00000000006574)
        ;
        local_3f0 = IVar8;
        IVar8 = _objc_msgSend(IVar8,"valueForKey:",uVar10);
        if (IVar8 == 0) {
          uStack_3b8 = 0;
          local_3c0 = 0.0;
          local_3a8 = 0;
          uStack_3b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_3c0,IVar8);
          _swift_unknownObjectRelease(IVar8);
        }
        puVar3 = local_430;
        uStack_2e8 = uStack_3b8;
        local_2f0 = local_3c0;
        lStack_2d8 = local_3a8;
        local_2e0 = uStack_3b0;
        dVar25 = local_3c0;
        FUN_10007f314(&local_2f0,&local_3c0,&DAT_100a766e0,&DAT_10080bdb0);
        lVar18 = local_400;
        if (local_3a8 == 0) {
          FUN_100040bb4(&local_3c0,&DAT_100a766e0,&DAT_10080bdb0);
          (**(code **)(local_408 + 0x38))(puVar3,1,1,local_400);
LAB_1001ab8c0:
          FUN_100040bb4(puVar3,&DAT_100a76718,&DAT_10080ccc0);
          FUN_10007f314(&local_2f0,auStack_3e0,&DAT_100a766e0,&DAT_10080bdb0);
          if (local_3c8 == 0) {
            FUN_100040bb4(auStack_3e0,&DAT_100a766e0,&DAT_10080bdb0);
          }
          else {
            FUN_10007f3d4(auStack_3e0,&local_3c0);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(undefined ***)(lVar7 + -0x10) = &local_150;
            *(double **)(lVar7 + -8) = &local_3c0;
            FUN_1003fb4bc(FUN_1001ac264,lVar7 + -0x20,0xd000000000000093,
                          (ulong)local_3f8 | 0x8000000000000000,0xd000000000000019,
                          (ulong)local_410 | 0x8000000000000000,0x155,0);
            FUN_10003f094(&local_3c0);
          }
          lVar18 = local_438;
          __s10Foundation4DateVACycfC(local_438);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          (**(code **)(local_408 + 8))(lVar18,local_400);
          FUN_100040bb4(&local_2f0,&DAT_100a766e0,&DAT_10080bdb0);
          if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abba0);
            (*pcVar5)();
          }
          if (dVar25 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abba4);
            (*pcVar5)();
          }
          if (1.8446744073709552e+19 <= dVar25) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abba8);
            (*pcVar5)();
          }
        }
        else {
          puVar11 = puVar3;
          _swift_dynamicCast(puVar3,&local_3c0,PTR___sypN_100995e88 + 8,local_400,6);
          lVar23 = local_408;
          (**(code **)(local_408 + 0x38))(puVar3,(uint)puVar11 ^ 1,1,lVar18);
          puVar11 = puVar3;
          (**(code **)(lVar23 + 0x30))(puVar3,1,lVar18);
          lVar4 = local_400;
          lVar23 = local_408;
          lVar18 = local_440;
          if ((int)puVar11 == 1) goto LAB_1001ab8c0;
          (**(code **)(local_408 + 0x20))(local_440,puVar3,local_400);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          (**(code **)(lVar23 + 8))(lVar18,lVar4);
          FUN_100040bb4(&local_2f0,&DAT_100a766e0,&DAT_10080bdb0);
          if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abbac);
            (*pcVar5)();
          }
          if (dVar25 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abbb0);
            (*pcVar5)();
          }
          if (1.8446744073709552e+19 <= dVar25) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001abbb4);
            (*pcVar5)();
          }
        }
        lVar23 = (long)dVar25;
        uVar10 = 1;
      }
    }
    uStack_2a8 = uStack_178;
    local_2b0 = local_180;
    uStack_298 = uStack_168;
    local_2a0 = uStack_170;
    uStack_2e8 = uStack_1b8;
    local_2f0 = local_1c0;
    lStack_2d8 = lStack_1a8;
    local_2e0 = uStack_1b0;
    uStack_2c8 = uStack_198;
    local_2d0 = local_1a0;
    uStack_2b8 = uStack_188;
    local_2c0 = uStack_190;
    local_290 = local_160;
    uStack_260 = uStack_208;
    local_268 = local_210;
    uStack_270 = uStack_218;
    uStack_278 = local_220;
    uStack_230 = (undefined3)uStack_1d8;
    uStack_22d = (undefined4)((uint7)uStack_1d8 >> 0x18);
    uStack_229 = uStack_1d1;
    local_238 = (undefined3)local_1e0;
    uStack_235 = (undefined5)((ulong)local_1e0 >> 0x18);
    uStack_240 = uStack_1e8;
    local_248 = local_1f0;
    uStack_250 = uStack_1f8;
    local_258 = local_200;
    lStack_288 = lVar23;
    local_280 = uVar10;
    FUN_1000acd04(&local_2f0,&local_3c0);
    puVar12 = puVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = puVar14;
    if (((ulong)puVar12 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100036798(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
    }
    uVar9 = *(ulong *)(puVar13 + 0x10);
    puVar14 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100036798(puVar14,uVar9 + 1,1,puVar13);
    }
    *(ulong *)(puVar14 + 0x10) = uVar9 + 1;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x28) = uStack_2e8;
    *(double *)(puVar14 + uVar9 * 0xd0 + 0x20) = local_2f0;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x58) = uStack_2b8;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x50) = local_2c0;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x68) = uStack_2a8;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x60) = local_2b0;
    *(long *)(puVar14 + uVar9 * 0xd0 + 0x38) = lStack_2d8;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x30) = local_2e0;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x48) = uStack_2c8;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x40) = local_2d0;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x98) = uStack_278;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x90) = local_280;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0xa8) = local_268;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0xa0) = uStack_270;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x78) = uStack_298;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x70) = local_2a0;
    *(long *)(puVar14 + uVar9 * 0xd0 + 0x88) = lStack_288;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0x80) = local_290;
    *(ulong *)(puVar14 + uVar9 * 0xd0 + 0xe3) = CONCAT44(uStack_229,uStack_22d);
    *(ulong *)(puVar14 + uVar9 * 0xd0 + 0xdb) = CONCAT35(uStack_230,uStack_235);
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 200) = local_248;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0xc0) = uStack_250;
    *(ulong *)(puVar14 + uVar9 * 0xd0 + 0xd8) = CONCAT53(uStack_235,local_238);
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0xd0) = uStack_240;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0xb8) = local_258;
    *(undefined8 *)(puVar14 + uVar9 * 0xd0 + 0xb0) = uStack_260;
    FUN_1000acd38(&local_150);
    uStack_378 = uStack_178;
    local_380 = local_180;
    uStack_368 = uStack_168;
    uStack_370 = uStack_170;
    uStack_3b8 = uStack_1b8;
    local_3c0 = local_1c0;
    local_3a8 = lStack_1a8;
    uStack_3b0 = uStack_1b0;
    uStack_398 = uStack_198;
    local_3a0 = local_1a0;
    uStack_388 = uStack_188;
    uStack_390 = uStack_190;
    uStack_300 = uStack_1d8;
    uStack_2f9 = uStack_1d1;
    local_308 = local_1e0;
    uStack_310 = uStack_1e8;
    local_318 = local_1f0;
    uStack_320 = uStack_1f8;
    local_328 = local_200;
    uStack_330 = uStack_208;
    local_338 = local_210;
    local_360 = local_160;
    uStack_340 = uStack_218;
    local_348 = local_220;
    lStack_358 = lVar23;
    local_350 = uVar10;
    FUN_1000acd38(&local_3c0);
    if (local_3e8 == 0) {
      _swift_bridgeObjectRelease(puVar6);
      return puVar14;
    }
    puVar21 = puVar21 + 0x1a;
  } while( true );
}

