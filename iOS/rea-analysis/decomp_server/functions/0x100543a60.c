// rea decompile_all
// name: FUN_100543a60
// address: 0x100543a60
// body: available
// range: 0x100543a60-0x1005451b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100543a60(long param_1,undefined1 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  ulong *puVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puVar32;
  long lVar33;
  ulong uVar34;
  ulong *puVar35;
  ulong *puVar36;
  uint uVar37;
  long *unaff_x20;
  ulong uVar38;
  ulong uVar39;
  void *pvVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  ulong *local_1a8;
  undefined1 *local_190;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined2 uStack_138;
  undefined6 local_136;
  undefined2 uStack_130;
  undefined8 uStack_12e;
  undefined8 local_120;
  byte local_111;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  byte local_ef;
  undefined1 local_e8 [32];
  undefined2 local_c8;
  undefined1 local_c0 [32];
  undefined2 local_a0;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  byte local_77;
  
  lVar42 = *(long *)(param_1 + 0x10);
  if (lVar42 != 0) {
    lVar43 = 0;
    do {
      puVar28 = (ulong *)(param_1 + 0x20 + lVar43 * 0x38);
      uVar2 = *puVar28;
      puVar36 = (ulong *)puVar28[1];
      puVar25 = (undefined1 *)puVar28[2];
      uVar17 = puVar28[3];
      uVar27 = (uint)(uVar17 >> 0x20);
      uVar29 = uVar27 >> 0x1e;
      uVar37 = (uint)puVar36;
      uVar6 = (undefined1)uVar17;
      if (uVar27 >> 0x1e < 2) {
        if (uVar29 == 0) {
          if ((uVar17 & 1) == 0) {
            if (puVar36 == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545138);
              (*pcVar14)();
            }
            puVar15 = puVar36;
            puVar26 = puVar25 + (long)puVar36;
          }
          else {
            if ((ulong)puVar36 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545140);
              (*pcVar14)();
            }
            if (((ulong)puVar36 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10054518c);
              (*pcVar14)();
            }
            if ((ulong *)0x10ffff < puVar36) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545150);
              (*pcVar14)();
            }
            if (puVar36 < (ulong *)0x80) {
              uVar27 = uVar37 + 1;
            }
            else {
              uVar8 = (uVar37 & 0x3f) * 0x100;
              uVar29 = (uVar8 | uVar37 >> 6 & 0x3f) * 0x100;
              uVar27 = (uVar37 >> 0x12) + (uVar29 | uVar37 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)puVar36 >> 0x10 == 0) {
                uVar27 = (uVar37 >> 0xc) + uVar29 + 0x8181e1;
              }
              if (puVar36 < (ulong *)0x800) {
                uVar27 = ((uint)((ulong)puVar36 >> 6) & 0x3ffffff) + uVar8 + 0x81c1;
              }
            }
            param_2 = (undefined1 *)(ulong)(4 - ((uint)LZCOUNT(uVar27) >> 3));
            local_170 = (ulong)uVar27 + 0xfefefefefefeff &
                        (-1L << (((ulong)param_2 & 7) << 3) ^ 0xffffffffffffffffU);
            puVar15 = &local_170;
            FUN_1005420a0();
            puVar26 = param_2;
          }
          local_111 = 1;
          uVar16 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar27 = (uint)uVar16;
          uVar38 = unaff_x20[1];
          uVar31 = uVar2;
          local_120 = uVar38;
          FUN_1003618e4();
          uVar30 = (ulong)~(uint)param_2 & 1;
          lVar33 = *(long *)(uVar38 + 0x10) + uVar30;
          if (SCARRY8(*(long *)(uVar38 + 0x10),uVar30)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545108);
            (*pcVar14)();
          }
          if (*(long *)(uVar38 + 0x18) < lVar33) {
            FUN_10054b83c(lVar33);
            uVar31 = uVar2;
            FUN_1003618e4();
            if (((uint)param_2 & 1) != (uVar27 & 1)) goto LAB_1005451a4;
          }
          else if ((uVar16 & 1) == 0) {
            FUN_10054aab4();
          }
          uVar16 = local_120;
          uVar7 = (ushort)uVar17 & 0xff | 0x100;
          if (((ulong)param_2 & 1) == 0) {
            lVar33 = local_120 + (uVar31 >> 6) * 8;
            *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << (uVar31 & 0x3f);
            *(ulong *)(*(long *)(local_120 + 0x30) + uVar31 * 8) = uVar2;
            puVar28 = (ulong *)(*(long *)(local_120 + 0x38) + uVar31 * 0x50);
            *puVar28 = (ulong)puVar15;
            puVar28[1] = (ulong)puVar26;
            puVar28[2] = (ulong)puVar36;
            puVar28[3] = (ulong)puVar25;
            *(ushort *)(puVar28 + 4) = uVar7;
            puVar28[5] = (ulong)puVar15;
            puVar28[6] = (ulong)puVar26;
            puVar28[7] = (ulong)puVar36;
            puVar28[8] = (ulong)puVar25;
            *(undefined1 *)(puVar28 + 9) = uVar6;
            *(byte *)((long)puVar28 + 0x49) = local_111;
            if (SCARRY8(*(long *)(local_120 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545160);
              (*pcVar14)();
            }
            *(long *)(local_120 + 0x10) = *(long *)(local_120 + 0x10) + 1;
          }
          else {
            puVar28 = (ulong *)(*(long *)(local_120 + 0x38) + uVar31 * 0x50);
            uStack_168 = puVar28[1];
            local_170 = *puVar28;
            uStack_148 = puVar28[5];
            local_150 = puVar28[4];
            uStack_140 = puVar28[6];
            uStack_12e = *(undefined8 *)((long)puVar28 + 0x42);
            uStack_158 = puVar28[3];
            local_160 = puVar28[2];
            uStack_130 = (undefined2)((ulong)*(undefined8 *)((long)puVar28 + 0x3a) >> 0x30);
            uStack_138 = (undefined2)puVar28[7];
            local_136 = (undefined6)(puVar28[7] >> 0x10);
            *puVar28 = (ulong)puVar15;
            puVar28[1] = (ulong)puVar26;
            puVar28[2] = (ulong)puVar36;
            puVar28[3] = (ulong)puVar25;
            *(ushort *)(puVar28 + 4) = uVar7;
            puVar28[5] = (ulong)puVar15;
            puVar28[6] = (ulong)puVar26;
            puVar28[7] = (ulong)puVar36;
            puVar28[8] = (ulong)puVar25;
            *(undefined1 *)(puVar28 + 9) = uVar6;
            *(byte *)((long)puVar28 + 0x49) = local_111;
            FUN_1005460ec(&local_170);
          }
          unaff_x20[1] = uVar16;
          uVar17 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar16 = unaff_x20[2];
          puVar28 = puVar15;
          puVar23 = puVar26;
          local_170 = uVar16;
          FUN_100511c0c();
          uVar31 = (ulong)~(uint)puVar23 & 1;
          lVar33 = *(long *)(uVar16 + 0x10) + uVar31;
          if (SCARRY8(*(long *)(uVar16 + 0x10),uVar31)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545114);
            (*pcVar14)();
          }
          if (*(long *)(uVar16 + 0x18) < lVar33) {
            FUN_10054b524(lVar33,uVar17);
            puVar28 = puVar15;
            puVar24 = puVar26;
            FUN_100511c0c();
            if (((uint)puVar23 & 1) != ((uint)puVar24 & 1)) goto LAB_100545194;
LAB_100544360:
            if (((ulong)puVar23 & 1) == 0) goto LAB_100544600;
LAB_100544368:
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar28 * 8) = uVar2;
          }
          else {
            if ((uVar17 & 1) != 0) goto LAB_100544360;
            FUN_10054a934();
            if (((ulong)puVar23 & 1) != 0) goto LAB_100544368;
LAB_100544600:
            lVar33 = local_170 + ((ulong)puVar28 >> 6) * 8;
            *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << ((ulong)puVar28 & 0x3f);
            puVar32 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar28 * 0x28);
            *puVar32 = (ulong)puVar15;
            puVar32[1] = (ulong)puVar26;
            puVar32[2] = (ulong)puVar36;
            puVar32[3] = (ulong)puVar25;
            *(undefined1 *)(puVar32 + 4) = uVar6;
            *(undefined1 *)((long)puVar32 + 0x21) = 1;
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar28 * 8) = uVar2;
            if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10054516c);
              (*pcVar14)();
            }
            *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
          }
          unaff_x20[2] = local_170;
          uVar17 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar16 = unaff_x20[3];
          puVar28 = puVar15;
          puVar24 = puVar26;
          local_170 = uVar16;
          FUN_100511c0c();
          uVar31 = (ulong)~(uint)puVar24 & 1;
          lVar33 = *(long *)(uVar16 + 0x10) + uVar31;
          if (SCARRY8(*(long *)(uVar16 + 0x10),uVar31)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545120);
            (*pcVar14)();
          }
          if (*(long *)(uVar16 + 0x18) < lVar33) {
            FUN_10054b524(lVar33,uVar17);
            puVar28 = puVar15;
            puVar23 = puVar26;
            FUN_100511c0c();
            if (((uint)puVar24 & 1) != ((uint)puVar23 & 1)) {
LAB_100545194:
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (&DAT_1009d0ee0);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1005451a4);
              (*pcVar14)();
            }
          }
          else {
            puVar23 = puVar24;
            if ((uVar17 & 1) == 0) {
              FUN_10054a934();
            }
          }
          if (((ulong)puVar24 & 1) != 0) goto LAB_100543aa4;
          lVar33 = local_170 + ((ulong)puVar28 >> 6) * 8;
          *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << ((ulong)puVar28 & 0x3f);
          puVar32 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar28 * 0x28);
          *puVar32 = (ulong)puVar15;
          puVar32[1] = (ulong)puVar26;
          puVar32[2] = (ulong)puVar36;
          puVar32[3] = (ulong)puVar25;
          *(undefined1 *)(puVar32 + 4) = uVar6;
          *(undefined1 *)((long)puVar32 + 0x21) = 1;
          *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar28 * 8) = uVar2;
          lVar33 = *(long *)(local_170 + 0x10);
          if (SCARRY8(lVar33,1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545174);
            (*pcVar14)();
          }
