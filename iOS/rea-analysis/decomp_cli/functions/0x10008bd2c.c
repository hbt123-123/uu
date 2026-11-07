// rea decompile_all
// name: FUN_10008bd2c
// address: 0x10008bd2c
// body: available
// range: 0x10008bd2c-0x10008cf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008bd2c(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  ulong *puVar26;
  long lVar27;
  long unaff_x20;
  long unaff_x21;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined *local_2b0;
  undefined *puStack_2a8;
  ulong local_2a0;
  ulong uStack_298;
  undefined8 local_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  char local_278;
  ulong local_270;
  undefined1 auStack_268 [208];
  undefined *local_198 [3];
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 local_150;
  undefined7 uStack_14f;
  char cStack_148;
  undefined7 uStack_147;
  long lStack_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  code *local_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [16];
  ulong local_a0;
  ulong local_88;
  ulong uStack_80;
  byte local_78;
  
  lVar27 = *(long *)(param_1 + 0x10);
  if (lVar27 < param_2) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf28);
    (*pcVar9)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf2c);
    (*pcVar9)();
  }
  puVar10 = *(undefined **)(unaff_x20 + 0x10);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar17 = *(long *)(puVar10 + 0x10);
  if (lVar17 != 0) {
    plVar25 = (long *)(puVar10 + 0x20);
    do {
      lStack_178 = plVar25[1];
      local_180 = *plVar25;
      lStack_168 = plVar25[3];
      local_170 = plVar25[2];
      local_160 = plVar25[4];
      lStack_138 = plVar25[9];
      lStack_140 = plVar25[8];
      cStack_148 = (char)plVar25[7];
      uStack_147 = (undefined7)((ulong)plVar25[7] >> 8);
      local_150 = (undefined1)plVar25[6];
      uStack_14f = (undefined7)((ulong)plVar25[6] >> 8);
      uStack_158 = (undefined1)plVar25[5];
      uStack_157 = (undefined7)((ulong)plVar25[5] >> 8);
      lStack_128 = plVar25[0xb];
      local_130 = plVar25[10];
      lStack_118 = plVar25[0xd];
      lStack_120 = plVar25[0xc];
      lStack_108 = plVar25[0xf];
      local_110 = plVar25[0xe];
      lStack_f8 = plVar25[0x11];
      lStack_100 = plVar25[0x10];
      lStack_e8 = plVar25[0x13];
      local_f0 = plVar25[0x12];
      pcVar9 = (code *)plVar25[0x15];
      lVar31 = plVar25[0x14];
      lStack_c8 = plVar25[0x17];
      lVar32 = plVar25[0x16];
      lStack_b8 = plVar25[0x19];
      lStack_c0 = plVar25[0x18];
      uStack_e0 = lVar31;
      local_d8 = pcVar9;
      local_d0 = lVar32;
      if (((local_180 == 0) && (((byte)lStack_178 >> 1 & 1) != 0)) &&
         (uStack_e0._1_1_ = (byte)((ulong)lVar31 >> 8), uStack_e0._1_1_ == '\x05')) {
        if (((char)lStack_c8 == '\x01') && (lVar27 != param_2)) {
          lVar17 = param_2 + 1;
          plVar25 = (long *)(param_1 + param_2 * 0x40);
          goto LAB_10008c6dc;
        }
        break;
      }
      plVar25 = plVar25 + 0x1a;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
LAB_10008bdf8:
  _swift_bridgeObjectRetain(param_1);
  lVar17 = lVar27;
  puVar29 = PTR___swiftEmptyArrayStorage_1000f0740;
joined_r0x00010008ca98:
  PTR___swiftEmptyArrayStorage_1000f0740 = puVar29;
  if (lVar17 < param_2) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10008caa0);
    (*pcVar9)();
  }
  if (lVar27 < lVar17) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf30);
    (*pcVar9)();
  }
  if (lVar17 != param_2) {
    lVar27 = param_2;
    do {
      plVar25 = (long *)(param_1 + 0x20 + lVar27 * 0x40);
      lVar31 = lVar27;
      while( true ) {
        if ((lVar27 < param_2) || (lVar17 <= lVar31)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10008caa4);
          (*pcVar9)();
        }
        uStack_14f = (undefined7)*(undefined8 *)((long)plVar25 + 0x31);
        cStack_148 = (char)((ulong)*(undefined8 *)((long)plVar25 + 0x31) >> 0x38);
        local_150 = (undefined1)((ulong)*(undefined8 *)((long)plVar25 + 0x29) >> 0x38);
        lStack_178 = plVar25[1];
        local_180 = *plVar25;
        lStack_168 = plVar25[3];
        local_170 = plVar25[2];
        local_160 = plVar25[4];
        uStack_158 = (undefined1)plVar25[5];
        uStack_157 = (undefined7)((ulong)plVar25[5] >> 8);
        lVar32 = lVar31 + 1;
        if (cStack_148 == '\x01') break;
        plVar25 = plVar25 + 8;
        lVar31 = lVar32;
        if (lVar17 == lVar32) goto LAB_10008be24;
      }
      FUN_10008efe8(&local_180,auStack_268);
      puVar30 = puVar29;
      _swift_isUniquelyReferenced_nonNull_native();
      local_198[0] = puVar29;
      if (((ulong)puVar30 & 1) == 0) {
        FUN_100079990(0,*(long *)(puVar29 + 0x10) + 1,1);
      }
      uVar18 = *(ulong *)(local_198[0] + 0x10);
      if (*(ulong *)(local_198[0] + 0x18) >> 1 <= uVar18) {
        FUN_100079990(1 < *(ulong *)(local_198[0] + 0x18),uVar18 + 1,1);
      }
      *(ulong *)(local_198[0] + 0x10) = uVar18 + 1;
      *(ulong *)(local_198[0] + uVar18 * 0x40 + 0x51) = CONCAT17(cStack_148,uStack_14f);
      *(ulong *)(local_198[0] + uVar18 * 0x40 + 0x49) = CONCAT17(local_150,uStack_157);
      *(long *)(local_198[0] + uVar18 * 0x40 + 0x38) = lStack_168;
      *(long *)(local_198[0] + uVar18 * 0x40 + 0x30) = local_170;
      *(ulong *)(local_198[0] + uVar18 * 0x40 + 0x48) = CONCAT71(uStack_157,uStack_158);
      *(long *)(local_198[0] + uVar18 * 0x40 + 0x40) = local_160;
      *(long *)(local_198[0] + uVar18 * 0x40 + 0x28) = lStack_178;
      *(long *)(local_198[0] + uVar18 * 0x40 + 0x20) = local_180;
      lVar27 = lVar32;
      puVar29 = local_198[0];
    } while (lVar17 + -1 != lVar31);
  }
