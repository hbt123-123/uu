// rea decompile_all
// name: FUN_100542580
// address: 0x100542580
// body: available
// range: 0x100542580-0x100543a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100542580(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint uVar23;
  uint uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  long lVar30;
  ulong *puVar31;
  ulong *puVar32;
  uint uVar33;
  long *unaff_x20;
  ulong uVar34;
  ulong uVar35;
  void *pvVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  ulong *local_210;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 local_1b6;
  undefined2 uStack_1b0;
  undefined8 uStack_1ae;
  undefined8 local_198;
  byte local_189;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  byte local_167;
  undefined1 local_160 [32];
  undefined2 local_140;
  undefined1 local_138 [32];
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  byte local_ef;
  ulong *local_e8;
  ulong uStack_e0;
  ulong *local_d8;
  ulong uStack_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  ulong *local_c0;
  ulong uStack_b8;
  ulong *local_b0;
  ulong uStack_a8;
  ushort local_a0;
  ulong *local_98;
  ulong uStack_90;
  ulong *local_88;
  ulong uStack_80;
  undefined1 local_78;
  undefined1 local_77;
  
  lVar38 = *(long *)(param_1 + 0x10);
  if (lVar38 != 0) {
    lVar40 = 0;
    do {
      puVar25 = (ulong *)(param_1 + 0x20 + lVar40 * 0x38);
      uVar1 = *puVar25;
      puVar32 = (ulong *)puVar25[1];
      uVar19 = puVar25[2];
      uVar21 = puVar25[3];
      puVar14 = (ulong *)puVar25[4];
      uVar39 = puVar25[5];
      bVar3 = (byte)puVar25[6];
      FUN_100545844(puVar32,uVar19,uVar21,puVar14,uVar39,bVar3);
      FUN_100545844(puVar32,uVar19,uVar21,puVar14,uVar39,bVar3);
      uVar18 = uVar19;
      FUN_100545874(puVar32,uVar19,uVar21,puVar14,uVar39,bVar3);
      uVar24 = (uint)(uVar21 >> 0x20);
      uVar23 = uVar24 >> 0x1e;
      uVar33 = (uint)puVar32;
      uVar6 = (undefined1)uVar21;
      if (uVar24 >> 0x1e < 2) {
        if (uVar23 == 0) {
          if ((uVar21 & 1) == 0) {
            if (puVar32 == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439ec);
              (*pcVar13)();
            }
            uVar39 = uVar19 + (long)puVar32;
            puVar14 = puVar32;
          }
          else {
            if ((ulong)puVar32 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439f0);
              (*pcVar13)();
            }
            if (((ulong)puVar32 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a3c);
              (*pcVar13)();
            }
            if ((ulong *)0x10ffff < puVar32) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a04);
              (*pcVar13)();
            }
            if (puVar32 < (ulong *)0x80) {
              uVar24 = uVar33 + 1;
            }
            else {
              uVar7 = (uVar33 & 0x3f) * 0x100;
              uVar23 = (uVar7 | uVar33 >> 6 & 0x3f) * 0x100;
              uVar24 = (uVar33 >> 0x12) + (uVar23 | uVar33 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)puVar32 >> 0x10 == 0) {
                uVar24 = (uVar33 >> 0xc) + uVar23 + 0x8181e1;
              }
              if (puVar32 < (ulong *)0x800) {
                uVar24 = ((uint)((ulong)puVar32 >> 6) & 0x3ffffff) + uVar7 + 0x81c1;
              }
            }
            uVar18 = (ulong)(4 - ((uint)LZCOUNT(uVar24) >> 3));
            local_1f0 = (ulong)uVar24 + 0xfefefefefefeff &
                        (-1L << ((uVar18 & 7) << 3) ^ 0xffffffffffffffffU);
            puVar14 = &local_1f0;
            FUN_1005420a0();
            uVar39 = uVar18;
          }
          local_189 = 1;
          uVar15 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar24 = (uint)uVar15;
          uVar34 = unaff_x20[1];
          uVar28 = uVar1;
          local_198 = uVar34;
          FUN_1003618e4();
          uVar26 = (ulong)~(uint)uVar18 & 1;
          lVar30 = *(long *)(uVar34 + 0x10) + uVar26;
          if (SCARRY8(*(long *)(uVar34 + 0x10),uVar26)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439cc);
            (*pcVar13)();
          }
          if (*(long *)(uVar34 + 0x18) < lVar30) {
            FUN_10054b83c(lVar30);
            uVar28 = uVar1;
            FUN_1003618e4();
            if (((uint)uVar18 & 1) != (uVar24 & 1)) goto LAB_100543a50;
          }
          else if ((uVar15 & 1) == 0) {
            FUN_10054aab4();
          }
          uVar15 = local_198;
          uVar5 = (ushort)uVar21 & 0xff | 0x100;
          if ((uVar18 & 1) == 0) {
            lVar30 = local_198 + (uVar28 >> 6) * 8;
            *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << (uVar28 & 0x3f);
            *(ulong *)(*(long *)(local_198 + 0x30) + uVar28 * 8) = uVar1;
            puVar25 = (ulong *)(*(long *)(local_198 + 0x38) + uVar28 * 0x50);
            *puVar25 = (ulong)puVar14;
            puVar25[1] = uVar39;
            puVar25[2] = (ulong)puVar32;
            puVar25[3] = uVar19;
            *(ushort *)(puVar25 + 4) = uVar5;
            puVar25[5] = (ulong)puVar14;
            puVar25[6] = uVar39;
            puVar25[7] = (ulong)puVar32;
            puVar25[8] = uVar19;
            *(undefined1 *)(puVar25 + 9) = uVar6;
            *(byte *)((long)puVar25 + 0x49) = local_189;
            if (SCARRY8(*(long *)(local_198 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a14);
              (*pcVar13)();
            }
            *(long *)(local_198 + 0x10) = *(long *)(local_198 + 0x10) + 1;
          }
          else {
            puVar25 = (ulong *)(*(long *)(local_198 + 0x38) + uVar28 * 0x50);
            uStack_1e8 = puVar25[1];
            local_1f0 = *puVar25;
            uStack_1c8 = puVar25[5];
            local_1d0 = puVar25[4];
            uStack_1c0 = puVar25[6];
            uStack_1ae = *(undefined8 *)((long)puVar25 + 0x42);
            uStack_1d8 = puVar25[3];
            local_1e0 = puVar25[2];
            uStack_1b0 = (undefined2)((ulong)*(undefined8 *)((long)puVar25 + 0x3a) >> 0x30);
            uStack_1b8 = (undefined2)puVar25[7];
            local_1b6 = (undefined6)(puVar25[7] >> 0x10);
            *puVar25 = (ulong)puVar14;
            puVar25[1] = uVar39;
            puVar25[2] = (ulong)puVar32;
            puVar25[3] = uVar19;
            *(ushort *)(puVar25 + 4) = uVar5;
            puVar25[5] = (ulong)puVar14;
            puVar25[6] = uVar39;
            puVar25[7] = (ulong)puVar32;
            puVar25[8] = uVar19;
            *(undefined1 *)(puVar25 + 9) = uVar6;
            *(byte *)((long)puVar25 + 0x49) = local_189;
            FUN_1005460ec(&local_1f0);
          }
          unaff_x20[1] = uVar15;
          uVar18 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar15 = unaff_x20[2];
          puVar25 = puVar14;
          uVar21 = uVar39;
          local_1f0 = uVar15;
          FUN_100511c0c();
          uVar28 = (ulong)~(uint)uVar21 & 1;
          lVar30 = *(long *)(uVar15 + 0x10) + uVar28;
          if (SCARRY8(*(long *)(uVar15 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439d0);
            (*pcVar13)();
          }
          if (*(long *)(uVar15 + 0x18) < lVar30) {
            FUN_10054b524(lVar30,uVar18);
            puVar25 = puVar14;
            uVar18 = uVar39;
            FUN_100511c0c();
            if (((uint)uVar21 & 1) != ((uint)uVar18 & 1)) goto LAB_100543a40;
LAB_1005431d0:
            if ((uVar21 & 1) == 0) goto LAB_100543574;
LAB_1005431d8:
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar25 * 8) = uVar1;
          }
          else {
            if ((uVar18 & 1) != 0) goto LAB_1005431d0;
            FUN_10054a934();
            if ((uVar21 & 1) != 0) goto LAB_1005431d8;
LAB_100543574:
            lVar30 = local_1f0 + ((ulong)puVar25 >> 6) * 8;
            *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << ((ulong)puVar25 & 0x3f);
            puVar29 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)puVar25 * 0x28);
            *puVar29 = (ulong)puVar14;
            puVar29[1] = uVar39;
            puVar29[2] = (ulong)puVar32;
            puVar29[3] = uVar19;
            *(undefined1 *)(puVar29 + 4) = uVar6;
            *(undefined1 *)((long)puVar29 + 0x21) = 1;
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar25 * 8) = uVar1;
            if (SCARRY8(*(long *)(local_1f0 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a1c);
              (*pcVar13)();
            }
            *(long *)(local_1f0 + 0x10) = *(long *)(local_1f0 + 0x10) + 1;
          }
          unaff_x20[2] = local_1f0;
          uVar18 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar15 = unaff_x20[3];
          puVar25 = puVar14;
          uVar21 = uVar39;
          local_1f0 = uVar15;
          FUN_100511c0c();
          uVar28 = (ulong)~(uint)uVar21 & 1;
          lVar30 = *(long *)(uVar15 + 0x10) + uVar28;
          if (SCARRY8(*(long *)(uVar15 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439d8);
            (*pcVar13)();
          }
          if (*(long *)(uVar15 + 0x18) < lVar30) {
            FUN_10054b524(lVar30,uVar18);
            puVar25 = puVar14;
            uVar18 = uVar39;
            FUN_100511c0c();
            if (((uint)uVar21 & 1) != ((uint)uVar18 & 1)) {
LAB_100543a40:
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (&DAT_1009d0ee0);
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a50);
              (*pcVar13)();
            }
          }
          else if ((uVar18 & 1) == 0) {
            FUN_10054a934();
          }
          if ((uVar21 & 1) != 0) goto LAB_1005425c4;
          lVar30 = local_1f0 + ((ulong)puVar25 >> 6) * 8;
          *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << ((ulong)puVar25 & 0x3f);
          puVar29 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)puVar25 * 0x28);
          *puVar29 = (ulong)puVar14;
          puVar29[1] = uVar39;
          puVar29[2] = (ulong)puVar32;
          puVar29[3] = uVar19;
          *(undefined1 *)(puVar29 + 4) = uVar6;
          *(undefined1 *)((long)puVar29 + 0x21) = 1;
          *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar25 * 8) = uVar1;
          lVar30 = *(long *)(local_1f0 + 0x10);
          if (SCARRY8(lVar30,1)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a24);
            (*pcVar13)();
          }