LAB_1005450a4:
          *(long *)(local_170 + 0x10) = lVar33 + 1;
          puVar25 = puVar23;
        }
        else {
          lVar33 = *unaff_x20;
          _swift_retain(lVar33);
          FUN_100545438(&local_110,puVar36,puVar25,uVar17,lVar33);
          bVar4 = local_ef;
          uVar6 = local_f0;
          uVar13 = uStack_f8;
          uVar12 = uStack_100;
          uVar11 = uStack_108;
          uVar10 = local_110;
          if ((local_ef & 1) == 0) {
            _swift_bridgeObjectRetain(uStack_f8);
            uVar21 = uVar13;
          }
          else {
            uVar21 = uStack_f8;
            __ss12StaticStringV11descriptionSSvg(uStack_100,uStack_f8,local_f0);
          }
          uVar22 = uVar21;
          FUN_100541db0();
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRetain(uVar22);
          FUN_100541ed8();
          _swift_bridgeObjectRelease(uVar22);
          local_c8 = 0;
          local_111 = bVar4;
          local_a0 = 0;
          local_9e = (undefined4)local_120;
          local_9a = local_120._4_2_;
          uStack_80 = uVar13;
          local_88 = uVar12;
          uStack_90 = uVar11;
          local_98 = uVar10;
          local_78 = uVar6;
          local_77 = bVar4;
          FUN_100546118(&local_110,&local_170);
          _swift_bridgeObjectRetain(uVar22);
          lVar33 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native(lVar33);
          local_170 = unaff_x20[1];
          FUN_100521254(local_c0,uVar2,lVar33);
          unaff_x20[1] = local_170;
          lVar33 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native(lVar33);
          local_170 = unaff_x20[2];
          FUN_100521130(uVar2,&local_110,lVar33);
          unaff_x20[2] = local_170;
          lVar33 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native(lVar33);
          local_170 = unaff_x20[3];
          FUN_100521130(uVar2,&local_110,lVar33);
          FUN_100545ef0(&local_110);
          unaff_x20[3] = local_170;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar25 = local_e8;
          uVar17 = local_170;
          local_170 = unaff_x20[3];
          FUN_100521130(uVar2,puVar25,uVar17);
          _swift_bridgeObjectRelease(uVar22);
        }
