// rea decompile_all
// name: FUN_100089e2c
// address: 0x100089e2c
// body: available
// range: 0x100089e2c-0x10008bd2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010008b3cc) */

void FUN_100089e2c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  bool bVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  long unaff_x20;
  long unaff_x21;
  uint uVar22;
  undefined8 *local_2f0;
  undefined8 uStack_2e8;
  undefined8 *local_2a0;
  ulong local_290;
  undefined8 uStack_288;
  byte local_280;
  byte local_27f;
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  ulong local_210;
  undefined8 uStack_208;
  byte local_200;
  byte local_1ff;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  ulong local_190;
  undefined8 uStack_188;
  byte local_180;
  byte local_17f;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118;
  ulong local_110;
  undefined8 uStack_108;
  byte local_100;
  byte local_ff;
  undefined8 local_f8;
  long local_f0;
  ulong local_e8;
  undefined8 local_e0;
  byte local_d8;
  byte local_d7;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar20 = param_2[2];
  puVar7 = (undefined8 *)&DAT_100104690;
  lVar14 = param_4;
  FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
  _swift_allocObject();
  puVar7[3] = 2;
  puVar7[2] = 1;
  puVar7[4] = param_3;
  puVar7[5] = param_4;
  *(char *)(puVar7 + 6) = (char)param_5;
  *(byte *)((long)puVar7 + 0x31) = (byte)(param_5 >> 8) & 1;
  puVar6 = puVar7;
  FUN_100097700();
  _swift_setDeallocating(puVar7);
  _swift_deallocClassInstance(puVar7,0x20,7);
  uVar15 = (uint)*(byte *)(param_1 + 0xa1);
  if (2 < *(byte *)(param_1 + 0xa1)) {
    if (uVar15 - 5 < 2) {
      _swift_bridgeObjectRelease();
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,puVar6,0,0);
      *puVar6 = 3;
      puVar6[2] = 0;
      puVar6[1] = 0;
      puVar6[4] = 0;
      puVar6[3] = 0;
      puVar6[6] = 0;
      puVar6[5] = 0;
      puVar6[8] = 0;
      puVar6[7] = 0;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 10) = 0x11;
      goto LAB_10008b860;
    }
    if (uVar15 != 3) {
      pcVar5 = *(code **)(param_1 + 0xc0);
      puVar7 = puVar6;
      _swift_bridgeObjectRetain();
      (*pcVar5)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease_n(puVar6,2);
        return;
      }
      if (lVar20 < 0) {
        (*param_6)(puVar6,uVar2,uVar3,lVar20,param_2[3],param_2[4],param_8);
        _swift_bridgeObjectRetain(puVar6);
        FUN_100080a28();
      }
      else {
        lVar14 = lVar20;
        FUN_100085090();
        if ((((((ulong)puVar7 & 1) != 0) && ((param_5 >> 8 & 1) == 0)) && ((param_5 & 1) == 0)) &&
           (param_4 == 0)) {
          if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bd28);
            (*pcVar5)();
          }
          if (*(undefined8 **)(*(long *)(unaff_x20 + 0x30) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bd2c);
            (*pcVar5)();
          }
          lVar1 = *(long *)(unaff_x20 + 0x30) + (long)param_3 * 0x10;
          uVar11 = *(undefined8 *)(lVar1 + 0x20);
          uVar4 = *(undefined8 *)(lVar1 + 0x28);
          _swift_bridgeObjectRetain(uVar4);
          puVar7 = (undefined8 *)0x2;
          uVar13 = uVar4;
          FUN_100096c3c(2,uVar11,uVar4);
          _swift_bridgeObjectRelease(uVar4);
          __sSS14_fromSubstringySSSshFZ(puVar7,uVar11,uVar13,lVar14);
          _swift_bridgeObjectRelease(lVar14);
          if (puVar6[2] != 0) {
            __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(param_3);
            uVar8 = 0;
            __ss6HasherV8_combineyySuF();
            __ss6HasherV9_finalizeSiyF();
            uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
            uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
            if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                 (uVar8 & 0x3f) & 1) != 0) {
              do {
                puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
                if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) &&
                    ((undefined8 *)*puVar17 == param_3)) && ((puVar17[2] & 1) != 0))
                goto LAB_10008bb14;
                uVar8 = uVar8 + 1 & ~uVar16;
              } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                        (uVar8 & 0x3f) & 1) != 0);
            }
            if (puVar6[2] != 0) {
              __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
              __ss6HasherV8_combineyySuF(1);
              __ss6HasherV8_combineyySuF(param_3);
              uVar8 = 0;
              __ss6HasherV8_combineyySuF();
              __ss6HasherV9_finalizeSiyF();
              uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
              uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
              if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                   (uVar8 & 0x3f) & 1) != 0) {
                do {
                  puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
                  if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) &&
                      ((undefined8 *)*puVar17 == param_3)) && ((puVar17[2] & 1) != 0))
                  goto LAB_10008bb14;
                  uVar8 = uVar8 + 1 & ~uVar16;
                } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                          (uVar8 & 0x3f) & 1) != 0);
              }
            }
          }
          __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(param_3);
          uVar8 = 0;
          __ss6HasherV8_combineyySuF();
          __ss6HasherV9_finalizeSiyF();
          uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
          uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
          if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f)
              & 1) != 0) {
            do {
              puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
              if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) &&
                  ((undefined8 *)*puVar17 == param_3)) && ((puVar17[2] & 1) != 0))
              goto LAB_10008bb14;
              uVar8 = uVar8 + 1 & ~uVar16;
            } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                      (uVar8 & 0x3f) & 1) != 0);
          }
          puVar9 = puVar6;
          _swift_bridgeObjectRetain(puVar6);
          _swift_isUniquelyReferenced_nonNull_native();
          local_2f0 = puVar6;
          FUN_100082130(param_3,0,1,uVar8,puVar9);
          puVar9 = local_2f0;
          goto LAB_10008bb54;
        }
      }
      goto LAB_10008b2a4;
    }
    if (lVar20 < 0) {
      _swift_bridgeObjectRetain(puVar6);
      (*param_6)();
      if (unaff_x21 != 0) goto LAB_10008b7d8;
      _swift_bridgeObjectRetain(puVar6);
      FUN_100080a28();
      bVar18 = true;
    }
    else {
      puVar7 = puVar6;
      _swift_bridgeObjectRetain();
      FUN_100085090();
      if (((ulong)puVar7 & 1) == 0) {
        bVar18 = false;
      }
      else {
        bVar18 = false;
        if ((((param_5 >> 8 & 1) == 0) && ((param_5 & 1) == 0)) && (param_4 == 0)) {
          if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc40);
            (*pcVar5)();
          }
          if (*(undefined8 **)(*(long *)(unaff_x20 + 0x30) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc44);
            (*pcVar5)();
          }
          lVar1 = *(long *)(unaff_x20 + 0x30) + (long)param_3 * 0x10;
          uVar11 = *(undefined8 *)(lVar1 + 0x20);
          uVar4 = *(undefined8 *)(lVar1 + 0x28);
          _swift_bridgeObjectRetain(uVar4);
          puVar7 = (undefined8 *)0x2;
          uVar13 = uVar4;
          FUN_100096c3c(2,uVar11,uVar4);
          _swift_bridgeObjectRelease(uVar4);
          __sSS14_fromSubstringySSSshFZ(puVar7,uVar11,uVar13,lVar14);
          _swift_bridgeObjectRelease(lVar14);
          if (puVar6[2] != 0) {
            __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(param_3);
            uVar8 = 0;
            __ss6HasherV8_combineyySuF();
            __ss6HasherV9_finalizeSiyF();
            uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
            uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
            if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                 (uVar8 & 0x3f) & 1) != 0) {
              do {
                puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
                if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) &&
                    ((undefined8 *)*puVar17 == param_3)) && ((puVar17[2] & 1) != 0))
                goto LAB_10008b568;
                uVar8 = uVar8 + 1 & ~uVar16;
              } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                        (uVar8 & 0x3f) & 1) != 0);
            }
            if (puVar6[2] != 0) {
              __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
              __ss6HasherV8_combineyySuF(1);
              __ss6HasherV8_combineyySuF(param_3);
              uVar8 = 0;
              __ss6HasherV8_combineyySuF();
              __ss6HasherV9_finalizeSiyF();
              uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
              uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
              if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                   (uVar8 & 0x3f) & 1) != 0) {
                do {
                  puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
                  if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) &&
                      ((undefined8 *)*puVar17 == param_3)) && ((puVar17[2] & 1) != 0))
                  goto LAB_10008b568;
                  uVar8 = uVar8 + 1 & ~uVar16;
                } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                          (uVar8 & 0x3f) & 1) != 0);
              }
            }
          }
          __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(param_3);
          uVar8 = 0;
          __ss6HasherV8_combineyySuF();
          __ss6HasherV9_finalizeSiyF();
          uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
          uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
          if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f)
              & 1) != 0) {
            do {
              puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
              if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) &&
                  ((undefined8 *)*puVar17 == param_3)) && ((puVar17[2] & 1) != 0))
              goto LAB_10008b568;
              uVar8 = uVar8 + 1 & ~uVar16;
            } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                      (uVar8 & 0x3f) & 1) != 0);
          }
          puVar9 = puVar6;
          _swift_bridgeObjectRetain(puVar6);
          _swift_isUniquelyReferenced_nonNull_native();
          local_2f0 = puVar6;
          FUN_100082130(param_3,0,1,uVar8,puVar9);
          puVar9 = local_2f0;
          goto LAB_10008b5a8;
        }
      }
    }
    goto LAB_10008b648;
  }
  if (uVar15 == 0) {
    if (lVar20 < 0) {
      _swift_bridgeObjectRetain(puVar6);
      (*param_6)();
      _swift_bridgeObjectRelease(puVar6);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease();
        return;
      }
      FUN_100080a28(puVar6);
      return;
    }
    puVar7 = puVar6;
    _swift_bridgeObjectRetain();
    FUN_100085090();
    if ((((((ulong)puVar7 & 1) != 0) && ((param_5 >> 8 & 1) == 0)) && ((param_5 & 1) == 0)) &&
       (param_4 == 0)) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc28);
        (*pcVar5)();
      }
      if (*(undefined8 **)(*(long *)(unaff_x20 + 0x30) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc34);
        (*pcVar5)();
      }
      lVar1 = *(long *)(unaff_x20 + 0x30) + (long)param_3 * 0x10;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      _swift_bridgeObjectRetain(uVar4);
      puVar7 = (undefined8 *)0x2;
      uVar13 = uVar4;
      FUN_100096c3c(2,uVar11,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      __sSS14_fromSubstringySSSshFZ(puVar7,uVar11,uVar13,lVar14);
      _swift_bridgeObjectRelease(lVar14);
      if (puVar6[2] != 0) {
        __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(param_3);
        uVar8 = 0;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
        uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) &
            1) != 0) {
          do {
            puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
            if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3)
                ) && ((puVar17[2] & 1) != 0)) {
              _swift_bridgeObjectRelease(puVar6);
              goto LAB_10008bca8;
            }
            uVar8 = uVar8 + 1 & ~uVar16;
          } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar8 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(puVar6);
      if (puVar6[2] != 0) {
        __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(param_3);
        uVar8 = 0;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
        uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) &
            1) != 0) {
          do {
            puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
            if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3)
                ) && ((puVar17[2] & 1) != 0)) goto LAB_10008bca8;
            uVar8 = uVar8 + 1 & ~uVar16;
          } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar8 & 0x3f) & 1) != 0);
        }
      }
      __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(param_3);
      uVar8 = 0;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
      uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) & 1)
          != 0) {
        do {
          puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
          if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3))
             && ((puVar17[2] & 1) != 0)) goto LAB_10008bca8;
          uVar8 = uVar8 + 1 & ~uVar16;
        } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                  (uVar8 & 0x3f) & 1) != 0);
      }
      puVar9 = puVar6;
      _swift_bridgeObjectRetain();
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = puVar6[2];
      if (uVar16 < (ulong)puVar6[3]) {
        puVar21 = puVar6;
        local_2a0 = puVar6;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_1000825c4();
          puVar21 = local_2a0;
        }
      }
      else {
        if ((int)puVar9 == 0) {
          local_2a0 = puVar6;
          FUN_1000829c0(uVar16 + 1);
        }
        else {
          local_2a0 = puVar6;
          FUN_100082fd0(uVar16 + 1);
        }
        puVar21 = local_2a0;
        __ss6HasherV5_seedABSi_tcfC(&local_2f0,local_2a0[5]);
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(param_3);
        uVar8 = 0;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar16 = -1L << ((ulong)*(byte *)(puVar21 + 4) & 0x3f);
        uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)puVar21 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) &
            1) != 0) {
          do {
            puVar17 = (ulong *)(puVar21[6] + uVar8 * 0x18);
            if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3)
                ) && ((puVar17[2] & 1) != 0)) {
              __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1000fa530)
              ;
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10008b9a4);
              (*pcVar5)();
            }
            uVar8 = uVar8 + 1 & ~uVar16;
          } while ((*(ulong *)((long)puVar21 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar8 & 0x3f) & 1) != 0);
        }
      }
      uVar16 = uVar8 >> 3 & 0xffffffffffffff8;
      *(ulong *)((long)puVar21 + uVar16 + 0x38) =
           *(ulong *)((long)puVar21 + uVar16 + 0x38) | 1L << (uVar8 & 0x3f);
      puVar17 = (ulong *)(puVar21[6] + uVar8 * 0x18);
      *puVar17 = (ulong)param_3;
      puVar17[1] = 0;
      *(undefined2 *)(puVar17 + 2) = 1;
      if (SCARRY8(puVar21[2],1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bd24);
        (*pcVar5)();
      }
      puVar21[2] = puVar21[2] + 1;
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = puVar21;
LAB_10008bca8:
      ppuVar10 = &local_2f0;
      puVar12 = PTR___sSSN_1000f02f8;
      local_2f0 = puVar7;
      uStack_2e8 = uVar11;
      __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                (ppuVar10,PTR___sSSN_1000f02f8,PTR___sSSs25LosslessStringConvertiblesWP_1000f0328,
                 PTR___sSSSTsWP_1000f0310);
      (*param_6)(puVar6,uVar2,uVar3,lVar20,ppuVar10,puVar12,param_8);
      if (unaff_x21 != 0) goto LAB_10008bd00;
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_10008b1f8;
    }
    FUN_10009c114(&local_290,param_3,param_4,param_5 & 0x1ff);
    if (local_270 != 0) {
      uVar15 = (uint)local_280 | (local_27f & 1) << 8;
      uVar8 = local_290;
      FUN_10008de70(local_290,uStack_288,uVar15,puVar6);
      _swift_bridgeObjectRelease(puVar6);
      if (((uVar8 & 1) == 0) &&
         (uVar8 = local_290, local_2a0 = puVar6, FUN_10008de70(local_290,uStack_288,uVar15,puVar6),
         (uVar8 & 1) == 0)) {
        FUN_1000818b8(&local_2f0,local_290,uStack_288,uVar15);
        puVar6 = local_2a0;
      }
      (*param_6)(puVar6,uVar2,uVar3,lVar20,local_278,local_270,param_8);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar6);
        FUN_10001fc18(&local_290,&DAT_100104b08,&DAT_1000d5ae8);
        return;
      }
      puVar17 = &local_290;