LAB_10008be24:
  _swift_bridgeObjectRelease(param_1);
  puStack_2a8 = puVar29 + 0x20;
  uStack_298 = *(long *)(puVar29 + 0x10) << 1 | 1;
  local_2a0 = 0;
  local_2b0 = puVar29;
  if (*(long *)(puVar29 + 0x10) == 0) {
    _swift_release(puVar29);
    return;
  }
  puVar29 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100097700();
  uVar18 = *(ulong *)(puVar10 + 0x10);
  if (uVar18 != 0) {
    plVar25 = (long *)(puVar10 + 0x20);
    _swift_bridgeObjectRetain(puVar10);
    _swift_bridgeObjectRetain(uVar14);
    uVar24 = 0;
    do {
      plVar19 = plVar25 + uVar24 * 0x1a;
      lVar27 = plVar19[1];
      local_180 = *plVar19;
      lStack_168 = plVar19[3];
      local_170 = plVar19[2];
      local_160 = plVar19[4];
      lStack_138 = plVar19[9];
      lStack_140 = plVar19[8];
      cStack_148 = (char)plVar19[7];
      uStack_147 = (undefined7)((ulong)plVar19[7] >> 8);
      local_150 = (undefined1)plVar19[6];
      uStack_14f = (undefined7)((ulong)plVar19[6] >> 8);
      uStack_158 = (undefined1)plVar19[5];
      uStack_157 = (undefined7)((ulong)plVar19[5] >> 8);
      lStack_128 = plVar19[0xb];
      local_130 = plVar19[10];
      lStack_118 = plVar19[0xd];
      lStack_120 = plVar19[0xc];
      lStack_108 = plVar19[0xf];
      local_110 = plVar19[0xe];
      lStack_f8 = plVar19[0x11];
      lStack_100 = plVar19[0x10];
      lStack_e8 = plVar19[0x13];
      local_f0 = plVar19[0x12];
      pcVar9 = (code *)plVar19[0x15];
      lVar17 = plVar19[0x14];
      lStack_c8 = plVar19[0x17];
      lVar31 = plVar19[0x16];
      lStack_b8 = plVar19[0x19];
      lStack_c0 = plVar19[0x18];
      lStack_178 = lVar27;
      uStack_e0 = lVar17;
      local_d8 = pcVar9;
      local_d0 = lVar31;
      if (uVar24 == uVar18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf20);
        (*pcVar9)();
      }
      if ((local_180 == 0) &&
         (uStack_e0._1_1_ = (byte)((ulong)lVar17 >> 8), bVar8 = uStack_e0._1_1_,
         bVar5 = uStack_e0._1_1_ | 4, bVar5 == 4)) {
        if ((char)lStack_c8 != '\x01') {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf54);
          (*pcVar9)();
        }
        FUN_10006ff98(&local_180,auStack_268);
        FUN_10006518c(pcVar9,lVar31,1);
        do {
          FUN_10008cf68(auStack_b0,bVar8 == 4,&local_2b0);
          bVar5 = local_78;
          uVar21 = uStack_80;
          uVar15 = local_88;
          if ((local_a0 & 0x7fffffffffffff3e) == 0x7ffffff3e) {
            _swift_bridgeObjectRelease(uVar14);
            _swift_bridgeObjectRelease(puVar10);
            FUN_100085fb0(pcVar9,lVar31,1);
            FUN_10008efb4(&local_180);
            goto LAB_10008c588;
          }
          FUN_10001fc18(auStack_b0,&DAT_100104b18,&DAT_1000d5af0);
          if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cecc);
            (*pcVar9)();
          }
          if (*(ulong *)(param_3 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10008ced0);
            (*pcVar9)();
          }
          puVar1 = (undefined8 *)(param_3 + 0x20 + uVar15 * 0x10);
          uVar4 = *puVar1;
          uVar2 = puVar1[1];
          puVar30 = &DAT_100104690;
          FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
          _swift_allocObject();
          *(undefined8 *)(puVar30 + 0x18) = 2;
          *(undefined8 *)(puVar30 + 0x10) = 1;
          *(ulong *)(puVar30 + 0x20) = uVar15;
          *(ulong *)(puVar30 + 0x28) = uVar21;
          puVar30[0x30] = bVar5 & 1;
          puVar30[0x31] = 0;
          _swift_bridgeObjectRetain(uVar2);
          puVar12 = puVar30;
          FUN_100097700(puVar30);
          _swift_setDeallocating(puVar30);
          _swift_deallocClassInstance(puVar30,0x20,7);
          (*pcVar9)(puVar12,0,0,0xfe,uVar4,uVar2,param_4);
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(puVar12);
            _swift_bridgeObjectRelease(uVar2);
            FUN_100085fb0(pcVar9,lVar31,1);
            FUN_10008efb4(&local_180);
            _swift_bridgeObjectRelease(puVar29);
            _swift_bridgeObjectRelease(uVar14);
            puVar29 = puVar10;
            goto LAB_10008c598;
          }
          _swift_bridgeObjectRelease(puVar12);
          _swift_bridgeObjectRelease(uVar2);
          if (*(long *)(puVar29 + 0x10) != 0) {
            __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(puVar29 + 0x28));
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(uVar15);
            if ((bVar5 & 1) == 0) {
              __ss6HasherV8_combineyySuF(1);
              uVar20 = uVar21;
            }
            else {
              uVar20 = 0;
            }
            __ss6HasherV8_combineyySuF();
            __ss6HasherV9_finalizeSiyF();
            uVar23 = -1L << ((ulong)(byte)puVar29[0x20] & 0x3f);
            uVar20 = uVar20 & (uVar23 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar29 + (uVar20 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar20 & 0x3f) &
                1) != 0) {
              do {
                puVar26 = (ulong *)(*(long *)(puVar29 + 0x30) + uVar20 * 0x18);
                if (((*(byte *)((long)puVar26 + 0x11) & 1) == 0) && (*puVar26 == uVar15)) {
                  if ((puVar26[2] & 1) == 0) {
                    if (((bVar5 & 1) == 0) && (puVar26[1] == uVar21)) goto LAB_10008bfb4;
                  }
                  else if ((bVar5 & 1) != 0) goto LAB_10008bfb4;
                }
                uVar20 = uVar20 + 1 & ~uVar23;
              } while ((*(ulong *)(puVar29 + (uVar20 >> 3 & 0xffffffffffffff8) + 0x38) >>
                        (uVar20 & 0x3f) & 1) != 0);
            }
          }
          __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(puVar29 + 0x28));
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar15);
          if ((bVar5 & 1) == 0) {
            __ss6HasherV8_combineyySuF(1);
            uVar20 = uVar21;
          }
          else {
            uVar20 = 0;
          }
          __ss6HasherV8_combineyySuF();
          __ss6HasherV9_finalizeSiyF();
          uVar23 = -1L << ((ulong)(byte)puVar29[0x20] & 0x3f);
          uVar20 = uVar20 & (uVar23 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar29 + (uVar20 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar20 & 0x3f) & 1
              ) != 0) {
            do {
              puVar26 = (ulong *)(*(long *)(puVar29 + 0x30) + uVar20 * 0x18);
              if (((*(byte *)((long)puVar26 + 0x11) & 1) == 0) && (*puVar26 == uVar15)) {
                if ((puVar26[2] & 1) == 0) {
                  if (((bVar5 & 1) == 0) && (puVar26[1] == uVar21)) goto LAB_10008bfb4;
                }
                else if ((bVar5 & 1) != 0) goto LAB_10008bfb4;
              }
              uVar20 = uVar20 + 1 & ~uVar23;
            } while ((*(ulong *)(puVar29 + (uVar20 >> 3 & 0xffffffffffffff8) + 0x38) >>
                      (uVar20 & 0x3f) & 1) != 0);
          }
          puVar30 = puVar29;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar23 = *(ulong *)(puVar29 + 0x10);
          local_198[0] = puVar29;
          if (uVar23 < *(ulong *)(puVar29 + 0x18)) {
            if (((ulong)puVar30 & 1) == 0) {
              FUN_1000825c4();
              puVar29 = local_198[0];
            }
          }
          else {
            if ((int)puVar30 == 0) {
              FUN_1000829c0(uVar23 + 1);
            }
            else {
              FUN_100082fd0(uVar23 + 1);
            }
            puVar29 = local_198[0];
            __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(local_198[0] + 0x28));
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(uVar15);
            if ((bVar5 & 1) == 0) {
              __ss6HasherV8_combineyySuF(1);
              uVar20 = uVar21;
            }
            else {
              uVar20 = 0;
            }
            __ss6HasherV8_combineyySuF();
            __ss6HasherV9_finalizeSiyF();
            uVar23 = -1L << ((ulong)(byte)puVar29[0x20] & 0x3f);
            uVar20 = uVar20 & (uVar23 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar29 + (uVar20 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar20 & 0x3f) &
                1) != 0) {
              do {
                puVar26 = (ulong *)(*(long *)(puVar29 + 0x30) + uVar20 * 0x18);
                if (((*(byte *)((long)puVar26 + 0x11) & 1) == 0) && (*puVar26 == uVar15)) {
                  if ((puVar26[2] & 1) == 0) {
                    if (((bVar5 & 1) == 0) && (puVar26[1] == uVar21)) goto LAB_10008cf58;
                  }
                  else if ((bVar5 & 1) != 0) goto LAB_10008cf58;
                }
                uVar20 = uVar20 + 1 & ~uVar23;
              } while ((*(ulong *)(puVar29 + (uVar20 >> 3 & 0xffffffffffffff8) + 0x38) >>
                        (uVar20 & 0x3f) & 1) != 0);
            }
          }
          uVar23 = uVar20 >> 3 & 0xffffffffffffff8;
          *(ulong *)(puVar29 + uVar23 + 0x38) =
               *(ulong *)(puVar29 + uVar23 + 0x38) | 1L << (uVar20 & 0x3f);
          puVar26 = (ulong *)(*(long *)(puVar29 + 0x30) + uVar20 * 0x18);
          *puVar26 = uVar15;
          puVar26[1] = uVar21;
          *(byte *)(puVar26 + 2) = bVar5 & 1;
          *(undefined1 *)((long)puVar26 + 0x11) = 0;
          if (SCARRY8(*(long *)(puVar29 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf1c);
            (*pcVar9)();
          }
          *(long *)(puVar29 + 0x10) = *(long *)(puVar29 + 0x10) + 1;
LAB_10008bfb4:
        } while (((uint)lVar27 >> 1 & 1) != 0);
        FUN_100085fb0(pcVar9,lVar31,1);
        FUN_10008efb4(&local_180);
      }
      uVar24 = uVar24 + 1;
      if (uVar24 == *(ulong *)(puVar10 + 0x10)) {
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(puVar10);
LAB_10008c588:
        lVar27 = *(long *)(puVar10 + 0x10);
        lVar17 = uStack_e0;
        pcVar9 = local_d8;
        lVar31 = local_d0;
        goto joined_r0x00010008c590;
      }
      if (*(ulong *)(puVar10 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf24);
        (*pcVar9)();
      }
    } while( true );
  }
  goto LAB_10008c598;