LAB_100543ab0:
        unaff_x20[3] = local_170;
      }
      else {
        puVar15 = (ulong *)puVar28[4];
        uVar31 = puVar28[5];
        bVar4 = (byte)puVar28[6];
        if (uVar29 == 2) {
          if ((bVar4 & 1) == 0) {
            if (puVar15 == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545144);
              (*pcVar14)();
            }
            local_1a8 = puVar15;
            local_190 = (undefined1 *)(uVar31 + (long)puVar15);
            if ((uVar17 & 1) != 0) goto LAB_100543d44;
LAB_100543b4c:
            if (puVar36 == (ulong *)0x0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545158);
              (*pcVar14)();
            }
            puVar28 = puVar36;
            puVar23 = puVar25 + (long)puVar36;
          }
          else {
            if ((ulong)puVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545134);
              (*pcVar14)();
            }
            if (((ulong)puVar15 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545188);
              (*pcVar14)();
            }
            if ((ulong *)0x10ffff < puVar15) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545148);
              (*pcVar14)();
            }
            uVar27 = (uint)puVar15;
            if (puVar15 < (ulong *)0x80) {
              uVar29 = uVar27 + 1;
            }
            else {
              uVar9 = (uVar27 & 0x3f) * 0x100;
              uVar8 = (uVar9 | uVar27 >> 6 & 0x3f) * 0x100;
              uVar29 = (uVar27 >> 0x12) + (uVar8 | uVar27 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)puVar15 >> 0x10 == 0) {
                uVar29 = (uVar27 >> 0xc) + uVar8 + 0x8181e1;
              }
              if (puVar15 < (ulong *)0x800) {
                uVar29 = (uVar27 >> 6) + uVar9 + 0x81c1;
              }
            }
            param_2 = (undefined1 *)(ulong)(4 - ((uint)LZCOUNT(uVar29) >> 3));
            local_170 = (ulong)uVar29 + 0xfefefefefefeff &
                        (-1L << (((ulong)param_2 & 7) << 3) ^ 0xffffffffffffffffU);
            local_1a8 = &local_170;
            FUN_1005420a0();
            local_190 = param_2;
            if ((uVar17 & 1) == 0) goto LAB_100543b4c;
