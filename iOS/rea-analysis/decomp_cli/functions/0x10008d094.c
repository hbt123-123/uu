// rea decompile_all
// name: FUN_10008d094
// address: 0x10008d094
// body: available
// range: 0x10008d094-0x10008de6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010008dd50) */
/* WARNING: Removing unreachable block (ram,0x00010008dbbc) */
/* WARNING: Removing unreachable block (ram,0x00010008ddb0) */

void FUN_10008d094(undefined8 *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  char *pcVar23;
  undefined8 *unaff_x20;
  undefined *puVar24;
  ulong uVar25;
  long unaff_x21;
  long lVar26;
  ulong uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined1 auStack_4f0 [16];
  undefined **local_4e0;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 *local_4b8;
  long local_4b0;
  long local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  undefined *local_490;
  undefined *local_408;
  undefined *puStack_400;
  undefined8 local_3f8;
  undefined *local_338;
  undefined *local_330;
  undefined *puStack_328;
  ulong local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined1 uStack_308;
  undefined7 local_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  byte bStack_2f8;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined8 uStack_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined1 auStack_2b8 [152];
  undefined1 auStack_220 [144];
  undefined8 local_190;
  undefined *local_188;
  undefined *local_180;
  ulong local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
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
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  byte local_80;
  
  plVar19 = unaff_x20 + 4;
  local_490 = (undefined *)*plVar19;
  uVar2 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  puVar24 = (undefined *)*unaff_x20;
  lVar26 = unaff_x20[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  puVar11 = puVar24;
  FUN_10007920c(puVar24,lVar26);
  puVar12 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (((ulong)puVar11 & 1) == 0) {
    lVar20 = *(long *)(unaff_x20[2] + 0x10) + 1;
    pcVar1 = (char *)(unaff_x20[2] + 0xc1);
    do {
      pcVar23 = pcVar1;
      lVar20 = lVar20 + -1;
      bVar10 = lVar20 != 0;
      if (lVar20 == 0) break;
      pcVar1 = pcVar23 + 0xd0;
    } while (((*(long *)(pcVar23 + -0xa1) != 0) ||
             (((uint)*(undefined8 *)(pcVar23 + -0x99) >> 1 & 1) == 0)) || (*pcVar23 != '\x04'));
  }
  else {
    bVar10 = true;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100073664();
  local_2d0 = puVar12;
  local_2c8 = 0;
  local_2c0 = puVar12;
  local_2e0 = puVar11;
  uStack_2d8 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  FUN_100097700();
  lVar20 = unaff_x20[2];
  puVar11 = (undefined *)unaff_x20[3];
  local_2e8 = puVar12;
  FUN_10008994c(&local_2e0,lVar20,puVar11);
  if (unaff_x21 == 0) {
    uVar25 = *(ulong *)(local_490 + 0x10);
    local_4b8 = param_1;
    local_4a8 = lVar20;
    local_4a0 = puVar11;
    if ((long)uVar25 < (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de50);
      (*pcVar9)();
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de54);
      (*pcVar9)();
    }
    if (uVar2 != uVar25) {
      _swift_bridgeObjectRetain(local_490);
      if (uVar25 <= uVar2) {
LAB_10008de40:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de44);
        (*pcVar9)();
      }
      local_4b0 = local_4a8 + 0x20;
      uStack_4c8 = 2;
      local_4d0 = 1;
      puVar12 = local_490;
      uVar25 = uVar2;
LAB_10008d248:
      puStack_328 = *(undefined **)(puVar12 + uVar25 * 0x40 + 0x28);
      local_330 = *(undefined **)(puVar12 + uVar25 * 0x40 + 0x20);
      puStack_318 = *(undefined **)(puVar12 + uVar25 * 0x40 + 0x38);
      local_320 = *(ulong *)(puVar12 + uVar25 * 0x40 + 0x30);
      local_310 = *(undefined **)(puVar12 + uVar25 * 0x40 + 0x40);
      uStack_2ff = (undefined7)*(undefined8 *)(puVar12 + uVar25 * 0x40 + 0x51);
      bStack_2f8 = (byte)((ulong)*(undefined8 *)(puVar12 + uVar25 * 0x40 + 0x51) >> 0x38);
      uStack_300 = (undefined1)((ulong)*(undefined8 *)(puVar12 + uVar25 * 0x40 + 0x49) >> 0x38);
      uStack_308 = (undefined1)*(undefined8 *)(puVar12 + uVar25 * 0x40 + 0x48);
      local_307 = (undefined7)((ulong)*(undefined8 *)(puVar12 + uVar25 * 0x40 + 0x48) >> 8);
      FUN_10008efe8(&local_330,&local_408);
      _swift_unknownObjectRelease(puVar12);
      bVar7 = bStack_2f8;
      puVar6 = local_310;
      puVar16 = puStack_318;
      uVar27 = local_320;
      puVar5 = puStack_328;
      puVar4 = local_330;
      puVar12 = (undefined *)CONCAT71(local_307,uStack_308);
      puVar11 = (undefined *)CONCAT71(uStack_2ff,uStack_300);
      unaff_x20[5] = uVar25 + 1;
      puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
      FUN_100097700();
      puVar15 = local_4a0;
      puVar28 = puVar13;
      local_338 = puVar13;
      if ((uVar27 >> 0x3d & 3) == 0) {
        local_188 = puVar4;
        local_180 = puVar5;
        local_178 = uVar27;
        local_170 = puVar16;
        local_168 = puVar6;
        puVar14 = puVar13;
        if (*(long *)(local_4a0 + 0x10) != 0) {
          _swift_bridgeObjectRetain(local_4a0);
          puVar14 = puVar4;
          puVar18 = puVar5;
          FUN_100080fdc(puVar4,puVar5,uVar27);
          if (((ulong)puVar18 & 1) != 0) {
            uVar25 = *(ulong *)(*(long *)(puVar15 + 0x38) + (long)puVar14 * 8);
            _swift_bridgeObjectRelease(puVar15);
            puVar15 = local_2e0;
            if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de58);
              (*pcVar9)();
            }
            if (*(ulong *)(local_4a8 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de5c);
              (*pcVar9)();
            }
            puVar21 = (undefined8 *)(local_4b0 + uVar25 * 0xd0);
            uStack_158 = puVar21[1];
            local_160 = *puVar21;
            uStack_148 = puVar21[3];
            local_150 = puVar21[2];
            uStack_138 = puVar21[5];
            uStack_140 = puVar21[4];
            uStack_128 = puVar21[7];
            local_130 = puVar21[6];
            uStack_118 = puVar21[9];
            uStack_120 = puVar21[8];
            uStack_108 = puVar21[0xb];
            local_110 = puVar21[10];
            uStack_f8 = puVar21[0xd];
            uStack_100 = puVar21[0xc];
            uStack_e8 = puVar21[0xf];
            local_f0 = puVar21[0xe];
            uStack_d8 = puVar21[0x11];
            uStack_e0 = puVar21[0x10];
            uStack_c8 = puVar21[0x13];
            local_d0 = puVar21[0x12];
            uStack_b8 = puVar21[0x15];
            uStack_c0 = puVar21[0x14];
            uStack_a8 = puVar21[0x17];
            local_b0 = puVar21[0x16];
            uStack_98 = puVar21[0x19];
            uStack_a0 = puVar21[0x18];
            local_80 = *(byte *)(puVar21 + 0x17);
            uVar29 = puVar21[0x16];
            pcVar9 = (code *)puVar21[0x15];
            local_90 = pcVar9;
            uStack_88 = uVar29;
            if ((local_80 & 1) != 0) {
              FUN_10006ff98(&local_160,&local_408);
              FUN_10008f058(&local_90,&local_408);
              local_4e0 = &local_338;
              FUN_100089e2c(&local_160,&local_188,puVar12,puVar11,bVar7,pcVar9,uVar29,&local_2e0);
              FUN_10008f024(&local_330);
              FUN_10008efb4(&local_160);
              FUN_10008f094(&local_90);
              puVar28 = local_338;
              goto LAB_10008d644;
            }
            if ((long)uVar27 < 0) {
              FUN_10006ff98(&local_160,&local_408);
              FUN_10008f058(&local_90,&local_408);
              _swift_bridgeObjectRelease(puVar15);
              _swift_bridgeObjectRelease(uStack_2d8);
              _swift_bridgeObjectRelease(local_2d0);
              _swift_bridgeObjectRelease(local_2c0);
              _swift_bridgeObjectRetain(puVar6);
              FUN_100065610(puVar4,puVar5,uVar27);
              ppuVar17 = &local_330;
              FUN_10008f024();
              FUN_100054664();
              _swift_allocError(&DAT_1000fa8c8,ppuVar17,0,0);
              *ppuVar17 = puVar12;
              ppuVar17[1] = puVar11;
              *(byte *)(ppuVar17 + 2) = bVar7;
              *(undefined1 *)((long)ppuVar17 + 0x11) = 0;
              ppuVar17[3] = puVar4;
              ppuVar17[4] = puVar5;
              *(char *)(ppuVar17 + 5) = (char)uVar27;
              ppuVar17[6] = puVar16;
              ppuVar17[7] = puVar6;
              puVar12 = local_408;
              ppuVar17[9] = puStack_400;
              ppuVar17[8] = puVar12;
              *(undefined1 *)(ppuVar17 + 10) = 9;
              _swift_willThrow();
              FUN_10008f094(&local_90);
              FUN_10008efb4(&local_160);
              FUN_1000973d8(puVar13,plVar19);
              _swift_bridgeObjectRetain(puVar13);
              FUN_100080a28();
              puVar12 = local_2e8;
              _swift_bridgeObjectRelease(puVar13);
              _swift_bridgeObjectRelease(puVar12);
              _swift_bridgeObjectRelease(unaff_x20[4]);
              _swift_bridgeObjectRelease(unaff_x20[6]);
              goto LAB_10008dc00;
            }
            puVar15 = &DAT_100104690;
            FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
            _swift_allocObject();
            *(undefined8 *)(puVar15 + 0x18) = uStack_4c8;
            *(undefined8 *)(puVar15 + 0x10) = local_4d0;
            *(undefined **)(puVar15 + 0x20) = puVar12;
            *(undefined **)(puVar15 + 0x28) = puVar11;
            puVar15[0x30] = bVar7;
            puVar15[0x31] = 0;
            FUN_10006ff98(&local_160,&local_408);
            FUN_10008f058(&local_90,&local_408);
            puVar16 = puVar15;
            FUN_100097700(puVar15);
            _swift_setDeallocating(puVar15);
            _swift_deallocClassInstance(puVar15,0x20,7);
            (*pcVar9)(puVar16,puVar4,puVar5,uVar27,&local_2e0);
            FUN_10008f024(&local_330);
            _swift_bridgeObjectRelease(puVar16);
            if (*(long *)(puVar13 + 0x10) != 0) {
              __ss6HasherV5_seedABSi_tcfC(&local_408,*(undefined8 *)(puVar13 + 0x28));
              __ss6HasherV8_combineyySuF(1);
              __ss6HasherV8_combineyySuF(puVar12);
              if (bVar7 == 0) {
                __ss6HasherV8_combineyySuF(1);
                puVar15 = puVar11;
              }
              else {
                puVar15 = (undefined *)0x0;
              }
              __ss6HasherV8_combineyySuF();
              __ss6HasherV9_finalizeSiyF();
              uVar27 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
              uVar25 = (ulong)puVar15 & (uVar27 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar13 + (uVar25 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar25 & 0x3f)
                  & 1) != 0) {
                do {
                  puVar21 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar25 * 0x18);
                  if (((*(byte *)((long)puVar21 + 0x11) & 1) == 0) &&
                     ((undefined *)*puVar21 == puVar12)) {
                    if ((*(byte *)(puVar21 + 2) & 1) == 0) {
                      if (((bVar7 & 1) == 0) && ((undefined *)puVar21[1] == puVar11)) {
LAB_10008d83c:
                        FUN_10008f094(&local_90);
                        FUN_10008efb4(&local_160);
                        puVar28 = local_338;
                        goto LAB_10008d644;
                      }
                    }
                    else if ((bVar7 & 1) != 0) goto LAB_10008d83c;
                  }
                  uVar25 = uVar25 + 1 & ~uVar27;
                } while ((*(ulong *)(puVar13 + (uVar25 >> 3 & 0xffffffffffffff8) + 0x38) >>
                          (uVar25 & 0x3f) & 1) != 0);
              }
            }
            __ss6HasherV5_seedABSi_tcfC(&local_408,*(undefined8 *)(puVar13 + 0x28));
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(puVar12);
            if (bVar7 == 0) {
              __ss6HasherV8_combineyySuF(1);
              puVar15 = puVar11;
            }
            else {
              puVar15 = (undefined *)0x0;
            }
            __ss6HasherV8_combineyySuF();
            __ss6HasherV9_finalizeSiyF();
            uVar25 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
            uVar27 = (ulong)puVar15 & (uVar25 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar13 + (uVar27 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar27 & 0x3f) &
                1) != 0) {
              do {
                puVar21 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar27 * 0x18);
                if (((*(byte *)((long)puVar21 + 0x11) & 1) == 0) &&
                   ((undefined *)*puVar21 == puVar12)) {
                  if ((*(byte *)(puVar21 + 2) & 1) == 0) {
                    if (((bVar7 & 1) == 0) && ((undefined *)puVar21[1] == puVar11)) {
LAB_10008d93c:
                      FUN_10008f094(&local_90);
                      FUN_10008efb4(&local_160);
                      puVar28 = local_338;
                      goto LAB_10008d644;
                    }
                  }
                  else if ((bVar7 & 1) != 0) goto LAB_10008d93c;
                }
                uVar27 = uVar27 + 1 & ~uVar25;
              } while ((*(ulong *)(puVar13 + (uVar27 >> 3 & 0xffffffffffffff8) + 0x38) >>
                        (uVar27 & 0x3f) & 1) != 0);
            }
            puVar15 = puVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar25 = *(ulong *)(puVar13 + 0x10);
            if (uVar25 < *(ulong *)(puVar13 + 0x18)) {
              if (((ulong)puVar15 & 1) == 0) {
                FUN_1000825c4();
              }
            }
            else {
              if ((int)puVar15 == 0) {
                FUN_1000829c0(uVar25 + 1);
              }
              else {
                FUN_100082fd0(uVar25 + 1);
              }
              __ss6HasherV5_seedABSi_tcfC(&local_408,*(undefined8 *)(puVar13 + 0x28));
              __ss6HasherV8_combineyySuF(1);
              __ss6HasherV8_combineyySuF(puVar12);
              if (bVar7 == 0) {
                __ss6HasherV8_combineyySuF(1);
                puVar15 = puVar11;
              }
              else {
                puVar15 = (undefined *)0x0;
              }
              __ss6HasherV8_combineyySuF();
              __ss6HasherV9_finalizeSiyF();
              uVar25 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
              uVar27 = (ulong)puVar15 & (uVar25 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar13 + (uVar27 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar27 & 0x3f)
                  & 1) != 0) {
                do {
                  puVar21 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar27 * 0x18);
                  if (((*(byte *)((long)puVar21 + 0x11) & 1) == 0) &&
                     ((undefined *)*puVar21 == puVar12)) {
                    if ((*(byte *)(puVar21 + 2) & 1) == 0) {
                      if (((bVar7 & 1) == 0) && ((undefined *)puVar21[1] == puVar11)) {
LAB_10008de60:
                        __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                                  (&DAT_1000fa530);
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de70);
                        (*pcVar9)();
                      }
                    }
                    else if ((bVar7 & 1) != 0) goto LAB_10008de60;
                  }
                  uVar27 = uVar27 + 1 & ~uVar25;
                } while ((*(ulong *)(puVar13 + (uVar27 >> 3 & 0xffffffffffffff8) + 0x38) >>
                          (uVar27 & 0x3f) & 1) != 0);
              }
            }
            uVar25 = uVar27 >> 3 & 0xffffffffffffff8;
            *(ulong *)(puVar13 + uVar25 + 0x38) =
                 *(ulong *)(puVar13 + uVar25 + 0x38) | 1L << (uVar27 & 0x3f);
            plVar22 = (long *)(*(long *)(puVar13 + 0x30) + uVar27 * 0x18);
            *plVar22 = (long)puVar12;
            plVar22[1] = (long)puVar11;
            *(byte *)(plVar22 + 2) = bVar7;
            *(undefined1 *)((long)plVar22 + 0x11) = 0;
            if (SCARRY8(*(long *)(puVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de60);
              (*pcVar9)();
            }
            *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
            FUN_10008f094(&local_90);
            FUN_10008efb4(&local_160);
            local_338 = puVar13;
            goto LAB_10008d644;
          }
          _swift_bridgeObjectRelease();
          puVar14 = puVar15;
        }
        if (bVar10) {
          FUN_10009c5d0();
          FUN_10008f024(&local_330);
          lVar20 = *(long *)(puVar14 + 0x10);
          _swift_bridgeObjectRelease(puVar14);
          if (lVar20 == 0) {
            FUN_1000973d8(puVar13,plVar19);
LAB_10008db58:
            FUN_100080a28(puVar13);
            goto LAB_10008db64;
          }
        }
        else {
          FUN_10008f024(&local_330);
        }
      }
      else if (((uint)(uVar27 >> 0x3d) & 3) == 1) {
        puVar12 = puVar24;
        local_498 = puVar13;
        (**(code **)(lVar26 + 0x10))(auStack_2b8);
        FUN_10006cdcc();
        FUN_10006e954(auStack_2b8);
        lVar20 = *(long *)(puVar12 + 0x10);
        plVar22 = (long *)(puVar12 + 0x28);
        uVar25 = 0xffffffffffffffff;
        do {
          if (uVar25 - lVar20 == -1) {
            _swift_bridgeObjectRelease(puVar12);
            FUN_10008f024(&local_330);
            puVar13 = local_498;
            goto LAB_10008d638;
          }
          uVar25 = uVar25 + 1;
          if (*(ulong *)(puVar12 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de40);
            (*pcVar9)();
          }
          puVar11 = (undefined *)plVar22[-1];
          puVar15 = (undefined *)*plVar22;
          puVar13 = puVar11;
          puVar16 = puVar15;
          (**(code **)(puVar15 + 0x18))();
          if (puVar13 == puVar4 && puVar5 == puVar16) {
            _swift_bridgeObjectRelease(puVar12);
            puVar12 = puVar16;
            break;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(puVar16);
          if (((ulong)puVar13 & 1) != 0) break;
          plVar22 = plVar22 + 2;
          (**(code **)(puVar15 + 0x10))(auStack_220,puVar11,puVar15);
          uVar29 = local_190;
          _swift_bridgeObjectRetain(local_190);
          FUN_10006e954(auStack_220);
          local_408 = puVar4;
          puStack_400 = puVar5;
          local_4e0 = &local_408;
          uVar27 = 0;
          FUN_10002150c(FUN_100046614,auStack_4f0,uVar29);
          _swift_bridgeObjectRelease(uVar29);
        } while ((uVar27 & 1) == 0);
        _swift_bridgeObjectRelease(puVar12);
        FUN_10008f024(&local_330);
        puVar12 = puVar11;
        FUN_1000790fc(puVar11,puVar15);
        puVar13 = local_498;
        if ((((ulong)puVar12 & 1) != 0) ||
           (puVar12 = puVar24, FUN_10007920c(puVar24,lVar26), puVar28 = puVar13,
           ((ulong)puVar12 & 1) == 0)) {
          FUN_1000790fc(puVar11,puVar15);
          if (((ulong)puVar11 & 1) != 0) {
            FUN_1000973d8(puVar13,plVar19);
            FUN_100080a28(puVar13);
            goto LAB_10008db64;
          }
LAB_10008d638:
          puVar28 = local_338;
          if (bVar10) {
            FUN_1000973d8(puVar13,plVar19);
            goto LAB_10008db58;
          }
        }
      }
LAB_10008d644:
      FUN_1000973d8(puVar28,plVar19);
      FUN_100080a28(puVar28);
      puVar12 = (undefined *)unaff_x20[4];
      uVar25 = unaff_x20[5];
      uVar27 = *(ulong *)(puVar12 + 0x10);
      if ((long)uVar27 < (long)uVar25) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de48);
        (*pcVar9)();
      }
      if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10008de4c);
        (*pcVar9)();
      }
      if (uVar25 == uVar27) goto LAB_10008db64;
      _swift_bridgeObjectRetain(puVar12);
      if (uVar27 <= uVar25) goto LAB_10008de40;
      goto LAB_10008d248;
    }