LAB_10008c6dc:
  if (((plVar25[6] & 0x6000000000000000U) != 0x4000000000000000) ||
     (plVar25[6] != 0x4000000000000000 ||
      ((plVar25[7] != 0 || plVar25[8] != 0) || (plVar25[5] != 0 || plVar25[4] != 0))))
  goto LAB_10008c6c8;
  _swift_bridgeObjectRetain_n(param_1,3);
  FUN_10006ff98(&local_180,auStack_268);
  FUN_10006518c(pcVar9,lVar32,1);
  for (lVar31 = lVar17; lVar27 != lVar31; lVar31 = lVar31 + 1) {
    puVar1 = (undefined8 *)(param_1 + 0x20 + lVar31 * 0x40);
    puVar30 = (undefined *)puVar1[1];
    puVar29 = (undefined *)*puVar1;
    uStack_298 = puVar1[3];
    local_2a0 = puVar1[2];
    local_290 = puVar1[4];
    uStack_288 = (undefined1)puVar1[5];
    uVar18 = *(ulong *)((long)puVar1 + 0x31);
    uStack_27f = (undefined7)uVar18;
    local_278 = (char)(uVar18 >> 0x38);
    cVar7 = local_278;
    uStack_287 = (undefined7)*(undefined8 *)((long)puVar1 + 0x29);
    uStack_280 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
    local_2b0 = puVar29;
    puStack_2a8 = puVar30;
    if ((local_2a0 & 0x6000000000000000) != 0x2000000000000000) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf58);
      (*pcVar9)();
    }
    lVar6 = CONCAT71(uStack_287,uStack_288);
    uVar24 = CONCAT71(uStack_27f,uStack_280);
    ppuVar11 = &local_2b0;
    FUN_10008efe8(ppuVar11,auStack_268);
    FUN_10008f0c8();
    puVar12 = (undefined *)0x1;
    __sSh15minimumCapacityShyxGSi_tcfC(1,&DAT_1000fa530,ppuVar11);
    __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(puVar12 + 0x28));
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar6);
    if (cVar7 == '\x01') {
      uVar15 = 0;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      uVar15 = uVar24;
    }
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar21 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
    uVar15 = uVar15 & (uVar21 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar12 + (uVar15 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar15 & 0x3f) & 1) != 0
       ) {
      do {
        plVar25 = (long *)(*(long *)(puVar12 + 0x30) + uVar15 * 0x18);
        if (((*(byte *)((long)plVar25 + 0x11) & 1) == 0) && (*plVar25 == lVar6)) {
          if ((*(byte *)(plVar25 + 2) & 1) == 0) {
            if (((uVar18 & 0x100000000000000) == 0) && (plVar25[1] == uVar24)) goto LAB_10008ca1c;
          }
          else if ((uVar18 & 0x100000000000000) != 0) goto LAB_10008ca1c;
        }
        uVar15 = uVar15 + 1 & ~uVar21;
      } while ((*(ulong *)(puVar12 + (uVar15 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar15 & 0x3f) &
               1) != 0);
    }
    puVar13 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar21 = *(ulong *)(puVar12 + 0x10);
    local_198[0] = puVar12;
    if (uVar21 < *(ulong *)(puVar12 + 0x18)) {
      if (((ulong)puVar13 & 1) == 0) {
        FUN_1000825c4();
        puVar12 = local_198[0];
      }
    }
    else {
      if ((int)puVar13 == 0) {
        FUN_1000829c0(uVar21 + 1);
      }
      else {
        FUN_100082fd0(uVar21 + 1);
      }
      puVar12 = local_198[0];
      __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(local_198[0] + 0x28));
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(lVar6);
      if (cVar7 == '\0') {
        __ss6HasherV8_combineyySuF(1);
        uVar15 = uVar24;
      }
      else {
        uVar15 = 0;
      }
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar21 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar15 = uVar15 & (uVar21 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar12 + (uVar15 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar15 & 0x3f) & 1) !=
          0) {
        do {
          plVar25 = (long *)(*(long *)(puVar12 + 0x30) + uVar15 * 0x18);
          if (((*(byte *)((long)plVar25 + 0x11) & 1) == 0) && (*plVar25 == lVar6)) {
            if ((*(byte *)(plVar25 + 2) & 1) == 0) {
              if (((uVar18 & 0x100000000000000) == 0) && (plVar25[1] == uVar24)) goto LAB_10008cf58;
            }
            else if ((uVar18 & 0x100000000000000) != 0) goto LAB_10008cf58;
          }
          uVar15 = uVar15 + 1 & ~uVar21;
        } while ((*(ulong *)(puVar12 + (uVar15 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar15 & 0x3f)
                 & 1) != 0);
      }
    }
    uVar18 = uVar15 >> 3 & 0xffffffffffffff8;
    *(ulong *)(puVar12 + uVar18 + 0x38) =
         *(ulong *)(puVar12 + uVar18 + 0x38) | 1L << (uVar15 & 0x3f);
    plVar25 = (long *)(*(long *)(puVar12 + 0x30) + uVar15 * 0x18);
    *plVar25 = lVar6;
    plVar25[1] = uVar24;
    *(char *)(plVar25 + 2) = cVar7;
    *(undefined1 *)((long)plVar25 + 0x11) = 0;
    if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf44);
      (*pcVar9)();
    }
    *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