LAB_100543d44:
            if ((ulong)puVar36 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545154);
              (*pcVar14)();
            }
            if (((ulong)puVar36 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545194);
              (*pcVar14)();
            }
            if ((ulong *)0x10ffff < puVar36) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545164);
              (*pcVar14)();
            }
            if (puVar36 < (ulong *)0x80) {
              uVar27 = uVar37 + 1;
            }
            else {
              uVar8 = (uVar37 & 0x3f) * 0x100;
              uVar29 = (uVar8 | uVar37 >> 6 & 0x3f) * 0x100;
              uVar27 = (uVar37 >> 0x12) + (uVar29 | uVar37 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)puVar36 >> 0x10 == 0) {
                uVar27 = (uVar37 >> 0xc) + uVar29 + 0x8181e1;
              }
              if (puVar36 < (ulong *)0x800) {
                uVar27 = ((uint)((ulong)puVar36 >> 6) & 0x3ffffff) + uVar8 + 0x81c1;
              }
            }
            param_2 = (undefined1 *)(ulong)(4 - ((uint)LZCOUNT(uVar27) >> 3));
            local_170 = (ulong)uVar27 + 0xfefefefefefeff &
                        (-1L << (((ulong)param_2 & 7) << 3) ^ 0xffffffffffffffffU);
            puVar28 = &local_170;
            FUN_1005420a0();
            puVar23 = param_2;
          }
          local_111 = 1;
          uVar16 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar27 = (uint)uVar16;
          uVar38 = unaff_x20[1];
          uVar17 = uVar2;
          local_120 = uVar38;
          FUN_1003618e4();
          uVar30 = (ulong)~(uint)param_2 & 1;
          lVar33 = *(long *)(uVar38 + 0x10) + uVar30;
          if (SCARRY8(*(long *)(uVar38 + 0x10),uVar30)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545118);
            (*pcVar14)();
          }
          if (*(long *)(uVar38 + 0x18) < lVar33) {
            FUN_10054b83c(lVar33);
            uVar17 = uVar2;
            FUN_1003618e4();
            if (((uint)param_2 & 1) != (uVar27 & 1)) {
LAB_1005451a4:
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1005451b4);
              (*pcVar14)();
            }
joined_r0x000100544ce4:
            if (((ulong)param_2 & 1) != 0) goto LAB_1005443a4;