LAB_10008af38:
      FUN_10001fc18(puVar17,&DAT_100104b08,&DAT_1000d5ae8);
      goto LAB_10008b1f8;
    }
    _swift_bridgeObjectRelease_n(puVar6,2);
    FUN_10008ecb4(&local_268,param_3,param_4,param_5 & 0x1ff,param_2,
                  *(undefined8 *)(unaff_x20 + 0x30));
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,param_3,0,0);
    param_3[1] = uStack_260;
    *param_3 = local_268;
    param_3[3] = uStack_250;
    param_3[2] = local_258;
    local_1b8 = local_238;
    uStack_1b0 = uStack_230;
    local_1a8 = local_228;
    uStack_1a0 = uStack_220;
    local_1c8 = local_248;
    uStack_1c0 = uStack_240;
    local_198 = local_218;
    goto LAB_10008b854;
  }
  if (uVar15 == 1) {
    if (lVar20 < 0) {
LAB_10008a518:
      _swift_bridgeObjectRetain(puVar6);
      (*param_6)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease_n(puVar6,2);
        return;
      }
      _swift_bridgeObjectRelease(puVar6);
      FUN_100080a28(puVar6);
      return;
    }
    puVar7 = puVar6;
    _swift_bridgeObjectRetain();
    FUN_100085090();
    if (((((ulong)puVar7 & 1) != 0) && ((param_5 >> 8 & 1) == 0)) &&
       (((param_5 & 1) == 0 && (param_4 == 0)))) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc2c);
        (*pcVar5)();
      }
      if (*(undefined8 **)(*(long *)(unaff_x20 + 0x30) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc38);
        (*pcVar5)();
      }
      lVar1 = *(long *)(unaff_x20 + 0x30) + (long)param_3 * 0x10;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      _swift_bridgeObjectRetain(uVar4);
      puVar7 = (undefined8 *)0x2;
      uVar13 = uVar4;
      FUN_100096c3c(2,uVar11,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      __sSS14_fromSubstringySSSshFZ(puVar7,uVar11,uVar13,lVar14);
      _swift_bridgeObjectRelease(lVar14);
      if (puVar6[2] != 0) {
        __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(param_3);
        uVar8 = 0;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
        uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) &
            1) != 0) {
          do {
            puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
            if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3)
                ) && ((puVar17[2] & 1) != 0)) goto LAB_10008a50c;
            uVar8 = uVar8 + 1 & ~uVar16;
          } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar8 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(puVar6);
      if (puVar6[2] != 0) {
        __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(param_3);
        uVar8 = 0;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
        uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) &
            1) != 0) {
          do {
            puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
            if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3)
                ) && ((puVar17[2] & 1) != 0)) goto LAB_10008b190;
            uVar8 = uVar8 + 1 & ~uVar16;
          } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar8 & 0x3f) & 1) != 0);
        }
      }
      __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(param_3);
      uVar8 = 0;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
      uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) & 1)
          != 0) {
        do {
          puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
          if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3))
             && ((puVar17[2] & 1) != 0)) goto LAB_10008b190;
          uVar8 = uVar8 + 1 & ~uVar16;
        } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                  (uVar8 & 0x3f) & 1) != 0);
      }
