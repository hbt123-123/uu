// rea decompile_all
// name: FUN_1000a8a98
// address: 0x1000a8a98
// body: available
// range: 0x1000a8a98-0x1000a9b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000a8a98(long param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  undefined *puVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  code *local_378;
  code *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined *local_278;
  undefined *local_270;
  code *local_268;
  undefined8 local_260;
  long local_208;
  long local_200;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  long local_150;
  long lStack_148;
  ulong local_140;
  ulong uStack_138;
  long local_130;
  long lStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  long lStack_108;
  long local_100;
  ulong uStack_f8;
  ulong local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_78 [3];
  
  puVar12 = PTR___swiftEmptyArrayStorage_1000f0740;
  plVar16 = (long *)(param_1 + 0x10);
  lVar21 = *plVar16;
  puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar21 != 0) {
    local_348 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_10007393c();
    FUN_1000a687c();
    uVar22 = *(ulong *)(param_2 + 0x10);
    if (uVar22 == 0) {
      local_360 = (code *)0x0;
      local_358 = puVar12;
      local_350 = puVar12;
      local_278 = puVar12;
    }
    else {
      local_378 = (code *)0x0;
      local_360 = FUN_1000a6b80;
      local_358 = puVar12;
      local_350 = puVar12;
      puVar13 = puVar12;
      uVar36 = 0;
LAB_1000a8b44:
      do {
        if ((long)uVar22 <= (long)uVar36) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b44);
          (*pcVar5)();
        }
        if ((long)uVar36 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b48);
          (*pcVar5)();
        }
        if (*(ulong *)(param_2 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b4c);
          (*pcVar5)();
        }
        plVar17 = (long *)(param_2 + 0x20 + uVar36 * 0xd0);
        lStack_148 = plVar17[1];
        local_150 = *plVar17;
        uVar23 = plVar17[3];
        uVar9 = plVar17[2];
        lVar18 = plVar17[5];
        lVar25 = plVar17[4];
        uVar35 = plVar17[7];
        uVar40 = plVar17[6];
        lVar41 = plVar17[9];
        uVar29 = plVar17[8];
        uVar38 = plVar17[0xb];
        lVar27 = plVar17[10];
        lStack_e8 = plVar17[0xd];
        uVar39 = plVar17[0xc];
        lStack_d8 = plVar17[0xf];
        local_e0 = plVar17[0xe];
        uVar42 = plVar17[0x11];
        uVar26 = plVar17[0x10];
        lStack_b8 = plVar17[0x13];
        local_c0 = plVar17[0x12];
        lStack_a8 = plVar17[0x15];
        local_b0 = plVar17[0x14];
        lStack_98 = plVar17[0x17];
        local_a0 = plVar17[0x16];
        lStack_88 = plVar17[0x19];
        local_90 = plVar17[0x18];
        local_140 = uVar9;
        uStack_138 = uVar23;
        local_130 = lVar25;
        lStack_128 = lVar18;
        local_120 = uVar40;
        uStack_118 = uVar35;
        local_110 = uVar29;
        lStack_108 = lVar41;
        local_100 = lVar27;
        uStack_f8 = uVar38;
        local_f0 = uVar39;
        local_d0 = uVar26;
        uStack_c8 = uVar42;
        if ((-1 < (long)uVar39) || ((uVar38 & uVar39 & 0xf000000000000007) == 0xf000000000000007)) {
          uVar33 = *(ulong *)(lVar18 + 0x10);
          ppuVar15 = &local_270;
          FUN_10006ff98(&local_150);
          uVar31 = 0;
          do {
            puVar19 = (ulong *)(lVar18 + 0x28 + uVar31 * 0x10);
            do {
              if (uVar33 == uVar31) goto LAB_1000a8d20;
              if (*(ulong *)(lVar18 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b34);
                (*pcVar5)();
              }
              uVar31 = uVar31 + 1;
              uVar2 = puVar19[-1];
              uVar4 = *puVar19;
              puVar19 = puVar19 + 2;
              uVar3 = uVar2 & 0xffffffffffff;
              if ((uVar4 & 0x2000000000000000) != 0) {
                uVar3 = uVar4 >> 0x38 & 0xf;
              }
            } while (uVar3 == 0);
            _swift_bridgeObjectRetain(uVar4);
            puVar11 = puVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            local_270 = puVar13;
            if (((ulong)puVar11 & 1) == 0) {
              ppuVar15 = (undefined **)(*(long *)(puVar13 + 0x10) + 1);
              FUN_1000798d0(0,ppuVar15,1);
            }
            uVar3 = *(ulong *)(local_270 + 0x10);
            ppuVar1 = (undefined **)(uVar3 + 1);
            if (*(ulong *)(local_270 + 0x18) >> 1 <= uVar3) {
              ppuVar15 = ppuVar1;
              FUN_1000798d0(1 < *(ulong *)(local_270 + 0x18),ppuVar1,1);
            }
            *(undefined ***)(local_270 + 0x10) = ppuVar1;
            *(ulong *)(local_270 + uVar3 * 0x10 + 0x20) = uVar2;
            *(ulong *)(local_270 + uVar3 * 0x10 + 0x28) = uVar4;
            puVar13 = local_270;
          } while( true );
        }
        ppuVar15 = &local_270;
        FUN_10006ff98(&local_150);