LAB_100544ce8:
            lVar33 = local_120 + (uVar17 >> 6) * 8;
            *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << (uVar17 & 0x3f);
            *(ulong *)(*(long *)(local_120 + 0x30) + uVar17 * 8) = uVar2;
            puVar32 = (ulong *)(*(long *)(local_120 + 0x38) + uVar17 * 0x50);
            *puVar32 = (ulong)local_1a8;
            puVar32[1] = (ulong)local_190;
            puVar32[2] = (ulong)puVar15;
            puVar32[3] = uVar31;
            *(ushort *)(puVar32 + 4) = bVar4 | 0x100;
            puVar32[5] = (ulong)puVar28;
            puVar32[6] = (ulong)puVar23;
            puVar32[7] = (ulong)puVar36;
            puVar32[8] = (ulong)puVar25;
            *(undefined1 *)(puVar32 + 9) = uVar6;
            *(byte *)((long)puVar32 + 0x49) = local_111;
            if (SCARRY8(*(long *)(local_120 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545170);
              (*pcVar14)();
            }
            *(long *)(local_120 + 0x10) = *(long *)(local_120 + 0x10) + 1;
            uVar16 = local_120;
          }
          else {
            if ((uVar16 & 1) == 0) {
              FUN_10054aab4();
              goto joined_r0x000100544ce4;
            }
            if (((ulong)param_2 & 1) == 0) goto LAB_100544ce8;
LAB_1005443a4:
            uVar16 = local_120;
            puVar32 = (ulong *)(*(long *)(local_120 + 0x38) + uVar17 * 0x50);
            uStack_168 = puVar32[1];
            local_170 = *puVar32;
            uStack_148 = puVar32[5];
            local_150 = puVar32[4];
            uStack_140 = puVar32[6];
            uStack_12e = *(undefined8 *)((long)puVar32 + 0x42);
            uStack_158 = puVar32[3];
            local_160 = puVar32[2];
            uStack_130 = (undefined2)((ulong)*(undefined8 *)((long)puVar32 + 0x3a) >> 0x30);
            uStack_138 = (undefined2)puVar32[7];
            local_136 = (undefined6)(puVar32[7] >> 0x10);
            *puVar32 = (ulong)local_1a8;
            puVar32[1] = (ulong)local_190;
            puVar32[2] = (ulong)puVar15;
            puVar32[3] = uVar31;
            *(ushort *)(puVar32 + 4) = bVar4 | 0x100;
            puVar32[5] = (ulong)puVar28;
            puVar32[6] = (ulong)puVar23;
            puVar32[7] = (ulong)puVar36;
            puVar32[8] = (ulong)puVar25;
            *(undefined1 *)(puVar32 + 9) = uVar6;
            *(byte *)((long)puVar32 + 0x49) = local_111;
            FUN_1005460ec(&local_170);
          }
          unaff_x20[1] = uVar16;
          uVar17 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar30 = unaff_x20[2];
          puVar32 = puVar28;
          puVar26 = puVar23;
          local_170 = uVar30;
          FUN_100511c0c();
          uVar16 = (ulong)~(uint)puVar26 & 1;
          lVar33 = *(long *)(uVar30 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(uVar30 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545124);
            (*pcVar14)();
          }
          if (*(long *)(uVar30 + 0x18) < lVar33) {
            FUN_10054b524(lVar33,uVar17);
            puVar32 = puVar28;
            puVar24 = puVar23;
            FUN_100511c0c();
            if (((uint)puVar26 & 1) != ((uint)puVar24 & 1)) goto LAB_100545194;
joined_r0x000100544e44:
            if (((ulong)puVar26 & 1) != 0) goto LAB_100544df8;
LAB_100544e48:
            lVar33 = local_170 + ((ulong)puVar32 >> 6) * 8;
            *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << ((ulong)puVar32 & 0x3f);
            puVar35 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar32 * 0x28);
            *puVar35 = (ulong)puVar28;
            puVar35[1] = (ulong)puVar23;
            puVar35[2] = (ulong)puVar36;
            puVar35[3] = (ulong)puVar25;
            *(undefined1 *)(puVar35 + 4) = uVar6;
            *(undefined1 *)((long)puVar35 + 0x21) = 1;
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
            if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10054517c);
              (*pcVar14)();
            }
            *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
          }
          else {
            if ((uVar17 & 1) == 0) {
              FUN_10054a934();
              goto joined_r0x000100544e44;
            }
            if (((ulong)puVar26 & 1) == 0) goto LAB_100544e48;
LAB_100544df8:
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
          }
          unaff_x20[2] = local_170;
          uVar17 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar30 = unaff_x20[3];
          puVar32 = puVar28;
          puVar26 = puVar23;
          local_170 = uVar30;
          FUN_100511c0c();
          uVar16 = (ulong)~(uint)puVar26 & 1;
          lVar33 = *(long *)(uVar30 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(uVar30 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545128);
            (*pcVar14)();
          }
          if (*(long *)(uVar30 + 0x18) < lVar33) {
            FUN_10054b524(lVar33,uVar17);
            puVar32 = puVar28;
            puVar24 = puVar23;
            FUN_100511c0c();
            if (((uint)puVar26 & 1) != ((uint)puVar24 & 1)) goto LAB_100545194;
LAB_100544f28:
            if (((ulong)puVar26 & 1) == 0) goto LAB_100544f58;
LAB_100544f30:
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
          }
          else {
            if ((uVar17 & 1) != 0) goto LAB_100544f28;
            FUN_10054a934();
            if (((ulong)puVar26 & 1) != 0) goto LAB_100544f30;
LAB_100544f58:
            lVar33 = local_170 + ((ulong)puVar32 >> 6) * 8;
            *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << ((ulong)puVar32 & 0x3f);
            puVar35 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar32 * 0x28);
            *puVar35 = (ulong)puVar28;
            puVar35[1] = (ulong)puVar23;
            puVar35[2] = (ulong)puVar36;
            puVar35[3] = (ulong)puVar25;
            *(undefined1 *)(puVar35 + 4) = uVar6;
            *(undefined1 *)((long)puVar35 + 0x21) = 1;
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
            if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545180);
              (*pcVar14)();
            }
            *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
          }
          unaff_x20[3] = local_170;
          uVar17 = local_170;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar30 = unaff_x20[3];
          puVar28 = local_1a8;
          puVar25 = local_190;
          local_170 = uVar30;
          FUN_100511c0c();
          uVar16 = (ulong)~(uint)puVar25 & 1;
          lVar33 = *(long *)(uVar30 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(uVar30 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10054512c);
            (*pcVar14)();
          }
          if (*(long *)(uVar30 + 0x18) < lVar33) {
            FUN_10054b524(lVar33,uVar17);
            puVar28 = local_1a8;
            puVar23 = local_190;
            FUN_100511c0c();
            if (((uint)puVar25 & 1) != ((uint)puVar23 & 1)) goto LAB_100545194;
          }
          else {
            puVar23 = puVar25;
            if ((uVar17 & 1) == 0) {
              FUN_10054a934();
            }
          }
          if (((ulong)puVar25 & 1) == 0) {
            lVar33 = local_170 + ((ulong)puVar28 >> 6) * 8;
            *(ulong *)(lVar33 + 0x40) = *(ulong *)(lVar33 + 0x40) | 1L << ((ulong)puVar28 & 0x3f);
            puVar36 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar28 * 0x28);
            *puVar36 = (ulong)local_1a8;
            puVar36[1] = (ulong)local_190;
            puVar36[2] = (ulong)puVar15;
            puVar36[3] = uVar31;
            *(byte *)(puVar36 + 4) = bVar4;
            *(undefined1 *)((long)puVar36 + 0x21) = 1;
            *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar28 * 8) = uVar2;
            lVar33 = *(long *)(local_170 + 0x10);
            if (SCARRY8(lVar33,1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100545184);
              (*pcVar14)();
            }
            goto LAB_1005450a4;
          }