LAB_10008b158:
      puVar9 = puVar6;
      _swift_bridgeObjectRetain(puVar6);
      _swift_isUniquelyReferenced_nonNull_native();
      local_2f0 = puVar6;
      FUN_100082130(param_3,0,1,uVar8,puVar9);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = local_2f0;
      goto LAB_10008b190;
    }
    FUN_10009c21c(&local_210,param_3,param_4,param_5 & 0x1ff);
    if (local_1f0 != 0) {
      uVar15 = (uint)local_200 | (local_1ff & 1) << 8;
      uVar8 = local_210;
      FUN_10008de70(local_210,uStack_208,uVar15,puVar6);
      _swift_bridgeObjectRelease(puVar6);
      if (((uVar8 & 1) == 0) &&
         (uVar8 = local_210, local_2a0 = puVar6, FUN_10008de70(local_210,uStack_208,uVar15,puVar6),
         (uVar8 & 1) == 0)) {
        FUN_1000818b8(&local_2f0,local_210,uStack_208,uVar15);
        puVar6 = local_2a0;
      }
      (*param_6)(puVar6,uVar2,uVar3,lVar20,local_1f8,local_1f0,param_8);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar6);
        FUN_10001fc18(&local_210,&DAT_100104b08,&DAT_1000d5ae8);
        return;
      }
      puVar17 = &local_210;
      goto LAB_10008af38;
    }
    _swift_bridgeObjectRelease_n(puVar6,2);
    FUN_10008ecb4(&local_1e8,param_3,param_4,param_5 & 0x1ff,param_2,
                  *(undefined8 *)(unaff_x20 + 0x30));
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,param_3,0,0);
    param_3[1] = uStack_1e0;
    *param_3 = local_1e8;
    param_3[3] = uStack_1d0;
    param_3[2] = local_1d8;
    goto LAB_10008b854;
  }
  if (lVar20 < 0) goto LAB_10008a518;
  puVar7 = puVar6;
  _swift_bridgeObjectRetain();
  FUN_100085090();
  if ((((((ulong)puVar7 & 1) != 0) && ((param_5 >> 8 & 1) == 0)) && ((param_5 & 1) == 0)) &&
     (param_4 == 0)) {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc30);
      (*pcVar5)();
    }
    if (*(undefined8 **)(*(long *)(unaff_x20 + 0x30) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc3c);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x20 + 0x30) + (long)param_3 * 0x10;
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    _swift_bridgeObjectRetain(uVar4);
    puVar7 = (undefined8 *)0x2;
    uVar13 = uVar4;
    FUN_100096c3c(2,uVar11,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    __sSS14_fromSubstringySSSshFZ(puVar7,uVar11,uVar13,lVar14);
    _swift_bridgeObjectRelease(lVar14);
    if (puVar6[2] != 0) {
      __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(param_3);
      uVar8 = 0;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
      uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) & 1)
          != 0) {
        do {
          puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
          if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3))
             && ((puVar17[2] & 1) != 0)) goto LAB_10008a50c;
          uVar8 = uVar8 + 1 & ~uVar16;
        } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                  (uVar8 & 0x3f) & 1) != 0);
      }
    }
    _swift_bridgeObjectRelease(puVar6);
    if (puVar6[2] != 0) {
      __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(param_3);
      uVar8 = 0;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
      uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) & 1)
          != 0) {
        do {
          puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
          if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3))
             && ((puVar17[2] & 1) != 0)) goto LAB_10008b190;
          uVar8 = uVar8 + 1 & ~uVar16;
        } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >>
                  (uVar8 & 0x3f) & 1) != 0);
      }
    }
    __ss6HasherV5_seedABSi_tcfC(&local_2f0,puVar6[5]);
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_3);
    uVar8 = 0;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar16 = -1L << ((ulong)*(byte *)(puVar6 + 4) & 0x3f);
    uVar8 = uVar8 & (uVar16 ^ 0xffffffffffffffff);
    if ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f) & 1)
        != 0) {
      do {
        puVar17 = (ulong *)(puVar6[6] + uVar8 * 0x18);
        if ((((*(byte *)((long)puVar17 + 0x11) & 1) == 0) && ((undefined8 *)*puVar17 == param_3)) &&
           ((puVar17[2] & 1) != 0)) goto LAB_10008b190;
        uVar8 = uVar8 + 1 & ~uVar16;
      } while ((*(ulong *)((long)puVar6 + (uVar8 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar8 & 0x3f)
               & 1) != 0);
    }
    goto LAB_10008b158;
  }
  FUN_10009c39c(&local_190,param_3,param_4,param_5 & 0x1ff);
  if (local_170 != 0) {
    uVar15 = (uint)local_180 | (local_17f & 1) << 8;
    uVar8 = local_190;
    FUN_10008de70(local_190,uStack_188,uVar15,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    if (((uVar8 & 1) == 0) &&
       (uVar8 = local_190, local_2a0 = puVar6, FUN_10008de70(local_190,uStack_188,uVar15,puVar6),
       (uVar8 & 1) == 0)) {
      FUN_1000818b8(&local_2f0,local_190,uStack_188,uVar15);
      puVar6 = local_2a0;
    }
    (*param_6)(puVar6,uVar2,uVar3,lVar20,local_178,local_170,param_8);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(puVar6);
      FUN_10001fc18(&local_190,&DAT_100104b08,&DAT_1000d5ae8);
      return;
    }
    puVar17 = &local_190;
    goto LAB_10008af38;
  }
  _swift_bridgeObjectRelease_n(puVar6,2);
  FUN_10008ecb4(&local_168,param_3,param_4,param_5 & 0x1ff,param_2,*(undefined8 *)(unaff_x20 + 0x30)
               );
  FUN_100054664();
  _swift_allocError(&DAT_1000fa8c8,param_3,0,0);
  param_3[1] = uStack_160;
  *param_3 = local_168;
  param_3[3] = uStack_150;
  param_3[2] = uStack_158;
  *(undefined1 *)(param_3 + 10) = local_118;
  param_3[7] = uStack_130;
  param_3[6] = local_138;
  param_3[9] = uStack_120;
  param_3[8] = uStack_128;
  local_1c8 = local_148;
  uStack_1c0 = uStack_140;
  goto LAB_10008b85c;
