// rea decompile_all
// name: FUN_10067f5fc
// address: 0x10067f5fc
// body: available
// range: 0x10067f5fc-0x1006817e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006817e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10067f5fc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ID IVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte bVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined1 uVar31;
  undefined8 *unaff_x20;
  long lVar32;
  long unaff_x21;
  long lVar33;
  char cVar34;
  long lVar35;
  undefined8 uVar36;
  char cVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  char cVar40;
  char cVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long local_758;
  undefined *local_738;
  undefined *local_730;
  undefined *puStack_728;
  undefined *local_720;
  ID IStack_718;
  ID local_700;
  undefined *local_6f0;
  undefined8 uStack_6e8;
  undefined8 auStack_6d8 [6];
  undefined1 auStack_6a8 [8];
  undefined8 local_6a0 [7];
  undefined8 *local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 local_638;
  undefined1 local_637;
  undefined1 local_636;
  undefined *local_630;
  undefined *puStack_628;
  undefined *local_620;
  undefined *puStack_618;
  undefined *local_610;
  ID IStack_608;
  byte local_600;
  char local_5ff;
  char local_5fe;
  undefined *local_5f8;
  undefined *puStack_5f0;
  undefined *local_5e8;
  undefined *puStack_5e0;
  undefined *local_5d8;
  ID IStack_5d0;
  byte local_5c8;
  char local_5c7;
  char local_5c6;
  undefined8 auStack_5c0 [6];
  undefined1 auStack_590 [8];
  undefined8 local_588 [7];
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined1 local_520;
  undefined1 local_51f;
  undefined1 local_51e;
  undefined *local_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *local_4f0;
  undefined7 uStack_4e8;
  undefined4 uStack_4e1;
  undefined *local_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *local_4b0;
  undefined7 uStack_4a8;
  undefined4 uStack_4a1;
  undefined *local_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *local_470;
  undefined7 uStack_468;
  undefined4 uStack_461;
  undefined *local_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *local_430;
  undefined7 uStack_428;
  uint uStack_421;
  undefined8 *local_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 local_3f0;
  undefined7 uStack_3e8;
  undefined4 uStack_3e1;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined7 uStack_3a8;
  undefined4 uStack_3a1;
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [32];
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  ID local_330;
  undefined2 local_328;
  char local_326;
  ID local_320 [3];
  undefined *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  ID local_288;
  undefined2 local_280;
  undefined1 local_27e;
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  ID local_238 [3];
  undefined *local_220;
  undefined *local_218;
  undefined *puStack_210;
  undefined *local_208;
  undefined *puStack_200;
  undefined *local_1f8;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  byte bStack_1e8;
  char cStack_1e7;
  char cStack_1e6;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1c8;
  ulong local_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  byte bStack_188;
  char cStack_187;
  char cStack_186;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  byte bStack_150;
  char cStack_14f;
  char cStack_14e;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined7 uStack_120;
  undefined1 uStack_119;
  byte bStack_118;
  char cStack_117;
  char cStack_116;
  undefined1 auStack_110 [24];
  long local_f8;
  ulong uStack_f0;
  undefined8 *local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  cVar41 = *(char *)((long)unaff_x20 + 0x31);
  if (cVar41 == *(char *)((long)param_1 + 0x31)) {
    if (cVar41 == '\x03') {
      uStack_3c8 = unaff_x20[1];
      local_3d0 = *unaff_x20;
      uStack_3b8 = unaff_x20[3];
      uStack_3c0 = unaff_x20[2];
      local_3b0 = unaff_x20[4];
      uStack_3a8 = (undefined7)unaff_x20[5];
      uStack_3a1 = *(undefined4 *)((long)unaff_x20 + 0x2f);
      FUN_100686eb4();
      puVar26 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
      local_b0 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
      if (param_1 != (undefined8 *)0x0) {
        local_b0 = param_1;
      }
      FUN_100686eb4();
      if (param_1 != (undefined8 *)0x0) {
        puVar26 = param_1;
      }
      FUN_10068c714(puVar26);
      puVar26 = local_b0;
      puVar17 = &DAT_100ab9f10;
      FUN_100004bb4(&DAT_100ab9f10,&DAT_10084d570);
      local_e8 = puVar26;
      puStack_d0 = puVar17;
      FUN_10003e8bc(&local_e8,&local_148);
      ppuVar18 = &local_180;
      _swift_dynamicCast(ppuVar18,&local_148,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,0);
      puVar11 = puStack_178;
      puVar17 = local_180;
      if ((int)ppuVar18 == 0) {
        FUN_10003e8bc(&local_e8,&local_b0);
        FUN_10068e2dc(&local_550,&local_b0);
        FUN_10003f094(&local_e8);
        uStack_6e8 = uStack_530;
        local_6f0 = (undefined *)local_538;
        uVar19 = local_528;
        uVar44 = local_540;
        uVar36 = local_550;
        uVar38 = uStack_548;
        uVar5 = local_51e;
        uVar4 = local_51f;
        uVar31 = local_520;
      }
      else {
        FUN_100008184(local_180,puStack_178);
        FUN_10068e3b8(auStack_5c0,puVar17,puVar11,0);
        if (unaff_x21 == 0) {
          FUN_100006cdc(puVar17,puVar11);
          FUN_10003f094(&local_e8);
          FUN_100006cdc(puVar17,puVar11);
          puVar26 = auStack_5c0;
        }
        else {
          FUN_100006cdc(puVar17,puVar11);
          puVar8 = &_OBJC_CLASS___NSNull;
          _objc_allocWithZone();
          puVar27 = (undefined8 *)_objc_msgSend((ID)puVar8,"init");
          uVar19 = 0;
          FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
          puVar26 = (undefined8 *)(auStack_590 + 8);
          local_b0 = puVar27;
          uStack_98 = uVar19;
          FUN_10068e2dc(auStack_590 + 8,&local_b0);
          _swift_errorRelease();
          FUN_100006cdc(puVar17,puVar11);
          FUN_10003f094(&local_e8);
        }
        uStack_6e8 = puVar26[4];
        local_6f0 = (undefined *)puVar26[3];
        uVar19 = puVar26[5];
        uVar44 = puVar26[2];
        uVar36 = *puVar26;
        uVar38 = puVar26[1];
        uVar5 = *(undefined1 *)((long)puVar26 + 0x32);
        uVar4 = *(undefined1 *)((long)puVar26 + 0x31);
        uVar31 = *(undefined1 *)(puVar26 + 6);
      }
      FUN_10003f094(&local_148);
      uStack_a8 = unaff_x20[1];
      local_b0 = (undefined8 *)*unaff_x20;
      uStack_98 = unaff_x20[3];
      local_a0 = unaff_x20[2];
      local_90 = unaff_x20[4];
      uStack_88 = (undefined7)unaff_x20[5];
      uVar3 = *(undefined4 *)((long)unaff_x20 + 0x2f);
      uStack_81 = (undefined1)uVar3;
      uStack_80 = (undefined1)((uint)uVar3 >> 8);
      uStack_7f = (undefined1)((uint)uVar3 >> 0x10);
      uStack_7e = (undefined1)((uint)uVar3 >> 0x18);
      FUN_10068e548(&local_b0);
      unaff_x20[1] = uVar38;
      *unaff_x20 = uVar36;
      unaff_x20[2] = uVar44;
      unaff_x20[4] = uStack_6e8;
      unaff_x20[3] = local_6f0;
      unaff_x20[5] = uVar19;
      *(undefined1 *)(unaff_x20 + 6) = uVar31;
      *(undefined1 *)((long)unaff_x20 + 0x31) = uVar4;
      *(undefined1 *)((long)unaff_x20 + 0x32) = uVar5;
      goto LAB_10068179c;
    }
    if (cVar41 == '\x04') {
      uVar19 = *param_1;
      lVar1 = param_1[1];
      uVar44 = param_1[3];
      bVar28 = *(byte *)(lVar1 + 0x20);
      FUN_10068e538(param_1,&local_b0);
      _swift_bridgeObjectRetain(lVar1);
      lVar32 = lVar1 + 0x40;
      __ss10_HashTableV11startBucketAB0D0Vvg(lVar32,~(-1L << ((ulong)bVar28 & 0x3f)));
      uVar23 = *(uint *)(lVar1 + 0x24);
      _swift_bridgeObjectRelease(lVar1);
      uVar29 = 0x40;
      puVar26 = (undefined8 *)*param_1;
      uVar25 = (ulong)uVar23;
      while( true ) {
        puVar17 = PTR___sypN_100995e88;
        lVar35 = 1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
        iVar2 = *(int *)(lVar1 + 0x24);
        FUN_100690ae8(lVar35,iVar2,0x40);
        if (iVar2 != (int)uVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1006817dc);
          (*pcVar6)();
        }
        if (lVar32 == lVar35) break;
        ppuVar7 = &local_b0;
        lVar35 = lVar32;
        FUN_10068364c(ppuVar7,lVar32,uVar25,uVar29 & 1,lVar1);
        FUN_10003f094(&local_b0);
        lVar10 = lVar32;
        FUN_10068364c(&local_e8,lVar32,uVar25,uVar29 & 1,lVar1);
        _swift_bridgeObjectRelease(lVar10);
        FUN_10003e8bc(&local_e8,&local_148);
        ppuVar18 = &local_1b8;
        _swift_dynamicCast(ppuVar18,&local_148,puVar17 + 8,PTR___s10Foundation4DataVN_1009961e8,0);
        puVar11 = puStack_1b0;
        puVar17 = local_1b8;
        local_758 = unaff_x21;
        if ((int)ppuVar18 == 0) {
          FUN_10003e8bc(&local_e8,&local_180);
          FUN_10068e2dc(&local_668,&local_180);
          FUN_10003f094(&local_e8);
          uVar36 = uStack_650;
          puVar27 = local_668;
          uVar38 = local_658;
          uVar43 = local_648;
          uVar39 = uStack_660;
          uVar42 = uStack_640;
          uVar4 = local_637;
          uVar31 = local_638;
          uVar5 = local_636;
        }
        else {
          FUN_100008184(local_1b8,puStack_1b0);
          FUN_10068e3b8(auStack_6d8,puVar17,puVar11,0);
          if (unaff_x21 == 0) {
            FUN_100006cdc(puVar17,puVar11);
            FUN_100006cdc(puVar17,puVar11);
            FUN_10003f094(&local_e8);
            puVar30 = auStack_6d8;
          }
          else {
            FUN_100006cdc(puVar17,puVar11);
            puVar8 = &_OBJC_CLASS___NSNull;
            _objc_allocWithZone();
            puVar8 = (undefined *)_objc_msgSend((ID)puVar8,"init");
            puVar9 = (undefined *)0x0;
            FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
            puVar30 = (undefined8 *)(auStack_6a8 + 8);
            local_180 = puVar8;
            puStack_168 = puVar9;
            FUN_10068e2dc(auStack_6a8 + 8,&local_180);
            _swift_errorRelease(unaff_x21);
            FUN_100006cdc(puVar17,puVar11);
            FUN_10003f094(&local_e8);
            local_758 = 0;
          }
          uVar36 = puVar30[3];
          puVar27 = (undefined8 *)*puVar30;
          uVar38 = puVar30[2];
          uVar43 = puVar30[4];
          uVar39 = puVar30[1];
          uVar42 = puVar30[5];
          uVar4 = *(undefined1 *)((long)puVar30 + 0x31);
          uVar31 = *(undefined1 *)(puVar30 + 6);
          uVar5 = *(undefined1 *)((long)puVar30 + 0x32);
        }
        FUN_10003f094(&local_148);
        uStack_88 = (undefined7)uVar42;
        uStack_81 = (undefined1)((ulong)uVar42 >> 0x38);
        local_b0 = puVar27;
        uStack_a8 = uVar39;
        local_a0 = uVar38;
        uStack_98 = uVar36;
        local_90 = uVar43;
        uStack_80 = uVar31;
        uStack_7f = uVar4;
        uStack_7e = uVar5;
        _swift_bridgeObjectRetain(lVar1);
        uVar23 = uVar29 & 1;
        lVar10 = lVar32;
        uVar20 = uVar25;
        FUN_10068d8f4();
        FUN_100690ae8(lVar32,uVar25,uVar29);
        _swift_bridgeObjectRelease(lVar1);
        FUN_10068e548(&local_b0);
        puVar17 = &DAT_100aba040;
        FUN_100004bb4(&DAT_100aba040,&DAT_10084ddc0);
        puVar8 = puVar17;
        _swift_allocObject();
        *(undefined8 *)(puVar8 + 0x18) = 2;
        *(undefined8 *)(puVar8 + 0x10) = 1;
        puVar27 = (undefined8 *)(puVar8 + 0x20);
        *puVar27 = ppuVar7;
        puVar11 = PTR___sSSN_1009957f8;
        *(undefined **)(puVar8 + 0x38) = PTR___sSSN_1009957f8;
        *(undefined ***)(puVar8 + 0x40) = &PTR_PTR_1009e61c8;
        *(long *)(puVar8 + 0x28) = lVar35;
        uVar24 = 7;
        _swift_allocObject(puVar17,0x48);
        puVar30 = (undefined8 *)(puVar17 + 0x20);
        *puVar30 = ppuVar7;
        *(undefined **)(puVar17 + 0x38) = puVar11;
        *(undefined ***)(puVar17 + 0x40) = &PTR_PTR_1009e61c8;
        *(long *)(puVar17 + 0x28) = lVar35;
        uVar31 = *(undefined1 *)((long)param_1 + 0x32);
        uVar4 = *(undefined1 *)(param_1 + 6);
        uVar36 = param_1[5];
        uVar38 = param_1[2];
        uVar43 = param_1[4];
        puVar11 = (undefined *)param_1[3];
        FUN_10068e538(param_1,&local_e8);
        _swift_bridgeObjectRetain(lVar35);
        uStack_c0 = (undefined7)uVar36;
        uStack_b9 = (undefined1)((ulong)uVar36 >> 0x38);
        local_b7 = 4;
        uStack_3e1 = CONCAT13(uVar31,CONCAT12(4,CONCAT11(uVar4,uStack_b9)));
        local_410 = puVar26;
        lStack_408 = lVar1;
        uStack_400 = uVar38;
        puStack_3f8 = puVar11;
        local_3f0 = uVar43;
        uStack_3e8 = uStack_c0;
        local_e8 = puVar26;
        lStack_e0 = lVar1;
        local_d8 = uVar38;
        puStack_d0 = puVar11;
        uStack_c8 = uVar43;
        local_b8 = uVar4;
        local_b6 = uVar31;
        FUN_1000b142c(puVar30,auStack_110);
        uVar25 = uStack_f0;
        lVar32 = local_f8;
        FUN_10003f030(auStack_110,local_f8);
        (**(code **)(uVar25 + 8))();
        if ((uVar24 & 1) == 0) {
          FUN_100684c6c(&local_630);
          FUN_10068e548(&local_e8);
          local_730 = local_630;
          puVar11 = local_620;
          puVar9 = puStack_618;
          puStack_728 = puStack_628;
          local_720 = local_610;
          IStack_718 = IStack_608;
          cVar41 = local_5ff;
          cVar37 = local_5fe;
          bStack_118 = local_600;
        }
        else {
          puVar11 = &_OBJC_CLASS___NSNull;
          _objc_allocWithZone();
          puVar11 = (undefined *)_objc_msgSend((ID)puVar11,"init");
          puVar12 = (undefined *)0x0;
          FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
          local_1b8 = puVar11;
          puStack_1a0 = puVar12;
          FUN_10003e8bc(&local_1b8,&local_218);
          puVar11 = PTR___sypN_100995e88;
          puVar13 = &local_1e0;
          _swift_dynamicCast(puVar13,&local_218,PTR___sypN_100995e88 + 8,
                             PTR___s10Foundation4DataVN_1009961e8,0);
          uVar38 = local_1d8;
          uVar36 = local_1e0;
          if (((ulong)puVar13 & 1) == 0) {
            FUN_10003e8bc(&local_1b8,&local_148);
            uVar36 = 0;
            FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
            local_720 = (undefined *)0x0;
            __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
            puVar9 = &_OBJC_CLASS___NSNull;
            _objc_allocWithZone();
            IStack_718 = _objc_msgSend((ID)puVar9,"init");
            FUN_10003e8bc(&local_148,&local_180);
            FUN_1006818d4(&local_2b0,&local_180);
            ppuVar18 = &local_358;
            _swift_dynamicCast(ppuVar18,&local_2b0,puVar11 + 8,uVar36,0);
            puVar9 = local_358;
            if ((int)ppuVar18 == 0) {
              FUN_10003f094(&local_180);
              ppuVar18 = &local_358;
              _swift_dynamicCast(ppuVar18,&local_2b0,puVar11 + 8,PTR___sSSN_1009957f8,0);
              if (((ulong)ppuVar18 & 1) != 0) {
                bVar28 = 0;
                cVar41 = '\x01';
                puVar11 = local_358;
                puVar9 = local_350;
                goto LAB_100680014;
              }
              ppuVar18 = &local_358;
              _swift_dynamicCast(ppuVar18,&local_2b0,puVar11 + 8,puVar12,0);
              if ((int)ppuVar18 != 0) {
                bVar28 = 0;
                puVar11 = (undefined *)0x0;
                puVar9 = (undefined *)0xe000000000000000;
                cVar41 = '\x05';
                goto LAB_100680014;
              }
              puVar9 = &DAT_100ab9e98;
              FUN_100004bb4(&DAT_100ab9e98,&DAT_10084d520);
              ppuVar18 = &local_358;
              _swift_dynamicCast(ppuVar18,&local_2b0,puVar11 + 8,puVar9,0);
              if ((int)ppuVar18 == 0) {
                puVar9 = &DAT_100ab9ea0;
                FUN_100004bb4(&DAT_100ab9ea0,&DAT_10084d528);
                ppuVar18 = &local_358;
                _swift_dynamicCast(ppuVar18,&local_2b0,puVar11 + 8,puVar9,0);
                local_730 = PTR___swiftEmptyArrayStorage_100995ea0;
                if ((int)ppuVar18 == 0) {
                  cVar37 = 0;
                  bVar28 = 0;
                  puVar11 = (undefined *)0x0;
                  puVar9 = (undefined *)0xe000000000000000;
                  cVar41 = '\x06';
                  puStack_728 = PTR___swiftEmptyDictionarySingleton_100995ea8;
                }
                else {
                  bVar28 = 0;
                  puVar11 = (undefined *)0x0;
                  puVar9 = (undefined *)0xe000000000000000;
                  cVar41 = '\x04';
                  cVar37 = 6;
                  puStack_728 = local_358;
                }
              }
              else {
                bVar28 = 0;
                puVar11 = (undefined *)0x0;
                puVar9 = (undefined *)0xe000000000000000;
                cVar41 = '\x03';
                cVar37 = 6;
                local_730 = local_358;
                puStack_728 = PTR___swiftEmptyDictionarySingleton_100995ea8;
              }
            }
            else {
              puVar11 = local_358;
              _objc_retainAutorelease();
              pcVar21 = "objCType";
              uVar24 = _objc_msgSend((ID)puVar11,"objCType");
              __sSS7cStringSSSPys4Int8VG_tcfC();
              if (DAT_100b2b4f0 != -1) {
                _swift_once(&DAT_100b2b4f0,FUN_10068bdf0);
              }
              IVar14 = _objc_msgSend((ID)puVar9,"compare:",DAT_100b2b4f8);
              if (IVar14 == 0) {
                if (DAT_100b2b510 != -1) {
                  _swift_once(&DAT_100b2b510,FUN_10068be58);
                }
                if (((uVar24 != DAT_100b2b518) || (pcVar21 != DAT_100b2b520)) &&
                   (IVar14 = uVar24,
                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (uVar24,pcVar21,DAT_100b2b518,DAT_100b2b520,0), (IVar14 & 1) == 0))
                goto LAB_10067fd74;
LAB_10067ffdc:
                _swift_bridgeObjectRelease(pcVar21);
LAB_10067ffe4:
                IVar14 = _objc_msgSend((ID)puVar9,"boolValue");
                bVar28 = (byte)IVar14;
                FUN_10003f094(&local_180);
                cVar41 = '\x02';
              }
              else {
LAB_10067fd74:
                if (DAT_100b2b500 != -1) {
                  _swift_once(&DAT_100b2b500,FUN_10068be24);
                }
                IVar14 = _objc_msgSend((ID)puVar9,"compare:",DAT_100b2b508);
                if (IVar14 == 0) {
                  if (DAT_100b2b528 != -1) {
                    _swift_once(&DAT_100b2b528,FUN_10068bebc);
                  }
                  if ((uVar24 == DAT_100b2b530) && (pcVar21 == DAT_100b2b538)) goto LAB_10067ffdc;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar24,pcVar21,DAT_100b2b530,DAT_100b2b538,0);
                  _swift_bridgeObjectRelease(pcVar21);
                  if ((uVar24 & 1) == 0) goto LAB_10067fda8;
                  goto LAB_10067ffe4;
                }
                _swift_bridgeObjectRelease(pcVar21);
LAB_10067fda8:
                FUN_10003f094(&local_180);
                cVar41 = '\0';
                bVar28 = 0;
                local_720 = puVar9;
              }
              puVar11 = (undefined *)0x0;
              puVar9 = (undefined *)0xe000000000000000;
LAB_100680014:
              cVar37 = 6;
              local_730 = PTR___swiftEmptyArrayStorage_100995ea0;
              puStack_728 = PTR___swiftEmptyDictionarySingleton_100995ea8;
            }
            FUN_10003f094(&local_2b0);
            FUN_10003f094(&local_148);
            FUN_10003f094(&local_1b8);
          }
          else {
            FUN_100008184(local_1e0,local_1d8);
            uVar43 = uVar36;
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar36,uVar38);
            local_148 = (undefined *)0x0;
            IVar14 = NSJSONSerialization::JSONObjectWithData_options_error_
                               ((ID)&_OBJC_CLASS___NSJSONSerialization,
                                "JSONObjectWithData:options:error:",uVar43,0,&local_148);
            if (IVar14 == 0) {
              puVar11 = local_148;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_148);
              _swift_willThrow(0);
              FUN_100006cdc(uVar36,uVar38);
              puVar9 = &_OBJC_CLASS___NSNull;
              _objc_allocWithZone();
              local_180 = (undefined *)_objc_msgSend((ID)puVar9,"init");
              local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
              puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
              puStack_168 = puVar12;
              FUN_10068dedc();
              local_138 = (undefined *)0x0;
              puStack_130 = (undefined *)0xe000000000000000;
              puStack_140 = puVar9;
              FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
              puVar9 = (undefined *)0x0;
              __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
              puVar15 = &_OBJC_CLASS___NSNull;
              local_128 = puVar9;
              _objc_allocWithZone();
              IVar14 = _objc_msgSend((ID)puVar15,"init");
              uStack_120 = (undefined7)IVar14;
              uStack_119 = (undefined1)(IVar14 >> 0x38);
              bStack_118 = 0;
              cStack_117 = '\x05';
              cStack_116 = 6;
              FUN_10003e8bc(&local_180,&local_2b0);
              FUN_10067f3d8(&local_2b0);
              _swift_errorRelease(puVar11);
              FUN_100006cdc(uVar36,uVar38);
              FUN_10003f094(&local_180);
              cVar37 = cStack_116;
              cVar41 = cStack_117;
              bVar28 = bStack_118;
              local_720 = local_128;
              puVar9 = puStack_130;
              puVar11 = local_138;
              puStack_728 = puStack_140;
              local_730 = local_148;
              IStack_718 = CONCAT17(uStack_119,uStack_120);
              FUN_10003f094(&local_1b8);
              local_758 = 0;
            }
            else {
              FUN_100006cdc(uVar36,uVar38);
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_180,IVar14);
              _swift_unknownObjectRelease(IVar14);
              FUN_10003e8bc(&local_180,&local_2b0);
              local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
              puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
              FUN_10068dedc();
              local_138 = (undefined *)0x0;
              puStack_130 = (undefined *)0xe000000000000000;
              puStack_140 = puVar11;
              FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
              puVar11 = (undefined *)0x0;
              __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
              puVar9 = &_OBJC_CLASS___NSNull;
              local_128 = puVar11;
              _objc_allocWithZone();
              IVar14 = _objc_msgSend((ID)puVar9,"init");
              uStack_120 = (undefined7)IVar14;
              uStack_119 = (undefined1)(IVar14 >> 0x38);
              bStack_118 = 0;
              cStack_117 = '\x05';
              cStack_116 = 6;
              FUN_10003e8bc(&local_2b0,&local_358);
              FUN_10067f3d8(&local_358);
              FUN_100006cdc(uVar36,uVar38);
              FUN_10003f094(&local_2b0);
              FUN_10003f094(&local_180);
              cVar37 = cStack_116;
              cVar41 = cStack_117;
              bVar28 = bStack_118;
              local_720 = local_128;
              puVar9 = puStack_130;
              puVar11 = local_138;
              puStack_728 = puStack_140;
              local_730 = local_148;
              IStack_718 = CONCAT17(uStack_119,uStack_120);
              FUN_10003f094(&local_1b8);
            }
          }
          uStack_120 = (undefined7)IStack_718;
          uStack_119 = (undefined1)(IStack_718 >> 0x38);
          local_148 = local_730;
          puStack_140 = puStack_728;
          local_138 = puVar11;
          puStack_130 = puVar9;
          local_128 = local_720;
          bStack_118 = bVar28;
          cStack_117 = cVar41;
          cStack_116 = cVar37;
          FUN_10003f094(&local_218);
          lVar35 = *(long *)(lVar1 + 0x10);
          _swift_bridgeObjectRetain(lVar1);
          if (lVar35 == 0) {
            FUN_10068e548(&local_e8);
            FUN_10068e56c(lVar32,uVar25,1);
          }
          else {
            lVar35 = lVar32;
            uVar24 = uVar25;
            FUN_1001a2c70(lVar32);
            FUN_10068e56c(lVar32,uVar25,1);
            if ((uVar24 & 1) != 0) {
              FUN_10003e8bc(*(long *)(lVar1 + 0x38) + lVar35 * 0x20,&local_180);
              _swift_bridgeObjectRelease(lVar1);
              FUN_10007f3d4(&local_180,&local_2b0);
              FUN_10003e8bc(&local_2b0,&local_358);
              FUN_10003e8bc(&local_358,&local_1e0);
              ppuVar18 = &local_2d0;
              _swift_dynamicCast(ppuVar18,&local_1e0,PTR___sypN_100995e88 + 8,
                                 PTR___s10Foundation4DataVN_1009961e8,0);
              puVar9 = local_2c8;
              puVar11 = local_2d0;
              if (((ulong)ppuVar18 & 1) == 0) {
                FUN_10003e8bc(&local_358,local_238);
                local_180 = PTR___swiftEmptyArrayStorage_100995ea0;
                puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
                FUN_10068dedc();
                local_170 = (undefined *)0x0;
                puStack_168 = (undefined *)0xe000000000000000;
                puStack_178 = puVar11;
                FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
                puVar11 = (undefined *)0x0;
                __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                puVar9 = &_OBJC_CLASS___NSNull;
                local_160 = puVar11;
                _objc_allocWithZone();
                IVar14 = _objc_msgSend((ID)puVar9,"init");
                uStack_158 = (undefined7)IVar14;
                uStack_151 = (undefined1)(IVar14 >> 0x38);
                bStack_150 = 0;
                cStack_14f = '\x05';
                cStack_14e = '\x06';
                FUN_10003e8bc(local_238,auStack_258);
                FUN_10067f3d8(auStack_258);
                FUN_10068e548(&local_e8);
                FUN_10003f094(local_238);
                FUN_10003f094(&local_358);
                FUN_10003f094(&local_2b0);
                FUN_10068e548(&local_148);
                IStack_718 = CONCAT17(uStack_151,uStack_158);
                puStack_728 = puStack_178;
                local_730 = local_180;
                local_720 = local_160;
                puVar11 = local_170;
                puVar9 = puStack_168;
                cVar41 = cStack_14f;
                cVar37 = cStack_14e;
                bVar28 = bStack_150;
              }
              else {
                FUN_100008184(local_2d0,local_2c8);
                puVar15 = puVar11;
                __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar11,puVar9);
                local_180 = (undefined *)0x0;
                IVar14 = NSJSONSerialization::JSONObjectWithData_options_error_
                                   ((ID)&_OBJC_CLASS___NSJSONSerialization,
                                    "JSONObjectWithData:options:error:",puVar15,0,&local_180);
                if (IVar14 == 0) {
                  puVar15 = local_180;
                  __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_180);
                  _swift_willThrow(0);
                  FUN_100006cdc(puVar11,puVar9);
                  puVar16 = &_OBJC_CLASS___NSNull;
                  _objc_allocWithZone();
                  local_238[0] = _objc_msgSend((ID)puVar16,"init");
                  local_180 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
                  local_220 = puVar12;
                  FUN_10068dedc();
                  local_170 = (undefined *)0x0;
                  puStack_168 = (undefined *)0xe000000000000000;
                  puStack_178 = puVar16;
                  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
                  puVar12 = (undefined *)0x0;
                  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                  puVar16 = &_OBJC_CLASS___NSNull;
                  local_160 = puVar12;
                  _objc_allocWithZone();
                  IVar14 = _objc_msgSend((ID)puVar16,"init");
                  uStack_158 = (undefined7)IVar14;
                  uStack_151 = (undefined1)(IVar14 >> 0x38);
                  bStack_150 = 0;
                  cStack_14f = '\x05';
                  cStack_14e = '\x06';
                  FUN_10003e8bc(local_238,auStack_258);
                  FUN_10067f3d8(auStack_258);
                  FUN_10003f094(local_238);
                  _swift_errorRelease(puVar15);
                  FUN_10068e548(&local_e8);
                  FUN_100006cdc(puVar11,puVar9);
                  cVar37 = cStack_14e;
                  cVar41 = cStack_14f;
                  bVar28 = bStack_150;
                  puVar9 = puStack_168;
                  puVar11 = local_170;
                  IStack_718 = CONCAT17(uStack_151,uStack_158);
                  puStack_728 = puStack_178;
                  local_730 = local_180;
                  local_720 = local_160;
                  FUN_10003f094(&local_358);
                  FUN_10003f094(&local_2b0);
                  FUN_10068e548(&local_148);
                  local_758 = 0;
                }
                else {
                  FUN_100006cdc(puVar11,puVar9);
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(local_238,IVar14);
                  _swift_unknownObjectRelease(IVar14);
                  FUN_10003e8bc(local_238,auStack_258);
                  local_180 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
                  FUN_10068dedc();
                  local_170 = (undefined *)0x0;
                  puStack_168 = (undefined *)0xe000000000000000;
                  puStack_178 = puVar12;
                  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
                  puVar12 = (undefined *)0x0;
                  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                  puVar15 = &_OBJC_CLASS___NSNull;
                  local_160 = puVar12;
                  _objc_allocWithZone();
                  IVar14 = _objc_msgSend((ID)puVar15,"init");
                  uStack_158 = (undefined7)IVar14;
                  uStack_151 = (undefined1)(IVar14 >> 0x38);
                  bStack_150 = 0;
                  cStack_14f = '\x05';
                  cStack_14e = '\x06';
                  FUN_10003e8bc(auStack_258,auStack_278);
                  FUN_10067f3d8(auStack_278);
                  FUN_10003f094(auStack_258);
                  FUN_100006cdc(puVar11,puVar9);
                  FUN_10068e548(&local_e8);
                  cVar37 = cStack_14e;
                  cVar41 = cStack_14f;
                  bVar28 = bStack_150;
                  puVar9 = puStack_168;
                  puVar11 = local_170;
                  IStack_718 = CONCAT17(uStack_151,uStack_158);
                  puStack_728 = puStack_178;
                  local_730 = local_180;
                  local_720 = local_160;
                  FUN_10003f094(local_238);
                  FUN_10003f094(&local_358);
                  FUN_10003f094(&local_2b0);
                  FUN_10068e548(&local_148);
                }
              }
              FUN_10003f094(&local_1e0);
              bStack_118 = bVar28;
              goto LAB_100680594;
            }
            FUN_10068e548(&local_e8);
          }
          _swift_bridgeObjectRelease(lVar1);
          cVar37 = '\x04';
          bStack_118 = bVar28;
        }