LAB_1000a8d20:
        uVar31 = 0;
        if (uVar23 != 0) {
          uVar31 = uVar9;
        }
        uVar9 = 0xe000000000000000;
        if (uVar23 != 0) {
          uVar9 = uVar23;
        }
        uVar33 = uVar31 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar33 = uVar9 >> 0x38 & 0xf;
        }
        if (*(long *)(puVar13 + 0x10) == 0) {
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRelease(puVar13);
          if (uVar33 != 0) {
            local_270 = (undefined *)0x746c756166656428;
            local_268 = (code *)0xea0000000000203a;
            goto LAB_1000a8f18;
          }
          _swift_bridgeObjectRelease();
          puVar13 = (undefined *)0x0;
          pcVar5 = (code *)0xe000000000000000;
        }
        else {
          if (uVar33 == 0) {
            _swift_bridgeObjectRetain(uVar23);
            _swift_bridgeObjectRelease(uVar9);
            local_270 = (undefined *)0x3a7365756c617628;
            local_268 = (code *)0xe900000000000020;
            puVar11 = &DAT_100103ed8;
            local_178 = puVar13;
            FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
            puVar8 = &DAT_100103ee0;
            FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
            uVar31 = 0x202c;
            uVar9 = 0xe200000000000000;
            __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar11,puVar8);
            _swift_bridgeObjectRelease(puVar13);
          }
          else {
            local_270 = (undefined *)0x0;
            local_268 = (code *)0xe000000000000000;
            _swift_bridgeObjectRetain(uVar23);
            __ss11_StringGutsV4growyySiF(0x19);
            _swift_bridgeObjectRelease(local_268);
            local_270 = (undefined *)0x3a7365756c617628;
            local_268 = (code *)0xe900000000000020;
            puVar11 = &DAT_100103ed8;
            local_178 = puVar13;
            FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
            puVar8 = &DAT_100103ee0;
            FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
            uVar7 = 0x202c;
            uVar14 = 0xe200000000000000;
            __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar11,puVar8);
            _swift_bridgeObjectRelease(puVar13);
            __sSS6appendyySSF(uVar7,uVar14);
            _swift_bridgeObjectRelease(uVar14);
            __sSS6appendyySSF(0x6c7561666564203b,0xeb00000000203a74);
          }