LAB_10008a50c:
  _swift_bridgeObjectRelease(puVar6);
LAB_10008b190:
  ppuVar10 = &local_2f0;
  puVar12 = PTR___sSSN_1000f02f8;
  local_2f0 = puVar7;
  uStack_2e8 = uVar11;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (ppuVar10,PTR___sSSN_1000f02f8,PTR___sSSs25LosslessStringConvertiblesWP_1000f0328,
             PTR___sSSSTsWP_1000f0310);
  (*param_6)(puVar6,uVar2,uVar3,lVar20,ppuVar10,puVar12,param_8);
  if (unaff_x21 != 0) {
LAB_10008bd00:
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar12);
    return;
  }
  _swift_bridgeObjectRelease(puVar12);
LAB_10008b1f8:
  FUN_100080a28(puVar6);
  return;
LAB_10008bb14:
  _swift_bridgeObjectRetain(puVar6);
  puVar9 = puVar6;
LAB_10008bb54:
  ppuVar10 = &local_2f0;
  puVar12 = PTR___sSSN_1000f02f8;
  local_2f0 = puVar7;
  uStack_2e8 = uVar11;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (ppuVar10,PTR___sSSN_1000f02f8,PTR___sSSs25LosslessStringConvertiblesWP_1000f0328,
             PTR___sSSSTsWP_1000f0310);
  (*param_6)(puVar9,uVar2,uVar3,lVar20,ppuVar10,puVar12,param_8);
  _swift_bridgeObjectRelease(puVar12);
  FUN_100080a28(puVar9);
  FUN_1000973d8(*param_9,unaff_x20 + 0x20);