LAB_100543960:
          *(long *)(local_1f0 + 0x10) = lVar30 + 1;
        }
        else {
          lVar30 = *unaff_x20;
          _swift_retain(lVar30);
          FUN_100545438(&local_188,puVar32,uVar19,uVar21,lVar30);
          bVar3 = local_167;
          uVar6 = local_168;
          uVar12 = uStack_170;
          uVar11 = local_178;
          uVar10 = uStack_180;
          uVar9 = local_188;
          if ((local_167 & 1) == 0) {
            _swift_bridgeObjectRetain(uStack_170);
            uVar20 = uVar12;
          }
          else {
            uVar20 = uStack_170;
            __ss12StaticStringV11descriptionSSvg(local_178,uStack_170,local_168);
          }
          uVar22 = uVar20;
          FUN_100541db0();
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRetain(uVar22);
          FUN_100541ed8();
          _swift_bridgeObjectRelease(uVar22);
          local_140 = 0;
          local_189 = bVar3;
          local_118 = 0;
          local_116 = (undefined4)local_198;
          local_112 = local_198._4_2_;
          uStack_f8 = uVar12;
          local_100 = uVar11;
          uStack_108 = uVar10;
          local_110 = uVar9;
          local_f0 = uVar6;
          local_ef = bVar3;
          FUN_100546118(&local_188,&local_1f0);
          _swift_bridgeObjectRetain(uVar22);
          lVar30 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native(lVar30);
          local_1f0 = unaff_x20[1];
          FUN_100521254(local_138,uVar1,lVar30);
          unaff_x20[1] = local_1f0;
          lVar30 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native(lVar30);
          local_1f0 = unaff_x20[2];
          FUN_100521130(uVar1,&local_188,lVar30);
          unaff_x20[2] = local_1f0;
          lVar30 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native(lVar30);
          local_1f0 = unaff_x20[3];
          FUN_100521130(uVar1,&local_188,lVar30);
          FUN_100545ef0(&local_188);
          unaff_x20[3] = local_1f0;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar19 = local_1f0;
          local_1f0 = unaff_x20[3];
          FUN_100521130(uVar1,local_160,uVar19);
          _swift_bridgeObjectRelease(uVar22);
        }