LAB_100680594:
        uStack_120 = (undefined7)IStack_718;
        uStack_119 = (undefined1)(IStack_718 >> 0x38);
        uStack_461 = CONCAT13(cVar37,CONCAT12(cVar41,CONCAT11(bStack_118,uStack_119)));
        local_490 = local_730;
        puStack_488 = puStack_728;
        puStack_480 = puVar11;
        puStack_478 = puVar9;
        local_470 = local_720;
        uStack_468 = uStack_120;
        local_148 = local_730;
        puStack_140 = puStack_728;
        local_138 = puVar11;
        puStack_130 = puVar9;
        local_128 = local_720;
        cStack_117 = cVar41;
        cStack_116 = cVar37;
        FUN_10003f094(auStack_110);
        _swift_setDeallocating(puVar17);
        FUN_10003f094(puVar30);
        uVar25 = 7;
        _swift_deallocClassInstance(puVar17,0x20);
        uVar3 = *(undefined4 *)((long)unaff_x20 + 0x2f);
        bStack_150 = (byte)((uint)uVar3 >> 8);
        bVar28 = bStack_150;
        cStack_14f = (char)((uint)uVar3 >> 0x10);
        cVar41 = cStack_14f;
        cStack_14e = (char)((uint)uVar3 >> 0x18);
        cVar37 = cStack_14e;
        puVar12 = (undefined *)unaff_x20[3];
        puVar9 = (undefined *)unaff_x20[2];
        local_700 = unaff_x20[5];
        local_6f0 = (undefined *)unaff_x20[4];
        uStack_158 = (undefined7)local_700;
        uStack_151 = (undefined1)(local_700 >> 0x38);
        puVar11 = (undefined *)unaff_x20[1];
        puVar17 = (undefined *)*unaff_x20;
        lVar32 = *(long *)(puVar8 + 0x10);
        IVar14 = (ID)bStack_150;
        local_180 = puVar17;
        puStack_178 = puVar11;
        local_170 = puVar9;
        puStack_168 = puVar12;
        local_160 = local_6f0;
        if (lVar32 == 0) {
          FUN_10068e538(&local_180,&local_218);
        }
        else {
          FUN_10068e538(&local_180,&local_218);
          do {
            local_1f8 = local_6f0;
            uStack_1f0 = (undefined7)local_700;
            uStack_1e9 = (undefined1)(local_700 >> 0x38);
            bStack_1e8 = (byte)IVar14 & 1;
            local_430 = local_6f0;
            uStack_421 = CONCAT13(cVar37,CONCAT12(cVar41,CONCAT11((byte)IVar14,uStack_1e9))) &
                         0xffff01ff;
            local_450 = puVar17;
            puStack_448 = puVar11;
            puStack_440 = puVar9;
            puStack_438 = puVar12;
            uStack_428 = uStack_1f0;
            local_218 = puVar17;
            puStack_210 = puVar11;
            local_208 = puVar9;
            puStack_200 = puVar12;
            cStack_1e7 = cVar41;
            cStack_1e6 = cVar37;
            FUN_1000b142c(puVar27,&local_1e0);
            uVar24 = local_1c0;
            lVar35 = local_1c8;
            FUN_10003f030(&local_1e0,local_1c8);
            (**(code **)(uVar24 + 8))();
            if ((uVar25 & 1) == 0) {
              FUN_100684c6c(&local_5f8);
              FUN_10068e548(&local_218);
              IVar14 = (ID)local_5c8;
              local_700 = IStack_5d0;
              local_6f0 = local_5d8;
              puVar11 = puStack_5f0;
              puVar17 = local_5f8;
              puVar9 = local_5e8;
              puVar12 = puStack_5e0;
              cVar41 = local_5c7;
              cVar34 = local_5c6;
            }
            else {
              puVar17 = &_OBJC_CLASS___NSNull;
              _objc_allocWithZone();
              IVar14 = _objc_msgSend((ID)puVar17,"init");
              puVar15 = (undefined *)0x0;
              FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
              local_238[0] = IVar14;
              local_220 = puVar15;
              FUN_10003e8bc(local_238,auStack_258);
              puVar17 = PTR___sypN_100995e88;
              puVar30 = &local_2f0;
              _swift_dynamicCast(puVar30,auStack_258,PTR___sypN_100995e88 + 8,
                                 PTR___s10Foundation4DataVN_1009961e8,0);
              uVar38 = local_2e8;
              uVar36 = local_2f0;
              if (((ulong)puVar30 & 1) == 0) {
                FUN_10003e8bc(local_238,&local_2b0);
                uVar36 = 0;
                FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
                local_6f0 = (undefined *)0x0;
                __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                puVar9 = &_OBJC_CLASS___NSNull;
                _objc_allocWithZone();
                local_700 = _objc_msgSend((ID)puVar9,"init");
                FUN_10003e8bc(&local_2b0,&local_358);
                FUN_1006818d4(auStack_278,&local_358);
                ppuVar18 = &local_2d0;
                _swift_dynamicCast(ppuVar18,auStack_278,puVar17 + 8,uVar36,0);
                puVar9 = local_2d0;
                if ((int)ppuVar18 == 0) {
                  FUN_10003f094(&local_358);
                  ppuVar18 = &local_2d0;
                  _swift_dynamicCast(ppuVar18,auStack_278,puVar17 + 8,PTR___sSSN_1009957f8,0);
                  if (((ulong)ppuVar18 & 1) == 0) {
                    ppuVar18 = &local_2d0;
                    _swift_dynamicCast(ppuVar18,auStack_278,puVar17 + 8,puVar15,0);
                    if ((int)ppuVar18 == 0) {
                      puVar9 = &DAT_100ab9e98;
                      FUN_100004bb4(&DAT_100ab9e98,&DAT_10084d520);
                      ppuVar18 = &local_2d0;
                      _swift_dynamicCast(ppuVar18,auStack_278,puVar17 + 8,puVar9,0);
                      if ((int)ppuVar18 == 0) {
                        puVar9 = &DAT_100ab9ea0;
                        FUN_100004bb4(&DAT_100ab9ea0,&DAT_10084d528);
                        ppuVar18 = &local_2d0;
                        _swift_dynamicCast(ppuVar18,auStack_278,puVar17 + 8,puVar9,0);
                        puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                        if ((int)ppuVar18 == 0) {
                          uVar31 = 0;
                          IVar14 = 0;
                          puVar9 = (undefined *)0x0;
                          puVar12 = (undefined *)0xe000000000000000;
                          local_738 = PTR___swiftEmptyDictionarySingleton_100995ea8;
                          cVar40 = '\x06';
                        }
                        else {
                          IVar14 = 0;
                          puVar9 = (undefined *)0x0;
                          local_738 = local_2d0;
                          puVar12 = (undefined *)0xe000000000000000;
                          uVar31 = 6;
                          cVar40 = '\x04';
                        }
                      }
                      else {
                        IVar14 = 0;
                        puVar9 = (undefined *)0x0;
                        puVar12 = (undefined *)0xe000000000000000;
                        cVar40 = '\x03';
                        uVar31 = 6;
                        local_738 = PTR___swiftEmptyDictionarySingleton_100995ea8;
                        puVar17 = local_2d0;
                      }
                    }
                    else {
                      IVar14 = 0;
                      puVar9 = (undefined *)0x0;
                      puVar12 = (undefined *)0xe000000000000000;
                      uVar31 = 6;
                      local_738 = PTR___swiftEmptyDictionarySingleton_100995ea8;
                      cVar40 = '\x05';
                      puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                    }
                  }
                  else {
                    IVar14 = 0;
                    uVar31 = 6;
                    local_738 = PTR___swiftEmptyDictionarySingleton_100995ea8;
                    cVar40 = '\x01';
                    puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                    puVar9 = local_2d0;
                    puVar12 = local_2c8;
                  }
                }
                else {
                  FUN_100681b34();
                  if (((ulong)ppuVar18 & 1) == 0) {
                    FUN_10003f094(&local_358);
                    cVar40 = '\0';
                    IVar14 = 0;
                    local_6f0 = puVar9;
                  }
                  else {
                    IVar14 = _objc_msgSend((ID)puVar9,"boolValue");
                    FUN_10003f094(&local_358);
                    cVar40 = '\x02';
                  }
                  uVar31 = 6;
                  local_738 = PTR___swiftEmptyDictionarySingleton_100995ea8;
                  puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar9 = (undefined *)0x0;
                  puVar12 = (undefined *)0xe000000000000000;
                }
                FUN_10003f094(auStack_278);
                FUN_10003f094(&local_2b0);
                FUN_10003f094(local_238);
              }
              else {
                FUN_100008184(local_2f0,local_2e8);
                uVar43 = uVar36;
                __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar36,uVar38);
                local_2b0 = (undefined *)0x0;
                IVar14 = NSJSONSerialization::JSONObjectWithData_options_error_
                                   ((ID)&_OBJC_CLASS___NSJSONSerialization,
                                    "JSONObjectWithData:options:error:",uVar43,0,&local_2b0);
                if (IVar14 == 0) {
                  puVar17 = local_2b0;
                  __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_2b0);
                  _swift_willThrow(0);
                  FUN_100006cdc(uVar36,uVar38);
                  puVar9 = &_OBJC_CLASS___NSNull;
                  _objc_allocWithZone();
                  local_358 = (undefined *)_objc_msgSend((ID)puVar9,"init");
                  local_2b0 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
                  local_340 = puVar15;
                  FUN_10068dedc();
                  local_2a0 = (undefined *)0x0;
                  local_298 = (undefined *)0xe000000000000000;
                  local_2a8 = puVar9;
                  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
                  puVar9 = (undefined *)0x0;
                  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                  puVar12 = &_OBJC_CLASS___NSNull;
                  local_290 = puVar9;
                  _objc_allocWithZone();
                  local_288 = _objc_msgSend((ID)puVar12,"init");
                  local_280 = 0x500;
                  local_27e = 6;
                  FUN_10003e8bc(&local_358,auStack_278);
                  FUN_10067f3d8(auStack_278);
                  _swift_errorRelease(puVar17);
                  FUN_100006cdc(uVar36,uVar38);
                  FUN_10003f094(&local_358);
                  uVar31 = local_27e;
                  puVar12 = local_298;
                  puVar9 = local_2a0;
                  puVar17 = local_2b0;
                  local_738 = local_2a8;
                  local_6f0 = local_290;
                  local_700 = local_288;
                  bVar28 = (byte)local_280;
                  cVar40 = local_280._1_1_;
                  FUN_10003f094(local_238);
                  local_758 = 0;
                }
                else {
                  FUN_100006cdc(uVar36,uVar38);
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_358,IVar14);
                  _swift_unknownObjectRelease(IVar14);
                  FUN_10003e8bc(&local_358,auStack_278);
                  local_2b0 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                  FUN_10068dedc();
                  local_2a0 = (undefined *)0x0;
                  local_298 = (undefined *)0xe000000000000000;
                  local_2a8 = puVar17;
                  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
                  puVar17 = (undefined *)0x0;
                  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                  puVar9 = &_OBJC_CLASS___NSNull;
                  local_290 = puVar17;
                  _objc_allocWithZone();
                  local_288 = _objc_msgSend((ID)puVar9,"init");
                  local_280 = 0x500;
                  local_27e = 6;
                  FUN_10003e8bc(auStack_278,&local_2d0);
                  FUN_10067f3d8(&local_2d0);
                  FUN_100006cdc(uVar36,uVar38);
                  FUN_10003f094(auStack_278);
                  FUN_10003f094(&local_358);
                  uVar31 = local_27e;
                  puVar12 = local_298;
                  puVar9 = local_2a0;
                  puVar17 = local_2b0;
                  local_738 = local_2a8;
                  local_6f0 = local_290;
                  local_700 = local_288;
                  bVar28 = (byte)local_280;
                  cVar40 = local_280._1_1_;
                  FUN_10003f094(local_238);
                }
                IVar14 = (ID)bVar28;
              }
              local_2a8 = local_738;
              local_290 = local_6f0;
              local_288 = local_700;
              local_280 = CONCAT11(cVar40,(char)IVar14);
              local_2b0 = puVar17;
              local_2a0 = puVar9;
              local_298 = puVar12;
              local_27e = uVar31;
              FUN_10003f094(auStack_258);
              if (cVar41 == '\x04') {
                lVar33 = *(long *)(puVar11 + 0x10);
                _swift_bridgeObjectRetain(puVar11);
                if (lVar33 == 0) {
                  FUN_10068e548(&local_218);
                  uVar25 = 1;
                  FUN_10068e56c(lVar35,uVar24);
                }
                else {
                  lVar33 = lVar35;
                  uVar22 = uVar24;
                  FUN_1001a2c70(lVar35);
                  uVar25 = 1;
                  FUN_10068e56c(lVar35,uVar24);
                  if ((uVar22 & 1) != 0) {
                    FUN_10003e8bc(*(long *)(puVar11 + 0x38) + lVar33 * 0x20,&local_358);
                    _swift_bridgeObjectRelease(puVar11);
                    FUN_10007f3d4(&local_358,auStack_278);
                    FUN_10003e8bc(auStack_278,&local_2d0);
                    FUN_10003e8bc(&local_2d0,&local_2f0);
                    puVar30 = &local_300;
                    _swift_dynamicCast(puVar30,&local_2f0,PTR___sypN_100995e88 + 8,
                                       PTR___s10Foundation4DataVN_1009961e8,0);
                    uVar38 = local_2f8;
                    uVar36 = local_300;
                    if (((ulong)puVar30 & 1) == 0) {
                      FUN_10003e8bc(&local_2d0,local_320);
                      local_358 = PTR___swiftEmptyArrayStorage_100995ea0;
                      puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                      FUN_10068dedc();
                      local_348 = (undefined *)0x0;
                      local_340 = (undefined *)0xe000000000000000;
                      uVar25 = 0;
                      local_350 = puVar17;
                      FUN_10004003c(0,&DAT_100ab9e90);
                      puVar17 = (undefined *)0x0;
                      __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                      puVar11 = &_OBJC_CLASS___NSNull;
                      local_338 = puVar17;
                      _objc_allocWithZone();
                      local_330 = _objc_msgSend((ID)puVar11,"init");
                      local_328 = 0x500;
                      local_326 = '\x06';
                      FUN_10003e8bc(local_320,auStack_378);
                      FUN_10067f3d8(auStack_378);
                      FUN_10068e548(&local_218);
                      FUN_10003f094(local_320);
                      FUN_10003f094(&local_2d0);
                      FUN_10003f094(auStack_278);
                      FUN_10068e548(&local_2b0);
                      local_6f0 = local_338;
                      local_700 = local_330;
                      IVar14 = (ID)(byte)local_328;
                      puVar11 = local_350;
                      puVar17 = local_358;
                      puVar9 = local_348;
                      puVar12 = local_340;
                      cVar41 = local_328._1_1_;
                      cVar34 = local_326;
                    }
                    else {
                      FUN_100008184(local_300,local_2f8);
                      uVar43 = uVar36;
                      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar36,uVar38);
                      local_358 = (undefined *)0x0;
                      IVar14 = NSJSONSerialization::JSONObjectWithData_options_error_
                                         ((ID)&_OBJC_CLASS___NSJSONSerialization,
                                          "JSONObjectWithData:options:error:",uVar43,0,&local_358);
                      if (IVar14 == 0) {
                        puVar17 = local_358;
                        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_358);
                        _swift_willThrow(0);
                        FUN_100006cdc(uVar36,uVar38);
                        puVar11 = &_OBJC_CLASS___NSNull;
                        _objc_allocWithZone();
                        local_320[0] = _objc_msgSend((ID)puVar11,"init");
                        local_358 = PTR___swiftEmptyArrayStorage_100995ea0;
                        puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
                        local_308 = puVar15;
                        FUN_10068dedc();
                        local_348 = (undefined *)0x0;
                        local_340 = (undefined *)0xe000000000000000;
                        uVar25 = 0;
                        local_350 = puVar11;
                        FUN_10004003c(0,&DAT_100ab9e90);
                        puVar11 = (undefined *)0x0;
                        __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                        puVar9 = &_OBJC_CLASS___NSNull;
                        local_338 = puVar11;
                        _objc_allocWithZone();
                        local_330 = _objc_msgSend((ID)puVar9,"init");
                        local_328 = 0x500;
                        local_326 = '\x06';
                        FUN_10003e8bc(local_320,auStack_378);
                        FUN_10067f3d8(auStack_378);
                        FUN_10003f094(local_320);
                        _swift_errorRelease(puVar17);
                        FUN_10068e548(&local_218);
                        FUN_100006cdc(uVar36,uVar38);
                        cVar34 = local_326;
                        puVar12 = local_340;
                        puVar9 = local_348;
                        puVar11 = local_350;
                        puVar17 = local_358;
                        local_6f0 = local_338;
                        local_700 = local_330;
                        IVar14 = (ID)(byte)local_328;
                        cVar41 = local_328._1_1_;
                        FUN_10003f094(&local_2d0);
                        FUN_10003f094(auStack_278);
                        FUN_10068e548(&local_2b0);
                        local_758 = 0;
                      }
                      else {
                        FUN_100006cdc(uVar36,uVar38);
                        __ss018_bridgeAnyObjectToB0yypyXlSgF(local_320,IVar14);
                        _swift_unknownObjectRelease(IVar14);
                        FUN_10003e8bc(local_320,auStack_378);
                        local_358 = PTR___swiftEmptyArrayStorage_100995ea0;
                        puVar17 = PTR___swiftEmptyArrayStorage_100995ea0;
                        FUN_10068dedc();
                        local_348 = (undefined *)0x0;
                        local_340 = (undefined *)0xe000000000000000;
                        uVar25 = 0;
                        local_350 = puVar17;
                        FUN_10004003c(0,&DAT_100ab9e90);
                        puVar17 = (undefined *)0x0;
                        __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
                        puVar11 = &_OBJC_CLASS___NSNull;
                        local_338 = puVar17;
                        _objc_allocWithZone();
                        local_330 = _objc_msgSend((ID)puVar11,"init");
                        local_328 = 0x500;
                        local_326 = '\x06';
                        FUN_10003e8bc(auStack_378,auStack_398);
                        FUN_10067f3d8(auStack_398);
                        FUN_10003f094(auStack_378);
                        FUN_100006cdc(uVar36,uVar38);
                        FUN_10068e548(&local_218);
                        cVar34 = local_326;
                        puVar12 = local_340;
                        puVar9 = local_348;
                        puVar11 = local_350;
                        puVar17 = local_358;
                        local_6f0 = local_338;
                        local_700 = local_330;
                        IVar14 = (ID)(byte)local_328;
                        cVar41 = local_328._1_1_;
                        FUN_10003f094(local_320);
                        FUN_10003f094(&local_2d0);
                        FUN_10003f094(auStack_278);
                        FUN_10068e548(&local_2b0);
                      }
                    }
                    FUN_10003f094(&local_2f0);
                    goto LAB_1006806bc;
                  }
                  FUN_10068e548(&local_218);
                }
                _swift_bridgeObjectRelease(puVar11);
                puVar11 = local_738;
                cVar41 = cVar40;
                cVar34 = '\x04';
              }
              else {
                uVar25 = 1;
                FUN_10068e56c(lVar35,uVar24);
                FUN_10068e548(&local_218);
                puVar11 = local_738;
                cVar41 = cVar40;
                cVar34 = '\x03';
                if (cVar37 != '\x06') {
                  cVar34 = cVar37;
                }
              }
            }