LAB_1000a8f18:
          __sSS6appendyySSF(uVar31,uVar9);
          _swift_bridgeObjectRelease(uVar9);
          uVar9 = 0x29;
          ppuVar15 = (undefined **)0xe100000000000000;
          __sSS6appendyySSF();
          puVar13 = local_270;
          pcVar5 = local_268;
        }
        uVar23 = uVar36 + 1;
        if ((uVar40 & 1) == 0) {
          FUN_1000acb6c();
          _swift_bridgeObjectRetain(uVar29);
          uVar40 = uVar23;
        }
        else {
          uVar35 = uVar23;
          while (uVar40 = uVar22, uVar35 != uVar22) {
            if (*(long *)(param_2 + 0x10) <= (long)uVar35) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b3c);
              (*pcVar5)();
            }
            lVar18 = *(long *)(param_2 + 0x20 + uVar35 * 0xd0 + 0x20);
            lVar24 = *(long *)(lVar18 + 0x10);
            uVar40 = uVar35;
            if (lVar24 != *(long *)(lVar25 + 0x10)) break;
            if (lVar24 != 0 && lVar18 != lVar25) {
              lVar28 = 0;
              do {
                if (lVar28 == lVar24) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b38);
                  (*pcVar5)();
                }
                puVar19 = (ulong *)(lVar18 + 0x20 + lVar28 * 0x18);
                uVar29 = *puVar19;
                uVar31 = puVar19[2];
                puVar20 = (ulong *)(lVar25 + 0x20 + lVar28 * 0x18);
                uVar9 = puVar20[2];
                if (((uVar29 != *puVar20 || puVar19[1] != puVar20[1]) &&
                    (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), (uVar29 & 1) == 0)) ||
                   (lVar34 = *(long *)(uVar31 + 0x10), lVar34 != *(long *)(uVar9 + 0x10)))
                goto LAB_1000a9064;
                if (lVar34 != 0 && uVar31 != uVar9) {
                  plVar17 = (long *)(uVar31 + 0x28);
                  plVar32 = (long *)(uVar9 + 0x28);
                  do {
                    if (lVar34 == 0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b30);
                      (*pcVar5)();
                    }
                    uVar29 = plVar17[-1];
                    if ((uVar29 != plVar32[-1] || *plVar17 != *plVar32) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar29 & 1) == 0)) goto LAB_1000a9064;
                    plVar17 = plVar17 + 2;
                    plVar32 = plVar32 + 2;
                    lVar34 = lVar34 + -1;
                  } while (lVar34 != 0);
                }
                lVar28 = lVar28 + 1;
              } while (lVar28 != lVar24);
            }
            bVar6 = SCARRY8(uVar35,1);
            uVar35 = uVar35 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b50);
              (*pcVar5)();
            }
          }
LAB_1000a9064:
          puVar11 = &DAT_100104040;
          FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
          _swift_allocObject();
          *(long *)(puVar11 + 0xb8) = lStack_b8;
          *(long *)(puVar11 + 0xb0) = local_c0;
          *(long *)(puVar11 + 200) = lStack_a8;
          *(long *)(puVar11 + 0xc0) = local_b0;
          *(long *)(puVar11 + 0xd8) = lStack_98;
          *(long *)(puVar11 + 0xd0) = local_a0;
          *(long *)(puVar11 + 0xe8) = lStack_88;
          *(long *)(puVar11 + 0xe0) = local_90;
          *(ulong *)(puVar11 + 0x78) = uStack_f8;
          *(long *)(puVar11 + 0x70) = local_100;
          *(long *)(puVar11 + 0x88) = lStack_e8;
          *(ulong *)(puVar11 + 0x80) = local_f0;
          *(long *)(puVar11 + 0x98) = lStack_d8;
          *(long *)(puVar11 + 0x90) = local_e0;
          *(ulong *)(puVar11 + 0xa8) = uStack_c8;
          *(ulong *)(puVar11 + 0xa0) = local_d0;
          *(ulong *)(puVar11 + 0x38) = uStack_138;
          *(ulong *)(puVar11 + 0x30) = local_140;
          *(long *)(puVar11 + 0x48) = lStack_128;
          *(long *)(puVar11 + 0x40) = local_130;
          *(ulong *)(puVar11 + 0x58) = uStack_118;
          *(ulong *)(puVar11 + 0x50) = local_120;
          *(long *)(puVar11 + 0x68) = lStack_108;
          *(ulong *)(puVar11 + 0x60) = local_110;
          *(undefined8 *)(puVar11 + 0x18) = 2;
          *(undefined8 *)(puVar11 + 0x10) = 1;
          *(long *)(puVar11 + 0x28) = lStack_148;
          *(long *)(puVar11 + 0x20) = local_150;
          if ((long)uVar40 <= (long)uVar36) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b54);
            (*pcVar5)();
          }
          if ((long)uVar22 < (long)uVar40) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b58);
            (*pcVar5)();
          }
          local_178 = puVar11;
          FUN_10006ff98(&local_150,&local_270);
          _swift_bridgeObjectRetain(param_2);
          _swift_bridgeObjectRetain(param_1);
          FUN_10006dcd0(uVar23,uVar40,param_2,param_1);
          puVar10 = local_178;
          local_270 = local_178;
          local_268 = FUN_1000a6af8;
          local_260 = 0;
          _swift_bridgeObjectRetain(local_178);
          puVar11 = &DAT_100104d30;
          FUN_10000eb08(&DAT_100104d30,&DAT_1000d6998);
          puVar37 = puVar11;
          FUN_1000aa274();
          uVar9 = 0x2f;
          ppuVar15 = (undefined **)0xe100000000000000;
          __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2f,0xe100000000000000,puVar11,puVar37);
          _swift_bridgeObjectRelease(puVar10);
          puVar19 = (ulong *)(puVar10 + 0x60);
          lVar25 = *(long *)(puVar10 + 0x10) + 1;
          do {
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) {
              _swift_bridgeObjectRelease(puVar10);
              uVar35 = 0;
              uVar29 = 0xe000000000000000;
              goto LAB_1000a91f4;
            }
            uVar35 = puVar19[-1];
            uVar29 = *puVar19;
            puVar19 = puVar19 + 0x1a;
            uVar36 = uVar35 & 0xffffffffffff;
            if ((uVar29 & 0x2000000000000000) != 0) {
              uVar36 = uVar29 >> 0x38 & 0xf;
            }
          } while (uVar36 == 0);
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRelease(puVar10);
        }