LAB_10008b2a4:
  while (FUN_10009c39c(&local_110,param_3,param_4,param_5 & 0x1ff), lVar14 = local_f0,
        uVar3 = local_f8, uVar2 = uStack_108, uVar8 = local_110, local_f0 != 0) {
    uVar15 = (uint)local_100 | (local_ff & 1) << 8;
    uVar16 = local_110;
    FUN_10008de70(local_110,uStack_108,uVar15,puVar6);
    puVar7 = puVar6;
    if ((uVar16 & 1) == 0) {
      uVar16 = uVar8;
      local_2a0 = puVar6;
      FUN_10008de70(uVar8,uVar2,uVar15,puVar6);
      if ((uVar16 & 1) == 0) {
        _swift_bridgeObjectRetain(puVar6);
        FUN_1000818b8(&local_2f0,uVar8,uVar2,uVar15);
        puVar7 = local_2a0;
      }
      else {
        _swift_bridgeObjectRetain(puVar6);
      }
    }
    else {
      _swift_bridgeObjectRetain(puVar6);
    }
    (*param_6)(puVar7,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),uVar3,lVar14,param_8);
    FUN_10001fc18(&local_110,&DAT_100104b08,&DAT_1000d5ae8);
    FUN_100080a28(puVar7);
  }