LAB_1005425d0:
        unaff_x20[3] = local_1f0;
      }
      else {
        if (uVar23 == 2) {
          lVar30 = *unaff_x20;
          if ((bVar3 & 1) == 0) {
            if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439f8);
              (*pcVar13)();
            }
            _swift_retain(lVar30);
            uVar28 = uVar39 + (long)puVar14;
            local_210 = puVar14;
            if ((uVar21 & 1) != 0) goto LAB_1005428d0;
LAB_1005426cc:
            _swift_release(lVar30);
            if (puVar32 == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a0c);
              (*pcVar13)();
            }
            uVar21 = uVar19 + (long)puVar32;
            puVar25 = puVar32;
          }
          else {
            if ((ulong)puVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439f4);
              (*pcVar13)();
            }
            if (((ulong)puVar14 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a38);
              (*pcVar13)();
            }
            if ((ulong *)0x10ffff < puVar14) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a00);
              (*pcVar13)();
            }
            _swift_retain(lVar30);
            uVar24 = (uint)puVar14;
            if (puVar14 < (ulong *)0x80) {
              uVar23 = uVar24 + 1;
            }
            else {
              uVar8 = (uVar24 & 0x3f) * 0x100;
              uVar7 = (uVar8 | uVar24 >> 6 & 0x3f) * 0x100;
              uVar23 = (uVar24 >> 0x12) + (uVar7 | uVar24 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)puVar14 >> 0x10 == 0) {
                uVar23 = (uVar24 >> 0xc) + uVar7 + 0x8181e1;
              }
              if (puVar14 < (ulong *)0x800) {
                uVar23 = (uVar24 >> 6) + uVar8 + 0x81c1;
              }
            }
            uVar18 = (ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
            local_1f0 = (ulong)uVar23 + 0xfefefefefefeff &
                        (-1L << ((uVar18 & 7) << 3) ^ 0xffffffffffffffffU);
            local_210 = &local_1f0;
            FUN_1005420a0();
            uVar28 = uVar18;
            if ((uVar21 & 1) == 0) goto LAB_1005426cc;
LAB_1005428d0:
            if ((ulong)puVar32 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a10);
              (*pcVar13)();
            }
            if (((ulong)puVar32 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a40);
              (*pcVar13)();
            }
            if ((ulong *)0x10ffff < puVar32) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a18);
              (*pcVar13)();
            }
            if (puVar32 < (ulong *)0x80) {
              uVar24 = uVar33 + 1;
            }
            else {
              uVar7 = (uVar33 & 0x3f) * 0x100;
              uVar23 = (uVar7 | uVar33 >> 6 & 0x3f) * 0x100;
              uVar24 = (uVar33 >> 0x12) + (uVar23 | uVar33 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)puVar32 >> 0x10 == 0) {
                uVar24 = (uVar33 >> 0xc) + uVar23 + 0x8181e1;
              }
              if (puVar32 < (ulong *)0x800) {
                uVar24 = ((uint)((ulong)puVar32 >> 6) & 0x3ffffff) + uVar7 + 0x81c1;
              }
            }
            uVar21 = (ulong)(4 - ((uint)LZCOUNT(uVar24) >> 3));
            local_1f0 = (ulong)uVar24 + 0xfefefefefefeff &
                        (-1L << ((uVar21 & 7) << 3) ^ 0xffffffffffffffffU);
            puVar25 = &local_1f0;
            FUN_1005420a0();
            uVar18 = uVar21;
            _swift_release(lVar30);
          }
          local_189 = 1;
          uVar26 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar24 = (uint)uVar26;
          uVar35 = unaff_x20[1];
          uVar15 = uVar1;
          local_198 = uVar35;
          FUN_1003618e4();
          uVar34 = (ulong)~(uint)uVar18 & 1;
          lVar30 = *(long *)(uVar35 + 0x10) + uVar34;
          if (SCARRY8(*(long *)(uVar35 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439d4);
            (*pcVar13)();
          }
          if (*(long *)(uVar35 + 0x18) < lVar30) {
            FUN_10054b83c(lVar30);
            uVar15 = uVar1;
            FUN_1003618e4();
            if (((uint)uVar18 & 1) != (uVar24 & 1)) {
LAB_100543a50:
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a60);
              (*pcVar13)();
            }
          }
          else if ((uVar26 & 1) == 0) {
            FUN_10054aab4();
          }
          uVar26 = local_198;
          if ((uVar18 & 1) == 0) {
            lVar30 = local_198 + (uVar15 >> 6) * 8;
            *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << (uVar15 & 0x3f);
            *(ulong *)(*(long *)(local_198 + 0x30) + uVar15 * 8) = uVar1;
            puVar29 = (ulong *)(*(long *)(local_198 + 0x38) + uVar15 * 0x50);
            *puVar29 = (ulong)local_210;
            puVar29[1] = uVar28;
            puVar29[2] = (ulong)puVar14;
            puVar29[3] = uVar39;
            *(ushort *)(puVar29 + 4) = bVar3 | 0x100;
            puVar29[5] = (ulong)puVar25;
            puVar29[6] = uVar21;
            puVar29[7] = (ulong)puVar32;
            puVar29[8] = uVar19;
            *(undefined1 *)(puVar29 + 9) = uVar6;
            *(byte *)((long)puVar29 + 0x49) = local_189;
            if (SCARRY8(*(long *)(local_198 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a20);
              (*pcVar13)();
            }
            *(long *)(local_198 + 0x10) = *(long *)(local_198 + 0x10) + 1;
          }
          else {
            puVar29 = (ulong *)(*(long *)(local_198 + 0x38) + uVar15 * 0x50);
            uStack_1e8 = puVar29[1];
            local_1f0 = *puVar29;
            uStack_1c8 = puVar29[5];
            local_1d0 = puVar29[4];
            uStack_1c0 = puVar29[6];
            uStack_1ae = *(undefined8 *)((long)puVar29 + 0x42);
            uStack_1d8 = puVar29[3];
            local_1e0 = puVar29[2];
            uStack_1b0 = (undefined2)((ulong)*(undefined8 *)((long)puVar29 + 0x3a) >> 0x30);
            uStack_1b8 = (undefined2)puVar29[7];
            local_1b6 = (undefined6)(puVar29[7] >> 0x10);
            *puVar29 = (ulong)local_210;
            puVar29[1] = uVar28;
            puVar29[2] = (ulong)puVar14;
            puVar29[3] = uVar39;
            *(ushort *)(puVar29 + 4) = bVar3 | 0x100;
            puVar29[5] = (ulong)puVar25;
            puVar29[6] = uVar21;
            puVar29[7] = (ulong)puVar32;
            puVar29[8] = uVar19;
            *(undefined1 *)(puVar29 + 9) = uVar6;
            *(byte *)((long)puVar29 + 0x49) = local_189;
            FUN_1005460ec(&local_1f0);
          }
          unaff_x20[1] = uVar26;
          uVar15 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar34 = unaff_x20[2];
          puVar29 = puVar25;
          uVar18 = uVar21;
          local_1f0 = uVar34;
          FUN_100511c0c();
          uVar26 = (ulong)~(uint)uVar18 & 1;
          lVar30 = *(long *)(uVar34 + 0x10) + uVar26;
          if (SCARRY8(*(long *)(uVar34 + 0x10),uVar26)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439dc);
            (*pcVar13)();
          }
          if (*(long *)(uVar34 + 0x18) < lVar30) {
            FUN_10054b524(lVar30,uVar15);
            puVar29 = puVar25;
            uVar15 = uVar21;
            FUN_100511c0c();
            if (((uint)uVar18 & 1) != ((uint)uVar15 & 1)) goto LAB_100543a40;
LAB_100543364:
            if ((uVar18 & 1) == 0) goto LAB_100543704;
LAB_10054336c:
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar29 * 8) = uVar1;
          }
          else {
            if ((uVar15 & 1) != 0) goto LAB_100543364;
            FUN_10054a934();
            if ((uVar18 & 1) != 0) goto LAB_10054336c;
LAB_100543704:
            lVar30 = local_1f0 + ((ulong)puVar29 >> 6) * 8;
            *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << ((ulong)puVar29 & 0x3f);
            puVar31 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)puVar29 * 0x28);
            *puVar31 = (ulong)puVar25;
            puVar31[1] = uVar21;
            puVar31[2] = (ulong)puVar32;
            puVar31[3] = uVar19;
            *(undefined1 *)(puVar31 + 4) = uVar6;
            *(undefined1 *)((long)puVar31 + 0x21) = 1;
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar29 * 8) = uVar1;
            if (SCARRY8(*(long *)(local_1f0 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a28);
              (*pcVar13)();
            }
            *(long *)(local_1f0 + 0x10) = *(long *)(local_1f0 + 0x10) + 1;
          }
          unaff_x20[2] = local_1f0;
          uVar15 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar34 = unaff_x20[3];
          puVar29 = puVar25;
          uVar18 = uVar21;
          local_1f0 = uVar34;
          FUN_100511c0c();
          uVar26 = (ulong)~(uint)uVar18 & 1;
          lVar30 = *(long *)(uVar34 + 0x10) + uVar26;
          if (SCARRY8(*(long *)(uVar34 + 0x10),uVar26)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439e0);
            (*pcVar13)();
          }
          if (*(long *)(uVar34 + 0x18) < lVar30) {
            FUN_10054b524(lVar30,uVar15);
            puVar29 = puVar25;
            uVar15 = uVar21;
            FUN_100511c0c();
            if (((uint)uVar18 & 1) != ((uint)uVar15 & 1)) goto LAB_100543a40;
LAB_1005437e4:
            if ((uVar18 & 1) == 0) goto LAB_100543814;
LAB_1005437ec:
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar29 * 8) = uVar1;
          }
          else {
            if ((uVar15 & 1) != 0) goto LAB_1005437e4;
            FUN_10054a934();
            if ((uVar18 & 1) != 0) goto LAB_1005437ec;
LAB_100543814:
            lVar30 = local_1f0 + ((ulong)puVar29 >> 6) * 8;
            *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << ((ulong)puVar29 & 0x3f);
            puVar31 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)puVar29 * 0x28);
            *puVar31 = (ulong)puVar25;
            puVar31[1] = uVar21;
            puVar31[2] = (ulong)puVar32;
            puVar31[3] = uVar19;
            *(undefined1 *)(puVar31 + 4) = uVar6;
            *(undefined1 *)((long)puVar31 + 0x21) = 1;
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar29 * 8) = uVar1;
            if (SCARRY8(*(long *)(local_1f0 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a2c);
              (*pcVar13)();
            }
            *(long *)(local_1f0 + 0x10) = *(long *)(local_1f0 + 0x10) + 1;
          }
          unaff_x20[3] = local_1f0;
          uVar19 = local_1f0;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar15 = unaff_x20[3];
          puVar25 = local_210;
          uVar21 = uVar28;
          local_1f0 = uVar15;
          FUN_100511c0c();
          uVar18 = (ulong)~(uint)uVar21 & 1;
          lVar30 = *(long *)(uVar15 + 0x10) + uVar18;
          if (SCARRY8(*(long *)(uVar15 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439e4);
            (*pcVar13)();
          }
          if (*(long *)(uVar15 + 0x18) < lVar30) {
            FUN_10054b524(lVar30,uVar19);
            puVar25 = local_210;
            uVar19 = uVar28;
            FUN_100511c0c();
            if (((uint)uVar21 & 1) != ((uint)uVar19 & 1)) goto LAB_100543a40;
          }
          else if ((uVar19 & 1) == 0) {
            FUN_10054a934();
          }
          if ((uVar21 & 1) == 0) {
            lVar30 = local_1f0 + ((ulong)puVar25 >> 6) * 8;
            *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << ((ulong)puVar25 & 0x3f);
            puVar32 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)puVar25 * 0x28);
            *puVar32 = (ulong)local_210;
            puVar32[1] = uVar28;
            puVar32[2] = (ulong)puVar14;
            puVar32[3] = uVar39;
            *(byte *)(puVar32 + 4) = bVar3;
            *(undefined1 *)((long)puVar32 + 0x21) = 1;
            *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar25 * 8) = uVar1;
            lVar30 = *(long *)(local_1f0 + 0x10);
            if (SCARRY8(lVar30,1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a30);
              (*pcVar13)();
            }
            goto LAB_100543960;
          }