LAB_1006806bc:
            cVar37 = cVar34;
            FUN_10003f094(&local_1e0);
            puVar27 = puVar27 + 5;
            lVar32 = lVar32 + -1;
            bVar28 = (byte)IVar14;
          } while (lVar32 != 0);
        }
        cStack_186 = cVar37;
        cStack_187 = cVar41;
        bStack_188 = bVar28;
        uVar29 = uVar23 & 1 | 0x40;
        local_198 = local_6f0;
        uStack_190 = (undefined7)local_700;
        uStack_189 = (undefined1)(local_700 >> 0x38);
        local_1b8 = puVar17;
        puStack_1b0 = puVar11;
        local_1a8 = puVar9;
        puStack_1a0 = puVar12;
        FUN_10067f5fc(&local_490,0);
        lVar32 = lVar10;
        uVar25 = uVar20;
        if (local_758 != 0) {
          FUN_10068e548(&local_148);
          puStack_4c8 = puStack_1b0;
          local_4d0 = local_1b8;
          puStack_4b8 = puStack_1a0;
          puStack_4c0 = local_1a8;
          uStack_4a8 = uStack_190;
          local_4b0 = local_198;
          uStack_4a1 = CONCAT13(cStack_186,CONCAT12(cStack_187,CONCAT11(bStack_188,uStack_189)));
          FUN_1006858d0(&local_4d0,puVar8);
          _swift_bridgeObjectRelease(uVar44);
          _swift_bridgeObjectRelease(lVar1);
          _swift_bridgeObjectRelease(uVar19);
          goto LAB_1006816fc;
        }
        FUN_10068e548(&local_148);
        puStack_508 = puStack_1b0;
        local_510 = local_1b8;
        puStack_4f8 = puStack_1a0;
        puStack_500 = local_1a8;
        uStack_4e8 = uStack_190;
        local_4f0 = local_198;
        uStack_4e1 = CONCAT13(cStack_186,CONCAT12(cStack_187,CONCAT11(bStack_188,uStack_189)));
        FUN_1006858d0(&local_510,puVar8);
        unaff_x21 = local_758;
        if ((uVar23 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1006817e0);
          (*pcVar6)();
        }
      }
      _swift_bridgeObjectRelease(uVar44);
      _swift_bridgeObjectRelease(lVar1);
      _swift_bridgeObjectRelease(uVar19);
