// rea decompile_all
// name: FUN_100096460
// address: 0x100096460
// body: available
// range: 0x100096460-0x1000980f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100096460(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  ulong uVar21;
  undefined8 extraout_x13;
  uint uVar22;
  code *pcVar23;
  undefined8 uVar24;
  long unaff_x21;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  long lVar30;
  code *pcVar31;
  ulong uVar32;
  undefined1 auStack_3b0 [8];
  ulong local_3a8;
  undefined8 local_3a0;
  long *local_398;
  long local_390;
  long local_388;
  long local_380;
  long local_378;
  long local_370;
  long local_368;
  long *local_360;
  long local_358;
  undefined1 *local_350;
  long local_348;
  code *local_340;
  long lStack_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  long local_308;
  long local_300;
  long local_2f8;
  long local_2f0;
  long local_2e8;
  ulong local_2e0;
  long local_2d8;
  code *local_2d0;
  code *local_2c8;
  ulong local_2c0;
  long local_2b8;
  long local_2b0;
  ulong local_2a8;
  long local_2a0;
  undefined8 local_298;
  undefined *local_290;
  long local_288;
  long local_280;
  code *local_278;
  code *local_270;
  undefined8 local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  long local_228;
  long local_220;
  ulong local_218;
  ulong local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  code *local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  code *local_180;
  undefined1 auStack_170 [128];
  undefined *local_f0 [2];
  undefined1 auStack_e0 [104];
  undefined *local_78 [3];
  undefined *local_58;
  
  lVar3 = 0;
  local_398 = param_1;
  local_380 = param_4;
  __s10Foundation4DateVMa();
  lVar25 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  local_350 = auStack_3b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar26 = (long)(auStack_3b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = uVar26 - extraout_x12_00;
  local_388 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_01;
  puVar13 = &DAT_100a76710;
  local_370 = lVar16;
  FUN_100004bb4(&DAT_100a76710,&DAT_10080b210);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_2d8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_02;
  local_328 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_03;
  local_308 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_04;
  local_208 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_05;
  local_310 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_06;
  local_320 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_07;
  local_288 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_08;
  local_2e8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_09;
  local_300 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_10;
  local_1c0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_11;
  local_2f0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar16 - extraout_x12_12;
  puVar13 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_348 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_13;
  local_330 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_14;
  local_2a0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_15;
  local_2b0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_16;
  local_318 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_17;
  local_200 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12_18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar17 - extraout_x12_19;
  local_2f8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_20;
  local_1e8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_21;
  local_1c8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_22;
  local_220 = lVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar18 - extraout_x12_23;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  local_280 = *(long *)(lVar4 + -8);
  local_1e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_280 + 0x40));
  lVar4 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_368 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_24;
  local_358 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_25;
  local_1f8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_26;
  local_1f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_27;
  local_1b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_28;
  local_228 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar19 = param_3[1];
  local_360 = param_3;
  if (0 < (long)uVar19) {
    uVar21 = 0;
    local_290 = *(undefined **)PTR__NSURLContentModificationDateKey_100995358;
    local_298 = *(undefined8 *)PTR__NSURLCreationDateKey_100995360;
    uStack_238 = 4;
    local_240 = 2;
    local_3a0 = extraout_x13;
    local_390 = (lVar4 - extraout_x12_29) - extraout_x12_30;
    local_378 = lVar17;
    local_210 = uVar26;
    local_1d8 = lVar18;
    local_1b0 = lVar3;
    do {
      lVar3 = local_1e0;
      uVar24 = local_3a0;
      uVar26 = uVar21 + 1;
      lVar4 = local_380;
      local_2e0 = uVar21;
      if ((long)uVar26 < (long)uVar19) {
        lVar17 = *param_3;
        lVar18 = *(long *)(local_280 + 0x48);
        local_1d0 = (code *)(lVar17 + lVar18 * uVar26);
        pcVar23 = *(code **)(local_280 + 0x10);
        local_2a8 = uVar19;
        (*pcVar23)(local_390,local_1d0,local_1e0);
        local_2c8 = pcVar23;
        (*pcVar23)(uVar24,lVar17 + lVar18 * uVar21,lVar3);
        lVar4 = local_390;
        FUN_100095444(local_390,uVar24);
        local_2c0 = CONCAT44(local_2c0._4_4_,(int)lVar4);
        if (unaff_x21 != 0) {
          pcVar23 = *(code **)(local_280 + 8);
          (*pcVar23)(uVar24,lVar3);
          (*pcVar23)(local_390,lVar3);
          goto LAB_100098090;
        }
        pcVar23 = *(code **)(local_280 + 8);
        (*pcVar23)(uVar24,lVar3);
        local_2d0 = pcVar23;
        (*pcVar23)(local_390,lVar3);
        uVar19 = local_2e0 + 2;
        pcVar23 = (code *)(lVar17 + lVar18 * uVar19);
        pcVar29 = local_1d0;
        local_2b8 = lVar18;
        do {
          lVar4 = local_1b0;
          pcVar31 = local_2c8;
          uVar26 = local_2a8;
          if (local_2a8 == uVar19) break;
          local_248 = pcVar23;
          local_218 = uVar19;
          (*local_2c8)(local_228,pcVar23,lVar3);
          local_1d0 = pcVar29;
          (*pcVar31)(local_1b8,pcVar29,lVar3);
          puVar13 = &DAT_100a76708;
          FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
          local_250 = puVar13;
          _swift_initStackObject();
          *(undefined8 *)(puVar13 + 0x18) = uStack_238;
          *(undefined8 *)(puVar13 + 0x10) = local_240;
          *(undefined **)(puVar13 + 0x20) = local_290;
          *(undefined8 *)(puVar13 + 0x28) = local_298;
          local_258 = local_290;
          local_268 = local_298;
          puVar5 = puVar13;
          FUN_100128084(puVar13);
          _swift_setDeallocating(puVar13);
          puVar6 = (undefined *)0x0;
          FUN_10000603c();
          local_260 = puVar6;
          _swift_arrayDestroy(puVar13 + 0x20,2);
          __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                    (lVar16,puVar5);
          bVar1 = unaff_x21 != 0;
          if (bVar1) {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
          _swift_bridgeObjectRelease(puVar5);
          lVar7 = 0;
          __s10Foundation17URLResourceValuesVMa();
          pcVar29 = *(code **)(lVar7 + -8);
          local_270 = *(code **)(pcVar29 + 0x38);
          (*local_270)(lVar16,bVar1,1,lVar7);
          lVar3 = local_2f0;
          FUN_10007f314(lVar16,local_2f0,&DAT_100a76710,&DAT_10080b210);
          pcVar23 = *(code **)(pcVar29 + 0x30);
          lVar18 = lVar3;
          (*pcVar23)(lVar3,1,lVar7);
          lVar17 = local_220;
          if ((int)lVar18 == 1) {
            FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
            (**(code **)(lVar25 + 0x38))(local_220,1,1,lVar4);
LAB_100096d3c:
            lVar3 = local_300;
            FUN_10007f314(lVar16,local_300,&DAT_100a76710,&DAT_10080b210);
            lVar17 = lVar3;
            (*pcVar23)(lVar3,1,lVar7);
            if ((int)lVar17 == 1) {
              FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
              FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(lVar25 + 0x38))(local_1d8,1,1,lVar4);
            }
            else {
              __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_1d8);
              FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(pcVar29 + 8))(lVar3,lVar7);
            }
            lVar3 = local_220;
            local_180 = *(code **)(lVar25 + 0x30);
            lVar17 = local_220;
            (*local_180)(local_220,1,lVar4);
            if ((int)lVar17 != 1) {
              FUN_100040bb4(lVar3,&DAT_100a76718,&DAT_10080ccc0);
            }
          }
          else {
            __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(local_220);
            (**(code **)(pcVar29 + 8))(lVar3,lVar7);
            local_180 = *(code **)(lVar25 + 0x30);
            (*local_180)(lVar17,1,lVar4);
            if ((int)lVar17 == 1) goto LAB_100096d3c;
            FUN_100040bb4(lVar16,&DAT_100a76710,&DAT_10080b210);
            lVar3 = local_1d8;
            (**(code **)(lVar25 + 0x20))(local_1d8,local_220,lVar4);
            (**(code **)(lVar25 + 0x38))(lVar3,0,1,lVar4);
          }
          puVar13 = local_250;
          _swift_initStackObject(local_250,auStack_170);
          *(undefined8 *)(puVar13 + 0x18) = uStack_238;
          *(undefined8 *)(puVar13 + 0x10) = local_240;
          *(undefined **)(puVar13 + 0x20) = local_258;
          *(undefined8 *)(puVar13 + 0x28) = local_268;
          puVar5 = puVar13;
          FUN_100128084(puVar13);
          _swift_setDeallocating(puVar13);
          _swift_arrayDestroy(puVar13 + 0x20,2,local_260);
          __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                    (local_1c0,puVar5);
          bVar1 = unaff_x21 != 0;
          local_278 = pcVar29;
          if (bVar1) {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
          lVar18 = local_1c8;
          _swift_bridgeObjectRelease(puVar5);
          lVar17 = local_1c0;
          (*local_270)(local_1c0,bVar1,1,lVar7);
          lVar3 = local_2e8;
          FUN_10007f314(lVar17,local_2e8,&DAT_100a76710,&DAT_10080b210);
          lVar27 = lVar3;
          (*pcVar23)(lVar3,1,lVar7);
          lVar17 = local_1e8;
          if ((int)lVar27 == 1) {
            FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
            (**(code **)(lVar25 + 0x38))(local_1e8,1,1,lVar4);
LAB_100096fd8:
            lVar17 = local_1c0;
            lVar3 = local_288;
            FUN_10007f314(local_1c0,local_288,&DAT_100a76710,&DAT_10080b210);
            lVar18 = lVar3;
            (*pcVar23)(lVar3,1,lVar7);
            if ((int)lVar18 == 1) {
              FUN_100040bb4(lVar17,&DAT_100a76710,&DAT_10080b210);
              FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(lVar25 + 0x38))(local_1c8,1,1,lVar4);
            }
            else {
              __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_1c8);
              FUN_100040bb4(lVar17,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(local_278 + 8))(local_288,lVar7);
            }
            lVar17 = local_1e8;
            (*local_180)(local_1e8,1,lVar4);
            lVar3 = local_2f8;
            if ((int)lVar17 != 1) {
              FUN_100040bb4(local_1e8,&DAT_100a76718,&DAT_10080ccc0);
            }
          }
          else {
            __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(local_1e8);
            (**(code **)(local_278 + 8))(lVar3,lVar7);
            (*local_180)(lVar17,1,lVar4);
            if ((int)lVar17 == 1) goto LAB_100096fd8;
            FUN_100040bb4(local_1c0,&DAT_100a76710,&DAT_10080b210);
            (**(code **)(lVar25 + 0x20))(lVar18,local_1e8,lVar4);
            (**(code **)(lVar25 + 0x38))(lVar18,0,1,lVar4);
            lVar3 = local_2f8;
          }
          lVar18 = local_1d8;
          FUN_10007f314(local_1d8,lVar3,&DAT_100a76718,&DAT_10080ccc0);
          lVar7 = lVar3;
          (*local_180)(lVar3,1,lVar4);
          lVar17 = local_370;
          if ((int)lVar7 == 1) {
            FUN_100040bb4(local_1c8,&DAT_100a76718,&DAT_10080ccc0);
            uVar22 = 0;
          }
          else {
            pcVar23 = *(code **)(lVar25 + 0x20);
            (*pcVar23)(local_370,lVar3,lVar4);
            lVar18 = local_1c8;
            lVar3 = local_378;
            FUN_10007f314(local_1c8,local_378,&DAT_100a76718,&DAT_10080ccc0);
            lVar27 = lVar3;
            (*local_180)(lVar3,1,lVar4);
            lVar7 = local_388;
            if ((int)lVar27 == 1) {
              (**(code **)(lVar25 + 8))(lVar17,lVar4);
              FUN_100040bb4(lVar18,&DAT_100a76718,&DAT_10080ccc0);
              uVar22 = 0;
              lVar18 = local_1d8;
            }
            else {
              (*pcVar23)(local_388,lVar3,lVar4);
              lVar3 = lVar17;
              __s10Foundation4DateV1goiySbAC_ACtFZ(lVar17,lVar7);
              uVar22 = (uint)lVar3;
              pcVar23 = *(code **)(lVar25 + 8);
              (*pcVar23)(lVar7,lVar4);
              (*pcVar23)(lVar17,lVar4);
              lVar3 = local_1d8;
            }
          }
          FUN_100040bb4(lVar18,&DAT_100a76718,&DAT_10080ccc0);
          FUN_100040bb4(lVar3,&DAT_100a76718,&DAT_10080ccc0);
          lVar3 = local_1e0;
          pcVar23 = local_2d0;
          (*local_2d0)(local_1b8,local_1e0);
          (*pcVar23)(local_228,lVar3);
          uVar19 = local_218 + 1;
          pcVar23 = local_248 + local_2b8;
          pcVar29 = local_1d0 + local_2b8;
          uVar26 = local_218;
        } while (((uint)local_2c0 & 1) == (uVar22 & 1));
        lVar4 = local_380;
        param_3 = local_360;
        if ((local_2c0 & 1) != 0) {
          if ((long)uVar26 < (long)local_2e0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980d4);
            (*pcVar23)();
          }
          if ((long)local_2e0 < (long)uVar26) {
            lVar7 = 0;
            lVar27 = *local_360;
            lVar28 = local_2b8 * (uVar26 - 1);
            lVar30 = uVar26 * local_2b8;
            lVar17 = local_2e0 * local_2b8;
            lVar18 = local_2b8;
            uVar19 = local_2e0;
            local_2a8 = uVar26;
            do {
              if (uVar19 != (uVar26 + lVar7) - 1) {
                if (lVar27 == 0) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980ec);
                  (*pcVar23)();
                }
                uVar26 = lVar27 + lVar17;
                pcVar23 = *(code **)(local_280 + 0x20);
                (*pcVar23)(local_368,uVar26,local_1e0);
                lVar3 = local_1e0;
                if ((lVar17 < lVar28) || ((ulong)(lVar27 + lVar30) <= uVar26)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar26,lVar27 + lVar28,1,local_1e0);
                }
                else if (lVar17 != lVar28) {
                  _swift_arrayInitWithTakeBackToFront(uVar26,lVar27 + lVar28,1,local_1e0);
                }
                (*pcVar23)(lVar27 + lVar28,local_368,lVar3);
                lVar4 = local_380;
                uVar26 = local_2a8;
                lVar18 = local_2b8;
                param_3 = local_360;
              }
              uVar19 = uVar19 + 1;
              lVar7 = lVar7 + -1;
              lVar28 = lVar28 - lVar18;
              lVar30 = lVar30 - lVar18;
              lVar17 = lVar17 + lVar18;
              lVar3 = local_1e0;
            } while ((long)uVar19 < (long)(uVar26 + lVar7));
          }
        }
      }
      uVar19 = param_3[1];
      if ((long)uVar26 < (long)uVar19) {
        if (SBORROW8(uVar26,local_2e0)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980c8);
          (*pcVar23)();
        }
        if (lVar4 <= (long)(uVar26 - local_2e0)) goto LAB_1000973b0;
        if (SCARRY8(local_2e0,lVar4)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980cc);
          (*pcVar23)();
        }
        uVar21 = local_2e0 + lVar4;
        if ((long)uVar19 <= (long)(local_2e0 + lVar4)) {
          uVar21 = uVar19;
        }
        if ((long)uVar21 < (long)local_2e0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980d0);
          (*pcVar23)();
        }
        if (uVar26 == uVar21) goto LAB_1000973b0;
        local_2b8 = *param_3;
        puVar13 = &DAT_100a76720;
        FUN_100004bb4(&DAT_100a76720,&DAT_10080b220);
        lStack_338 = *(long *)(local_280 + 0x48);
        local_340 = *(code **)(local_280 + 0x10);
        local_3a8 = uVar21;
        uVar19 = uVar26;
        local_258 = puVar13;