LAB_10008bbcc:
  _swift_bridgeObjectRelease_n(puVar6,2);
  return;
LAB_10008b568:
  _swift_bridgeObjectRetain(puVar6);
  puVar9 = puVar6;
LAB_10008b5a8:
  ppuVar10 = &local_2f0;
  puVar12 = PTR___sSSN_1000f02f8;
  local_2f0 = puVar7;
  uStack_2e8 = uVar11;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (ppuVar10,PTR___sSSN_1000f02f8,PTR___sSSs25LosslessStringConvertiblesWP_1000f0328,
             PTR___sSSSTsWP_1000f0310);
  (*param_6)(puVar9,uVar2,uVar3,lVar20,ppuVar10,puVar12,param_8);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar12);
    goto LAB_10008bbcc;
  }
  _swift_bridgeObjectRelease(puVar12);
  FUN_100080a28(puVar9);
  FUN_1000973d8(*param_9,unaff_x20 + 0x20);
  bVar18 = true;
LAB_10008b648:
  _swift_bridgeObjectRetain(puVar6);
  FUN_100080a28();
  FUN_1000973d8(puVar6,unaff_x20 + 0x20);
  uVar8 = *(ulong *)(unaff_x20 + 0x28);
  uVar16 = *(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if ((long)uVar16 < (long)uVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc1c);
    (*pcVar5)();
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc20);
    (*pcVar5)();
  }
  if (uVar8 != uVar16) {
    if (uVar16 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10008bc24);
      (*pcVar5)();
    }
    if ((*(ulong *)(*(long *)(unaff_x20 + 0x20) + uVar8 * 0x40 + 0x30) & 0x6000000000000000) ==
        0x2000000000000000) {
      FUN_10009c4a8(&local_e8);
      uVar8 = local_e8;
      uVar2 = local_e0;
      uVar3 = local_d0;
      lVar14 = local_c8;
      while (lVar14 != 0) {
        uVar22 = (uint)local_d7;
        uVar19 = (uint)local_d8;
        uVar15 = uVar19 | (uVar22 & 1) << 8;
        uVar16 = uVar8;
        local_e8 = uVar8;
        local_e0 = uVar2;
        local_d0 = uVar3;
        local_c8 = lVar14;
        FUN_10008de70(uVar8,uVar2,uVar15,puVar6);
        if (((uVar16 & 1) == 0) &&
           (uVar16 = uVar8, local_2a0 = puVar6, FUN_10008de70(uVar8,uVar2,uVar15,puVar6),
           (uVar16 & 1) == 0)) {
          _swift_bridgeObjectRetain(puVar6);
          FUN_1000818b8(&local_2f0,uVar8,uVar2,uVar19 | (uVar22 & 1) << 8);
          puVar7 = local_2a0;
        }
        else {
          _swift_bridgeObjectRetain(puVar6);
          puVar7 = puVar6;
        }
        (*param_6)(puVar7,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),uVar3,lVar14,param_8);
        if (unaff_x21 != 0) {
          _swift_bridgeObjectRelease(puVar7);
          _swift_bridgeObjectRelease_n(puVar6,2);
          FUN_10001fc18(&local_e8,&DAT_100104b08,&DAT_1000d5ae8);
          return;
        }
        FUN_10001fc18(&local_e8,&DAT_100104b08,&DAT_1000d5ae8);
        FUN_100080a28(puVar7);
        FUN_10009c4a8(&local_e8);
        uVar8 = local_e8;
        uVar2 = local_e0;
        uVar3 = local_d0;
        lVar14 = local_c8;
      }
