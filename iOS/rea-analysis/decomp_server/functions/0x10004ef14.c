// rea decompile_all
// name: FUN_10004ef14
// address: 0x10004ef14
// body: available
// range: 0x10004ef14-0x10004f79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010004f78c) */

undefined1  [16] FUN_10004ef14(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined *local_2e0;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined7 uStack_25b;
  undefined1 uStack_254;
  undefined1 auStack_250 [32];
  undefined *local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined1 auStack_1a8 [24];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined5 uStack_128;
  undefined3 local_123;
  undefined5 uStack_120;
  undefined8 uStack_11b;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined7 uStack_9b;
  char cStack_94;
  undefined1 auStack_88 [40];
  
  uVar22 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar22 = param_3 >> 0x38 & 0xf;
  }
  if (uVar22 == 0) {
    uVar21 = 1;
    local_110 = (undefined *)0x2719;
  }
  else {
    lVar20 = *(long *)(param_1 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar20 != 0) {
      local_110 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fbb8(0,lVar20,0);
      puVar19 = (undefined4 *)(param_1 + 0x20);
      uVar22 = *(ulong *)(local_110 + 0x10);
      do {
        uVar3 = *puVar19;
        uVar17 = uVar22 + 1;
        if (*(ulong *)(local_110 + 0x18) >> 1 <= uVar22) {
          FUN_10006fbb8(1 < *(ulong *)(local_110 + 0x18),uVar17,1);
        }
        *(ulong *)(local_110 + 0x10) = uVar17;
        *(undefined4 *)(local_110 + uVar22 * 4 + 0x20) = uVar3;
        lVar20 = lVar20 + -1;
        puVar7 = local_110;
        puVar19 = puVar19 + 1;
        uVar22 = uVar17;
      } while (lVar20 != 0);
    }
    puVar6 = puVar7;
    FUN_100074ee0(puVar7,PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32VSHsWP_100995dd0,&DAT_100a761e0,
                  &DAT_10080a978);
    _swift_bridgeObjectRelease(puVar7);
    if (*(long *)(puVar6 + 0x10) == 0) {
LAB_10004f248:
      _swift_bridgeObjectRelease(puVar6);
      uVar21 = 1;
      local_110 = (undefined *)0x2716;
    }
    else {
      uVar17 = 1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar22 = 0xffffffffffffffff;
      if ((long)uVar17 < 0x40) {
        uVar22 = ~(-1L << (uVar17 & 0x3f));
      }
      uVar22 = uVar22 & *(ulong *)(puVar6 + 0x38);
      _swift_bridgeObjectRetain(puVar6);
      _swift_beginAccess(unaff_x20 + 0x70,auStack_88,0,0);
      lVar20 = 0;
      local_2e0 = PTR___swiftEmptyArrayStorage_100995ea0;
      while( true ) {
        while (uVar22 != 0) {
          lVar15 = 0;
          uVar13 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar22 = uVar22 - 1 & uVar22;
          lVar18 = *(long *)(unaff_x20 + 0x70);
          uVar14 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          uVar13 = 0xffffffffffffffff;
          if ((long)uVar14 < 0x40) {
            uVar13 = ~(-1L << (uVar14 & 0x3f));
          }
          uVar13 = uVar13 & *(ulong *)(lVar18 + 0x40);
          do {
            while (uVar13 == 0) {
              bVar5 = SCARRY8(lVar15,1);
              lVar15 = lVar15 + 1;
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f760);
                (*pcVar4)();
              }
              if ((long)(uVar14 + 0x3f >> 6) <= lVar15) {
                _swift_bridgeObjectRelease(local_2e0);
                _swift_release(puVar6);
                goto LAB_10004f248;
              }
              uVar13 = ((ulong *)(lVar18 + 0x40))[lVar15];
            }
            uVar16 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar13 = uVar13 - 1 & uVar13;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar15 << 6;
            puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar16 * 0x80);
            uVar21 = *(undefined8 *)(*(long *)(lVar18 + 0x30) + uVar16 * 8);
            uStack_e8 = puVar2[5];
            local_f0 = puVar2[4];
            uStack_d8 = puVar2[7];
            local_e0 = puVar2[6];
            uStack_108 = puVar2[1];
            local_110 = (undefined *)*puVar2;
            uStack_f8 = puVar2[3];
            local_100 = puVar2[2];
            uStack_b8 = puVar2[0xb];
            local_c0 = puVar2[10];
            local_b0 = puVar2[0xc];
            uStack_c8 = puVar2[9];
            local_d0 = puVar2[8];
            uStack_9b = (undefined7)*(undefined8 *)((long)puVar2 + 0x75);
            cStack_94 = (char)((ulong)*(undefined8 *)((long)puVar2 + 0x75) >> 0x38);
            uStack_a0 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x18);
            uStack_9c = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x38);
            uStack_a8 = (undefined4)puVar2[0xd];
            uStack_a4 = (undefined4)((ulong)puVar2[0xd] >> 0x20);
          } while (((int)local_b0 !=
                    *(int *)(*(long *)(puVar6 + 0x30) +
                            (lVar20 << 8 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 2))) ||
                  (cStack_94 != '\x01'));
          _swift_bridgeObjectRetain(lVar18);
          FUN_10007eca0(&local_110,&local_190);
          _swift_release(lVar18);
          puVar7 = local_2e0;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar7 & 1) == 0) {
            plVar1 = (long *)(local_2e0 + 0x10);
            local_2e0 = (undefined *)0x0;
            FUN_100034a14(0,*plVar1 + 1,1);
          }
          uVar13 = *(ulong *)(local_2e0 + 0x10);
          if (*(ulong *)(local_2e0 + 0x18) >> 1 <= uVar13) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(local_2e0 + 0x18));
            FUN_100034a14(puVar7,uVar13 + 1,1,local_2e0);
            local_2e0 = puVar7;
          }
          *(ulong *)(local_2e0 + 0x10) = uVar13 + 1;
          *(undefined8 *)(local_2e0 + uVar13 * 8 + 0x20) = uVar21;
          FUN_10007ed50(&local_110);
        }
        bVar5 = SCARRY8(lVar20,1);
        lVar20 = lVar20 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f764);
          (*pcVar4)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar20) break;
        uVar22 = *(ulong *)((long)(puVar6 + 0x38) + lVar20 * 8);
      }
      _swift_release(puVar6);
      lVar20 = unaff_x20 + 0x70;
      _swift_beginAccess(lVar20,auStack_1a8,0,0);
      lVar15 = 0;
      lVar18 = 0;
      lVar11 = *(long *)(unaff_x20 + 0x70);
      uVar17 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
      uVar22 = 0xffffffffffffffff;
      if ((long)uVar17 < 0x40) {
        uVar22 = ~(-1L << (uVar17 & 0x3f));
      }
      uVar22 = uVar22 & *(ulong *)(lVar11 + 0x40);
      while( true ) {
        while (uVar22 != 0) {
          uVar13 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar22 = uVar22 - 1 & uVar22;
          if ((*(char *)(*(long *)(lVar11 + 0x38) +
                         (lVar15 << 0xd | LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) << 7) + 0x7c) ==
               '\x02') && (bVar5 = SCARRY8(lVar18,1), lVar18 = lVar18 + 1, bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f338);
            (*pcVar4)();
          }
        }
        bVar5 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f768);
          (*pcVar4)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar15) break;
        uVar22 = ((ulong *)(lVar11 + 0x40))[lVar15];
      }
      FUN_100075194();
      lVar15 = *(long *)(lVar20 + 0x10);
      _swift_bridgeObjectRelease();
      lVar20 = lVar15 - lVar18;
      if (SBORROW8(lVar15,lVar18)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f778);
        (*pcVar4)();
      }
      uVar22 = *(ulong *)(local_2e0 + 0x10);
      if (SBORROW8(lVar20,uVar22)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f77c);
        (*pcVar4)();
      }
      if ((long)(lVar20 - uVar22) < 1) {
        _swift_bridgeObjectRelease(local_2e0);
        _swift_bridgeObjectRelease(puVar6);
        uVar21 = 1;
        local_110 = (undefined *)0xffffffff;
      }
      else {
        if (uVar22 == 0) {
          _swift_bridgeObjectRetain(local_2e0);
        }
        else {
          _swift_bridgeObjectRetain(local_2e0);
          uVar17 = 0;
          do {
            if (*(ulong *)(local_2e0 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f76c);
              (*pcVar4)();
            }
            uVar13 = *(ulong *)(local_2e0 + uVar17 * 8 + 0x20);
            ppuVar10 = &local_110;
            _swift_beginAccess(unaff_x20 + 0x70,ppuVar10,0x20,0);
            lVar20 = *(long *)(unaff_x20 + 0x70);
            if ((*(long *)(lVar20 + 0x10) == 0) ||
               (uVar8 = uVar13, thunk_FUN_1001a2e54(), ((ulong)ppuVar10 & 1) == 0)) {
              _swift_endAccess(&local_110);
            }
            else {
              puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar8 * 0x80);
              uStack_168 = puVar2[5];
              local_170 = puVar2[4];
              uStack_158 = puVar2[7];
              uStack_160 = puVar2[6];
              uStack_188 = puVar2[1];
              local_190 = *puVar2;
              uStack_178 = puVar2[3];
              uStack_180 = puVar2[2];
              uStack_148 = puVar2[9];
              local_150 = puVar2[8];
              uStack_138 = puVar2[0xb];
              local_140 = puVar2[10];
              uStack_130 = puVar2[0xc];
              uStack_11b = *(undefined8 *)((long)puVar2 + 0x75);
              uStack_120 = (undefined5)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x18);
              uStack_128 = (undefined5)puVar2[0xd];
              local_123 = (undefined3)((ulong)puVar2[0xd] >> 0x28);
              uStack_228 = puVar2[1];
              local_230 = (undefined *)*puVar2;
              uStack_218 = puVar2[3];
              uStack_220 = puVar2[2];
              uStack_208 = puVar2[5];
              local_210 = puVar2[4];
              uStack_1f8 = puVar2[7];
              uStack_200 = puVar2[6];
              uStack_1e8 = puVar2[9];
              local_1f0 = puVar2[8];
              uStack_1d8 = puVar2[0xb];
              local_1e0 = puVar2[10];
              uStack_1d0 = puVar2[0xc];
              uStack_1bc = *(undefined8 *)((long)puVar2 + 0x74);
              uStack_1c0 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x6c) >> 0x20);
              uStack_1c8 = (undefined4)puVar2[0xd];
              local_1c4 = (undefined4)((ulong)puVar2[0xd] >> 0x20);
              _swift_endAccess(&local_110);
              uStack_c8 = uStack_1e8;
              local_d0 = local_1f0;
              uStack_b8 = uStack_1d8;
              local_c0 = local_1e0;
              uStack_a8 = uStack_1c8;
              local_b0 = uStack_1d0;
              uStack_9c = (undefined1)uStack_1bc;
              uStack_9b = (undefined7)((ulong)uStack_1bc >> 8);
              uStack_a4 = local_1c4;
              uStack_a0 = uStack_1c0;
              uStack_108 = uStack_228;
              local_110 = local_230;
              uStack_f8 = uStack_218;
              local_100 = uStack_220;
              uStack_e8 = uStack_208;
              local_f0 = local_210;
              uStack_d8 = uStack_1f8;
              local_e0 = uStack_200;
              cStack_94 = '\x02';
              _swift_beginAccess(unaff_x20 + 0x70,auStack_250,0x21,0);
              FUN_10007eca0(&local_190,&local_2d0);
              uVar8 = 0;
              FUN_10007eca0(&local_110);
              uVar16 = *(ulong *)(unaff_x20 + 0x70);
              _swift_isUniquelyReferenced_nonNull_native();
              uVar9 = (uint)uVar16;
              lVar15 = *(long *)(unaff_x20 + 0x70);
              *(undefined8 *)(unaff_x20 + 0x70) = 0x8000000000000000;
              uVar14 = uVar13;
              thunk_FUN_1001a2e54();
              uVar12 = (ulong)~(uint)uVar8 & 1;
              lVar20 = *(long *)(lVar15 + 0x10) + uVar12;
              if (SCARRY8(*(long *)(lVar15 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f770);
                (*pcVar4)();
              }
              if (*(long *)(lVar15 + 0x18) < lVar20) {
                FUN_100066d58(lVar20);
                uVar14 = uVar13;
                thunk_FUN_1001a2e54();
                if (((uint)uVar8 & 1) != (uVar9 & 1)) {
                  __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                            (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f78c);
                  (*pcVar4)();
                }
              }
              else if ((uVar16 & 1) == 0) {
                FUN_1000631c8();
              }
              if ((uVar8 & 1) == 0) {
                lVar20 = lVar15 + (uVar14 >> 6) * 8;
                *(ulong *)(lVar20 + 0x40) = *(ulong *)(lVar20 + 0x40) | 1L << (uVar14 & 0x3f);
                *(ulong *)(*(long *)(lVar15 + 0x30) + uVar14 * 8) = uVar13;
                puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar14 * 0x80);
                puVar2[5] = uStack_e8;
                puVar2[4] = local_f0;
                puVar2[7] = uStack_d8;
                puVar2[6] = local_e0;
                puVar2[1] = uStack_108;
                *puVar2 = local_110;
                puVar2[3] = uStack_f8;
                puVar2[2] = local_100;
                *(ulong *)((long)puVar2 + 0x75) = CONCAT17(cStack_94,uStack_9b);
                *(ulong *)((long)puVar2 + 0x6d) =
                     CONCAT17(uStack_9c,CONCAT43(uStack_a0,uStack_a4._1_3_));
                puVar2[0xb] = uStack_b8;
                puVar2[10] = local_c0;
                puVar2[0xd] = CONCAT44(uStack_a4,uStack_a8);
                puVar2[0xc] = local_b0;
                puVar2[9] = uStack_c8;
                puVar2[8] = local_d0;
                if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10004f774);
                  (*pcVar4)();
                }
                *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
              }
              else {
                puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar14 * 0x80);
                uStack_2a8 = puVar2[5];
                local_2b0 = puVar2[4];
                uStack_298 = puVar2[7];
                uStack_2a0 = puVar2[6];
                uStack_2c8 = puVar2[1];
                local_2d0 = (undefined *)*puVar2;
                uStack_2b8 = puVar2[3];
                uStack_2c0 = puVar2[2];
                uStack_278 = puVar2[0xb];
                local_280 = puVar2[10];
                uStack_270 = puVar2[0xc];
                uStack_288 = puVar2[9];
                local_290 = puVar2[8];
                uStack_25b = (undefined7)*(undefined8 *)((long)puVar2 + 0x75);
                uStack_254 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x75) >> 0x38);
                uStack_260 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x18);
                uStack_25c = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x38);
                uStack_268 = (undefined4)puVar2[0xd];
                uStack_264 = (undefined4)((ulong)puVar2[0xd] >> 0x20);
                puVar2[5] = uStack_e8;
                puVar2[4] = local_f0;
                puVar2[7] = uStack_d8;
                puVar2[6] = local_e0;
                puVar2[1] = uStack_108;
                *puVar2 = local_110;
                puVar2[3] = uStack_f8;
                puVar2[2] = local_100;
                *(ulong *)((long)puVar2 + 0x75) = CONCAT17(cStack_94,uStack_9b);
                *(ulong *)((long)puVar2 + 0x6d) =
                     CONCAT17(uStack_9c,CONCAT43(uStack_a0,uStack_a4._1_3_));
                puVar2[0xb] = uStack_b8;
                puVar2[10] = local_c0;
                puVar2[0xd] = CONCAT44(uStack_a4,uStack_a8);
                puVar2[0xc] = local_b0;
                puVar2[9] = uStack_c8;
                puVar2[8] = local_d0;
                FUN_10007ed50(&local_2d0);
              }
              *(long *)(unaff_x20 + 0x70) = lVar15;
              _swift_endAccess(auStack_250);
              uStack_288 = uStack_1e8;
              local_290 = local_1f0;
              uStack_278 = uStack_1d8;
              local_280 = local_1e0;
              uStack_268 = uStack_1c8;
              uStack_270 = uStack_1d0;
              uStack_25c = (undefined1)uStack_1bc;
              uStack_25b = (undefined7)((ulong)uStack_1bc >> 8);
              uStack_264 = local_1c4;
              uStack_260 = uStack_1c0;
              uStack_2c8 = uStack_228;
              local_2d0 = local_230;
              uStack_2b8 = uStack_218;
              uStack_2c0 = uStack_220;
              uStack_2a8 = uStack_208;
              local_2b0 = local_210;
              uStack_298 = uStack_1f8;
              uStack_2a0 = uStack_200;
              uStack_254 = 2;
              FUN_10007ed50(&local_2d0);
            }
            uVar17 = uVar17 + 1;
          } while (uVar22 != uVar17);
        }
        puVar7 = local_2e0;
        _swift_bridgeObjectRetain(local_2e0);
        FUN_100074f60();
        _swift_bridgeObjectRelease(local_2e0);
        FUN_1000493b8(puVar7,param_2,param_3);
        _swift_bridgeObjectRelease(puVar7);
        puVar7 = puVar6;
        FUN_10004b78c(puVar6);
        _swift_bridgeObjectRelease(puVar6);
        puVar6 = puVar7;
        FUN_100074ee0(puVar7,PTR___ss5Int32VN_100995c78,PTR___ss5Int32VSHsWP_100995c88,
                      &DAT_100a75a60,&DAT_100809b10);
        _swift_bridgeObjectRelease(puVar7);
        pcVar4 = *(code **)(unaff_x20 + 0x78);
        if (pcVar4 != (code *)0x0) {
          uVar21 = *(undefined8 *)(unaff_x20 + 0x80);
          _swift_retain(uVar21);
          (*pcVar4)(puVar6,0,1);
          FUN_10007ed2c(pcVar4,uVar21);
        }
        _swift_bridgeObjectRelease(local_2e0);
        _swift_bridgeObjectRelease(puVar6);
        local_110 = local_2e0;
        _swift_bridgeObjectRetain(local_2e0);
        FUN_100046d5c(&local_110);
        _swift_bridgeObjectRelease(local_2e0);
        uVar21 = 0;
      }
    }
  }
  auVar23._8_8_ = uVar21;
  auVar23._0_8_ = local_110;
  return auVar23;
}