LAB_10009751c:
        do {
          local_2a8 = uVar19;
          lVar17 = local_2b8;
          lVar4 = lStack_338;
          pcVar23 = local_340;
          local_2c8 = (code *)(local_2b8 + lStack_338 * uVar26);
          (*local_340)(local_1f0,local_2c8,lVar3);
          pcVar29 = (code *)(lVar17 + (uVar26 - 1) * lVar4);
          local_2d0 = pcVar29;
          local_2c0 = uVar26 - 1;
          (*pcVar23)(local_1f8,pcVar29,lVar3);
          puVar13 = local_290;
          uVar24 = local_298;
          local_78[0] = local_290;
          local_78[1] = (undefined *)local_298;
          lVar4 = 2;
          __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
          lVar3 = lVar4 + 0x38;
          local_260 = puVar13;
          local_268 = uVar24;
          lVar17 = 0;
          bVar1 = false;
          do {
            pcVar31 = (code *)local_78[lVar17];
            uVar24 = *(undefined8 *)(lVar4 + 0x28);
            pcVar23 = pcVar31;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            __ss6HasherV5_seedABSi_tcfC(auStack_e0,uVar24);
            puVar8 = auStack_e0;
            __sSS4hash4intoys6HasherVz_tF(puVar8,pcVar23,pcVar29);
            __ss6HasherV9_finalizeSiyF();
            _swift_bridgeObjectRelease(pcVar29);
            uVar20 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
            uVar32 = (ulong)puVar8 & (uVar20 ^ 0xffffffffffffffff);
            uVar19 = uVar32 >> 6;
            uVar26 = *(ulong *)(lVar3 + uVar19 * 8);
            uVar21 = 1L << (uVar32 & 0x3f);
            if ((uVar21 & uVar26) != 0) {
              pcVar29 = pcVar23;
              do {
                pcVar9 = *(code **)(*(long *)(lVar4 + 0x30) + uVar32 * 8);
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                pcVar10 = pcVar31;
                pcVar14 = pcVar29;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                if (pcVar9 == pcVar10 && pcVar29 == pcVar14) {
                  pcVar23 = pcVar14;
                  _swift_bridgeObjectRelease(pcVar29);
                  _swift_bridgeObjectRelease(pcVar14);
                  goto LAB_1000975b0;
                }
                pcVar23 = pcVar29;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pcVar9,pcVar29,pcVar10,pcVar14,0);
                _swift_bridgeObjectRelease(pcVar29);
                _swift_bridgeObjectRelease(pcVar14);
                if (((ulong)pcVar9 & 1) != 0) goto LAB_1000975b0;
                uVar32 = uVar32 + 1 & ~uVar20;
                uVar19 = uVar32 >> 6;
                uVar26 = *(ulong *)(lVar3 + uVar19 * 8);
                uVar21 = 1L << (uVar32 & 0x3f);
                pcVar29 = pcVar23;
              } while ((uVar21 & uVar26) != 0);
            }
            *(ulong *)(lVar3 + uVar19 * 8) = uVar21 | uVar26;
            *(code **)(*(long *)(lVar4 + 0x30) + uVar32 * 8) = pcVar31;
            if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100098068);
              (*pcVar23)();
            }
            *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_1000975b0:
            lVar17 = 1;
            bVar2 = !bVar1;
            pcVar29 = pcVar23;
            bVar1 = true;
          } while (bVar2);
          pcVar23 = (code *)0x0;
          FUN_10000603c();
          _swift_arrayDestroy(local_78,2,pcVar23);
          lVar3 = local_320;
          __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                    (local_320,lVar4);
          bVar1 = unaff_x21 != 0;
          local_270 = pcVar23;
          if (bVar1) {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
          lVar7 = local_308;
          lVar18 = local_310;
          lVar17 = local_318;
          _swift_release(lVar4);
          uVar19 = 0;
          __s10Foundation17URLResourceValuesVMa();
          puVar13 = *(undefined **)(uVar19 - 8);
          local_278 = *(code **)(puVar13 + 0x38);
          (*local_278)(lVar3,bVar1,1,uVar19);
          FUN_10007f314(lVar3,lVar18,&DAT_100a76710,&DAT_10080b210);
          local_1d0 = *(code **)(puVar13 + 0x30);
          lVar4 = lVar18;
          (*local_1d0)(lVar18,1,uVar19);
          local_250 = puVar13;
          local_218 = uVar19;
          if ((int)lVar4 == 1) {
            FUN_100040bb4(lVar18,&DAT_100a76710,&DAT_10080b210);
            lVar4 = local_1b0;
            (**(code **)(lVar25 + 0x38))(lVar17,1,1,local_1b0);
LAB_100097864:
            FUN_10007f314(lVar3,lVar7,&DAT_100a76710,&DAT_10080b210);
            lVar18 = lVar7;
            (*local_1d0)(lVar7,1,uVar19);
            if ((int)lVar18 == 1) {
              FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
              FUN_100040bb4(lVar7,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(lVar25 + 0x38))(local_200,1,1,lVar4);
            }
            else {
              __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_200);
              FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(local_250 + 8))(lVar7,local_218);
            }
            local_248 = *(code **)(lVar25 + 0x30);
            puVar13 = (undefined *)0x1;
            lVar3 = lVar17;
            (*local_248)(lVar17,1,lVar4);
            puVar5 = local_260;
            uVar24 = local_268;
            if ((int)lVar3 != 1) {
              puVar13 = &DAT_100a76718;
              FUN_100040bb4(lVar17,&DAT_100a76718,&DAT_10080ccc0);
            }
          }
          else {
            __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(lVar17);
            uVar19 = local_218;
            (**(code **)(puVar13 + 8))(lVar18,local_218);
            lVar4 = local_1b0;
            local_248 = *(code **)(lVar25 + 0x30);
            lVar18 = lVar17;
            (*local_248)(lVar17,1,local_1b0);
            if ((int)lVar18 == 1) goto LAB_100097864;
            FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
            lVar3 = local_200;
            (**(code **)(lVar25 + 0x20))(local_200,lVar17,lVar4);
            puVar13 = (undefined *)0x0;
            (**(code **)(lVar25 + 0x38))(lVar3,0,1,lVar4);
            puVar5 = local_260;
            uVar24 = local_268;
          }
          lVar4 = 2;
          local_f0[0] = puVar5;
          local_f0[1] = (undefined *)uVar24;
          __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
          lVar3 = lVar4 + 0x38;
          lVar17 = 0;
          bVar1 = false;
          do {
            puVar6 = local_f0[lVar17];
            uVar24 = *(undefined8 *)(lVar4 + 0x28);
            puVar5 = puVar6;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            __ss6HasherV5_seedABSi_tcfC(auStack_e0,uVar24);
            puVar8 = auStack_e0;
            __sSS4hash4intoys6HasherVz_tF(puVar8,puVar5,puVar13);
            __ss6HasherV9_finalizeSiyF();
            _swift_bridgeObjectRelease(puVar13);
            uVar20 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
            uVar32 = (ulong)puVar8 & (uVar20 ^ 0xffffffffffffffff);
            uVar19 = uVar32 >> 6;
            uVar26 = *(ulong *)(lVar3 + uVar19 * 8);
            uVar21 = 1L << (uVar32 & 0x3f);
            if ((uVar21 & uVar26) != 0) {
              puVar13 = puVar5;
              do {
                puVar11 = *(undefined **)(*(long *)(lVar4 + 0x30) + uVar32 * 8);
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                puVar12 = puVar6;
                puVar15 = puVar13;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                if (puVar11 == puVar12 && puVar13 == puVar15) {
                  puVar5 = puVar15;
                  _swift_bridgeObjectRelease(puVar13);
                  _swift_bridgeObjectRelease(puVar15);
                  goto LAB_1000979d8;
                }
                puVar5 = puVar13;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (puVar11,puVar13,puVar12,puVar15,0);
                _swift_bridgeObjectRelease(puVar13);
                _swift_bridgeObjectRelease(puVar15);
                if (((ulong)puVar11 & 1) != 0) goto LAB_1000979d8;
                uVar32 = uVar32 + 1 & ~uVar20;
                uVar19 = uVar32 >> 6;
                uVar26 = *(ulong *)(lVar3 + uVar19 * 8);
                uVar21 = 1L << (uVar32 & 0x3f);
                puVar13 = puVar5;
              } while ((uVar21 & uVar26) != 0);
            }
            *(ulong *)(lVar3 + uVar19 * 8) = uVar21 | uVar26;
            *(undefined **)(*(long *)(lVar4 + 0x30) + uVar32 * 8) = puVar6;
            if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x10009806c);
              (*pcVar23)();
            }
            *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_1000979d8:
            lVar17 = 1;
            bVar2 = !bVar1;
            puVar13 = puVar5;
            bVar1 = true;
          } while (bVar2);
          _swift_arrayDestroy(local_f0,2,local_270);
          __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                    (local_208,lVar4);
          bVar1 = unaff_x21 != 0;
          if (bVar1) {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
          uVar26 = local_210;
          _swift_release(lVar4);
          lVar4 = local_208;
          uVar19 = local_218;
          (*local_278)(local_208,bVar1,1,local_218);
          lVar3 = local_328;
          FUN_10007f314(lVar4,local_328,&DAT_100a76710,&DAT_10080b210);
          lVar17 = lVar3;
          (*local_1d0)(lVar3,1,uVar19);
          lVar4 = local_2a0;
          if ((int)lVar17 == 1) {
            FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
            (**(code **)(lVar25 + 0x38))(local_2a0,1,1,local_1b0);
LAB_100097c50:
            lVar4 = local_208;
            lVar3 = local_2d8;
            FUN_10007f314(local_208,local_2d8,&DAT_100a76710,&DAT_10080b210);
            lVar17 = lVar3;
            (*local_1d0)(lVar3,1,uVar19);
            if ((int)lVar17 == 1) {
              FUN_100040bb4(lVar4,&DAT_100a76710,&DAT_10080b210);
              FUN_100040bb4(lVar3,&DAT_100a76710,&DAT_10080b210);
              lVar4 = local_1b0;
              (**(code **)(lVar25 + 0x38))(local_2b0,1,1,local_1b0);
            }
            else {
              __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_2b0);
              FUN_100040bb4(lVar4,&DAT_100a76710,&DAT_10080b210);
              (**(code **)(local_250 + 8))(local_2d8,uVar19);
              lVar4 = local_1b0;
            }
            pcVar23 = local_248;
            lVar17 = local_2a0;
            (*local_248)(local_2a0,1,lVar4);
            lVar3 = local_330;
            if ((int)lVar17 != 1) {
              FUN_100040bb4(local_2a0,&DAT_100a76718,&DAT_10080ccc0);
            }
          }
          else {
            __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(local_2a0);
            (**(code **)(local_250 + 8))(lVar3,uVar19);
            (*local_248)(lVar4,1,local_1b0);
            if ((int)lVar4 == 1) goto LAB_100097c50;
            FUN_100040bb4(local_208,&DAT_100a76710,&DAT_10080b210);
            lVar4 = local_1b0;
            lVar3 = local_2b0;
            (**(code **)(lVar25 + 0x20))(local_2b0,local_2a0,local_1b0);
            (**(code **)(lVar25 + 0x38))(lVar3,0,1,lVar4);
            lVar3 = local_330;
            pcVar23 = local_248;
          }
          FUN_10007f314(local_200,lVar3,&DAT_100a76718,&DAT_10080ccc0);
          lVar17 = lVar3;
          (*pcVar23)(lVar3,1,lVar4);
          if ((int)lVar17 == 1) {
LAB_1000974a4:
            FUN_100040bb4(local_2b0,&DAT_100a76718,&DAT_10080ccc0);
            FUN_100040bb4(local_200,&DAT_100a76718,&DAT_10080ccc0);
            FUN_100040bb4(lVar3,&DAT_100a76718,&DAT_10080ccc0);
            lVar3 = local_1e0;
            pcVar23 = *(code **)(local_280 + 8);
            (*pcVar23)(local_1f8,local_1e0);
            (*pcVar23)(local_1f0,lVar3);
          }
          else {
            pcVar29 = *(code **)(lVar25 + 0x20);
            (*pcVar29)(uVar26,lVar3,lVar4);
            lVar17 = local_2b0;
            lVar3 = local_348;
            FUN_10007f314(local_2b0,local_348,&DAT_100a76718,&DAT_10080ccc0);
            lVar18 = lVar3;
            (*pcVar23)(lVar3,1,lVar4);
            puVar8 = local_350;
            if ((int)lVar18 == 1) {
              (**(code **)(lVar25 + 8))(uVar26,lVar4);
              goto LAB_1000974a4;
            }
            (*pcVar29)(local_350,lVar3,lVar4);
            uVar19 = local_210;
            __s10Foundation4DateV1goiySbAC_ACtFZ(local_210,puVar8);
            pcVar23 = *(code **)(lVar25 + 8);
            (*pcVar23)(puVar8,lVar4);
            (*pcVar23)(local_210,lVar4);
            FUN_100040bb4(lVar17,&DAT_100a76718,&DAT_10080ccc0);
            FUN_100040bb4(local_200,&DAT_100a76718,&DAT_10080ccc0);
            lVar3 = local_1e0;
            pcVar23 = *(code **)(local_280 + 8);
            (*pcVar23)(local_1f8,local_1e0);
            (*pcVar23)(local_1f0,lVar3);
            pcVar23 = local_2c8;
            lVar4 = local_358;
            if ((uVar19 & 1) != 0) {
              if (local_2b8 == 0) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980e8);
                (*pcVar23)();
              }
              pcVar31 = *(code **)(local_280 + 0x20);
              (*pcVar31)(local_358,local_2c8,lVar3);
              pcVar29 = local_2d0;
              _swift_arrayInitWithTakeFrontToBack(pcVar23,local_2d0,1,lVar3);
              (*pcVar31)(pcVar29,lVar4,lVar3);
              uVar26 = local_2c0;
              uVar19 = local_2a8;
              if (local_2c0 != local_2e0) goto LAB_10009751c;
            }
          }
          uVar26 = local_2a8 + 1;
          uVar19 = uVar26;
        } while (uVar26 != local_3a8);
        uVar21 = local_3a8;
        if ((long)local_3a8 < (long)local_2e0) goto LAB_1000980c0;
      }
      else {
LAB_1000973b0:
        uVar21 = uVar26;
        if ((long)uVar26 < (long)local_2e0) {
LAB_1000980c0:
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980c4);
          (*pcVar23)();
        }
      }
      puVar13 = local_58;
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar13;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar19 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar19) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100033870(puVar13,uVar19 + 1,1,puVar6);
        puVar6 = puVar13;
      }
      param_3 = local_360;
      *(ulong *)(puVar6 + 0x10) = uVar19 + 1;
      *(ulong *)(puVar6 + uVar19 * 0x10 + 0x20) = local_2e0;
      *(ulong *)(puVar6 + uVar19 * 0x10 + 0x28) = uVar21;
      local_58 = puVar6;
      if (*local_398 == 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980f4);
        (*pcVar23)();
      }
      FUN_100098dec(&local_58,*local_398,local_360);
      if (unaff_x21 != 0) goto LAB_100098090;
      uVar19 = param_3[1];
    } while ((long)uVar21 < (long)uVar19);
    unaff_x21 = 0;
  }
  puVar13 = local_58;
  lVar3 = *local_398;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980f8);
    (*pcVar23)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = local_280;
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10006f924();
  }
  uVar19 = *(ulong *)(puVar13 + 0x10);
  while (local_58 = puVar13, 1 < uVar19) {
    lVar16 = *local_360;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980f0);
      (*pcVar23)();
    }
    lVar25 = uVar19 - 1;
    lVar7 = *(long *)(puVar13 + uVar19 * 0x10);
    lVar17 = *(long *)(puVar13 + lVar25 * 0x10 + 0x28);
    lVar18 = *(long *)(lVar4 + 0x48);
    FUN_100099070(lVar16 + lVar18 * lVar7,
                  lVar16 + lVar18 * *(long *)(puVar13 + lVar25 * 0x10 + 0x20),
                  lVar16 + lVar18 * lVar17,lVar3);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar7) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980bc);
      (*pcVar23)();
    }
    puVar5 = puVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar13 + 0x10) <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1000980c0);
      (*pcVar23)();
    }
    *(long *)(puVar13 + uVar19 * 0x10) = lVar7;
    *(long *)((long)(puVar13 + uVar19 * 0x10) + 8) = lVar17;
    local_58 = puVar13;
    FUN_10005fd60(lVar25);
    puVar13 = local_58;
    uVar19 = *(ulong *)(local_58 + 0x10);
  }
LAB_100098090:
  _swift_bridgeObjectRelease(local_58);
  return;
}