LAB_10008db64:
    puVar11 = local_2e8;
    puVar12 = local_490;
    local_408 = local_490;
    puStack_400 = (undefined *)uVar2;
    local_3f8 = uVar3;
    _swift_bridgeObjectRetain(local_490);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1000973d8(puVar11,&local_408);
    _swift_bridgeObjectRelease(puVar11);
    uVar29 = local_3f8;
    puVar11 = local_408;
    FUN_10008bd2c(local_408,puStack_400,local_3f8,&local_2e0);
    _swift_bridgeObjectRelease(uVar29);
    _swift_bridgeObjectRelease(puVar11);
    puVar15 = local_2c0;
    uVar8 = local_2c8;
    puVar24 = local_2d0;
    uVar29 = uStack_2d8;
    puVar11 = local_2e0;
    _swift_bridgeObjectRelease(unaff_x20[4]);
    _swift_bridgeObjectRelease(unaff_x20[6]);
    unaff_x20[4] = puVar12;
    unaff_x20[5] = uVar2;
    unaff_x20[6] = uVar3;
    local_4b8[1] = uVar29;
    *local_4b8 = puVar11;
    local_4b8[3] = uVar8;
    local_4b8[2] = puVar24;
    local_4b8[4] = puVar15;
  }
  else {
    _swift_bridgeObjectRelease(puVar12);
    _swift_bridgeObjectRelease(local_2e0);
    _swift_bridgeObjectRelease(uStack_2d8);
    _swift_bridgeObjectRelease(local_2d0);
    puVar11 = local_2c0;
    _swift_bridgeObjectRelease(uVar3);
    puVar12 = local_490;
    _swift_bridgeObjectRelease(local_490);
    _swift_bridgeObjectRelease(puVar11);
    local_490 = puVar12;
LAB_10008dc00:
    unaff_x20[4] = local_490;
    unaff_x20[5] = uVar2;
    unaff_x20[6] = uVar3;
  }
  return;
}