LAB_1005425c4:
          *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)puVar25 * 8) = uVar1;
          goto LAB_1005425d0;
        }
        lVar30 = *unaff_x20;
        if ((uVar21 & 1) == 0) {
          if (puVar32 == (ulong *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439fc);
            (*pcVar13)();
          }
          uVar18 = uVar19 + (long)puVar32;
          puVar25 = puVar32;
        }
        else {
          if ((ulong)puVar32 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439e8);
            (*pcVar13)();
          }
          if (((ulong)puVar32 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a34);
            (*pcVar13)();
          }
          if ((ulong *)0x10ffff < puVar32) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100543a08);
            (*pcVar13)();
          }
          if (puVar32 < (ulong *)0x80) {
            uVar24 = uVar33 + 1;
          }
          else {
            uVar7 = (uVar33 & 0x3f) * 0x100;
            uVar23 = (uVar7 | uVar33 >> 6 & 0x3f) * 0x100;
            uVar24 = (uVar33 >> 0x12) + (uVar23 | uVar33 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)puVar32 >> 0x10 == 0) {
              uVar24 = (uVar33 >> 0xc) + uVar23 + 0x8181e1;
            }
            if (puVar32 < (ulong *)0x800) {
              uVar24 = (uVar33 >> 6) + uVar7 + 0x81c1;
            }
          }
          uVar18 = (ulong)(4 - ((uint)LZCOUNT(uVar24) >> 3));
          local_1f0 = (ulong)uVar24 + 0xfefefefefefeff &
                      (-1L << ((uVar18 & 7) << 3) ^ 0xffffffffffffffffU);
          puVar25 = &local_1f0;
          FUN_1005420a0();
        }
        local_c7 = 1;
        local_a0 = (ushort)uVar21 & 0xff | 0x100;
        local_189 = 1;
        local_77 = 1;
        lVar16 = unaff_x20[1];
        local_e8 = puVar25;
        uStack_e0 = uVar18;
        local_d8 = puVar32;
        uStack_d0 = uVar19;
        local_c8 = uVar6;
        local_c0 = puVar25;
        uStack_b8 = uVar18;
        local_b0 = puVar32;
        uStack_a8 = uVar19;
        local_98 = puVar25;
        uStack_90 = uVar18;
        local_88 = puVar32;
        uStack_80 = uVar19;
        local_78 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native(lVar16);
        local_1f0 = unaff_x20[1];
        FUN_100521254(&local_c0,uVar1,lVar16);
        unaff_x20[1] = local_1f0;
        lVar16 = unaff_x20[2];
        _swift_isUniquelyReferenced_nonNull_native(lVar16);
        local_1f0 = unaff_x20[2];
        FUN_100521130(uVar1,&local_e8,lVar16);
        unaff_x20[2] = local_1f0;
        lVar16 = unaff_x20[3];
        _swift_isUniquelyReferenced_nonNull_native(lVar16);
        local_1f0 = unaff_x20[3];
        FUN_100521130(uVar1,&local_e8,lVar16);
        unaff_x20[3] = local_1f0;
        uVar18 = puVar14[2];
        if (uVar18 != 0) {
          uVar28 = 0;
          puVar25 = puVar14 + 6;
          do {
            if (puVar14[2] <= uVar28) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439a8);
              (*pcVar13)();
            }
            pvVar2 = (void *)puVar25[-2];
            uVar15 = puVar25[-1];
            bVar4 = (byte)*puVar25;
            if ((bVar4 & 1) == 0) {
              if (pvVar2 == (void *)0x0) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439b8);
                (*pcVar13)();
              }
              uVar34 = uVar15 + (long)pvVar2;
              pvVar17 = pvVar2;
            }
            else {
              if ((ulong)pvVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439b4);
                (*pcVar13)();
              }
              if (((ulong)pvVar2 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439c8);
                (*pcVar13)();
              }
              if ((void *)0x10ffff < pvVar2) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439bc);
                (*pcVar13)();
              }
              uVar24 = (uint)pvVar2;
              if (pvVar2 < (void *)0x80) {
                uVar24 = uVar24 + 1;
              }
              else {
                uVar7 = (uVar24 & 0x3f) * 0x100;
                uVar33 = (uVar7 | uVar24 >> 6 & 0x3f) * 0x100;
                uVar23 = (uVar24 >> 0x12) + (uVar33 | uVar24 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
                if ((ulong)pvVar2 >> 0x10 == 0) {
                  uVar23 = (uVar24 >> 0xc) + uVar33 + 0x8181e1;
                }
                uVar24 = (uVar24 >> 6) + uVar7 + 0x81c1;
                if ((void *)0x7ff < pvVar2) {
                  uVar24 = uVar23;
                }
              }
              pvVar36 = (void *)(ulong)(4 - ((uint)LZCOUNT(uVar24) >> 3));
              local_198 = (ulong)uVar24 + 0xfefefefefefeff &
                          (-1L << (((ulong)pvVar36 & 7) << 3) ^ 0xffffffffffffffffU);
              pvVar17 = pvVar36;
              _swift_slowAlloc(pvVar36,0xffffffffffffffff);
              _memcpy(pvVar17,&local_198,(size_t)pvVar36);
              _swift_beginAccess(lVar30 + 0x10,&local_1f0,0x21,0);
              uVar35 = *(ulong *)(lVar30 + 0x10);
              uVar26 = uVar35;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(lVar30 + 0x10) = uVar35;
              uVar34 = uVar35;
              if ((uVar26 & 1) == 0) {
                uVar34 = 0;
                FUN_100506e84(0,*(long *)(uVar35 + 0x10) + 1,1,uVar35);
                *(ulong *)(lVar30 + 0x10) = uVar34;
              }
              uVar26 = *(ulong *)(uVar34 + 0x10);
              uVar35 = uVar34;
              if (*(ulong *)(uVar34 + 0x18) >> 1 <= uVar26) {
                uVar35 = (ulong)(1 < *(ulong *)(uVar34 + 0x18));
                FUN_100506e84(uVar35,uVar26 + 1,1,uVar34);
              }
              uVar34 = (long)pvVar17 + (long)pvVar36;
              *(ulong *)(uVar35 + 0x10) = uVar26 + 1;
              lVar16 = uVar35 + uVar26 * 0x10;
              *(void **)(lVar16 + 0x20) = pvVar17;
              *(ulong *)(lVar16 + 0x28) = uVar34;
              *(ulong *)(lVar30 + 0x10) = uVar35;
              _swift_endAccess(&local_1f0);
            }
            uVar35 = unaff_x20[2];
            _swift_isUniquelyReferenced_nonNull_native();
            uVar37 = unaff_x20[2];
            pvVar36 = pvVar17;
            uVar26 = uVar34;
            local_1f0 = uVar37;
            FUN_100511c0c();
            uVar27 = (ulong)~(uint)uVar26 & 1;
            lVar16 = *(long *)(uVar37 + 0x10) + uVar27;
            if (SCARRY8(*(long *)(uVar37 + 0x10),uVar27)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439ac);
              (*pcVar13)();
            }
            if (*(long *)(uVar37 + 0x18) < lVar16) {
              FUN_10054b524(lVar16,uVar35);
              pvVar36 = pvVar17;
              uVar35 = uVar34;
              FUN_100511c0c();
              if (((uint)uVar26 & 1) != ((uint)uVar35 & 1)) goto LAB_100543a40;
            }
            else if ((uVar35 & 1) == 0) {
              FUN_10054a934();
            }
            if ((uVar26 & 1) == 0) {
              lVar16 = local_1f0 + ((ulong)pvVar36 >> 6) * 8;
              *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << ((ulong)pvVar36 & 0x3f);
              puVar29 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)pvVar36 * 0x28);
              *puVar29 = (ulong)pvVar17;
              puVar29[1] = uVar34;
              puVar29[2] = (ulong)pvVar2;
              puVar29[3] = uVar15;
              *(byte *)(puVar29 + 4) = bVar4;
              *(undefined1 *)((long)puVar29 + 0x21) = 1;
              *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)pvVar36 * 8) = uVar1;
              if (SCARRY8(*(long *)(local_1f0 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439c0);
                (*pcVar13)();
              }
              *(long *)(local_1f0 + 0x10) = *(long *)(local_1f0 + 0x10) + 1;
            }
            else {
              *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)pvVar36 * 8) = uVar1;
            }
            unaff_x20[2] = local_1f0;
            uVar35 = unaff_x20[3];
            _swift_isUniquelyReferenced_nonNull_native();
            uVar37 = unaff_x20[3];
            pvVar36 = pvVar17;
            uVar26 = uVar34;
            local_1f0 = uVar37;
            FUN_100511c0c();
            uVar27 = (ulong)~(uint)uVar26 & 1;
            lVar16 = *(long *)(uVar37 + 0x10) + uVar27;
            if (SCARRY8(*(long *)(uVar37 + 0x10),uVar27)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439b0);
              (*pcVar13)();
            }
            if (*(long *)(uVar37 + 0x18) < lVar16) {
              FUN_10054b524(lVar16,uVar35);
              pvVar36 = pvVar17;
              uVar35 = uVar34;
              FUN_100511c0c();
              if (((uint)uVar26 & 1) != ((uint)uVar35 & 1)) goto LAB_100543a40;
LAB_100542f20:
              if ((uVar26 & 1) != 0) goto LAB_100542c7c;
LAB_100542f28:
              lVar16 = local_1f0 + ((ulong)pvVar36 >> 6) * 8;
              *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << ((ulong)pvVar36 & 0x3f);
              puVar29 = (ulong *)(*(long *)(local_1f0 + 0x30) + (long)pvVar36 * 0x28);
              *puVar29 = (ulong)pvVar17;
              puVar29[1] = uVar34;
              puVar29[2] = (ulong)pvVar2;
              puVar29[3] = uVar15;
              *(byte *)(puVar29 + 4) = bVar4;
              *(undefined1 *)((long)puVar29 + 0x21) = 1;
              *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)pvVar36 * 8) = uVar1;
              if (SCARRY8(*(long *)(local_1f0 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1005439c4);
                (*pcVar13)();
              }
              *(long *)(local_1f0 + 0x10) = *(long *)(local_1f0 + 0x10) + 1;
            }
            else {
              if ((uVar35 & 1) != 0) goto LAB_100542f20;
              FUN_10054a934();
              if ((uVar26 & 1) == 0) goto LAB_100542f28;
LAB_100542c7c:
              *(ulong *)(*(long *)(local_1f0 + 0x38) + (long)pvVar36 * 8) = uVar1;
            }
            uVar28 = uVar28 + 1;
            unaff_x20[3] = local_1f0;
            puVar25 = puVar25 + 3;
          } while (uVar18 != uVar28);
        }
        FUN_100545874(puVar32,uVar19,uVar21,puVar14,uVar39,bVar3);
      }
      lVar40 = lVar40 + 1;
    } while (lVar40 != lVar38);
  }
  return;
}