LAB_10008ca1c:
    (*pcVar9)(puVar12,0,0,0xfe,puVar29,puVar30,param_4);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease_n(param_1,3);
      FUN_100085fb0(pcVar9,lVar32,1);
      _swift_bridgeObjectRelease(puVar12);
      FUN_10008f024(&local_2b0);
      FUN_10008efb4(&local_180);
      return;
    }
    _swift_bridgeObjectRelease(puVar12);
    FUN_10008f024(&local_2b0);
  }
  _swift_bridgeObjectRelease(param_1);
  FUN_100085fb0(pcVar9,lVar32,1);
  FUN_10008efb4(&local_180);
  _swift_bridgeObjectRelease(param_1);
  lVar17 = lVar17 + -1;
  puVar29 = PTR___swiftEmptyArrayStorage_1000f0740;
  goto joined_r0x00010008ca98;
LAB_10008c6c8:
  lVar17 = lVar17 + 1;
  plVar25 = plVar25 + 8;
  if (lVar17 - lVar27 == 1) goto LAB_10008bdf8;
  goto LAB_10008c6dc;
joined_r0x00010008c590:
  uStack_e0 = lVar17;
  local_d8 = pcVar9;
  local_d0 = lVar31;
  if (lVar27 == 0) goto LAB_10008c598;
  lStack_178 = plVar25[1];
  local_180 = *plVar25;
  lStack_168 = plVar25[3];
  local_170 = plVar25[2];
  local_160 = plVar25[4];
  lStack_138 = plVar25[9];
  lStack_140 = plVar25[8];
  cStack_148 = (char)plVar25[7];
  uStack_147 = (undefined7)((ulong)plVar25[7] >> 8);
  local_150 = (undefined1)plVar25[6];
  uStack_14f = (undefined7)((ulong)plVar25[6] >> 8);
  uStack_158 = (undefined1)plVar25[5];
  uStack_157 = (undefined7)((ulong)plVar25[5] >> 8);
  lStack_128 = plVar25[0xb];
  local_130 = plVar25[10];
  lStack_118 = plVar25[0xd];
  lStack_120 = plVar25[0xc];
  lStack_108 = plVar25[0xf];
  local_110 = plVar25[0xe];
  lStack_f8 = plVar25[0x11];
  lStack_100 = plVar25[0x10];
  lStack_e8 = plVar25[0x13];
  local_f0 = plVar25[0x12];
  pcVar9 = (code *)plVar25[0x15];
  lVar17 = plVar25[0x14];
  lStack_c8 = plVar25[0x17];
  lVar31 = plVar25[0x16];
  lStack_b8 = plVar25[0x19];
  lStack_c0 = plVar25[0x18];
  if (((local_180 == 0) && (((byte)lStack_178 >> 1 & 1) != 0)) &&
     (uStack_e0._1_1_ = (byte)((ulong)lVar17 >> 8), uStack_e0._1_1_ == '\x06')) {
    uStack_e0 = lVar17;
    local_d8 = pcVar9;
    local_d0 = lVar31;
    if ((char)lStack_c8 == '\x01') {
      _swift_beginAccess(&local_2b0,local_198,1,0);
      uVar24 = uStack_298;
      uVar18 = local_2a0;
      puVar30 = puStack_2a8;
      puVar10 = local_2b0;
      puVar12 = puVar10;
      if ((uStack_298 & 1) == 0) {
        FUN_10006ff98(&local_180,auStack_268);
        FUN_10006518c(pcVar9,lVar31,1);
LAB_10008c684:
        FUN_10007afc4(puVar10,puVar30,uVar18,uVar24);
      }
      else {
        _swift_unknownObjectRetain(local_2b0);
        FUN_10006ff98(&local_180,auStack_268);
        FUN_10006518c(pcVar9,lVar31,1);
        uVar14 = 0;
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar13 = puVar10;
        _swift_unknownObjectRetain();
        _swift_dynamicCastClass();
        if (puVar13 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar10);
          puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
        }
        lVar27 = *(long *)(puVar13 + 0x10);
        _swift_release();
        if (SBORROW8(uVar24 >> 1,uVar18)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf48);
          (*pcVar9)();
        }
        if (lVar27 != (uVar24 >> 1) - uVar18) {
          _swift_unknownObjectRelease();
          goto LAB_10008c684;
        }
        _swift_dynamicCastClass(puVar10,uVar14);
        if (puVar12 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar10);
          puVar12 = PTR___swiftEmptyArrayStorage_1000f0740;
        }
      }
      uVar21 = uVar24 >> 1;
      _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x10));
      uVar15 = *(ulong *)(param_4 + 0x20);
      _swift_bridgeObjectRelease(uVar15);
      *(undefined **)(param_4 + 0x10) = puVar12;
      *(undefined8 *)(param_4 + 0x18) = 0;
      *(undefined **)(param_4 + 0x20) = PTR___swiftEmptyArrayStorage_1000f0740;
      if (uVar18 == uVar21) goto LAB_10008ce70;
      uVar20 = uVar18;
      if ((long)uVar18 < (long)uVar21) {
        uVar20 = uVar21;
      }
      goto LAB_10008cb68;
    }
    goto LAB_10008c598;
  }
  plVar25 = plVar25 + 0x1a;
  lVar27 = lVar27 + -1;
  goto joined_r0x00010008c590;
  while( true ) {
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease();
    if (uVar18 == uVar21) break;
LAB_10008cb68:
    if (uVar18 == uVar20) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf34);
      (*pcVar9)();
    }
    uVar23 = *(ulong *)(puVar30 + uVar18 * 0x40 + 0x28);
    uVar3 = *(ulong *)(puVar30 + uVar18 * 0x40 + 0x30);
    bVar5 = puVar30[uVar18 * 0x40 + 0x38];
    uVar18 = uVar18 + 1;
    local_2b0 = puVar10;
    puStack_2a8 = puVar30;
    local_2a0 = uVar18;
    uStack_298 = uVar24;
    if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf38);
      (*pcVar9)();
    }
    if (*(ulong *)(param_3 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf3c);
      (*pcVar9)();
    }
    puVar1 = (undefined8 *)(param_3 + 0x20 + uVar23 * 0x10);
    uVar14 = *puVar1;
    uVar4 = puVar1[1];
    FUN_10008f0c8();
    _swift_bridgeObjectRetain(uVar4);
    uVar16 = 1;
    __sSh15minimumCapacityShyxGSi_tcfC(1,&DAT_1000fa530,uVar15);
    __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(uVar16 + 0x28));
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(uVar23);
    if (bVar5 == 0) {
      __ss6HasherV8_combineyySuF(1);
      uVar28 = uVar3;
    }
    else {
      uVar28 = 0;
    }
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar22 = -1L << ((ulong)*(byte *)(uVar16 + 0x20) & 0x3f);
    uVar28 = uVar28 & (uVar22 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar16 + 0x38 + (uVar28 >> 3 & 0xffffffffffffff8)) >> (uVar28 & 0x3f) & 1) != 0)
    {
      do {
        puVar26 = (ulong *)(*(long *)(uVar16 + 0x30) + uVar28 * 0x18);
        if (((*(byte *)((long)puVar26 + 0x11) & 1) == 0) && (*puVar26 == uVar23)) {
          uVar15 = uVar16;
          if ((puVar26[2] & 1) == 0) {
            if (((bVar5 & 1) == 0) && (puVar26[1] == uVar3)) goto LAB_10008ce20;
          }
          else if ((bVar5 & 1) != 0) goto LAB_10008ce20;
        }
        uVar28 = uVar28 + 1 & ~uVar22;
      } while ((*(ulong *)(uVar16 + 0x38 + (uVar28 >> 3 & 0xffffffffffffff8)) >> (uVar28 & 0x3f) & 1
               ) != 0);
    }
    uVar22 = uVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar15 = *(ulong *)(uVar16 + 0x10);
    local_270 = uVar16;
    if (uVar15 < *(ulong *)(uVar16 + 0x18)) {
      if ((uVar22 & 1) == 0) {
        FUN_1000825c4();
        uVar16 = local_270;
      }
    }
    else {
      if ((int)uVar22 == 0) {
        FUN_1000829c0(uVar15 + 1);
      }
      else {
        FUN_100082fd0(uVar15 + 1);
      }
      uVar16 = local_270;
      __ss6HasherV5_seedABSi_tcfC(auStack_268,*(undefined8 *)(local_270 + 0x28));
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(uVar23);
      if (bVar5 == 0) {
        __ss6HasherV8_combineyySuF(1);
        uVar28 = uVar3;
      }
      else {
        uVar28 = 0;
      }
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar15 = -1L << ((ulong)*(byte *)(uVar16 + 0x20) & 0x3f);
      uVar28 = uVar28 & (uVar15 ^ 0xffffffffffffffff);
      if ((*(ulong *)(uVar16 + 0x38 + (uVar28 >> 3 & 0xffffffffffffff8)) >> (uVar28 & 0x3f) & 1) !=
          0) {
        do {
          puVar26 = (ulong *)(*(long *)(uVar16 + 0x30) + uVar28 * 0x18);
          if (((*(byte *)((long)puVar26 + 0x11) & 1) == 0) && (*puVar26 == uVar23)) {
            if ((puVar26[2] & 1) == 0) {
              if (((bVar5 & 1) == 0) && (puVar26[1] == uVar3)) goto LAB_10008cf58;
            }
            else if ((bVar5 & 1) != 0) {
LAB_10008cf58:
              __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1000fa530)
              ;
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf68);
              (*pcVar9)();
            }
          }
          uVar28 = uVar28 + 1 & ~uVar15;
        } while ((*(ulong *)(uVar16 + 0x38 + (uVar28 >> 3 & 0xffffffffffffff8)) >> (uVar28 & 0x3f) &
                 1) != 0);
      }
    }
    lVar27 = uVar16 + (uVar28 >> 3 & 0xffffffffffffff8);
    *(ulong *)(lVar27 + 0x38) = *(ulong *)(lVar27 + 0x38) | 1L << (uVar28 & 0x3f);
    puVar26 = (ulong *)(*(long *)(uVar16 + 0x30) + uVar28 * 0x18);
    *puVar26 = uVar23;
    puVar26[1] = uVar3;
    *(byte *)(puVar26 + 2) = bVar5;
    *(undefined1 *)((long)puVar26 + 0x11) = 0;
    if (SCARRY8(*(long *)(uVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10008cf40);
      (*pcVar9)();
    }
    *(long *)(uVar16 + 0x10) = *(long *)(uVar16 + 0x10) + 1;
    uVar15 = uVar16;
LAB_10008ce20:
    (*pcVar9)(uVar15,0,0,0xfe,uVar14,uVar4,param_4);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(puVar29);
      FUN_100085fb0(pcVar9,lVar31,1);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar15);
      FUN_10008efb4(&local_180);
      goto LAB_10008c5a0;
    }
  }
LAB_10008ce70:
  FUN_100085fb0(pcVar9,lVar31,1);
  FUN_10008efb4(&local_180);
LAB_10008c598:
  _swift_bridgeObjectRelease(puVar29);
  puVar10 = local_2b0;
LAB_10008c5a0:
  _swift_unknownObjectRelease(puVar10);
  return;
}