LAB_1000a91f4:
        puVar11 = &DAT_100103f18;
        FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
        _swift_allocObject();
        *(undefined8 *)(puVar11 + 0x18) = 4;
        *(undefined8 *)(puVar11 + 0x10) = 2;
        *(ulong *)(puVar11 + 0x20) = uVar35;
        *(ulong *)(puVar11 + 0x28) = uVar29;
        *(undefined **)(puVar11 + 0x30) = puVar13;
        *(code **)(puVar11 + 0x38) = pcVar5;
        local_268 = FUN_1000a6b60;
        local_260 = 0;
        puVar13 = &DAT_100104d20;
        local_270 = puVar11;
        FUN_10000eb08(&DAT_100104d20,&DAT_1000d6990);
        puVar10 = puVar13;
        FUN_1000aa164();
        uVar7 = 0x20;
        uVar14 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar13,puVar10);
        _swift_bridgeObjectRelease(puVar11);
        uVar35 = uVar26 & 0xffffffffffff;
        if ((uVar42 & 0x2000000000000000) != 0) {
          uVar35 = uVar42 >> 0x38 & 0xf;
        }
        local_78[0] = local_150;
        uVar36 = uVar40;
        if (uVar35 == 0) {
          if (local_150 == 0) {
            _swift_bridgeObjectRetain();
            FUN_1000aa134(lVar41,lVar27,uVar38,uVar39);
            puVar13 = local_350;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar13 & 1) == 0) {
              plVar17 = (long *)(local_350 + 0x10);
              local_350 = (undefined *)0x0;
              FUN_10006fa10(0,*plVar17 + 1,1);
            }
            uVar35 = *(ulong *)(local_350 + 0x10);
            if (*(ulong *)(local_350 + 0x18) >> 1 <= uVar35) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_350 + 0x18));
              FUN_10006fa10(puVar13,uVar35 + 1,1,local_350);
              local_350 = puVar13;
            }
            *(ulong *)(local_350 + 0x10) = uVar35 + 1;
            *(ulong *)(local_350 + uVar35 * 0x40 + 0x20) = uVar9;
            *(undefined ***)(local_350 + uVar35 * 0x40 + 0x28) = ppuVar15;
            *(undefined8 *)(local_350 + uVar35 * 0x40 + 0x30) = uVar7;
            *(undefined8 *)(local_350 + uVar35 * 0x40 + 0x38) = uVar14;
            *(long *)(local_350 + uVar35 * 0x40 + 0x40) = lVar41;
            *(long *)(local_350 + uVar35 * 0x40 + 0x48) = lVar27;
            *(ulong *)(local_350 + uVar35 * 0x40 + 0x50) = uVar38;
            *(ulong *)(local_350 + uVar35 * 0x40 + 0x58) = uVar39;
            _swift_bridgeObjectRelease(uVar42);
          }
          else {
            FUN_1000aa134(lVar41,lVar27,uVar38,uVar39);
            puVar13 = puVar12;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar11 = puVar12;
            if (((ulong)puVar13 & 1) == 0) {
              puVar11 = (undefined *)0x0;
              FUN_10006fa10(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
            }
            uVar35 = *(ulong *)(puVar11 + 0x10);
            puVar12 = puVar11;
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar35) {
              puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              FUN_10006fa10(puVar12,uVar35 + 1,1,puVar11);
            }
            *(ulong *)(puVar12 + 0x10) = uVar35 + 1;
            *(ulong *)(puVar12 + uVar35 * 0x40 + 0x20) = uVar9;
            *(undefined ***)(puVar12 + uVar35 * 0x40 + 0x28) = ppuVar15;
            *(undefined8 *)(puVar12 + uVar35 * 0x40 + 0x30) = uVar7;
            *(undefined8 *)(puVar12 + uVar35 * 0x40 + 0x38) = uVar14;
            *(long *)(puVar12 + uVar35 * 0x40 + 0x40) = lVar41;
            *(long *)(puVar12 + uVar35 * 0x40 + 0x48) = lVar27;
            *(ulong *)(puVar12 + uVar35 * 0x40 + 0x50) = uVar38;
            *(ulong *)(puVar12 + uVar35 * 0x40 + 0x58) = uVar39;
          }
          FUN_10008efb4(&local_150);
          puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
          if (uVar40 == uVar22) {
            local_360 = local_378;
            local_278 = PTR___swiftEmptyArrayStorage_1000f0740;
            break;
          }
          goto LAB_1000a8b44;
        }
        lVar25 = *(long *)(local_348 + 0x10);
        _swift_bridgeObjectRetain_n(uVar42,2);
        FUN_1000aa134(lVar41,lVar27,uVar38,uVar39);
        if (lVar25 == 0) {
          FUN_1000aa1f4(local_78,&local_270);
LAB_1000a9404:
          _swift_bridgeObjectRetain(uVar42);
          puVar13 = local_358;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar13 & 1) == 0) {
            plVar17 = (long *)(local_358 + 0x10);
            local_358 = (undefined *)0x0;
            FUN_10006e610(0,*plVar17 + 1,1);
          }
          uVar35 = *(ulong *)(local_358 + 0x10);
          if (*(ulong *)(local_358 + 0x18) >> 1 <= uVar35) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_358 + 0x18));
            FUN_10006e610(puVar13,uVar35 + 1,1,local_358);
            local_358 = puVar13;
          }
          *(ulong *)(local_358 + 0x10) = uVar35 + 1;
          *(ulong *)(local_358 + uVar35 * 0x10 + 0x20) = uVar26;
          *(ulong *)(local_358 + uVar35 * 0x10 + 0x28) = uVar42;
        }
        else {
          FUN_1000aa1f4(local_78,&local_270);
          _swift_bridgeObjectRetain(local_348);
          uVar35 = uVar42;
          FUN_100020780(uVar26);
          _swift_bridgeObjectRelease(local_348);
          if ((uVar35 & 1) == 0) goto LAB_1000a9404;
        }
        FUN_1000aa230(local_378,0);
        puVar13 = local_348;
        _swift_isUniquelyReferenced_nonNull_native();
        local_270 = local_348;
        uVar35 = uVar26;
        uVar29 = uVar42;
        FUN_100020780();
        uVar23 = (ulong)~(uint)uVar29 & 1;
        lVar25 = *(long *)(local_348 + 0x10) + uVar23;
        if (SCARRY8(*(long *)(local_348 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b78);
          (*pcVar5)();
        }
        if (*(long *)(local_348 + 0x18) < lVar25) {
          FUN_10009a9d4(lVar25,puVar13);
          local_348 = local_270;
          uVar35 = uVar26;
          uVar23 = uVar42;
          FUN_100020780();
          if (((uint)uVar29 & 1) != ((uint)uVar23 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSSN_1000f02f8);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b8c);
            (*pcVar5)();
          }
          if ((uVar29 & 1) == 0) goto LAB_1000a94e0;
LAB_1000a954c:
          _swift_retain(local_348);
          _swift_bridgeObjectRelease(uVar42);
        }
        else {
          if (((ulong)puVar13 & 1) == 0) {
            FUN_10009a0a0();
            local_348 = local_270;
          }
          if ((uVar29 & 1) != 0) goto LAB_1000a954c;
LAB_1000a94e0:
          *(ulong *)(local_348 + (uVar35 >> 6) * 8 + 0x40) =
               *(ulong *)(local_348 + (uVar35 >> 6) * 8 + 0x40) | 1L << (uVar35 & 0x3f);
          puVar19 = (ulong *)(*(long *)(local_348 + 0x30) + uVar35 * 0x10);
          *puVar19 = uVar26;
          puVar19[1] = uVar42;
          *(undefined **)(*(long *)(local_348 + 0x38) + uVar35 * 8) =
               PTR___swiftEmptyArrayStorage_1000f0740;
          lVar25 = *(long *)(local_348 + 0x10);
          _swift_retain();
          if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b7c);
            (*pcVar5)();
          }
          *(long *)(local_348 + 0x10) = lVar25 + 1;
        }
        lVar25 = *(long *)(local_348 + 0x38);
        _swift_release(local_348);
        uVar26 = *(ulong *)(lVar25 + uVar35 * 8);
        uVar29 = uVar26;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(lVar25 + uVar35 * 8) = uVar26;
        uVar23 = uVar26;
        if ((uVar29 & 1) == 0) {
          uVar23 = 0;
          FUN_10006fa10(0,*(long *)(uVar26 + 0x10) + 1,1,uVar26);
          *(ulong *)(lVar25 + uVar35 * 8) = uVar23;
        }
        uVar29 = *(ulong *)(uVar23 + 0x10);
        uVar26 = uVar23;
        if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar29) {
          uVar26 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
          FUN_10006fa10(uVar26,uVar29 + 1,1,uVar23);
          *(ulong *)(lVar25 + uVar35 * 8) = uVar26;
        }
        *(ulong *)(uVar26 + 0x10) = uVar29 + 1;
        lVar25 = uVar26 + uVar29 * 0x40;
        *(ulong *)(lVar25 + 0x20) = uVar9;
        *(undefined ***)(lVar25 + 0x28) = ppuVar15;
        *(undefined8 *)(lVar25 + 0x30) = uVar7;
        *(undefined8 *)(lVar25 + 0x38) = uVar14;
        *(long *)(lVar25 + 0x40) = lVar41;
        *(long *)(lVar25 + 0x48) = lVar27;
        *(ulong *)(lVar25 + 0x50) = uVar38;
        *(ulong *)(lVar25 + 0x58) = uVar39;
        FUN_1000aa240(local_78);
        _swift_bridgeObjectRelease(uVar42);
        FUN_10008efb4(&local_150);
        local_378 = FUN_1000a6b80;
        puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
        local_278 = PTR___swiftEmptyArrayStorage_1000f0740;
      } while (uVar40 != uVar22);
    }
    plVar16 = plVar16 + lVar21 * 2;
    (**(code **)(plVar16[1] + 0x10))(&local_270,*plVar16);
    if (*(long *)(local_208 + 0x10) != 0) {
      FUN_1000a6b90(&local_1a0,1,0,2,local_208,&local_270);
      local_278 = (undefined *)0x0;
      FUN_10006fb18(0,1,1,PTR___swiftEmptyArrayStorage_1000f0740);
      uVar22 = *(ulong *)(local_278 + 0x10);
      if (*(ulong *)(local_278 + 0x18) >> 1 <= uVar22) {
        local_278 = (undefined *)(ulong)(1 < *(ulong *)(local_278 + 0x18));
        FUN_10006fb18(local_278,uVar22 + 1,1);
      }
      *(ulong *)(local_278 + 0x10) = uVar22 + 1;
      *(undefined8 *)(local_278 + uVar22 * 0x28 + 0x28) = uStack_198;
      *(undefined8 *)(local_278 + uVar22 * 0x28 + 0x20) = local_1a0;
      *(undefined8 *)(local_278 + uVar22 * 0x28 + 0x38) = uStack_188;
      *(undefined8 *)(local_278 + uVar22 * 0x28 + 0x30) = uStack_190;
      local_278[uVar22 * 0x28 + 0x40] = local_180;
    }
    puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
    uVar22 = *(ulong *)(local_200 + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (uVar22 != 0) {
      uVar36 = 0;
      puVar8 = (undefined8 *)(local_200 + 0x30);
      do {
        if (*(ulong *)(local_200 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a9b40);
          (*pcVar5)();
        }
        uVar7 = puVar8[-1];
        uVar14 = *puVar8;
        uVar30 = puVar8[-2];
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar14);
        FUN_1000a6b90(&local_178,uVar30,uVar7,1,uVar14,&local_270);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(uVar7);
        puVar10 = puVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar37 = puVar13;
        if (((ulong)puVar10 & 1) == 0) {
          puVar37 = (undefined *)0x0;
          FUN_10006fb18(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
        }
        uVar35 = *(ulong *)(puVar37 + 0x10);
        puVar13 = puVar37;
        if (*(ulong *)(puVar37 + 0x18) >> 1 <= uVar35) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar37 + 0x18));
          FUN_10006fb18(puVar13,uVar35 + 1,1,puVar37);
        }
        uVar36 = uVar36 + 1;
        *(ulong *)(puVar13 + 0x10) = uVar35 + 1;
        puVar13[uVar35 * 0x28 + 0x40] = local_158;
        *(undefined8 *)(puVar13 + uVar35 * 0x28 + 0x28) = uStack_170;
        *(undefined **)(puVar13 + uVar35 * 0x28 + 0x20) = local_178;
        *(undefined8 *)(puVar13 + uVar35 * 0x28 + 0x38) = uStack_160;
        *(undefined8 *)(puVar13 + uVar35 * 0x28 + 0x30) = local_168;
        puVar8 = puVar8 + 3;
      } while (uVar22 != uVar36);
    }
    FUN_10006e954(&local_270);
    FUN_10006dbdc(puVar13);
    puVar10 = &DAT_100104498;
    FUN_10000eb08(&DAT_100104498,&DAT_1000d4940);
    puVar13 = puVar10;
    _swift_allocObject();
    *(undefined8 *)(puVar13 + 0x18) = 2;
    *(undefined8 *)(puVar13 + 0x10) = 1;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    puVar13[0x30] = 2;
    *(undefined **)(puVar13 + 0x38) = local_350;
    puVar13[0x40] = 0;
    lVar21 = *(long *)(local_358 + 0x10);
    if (lVar21 == 0) {
      _swift_bridgeObjectRelease(local_358);
      puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
    else {
      _swift_bridgeObjectRetain();
      FUN_100079a18(0,lVar21,0);
      puVar19 = (ulong *)(local_358 + 0x28);
      do {
        uVar22 = puVar19[-1];
        uVar36 = *puVar19;
        lVar27 = *(long *)(local_348 + 0x10);
        _swift_bridgeObjectRetain(uVar36);
        puVar37 = PTR___swiftEmptyArrayStorage_1000f0740;
        if (lVar27 != 0) {
          _swift_bridgeObjectRetain(local_348);
          _swift_bridgeObjectRetain(uVar36);
          uVar35 = uVar22;
          uVar29 = uVar36;
          FUN_100020780();
          puVar37 = PTR___swiftEmptyArrayStorage_1000f0740;
          if ((uVar29 & 1) != 0) {
            puVar37 = *(undefined **)(*(long *)(local_348 + 0x38) + uVar35 * 8);
            _swift_bridgeObjectRetain(puVar37);
          }
          _swift_bridgeObjectRelease(uVar36);
          _swift_bridgeObjectRelease(local_348);
        }
        uVar35 = *(ulong *)(puVar11 + 0x10);
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar35) {
          FUN_100079a18(1 < *(ulong *)(puVar11 + 0x18),uVar35 + 1,1);
        }
        *(ulong *)(puVar11 + 0x10) = uVar35 + 1;
        *(ulong *)(puVar11 + uVar35 * 0x28 + 0x20) = uVar22;
        *(ulong *)(puVar11 + uVar35 * 0x28 + 0x28) = uVar36;
        puVar11[uVar35 * 0x28 + 0x30] = 0;
        *(undefined **)(puVar11 + uVar35 * 0x28 + 0x38) = puVar37;
        puVar11[uVar35 * 0x28 + 0x40] = 0;
        puVar19 = puVar19 + 2;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      _swift_bridgeObjectRelease(local_350);
      _swift_bridgeObjectRelease(local_358);
    }
    FUN_10006dbdc(puVar11);
    _swift_allocObject(puVar10,0x48,7);
    *(undefined8 *)(puVar10 + 0x18) = 2;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    *(undefined8 *)(puVar10 + 0x28) = 0;
    *(undefined8 *)(puVar10 + 0x20) = 2;
    puVar10[0x30] = 2;
    *(undefined **)(puVar10 + 0x38) = puVar12;
    puVar10[0x40] = 0;
    FUN_10006dbdc();
    FUN_10006dbdc(local_278);
    _swift_bridgeObjectRelease(local_348);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_2);
    FUN_1000aa230(local_360,0);
  }
  return puVar13;
}