LAB_1006816fc:
      FUN_100690ae8(lVar32,uVar25,uVar29);
      goto LAB_10068179c;
    }
  }
  else if ((param_2 & 1) != 0) {
    FUN_10068f620();
    _swift_allocError(&DAT_1009e6258,param_1,0,0);
    *(undefined1 *)param_1 = 3;
    _swift_willThrow();
    goto LAB_10068179c;
  }
  uStack_a8 = unaff_x20[1];
  local_b0 = (undefined8 *)*unaff_x20;
  uStack_98 = unaff_x20[3];
  local_a0 = unaff_x20[2];
  local_90 = unaff_x20[4];
  uStack_88 = (undefined7)unaff_x20[5];
  uVar3 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  uStack_81 = (undefined1)uVar3;
  uStack_80 = (undefined1)((uint)uVar3 >> 8);
  uStack_7f = (undefined1)((uint)uVar3 >> 0x10);
  uStack_7e = (undefined1)((uint)uVar3 >> 0x18);
  FUN_10068e538(param_1,&local_e8);
  FUN_10068e548(&local_b0);
  uVar19 = *param_1;
  uVar36 = param_1[3];
  uVar44 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar19;
  unaff_x20[3] = uVar36;
  unaff_x20[2] = uVar44;
  uVar19 = param_1[4];
  unaff_x20[5] = param_1[5];
  unaff_x20[4] = uVar19;
  *(undefined4 *)((long)unaff_x20 + 0x2f) = *(undefined4 *)((long)param_1 + 0x2f);
LAB_10068179c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