LAB_100543aa4:
          *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar28 * 8) = uVar2;
          puVar25 = puVar23;
          goto LAB_100543ab0;
        }
        lVar33 = *unaff_x20;
        if ((uVar17 & 1) == 0) {
          if (puVar36 == (ulong *)0x0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10054513c);
            (*pcVar14)();
          }
          puVar23 = puVar25;
          FUN_100545844(puVar36,puVar25,uVar17,puVar15,uVar31);
          puVar28 = puVar36;
          puVar26 = puVar25 + (long)puVar36;
        }
        else {
          if ((ulong)puVar36 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545130);
            (*pcVar14)();
          }
          if (((ulong)puVar36 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545190);
            (*pcVar14)();
          }
          if ((ulong *)0x10ffff < puVar36) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10054514c);
            (*pcVar14)();
          }
          FUN_100545844(puVar36,puVar25,uVar17,puVar15,uVar31,bVar4);
          if (puVar36 < (ulong *)0x80) {
            uVar27 = uVar37 + 1;
          }
          else {
            uVar8 = (uVar37 & 0x3f) * 0x100;
            uVar29 = (uVar8 | uVar37 >> 6 & 0x3f) * 0x100;
            uVar27 = (uVar37 >> 0x12) + (uVar29 | uVar37 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)puVar36 >> 0x10 == 0) {
              uVar27 = (uVar37 >> 0xc) + uVar29 + 0x8181e1;
            }
            if (puVar36 < (ulong *)0x800) {
              uVar27 = ((uint)((ulong)puVar36 >> 6) & 0x3ffffff) + uVar8 + 0x81c1;
            }
          }
          puVar23 = (undefined1 *)(ulong)(4 - ((uint)LZCOUNT(uVar27) >> 3));
          local_170 = (ulong)uVar27 + 0xfefefefefefeff &
                      (-1L << (((ulong)puVar23 & 7) << 3) ^ 0xffffffffffffffffU);
          puVar28 = &local_170;
          FUN_1005420a0();
          puVar26 = puVar23;
        }
        local_111 = 1;
        uVar30 = unaff_x20[1];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar27 = (uint)uVar30;
        uVar39 = unaff_x20[1];
        uVar16 = uVar2;
        local_120 = uVar39;
        FUN_1003618e4();
        uVar38 = (ulong)~(uint)puVar23 & 1;
        lVar1 = *(long *)(uVar39 + 0x10) + uVar38;
        if (SCARRY8(*(long *)(uVar39 + 0x10),uVar38)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10054510c);
          (*pcVar14)();
        }
        if (*(long *)(uVar39 + 0x18) < lVar1) {
          FUN_10054b83c(lVar1);
          uVar16 = uVar2;
          FUN_1003618e4();
          if (((uint)puVar23 & 1) != (uVar27 & 1)) goto LAB_1005451a4;
        }
        else if ((uVar30 & 1) == 0) {
          FUN_10054aab4();
        }
        uVar30 = local_120;
        uVar7 = (ushort)uVar17 & 0xff | 0x100;
        if (((ulong)puVar23 & 1) == 0) {
          lVar1 = local_120 + (uVar16 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar16 & 0x3f);
          *(ulong *)(*(long *)(local_120 + 0x30) + uVar16 * 8) = uVar2;
          puVar32 = (ulong *)(*(long *)(local_120 + 0x38) + uVar16 * 0x50);
          *puVar32 = (ulong)puVar28;
          puVar32[1] = (ulong)puVar26;
          puVar32[2] = (ulong)puVar36;
          puVar32[3] = (ulong)puVar25;
          *(ushort *)(puVar32 + 4) = uVar7;
          puVar32[5] = (ulong)puVar28;
          puVar32[6] = (ulong)puVar26;
          puVar32[7] = (ulong)puVar36;
          puVar32[8] = (ulong)puVar25;
          *(undefined1 *)(puVar32 + 9) = uVar6;
          *(byte *)((long)puVar32 + 0x49) = local_111;
          if (SCARRY8(*(long *)(local_120 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10054515c);
            (*pcVar14)();
          }
          *(long *)(local_120 + 0x10) = *(long *)(local_120 + 0x10) + 1;
        }
        else {
          puVar32 = (ulong *)(*(long *)(local_120 + 0x38) + uVar16 * 0x50);
          uStack_168 = puVar32[1];
          local_170 = *puVar32;
          uStack_148 = puVar32[5];
          local_150 = puVar32[4];
          uStack_140 = puVar32[6];
          uStack_12e = *(undefined8 *)((long)puVar32 + 0x42);
          uStack_158 = puVar32[3];
          local_160 = puVar32[2];
          uStack_130 = (undefined2)((ulong)*(undefined8 *)((long)puVar32 + 0x3a) >> 0x30);
          uStack_138 = (undefined2)puVar32[7];
          local_136 = (undefined6)(puVar32[7] >> 0x10);
          *puVar32 = (ulong)puVar28;
          puVar32[1] = (ulong)puVar26;
          puVar32[2] = (ulong)puVar36;
          puVar32[3] = (ulong)puVar25;
          *(ushort *)(puVar32 + 4) = uVar7;
          puVar32[5] = (ulong)puVar28;
          puVar32[6] = (ulong)puVar26;
          puVar32[7] = (ulong)puVar36;
          puVar32[8] = (ulong)puVar25;
          *(undefined1 *)(puVar32 + 9) = uVar6;
          *(byte *)((long)puVar32 + 0x49) = local_111;
          FUN_1005460ec(&local_170);
        }
        unaff_x20[1] = uVar30;
        uVar16 = unaff_x20[2];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar38 = unaff_x20[2];
        puVar32 = puVar28;
        puVar23 = puVar26;
        local_170 = uVar38;
        FUN_100511c0c();
        uVar30 = (ulong)~(uint)puVar23 & 1;
        lVar1 = *(long *)(uVar38 + 0x10) + uVar30;
        if (SCARRY8(*(long *)(uVar38 + 0x10),uVar30)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100545110);
          (*pcVar14)();
        }
        if (*(long *)(uVar38 + 0x18) < lVar1) {
          FUN_10054b524(lVar1,uVar16);
          puVar32 = puVar28;
          puVar24 = puVar26;
          FUN_100511c0c();
          if (((uint)puVar23 & 1) != ((uint)puVar24 & 1)) goto LAB_100545194;
LAB_10054437c:
          if (((ulong)puVar23 & 1) == 0) goto LAB_100544758;
LAB_100544384:
          *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
        }
        else {
          if ((uVar16 & 1) != 0) goto LAB_10054437c;
          FUN_10054a934();
          if (((ulong)puVar23 & 1) != 0) goto LAB_100544384;
LAB_100544758:
          lVar1 = local_170 + ((ulong)puVar32 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << ((ulong)puVar32 & 0x3f);
          puVar35 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar32 * 0x28);
          *puVar35 = (ulong)puVar28;
          puVar35[1] = (ulong)puVar26;
          puVar35[2] = (ulong)puVar36;
          puVar35[3] = (ulong)puVar25;
          *(undefined1 *)(puVar35 + 4) = uVar6;
          *(undefined1 *)((long)puVar35 + 0x21) = 1;
          *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
          if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545168);
            (*pcVar14)();
          }
          *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
        }
        unaff_x20[2] = local_170;
        uVar16 = unaff_x20[3];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar38 = unaff_x20[3];
        puVar32 = puVar28;
        puVar23 = puVar26;
        local_170 = uVar38;
        FUN_100511c0c();
        uVar30 = (ulong)~(uint)puVar23 & 1;
        lVar1 = *(long *)(uVar38 + 0x10) + uVar30;
        if (SCARRY8(*(long *)(uVar38 + 0x10),uVar30)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10054511c);
          (*pcVar14)();
        }
        if (*(long *)(uVar38 + 0x18) < lVar1) {
          FUN_10054b524(lVar1,uVar16);
          puVar32 = puVar28;
          puVar24 = puVar26;
          FUN_100511c0c();
          if (((uint)puVar23 & 1) != ((uint)puVar24 & 1)) goto LAB_100545194;
        }
        else if ((uVar16 & 1) == 0) {
          FUN_10054a934();
        }
        if (((ulong)puVar23 & 1) == 0) {
          lVar1 = local_170 + ((ulong)puVar32 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << ((ulong)puVar32 & 0x3f);
          puVar35 = (ulong *)(*(long *)(local_170 + 0x30) + (long)puVar32 * 0x28);
          *puVar35 = (ulong)puVar28;
          puVar35[1] = (ulong)puVar26;
          puVar35[2] = (ulong)puVar36;
          puVar35[3] = (ulong)puVar25;
          *(undefined1 *)(puVar35 + 4) = uVar6;
          *(undefined1 *)((long)puVar35 + 0x21) = 1;
          *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
          if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100545178);
            (*pcVar14)();
          }
          *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
        }
        else {
          *(ulong *)(*(long *)(local_170 + 0x38) + (long)puVar32 * 8) = uVar2;
        }
        unaff_x20[3] = local_170;
        uVar16 = puVar15[2];
        if (uVar16 != 0) {
          uVar30 = 0;
          puVar28 = puVar15 + 6;
          do {
            if (puVar15[2] <= uVar30) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450e4);
              (*pcVar14)();
            }
            pvVar3 = (void *)puVar28[-2];
            uVar38 = puVar28[-1];
            bVar5 = (byte)*puVar28;
            if ((bVar5 & 1) == 0) {
              if (pvVar3 == (void *)0x0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450f4);
                (*pcVar14)();
              }
              uVar20 = uVar38 + (long)pvVar3;
              pvVar18 = pvVar3;
            }
            else {
              if ((ulong)pvVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450f0);
                (*pcVar14)();
              }
              if (((ulong)pvVar3 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100545104);
                (*pcVar14)();
              }
              if ((void *)0x10ffff < pvVar3) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450f8);
                (*pcVar14)();
              }
              uVar27 = (uint)pvVar3;
              if (pvVar3 < (void *)0x80) {
                uVar27 = uVar27 + 1;
              }
              else {
                uVar8 = (uVar27 & 0x3f) * 0x100;
                uVar37 = (uVar8 | uVar27 >> 6 & 0x3f) * 0x100;
                uVar29 = (uVar27 >> 0x12) + (uVar37 | uVar27 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
                if ((ulong)pvVar3 >> 0x10 == 0) {
                  uVar29 = (uVar27 >> 0xc) + uVar37 + 0x8181e1;
                }
                uVar27 = (uVar27 >> 6) + uVar8 + 0x81c1;
                if ((void *)0x7ff < pvVar3) {
                  uVar27 = uVar29;
                }
              }
              pvVar40 = (void *)(ulong)(4 - ((uint)LZCOUNT(uVar27) >> 3));
              local_120 = (ulong)uVar27 + 0xfefefefefefeff &
                          (-1L << (((ulong)pvVar40 & 7) << 3) ^ 0xffffffffffffffffU);
              pvVar18 = pvVar40;
              _swift_slowAlloc(pvVar40,0xffffffffffffffff);
              _memcpy(pvVar18,&local_120,(size_t)pvVar40);
              _swift_beginAccess(lVar33 + 0x10,&local_170,0x21,0);
              uVar19 = *(ulong *)(lVar33 + 0x10);
              uVar39 = uVar19;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(lVar33 + 0x10) = uVar19;
              uVar20 = uVar19;
              if ((uVar39 & 1) == 0) {
                uVar20 = 0;
                FUN_100506e84(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
                *(ulong *)(lVar33 + 0x10) = uVar20;
              }
              uVar39 = *(ulong *)(uVar20 + 0x10);
              uVar19 = uVar20;
              if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar39) {
                uVar19 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
                FUN_100506e84(uVar19,uVar39 + 1,1,uVar20);
              }
              uVar20 = (long)pvVar18 + (long)pvVar40;
              *(ulong *)(uVar19 + 0x10) = uVar39 + 1;
              lVar1 = uVar19 + uVar39 * 0x10;
              *(void **)(lVar1 + 0x20) = pvVar18;
              *(ulong *)(lVar1 + 0x28) = uVar20;
              *(ulong *)(lVar33 + 0x10) = uVar19;
              _swift_endAccess(&local_170);
            }
            uVar19 = unaff_x20[2];
            _swift_isUniquelyReferenced_nonNull_native();
            uVar41 = unaff_x20[2];
            pvVar40 = pvVar18;
            uVar39 = uVar20;
            local_170 = uVar41;
            FUN_100511c0c();
            uVar34 = (ulong)~(uint)uVar39 & 1;
            lVar1 = *(long *)(uVar41 + 0x10) + uVar34;
            if (SCARRY8(*(long *)(uVar41 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450e8);
              (*pcVar14)();
            }
            if (*(long *)(uVar41 + 0x18) < lVar1) {
              FUN_10054b524(lVar1,uVar19);
              pvVar40 = pvVar18;
              uVar19 = uVar20;
              FUN_100511c0c();
              if (((uint)uVar39 & 1) != ((uint)uVar19 & 1)) goto LAB_100545194;
LAB_100544a68:
              if ((uVar39 & 1) == 0) goto LAB_100544b48;
LAB_100544a70:
              *(ulong *)(*(long *)(local_170 + 0x38) + (long)pvVar40 * 8) = uVar2;
            }
            else {
              if ((uVar19 & 1) != 0) goto LAB_100544a68;
              FUN_10054a934();
              if ((uVar39 & 1) != 0) goto LAB_100544a70;
LAB_100544b48:
              lVar1 = local_170 + ((ulong)pvVar40 >> 6) * 8;
              *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << ((ulong)pvVar40 & 0x3f);
              puVar32 = (ulong *)(*(long *)(local_170 + 0x30) + (long)pvVar40 * 0x28);
              *puVar32 = (ulong)pvVar18;
              puVar32[1] = uVar20;
              puVar32[2] = (ulong)pvVar3;
              puVar32[3] = uVar38;
              *(byte *)(puVar32 + 4) = bVar5;
              *(undefined1 *)((long)puVar32 + 0x21) = 1;
              *(ulong *)(*(long *)(local_170 + 0x38) + (long)pvVar40 * 8) = uVar2;
              if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450fc);
                (*pcVar14)();
              }
              *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
            }
            unaff_x20[2] = local_170;
            uVar19 = unaff_x20[3];
            _swift_isUniquelyReferenced_nonNull_native();
            uVar41 = unaff_x20[3];
            pvVar40 = pvVar18;
            uVar39 = uVar20;
            local_170 = uVar41;
            FUN_100511c0c();
            uVar34 = (ulong)~(uint)uVar39 & 1;
            lVar1 = *(long *)(uVar41 + 0x10) + uVar34;
            if (SCARRY8(*(long *)(uVar41 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1005450ec);
              (*pcVar14)();
            }
            if (*(long *)(uVar41 + 0x18) < lVar1) {
              FUN_10054b524(lVar1,uVar19);
              pvVar40 = pvVar18;
              uVar19 = uVar20;
              FUN_100511c0c();
              if (((uint)uVar39 & 1) != ((uint)uVar19 & 1)) goto LAB_100545194;
LAB_100544c20:
              if ((uVar39 & 1) != 0) goto LAB_1005448c0;
LAB_100544c28:
              lVar1 = local_170 + ((ulong)pvVar40 >> 6) * 8;
              *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << ((ulong)pvVar40 & 0x3f);
              puVar32 = (ulong *)(*(long *)(local_170 + 0x30) + (long)pvVar40 * 0x28);
              *puVar32 = (ulong)pvVar18;
              puVar32[1] = uVar20;
              puVar32[2] = (ulong)pvVar3;
              puVar32[3] = uVar38;
              *(byte *)(puVar32 + 4) = bVar5;
              *(undefined1 *)((long)puVar32 + 0x21) = 1;
              *(ulong *)(*(long *)(local_170 + 0x38) + (long)pvVar40 * 8) = uVar2;
              if (SCARRY8(*(long *)(local_170 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100545100);
                (*pcVar14)();
              }
              *(long *)(local_170 + 0x10) = *(long *)(local_170 + 0x10) + 1;
            }
            else {
              if ((uVar19 & 1) != 0) goto LAB_100544c20;
              FUN_10054a934();
              if ((uVar39 & 1) == 0) goto LAB_100544c28;
LAB_1005448c0:
              *(ulong *)(*(long *)(local_170 + 0x38) + (long)pvVar40 * 8) = uVar2;
            }
            uVar30 = uVar30 + 1;
            unaff_x20[3] = local_170;
            puVar28 = puVar28 + 3;
          } while (uVar16 != uVar30);
        }
        FUN_100545874(puVar36,puVar25,uVar17,puVar15,uVar31,bVar4);
      }
      lVar43 = lVar43 + 1;
      param_2 = puVar25;
    } while (lVar43 != lVar42);
  }
  return;
}

