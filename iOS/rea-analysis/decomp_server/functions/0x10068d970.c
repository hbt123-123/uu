// rea decompile_all
// name: FUN_10068d970
// address: 0x10068d970
// body: available
// range: 0x10068d970-0x10068de2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010068de28) */

long FUN_10068d970(long *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  bool bVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  ulong uVar22;
  ulong *puVar23;
  long *unaff_x20;
  undefined1 uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined7 uStack_1a0;
  undefined4 uStack_199;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 uStack_151;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined7 uStack_108;
  undefined4 uStack_101;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_b9;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  undefined5 uStack_7d;
  long local_78 [3];
  
  lStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  lStack_98 = unaff_x20[3];
  lStack_a0 = unaff_x20[2];
  local_90 = unaff_x20[4];
  cVar1 = *(char *)((long)unaff_x20 + 0x31);
  lVar19 = unaff_x20[1];
  uStack_88 = (undefined7)unaff_x20[5];
  uStack_81 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  local_78[0] = lVar19;
  if (cVar1 == '\x03') {
    uVar25 = 0;
  }
  else {
    if (cVar1 == '\x04') {
      bVar2 = *(byte *)(lVar19 + 0x20);
      FUN_10068e538();
      FUN_10007f314(local_78,&local_f8,&DAT_100ab9ea0,&DAT_10084d528);
      uVar13 = lVar19 + 0x40;
      __ss10_HashTableV11startBucketAB0D0Vvg(uVar13,~(-1L << ((ulong)bVar2 & 0x3f)));
      uVar26 = (ulong)*(uint *)(lVar19 + 0x24);
      FUN_100040bb4(local_78,&DAT_100ab9ea0,&DAT_10084d528);
      FUN_10068e548();
      uVar25 = 0x40;
      uVar24 = 0x40;
      goto joined_r0x00010068da68;
    }
    uVar25 = 0x80;
  }
  uVar24 = (undefined1)uVar25;
  uVar26 = 0;
  uVar13 = 0;
joined_r0x00010068da68:
  if (param_2 == (undefined8 *)0x0) {
    lVar17 = 0;
  }
  else {
    uVar24 = (undefined1)uVar25;
    lVar17 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10068de28);
        (*pcVar11)();
      }
      lVar20 = *unaff_x20;
      lVar17 = 0;
      lVar27 = 1;
      do {
        uVar24 = (undefined1)uVar25;
        if (cVar1 == '\x04') {
          bVar18 = false;
          bVar12 = true;
          uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          uVar15 = (ulong)*(uint *)(lVar19 + 0x24);
          uVar16 = 0x40;
joined_r0x00010068dae4:
          bVar21 = false;
          if (uVar25 != 0) goto LAB_10068dae8;
LAB_10068db34:
          if (bVar21) goto LAB_10068db38;
LAB_10068db54:
          FUN_100690ae8(uVar14,uVar15,uVar16);
        }
        else {
          if (cVar1 != '\x03') {
            uVar14 = 0;
            uVar15 = 0;
            bVar12 = false;
            uVar16 = 0x80;
            bVar18 = true;
            goto joined_r0x00010068dae4;
          }
          uVar15 = 0;
          bVar18 = false;
          bVar12 = false;
          uVar16 = 0;
          uVar14 = *(ulong *)(lVar20 + 0x10);
          bVar21 = true;
          if (uVar25 == 0) goto LAB_10068db34;
LAB_10068dae8:
          if (uVar25 != 0x40) {
            bVar12 = false;
            if (uVar15 == 0 && uVar14 == 0) {
              bVar12 = bVar18;
            }
            if (!bVar12) goto LAB_10068db54;
            break;
          }
          if (!bVar12) goto LAB_10068db54;
          FUN_100690ae8(uVar14,uVar15,uVar16);
          if (uVar26 != uVar15) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10068de24);
            (*pcVar11)();
          }