LAB_10008b7d8:
      _swift_bridgeObjectRelease_n(puVar6,2);
      return;
    }
  }
  _swift_bridgeObjectRelease_n(puVar6,2);
  if (bVar18) {
    return;
  }
  FUN_10008ecb4(&local_c0,param_3,param_4,param_5 & 0x1ff,param_2,*(undefined8 *)(unaff_x20 + 0x30))
  ;
  FUN_100054664();
  _swift_allocError(&DAT_1000fa8c8,param_3,0,0);
  param_3[1] = uStack_b8;
  *param_3 = local_c0;
  param_3[3] = uStack_a8;
  param_3[2] = local_b0;
  local_1b8 = local_90;
  uStack_1b0 = uStack_88;
  local_1a8 = local_80;
  uStack_1a0 = uStack_78;
  local_1c8 = local_a0;
  uStack_1c0 = uStack_98;
  local_198 = local_70;
LAB_10008b854:
  *(undefined1 *)(param_3 + 10) = local_198;
  param_3[7] = uStack_1b0;
  param_3[6] = local_1b8;
  param_3[9] = uStack_1a0;
  param_3[8] = local_1a8;
LAB_10008b85c:
  param_3[5] = uStack_1c0;
  param_3[4] = local_1c8;
LAB_10008b860:
  _swift_willThrow();
  return;
}