LAB_10068db38:
          if (uVar13 == uVar14) break;
        }
        lVar17 = lStack_a8;
        FUN_1006830d8(&local_1d8,uVar13,uVar26,uVar25);
        uVar10 = uStack_199;
        uVar9 = uStack_1a0;
        uVar8 = local_1a8;
        uVar7 = uStack_1b0;
        uVar6 = local_1b8;
        uVar5 = uStack_1c0;
        uVar4 = local_1c8;
        uVar3 = uStack_1d0;
        uVar16 = local_1d8;
        uStack_188 = uStack_1d0;
        local_190 = local_1d8;
        uStack_178 = uStack_1c0;
        local_180 = local_1c8;
        uStack_168 = uStack_1b0;
        local_170 = local_1b8;
        local_160 = local_1a8;
        uStack_151 = uStack_199;
        _swift_bridgeObjectRetain(uStack_1d0);
        FUN_10068e538(&local_180,&local_1d8);
        FUN_100040bb4(&local_190,&DAT_100ab9fa0,&DAT_10084dd58);
        local_140 = uVar16;
        uStack_138 = uVar3;
        uStack_128 = uVar5;
        local_130 = uVar4;
        uStack_118 = uVar7;
        uStack_120 = uVar6;
        uStack_108 = uVar9;
        local_110 = uVar8;
        uStack_101 = uVar10;
        local_f8 = uVar16;
        uStack_f0 = uVar3;
        uStack_e0 = uVar5;
        local_e8 = uVar4;
        uStack_d0 = uVar7;
        uStack_d8 = uVar6;
        local_c8 = uVar8;
        uStack_b9 = uVar10;
        FUN_10007f314(&local_140,&local_1d8,&DAT_100ab9fa0,&DAT_10084dd58);
        FUN_100040bb4(&local_f8,&DAT_100ab9fa0,&DAT_10084dd58);
        if (uVar25 >> 6 != 2) {
          if (uVar25 >> 6 == 1) {
            if (((long)uVar13 < 0) ||
               (uVar14 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f),
               (long)uVar14 <= (long)uVar13)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10068de18);
              (*pcVar11)();
            }
            uVar22 = uVar13 >> 6;
            uVar15 = *(ulong *)(lVar17 + 0x40 + uVar22 * 8);
            if ((uVar15 >> (uVar13 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10068de1c);
              (*pcVar11)();
            }
            if (*(int *)(lVar17 + 0x24) != (int)uVar26) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10068de20);
              (*pcVar11)();
            }
            uVar15 = uVar15 & -2L << (uVar13 & 0x3f);
            if (uVar15 == 0) {
              lVar28 = uVar22 << 6;
              puVar23 = (ulong *)(lVar17 + uVar22 * 8 + 0x48);
              do {
                uVar22 = uVar22 + 1;
                if (uVar14 + 0x3f >> 6 <= uVar22) {
                  FUN_100690ae8(uVar13,uVar26,uVar25);
                  goto LAB_10068dd58;
                }
                uVar15 = *puVar23;
                lVar28 = lVar28 + 0x40;
                puVar23 = puVar23 + 1;
              } while (uVar15 == 0);
              FUN_100690ae8(uVar13,uVar26,uVar25);
              uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar28;
            }
            else {
              FUN_100690ae8(uVar13,uVar26,uVar25);
              uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar13 & 0x7fffffffffffffc0;
            }
LAB_10068dd58:
            uVar25 = 0x40;
            uVar13 = uVar14;
          }
          else {
            bVar12 = SCARRY8(uVar13,1);
            uVar13 = uVar13 + 1;
            if (bVar12) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10068de14);
              (*pcVar11)();
            }
            uVar26 = 0;
            uVar25 = 0;
          }
        }
        uVar24 = (undefined1)uVar25;
        param_2[1] = uStack_138;
        *param_2 = local_140;
        *(undefined4 *)((long)param_2 + 0x3f) = uStack_101;
        param_2[5] = uStack_118;
        param_2[4] = uStack_120;
        param_2[7] = CONCAT17((undefined1)uStack_101,uStack_108);
        param_2[6] = local_110;
        param_2[3] = uStack_128;
        param_2[2] = local_130;
        lVar17 = param_3;
        if (lVar27 == param_3) break;
        param_2 = param_2 + 9;
        bVar12 = SCARRY8(lVar27,1);
        lVar17 = lVar27;
        lVar27 = lVar27 + 1;
        if (bVar12) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10068ddac);
          (*pcVar11)();
        }
      } while( true );
    }
  }
  param_1[1] = lStack_a8;
  *param_1 = local_b0;
  param_1[3] = lStack_98;
  param_1[2] = lStack_a0;
  param_1[5] = CONCAT17((undefined1)uStack_81,uStack_88);
  param_1[4] = local_90;
  param_1[6] = CONCAT53(uStack_7d,uStack_81._1_3_);
  param_1[7] = uVar13;
  param_1[8] = uVar26;
  *(undefined1 *)(param_1 + 9) = uVar24;
  return lVar17;
}

