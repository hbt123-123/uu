// rea decompile_all
// name: FUN_1006bcc2c
// address: 0x1006bcc2c
// body: available
// range: 0x1006bcc2c-0x1006bd0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006bd0d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bcc2c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,int *param_5,
                  ulong param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  short *psVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c [8];
  short local_10c;
  short sStack_10a;
  short sStack_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
  undefined8 local_fc;
  undefined8 uStack_f4;
  short local_ec;
  short sStack_ea;
  short sStack_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  short local_c4;
  short asStack_c0 [32];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((param_5 == (int *)0x0) || (param_6 < 8)) {
    uVar19 = 0xffffffffffffffe0;
    if (param_7 != 2) {
      uVar19 = 0;
    }
    goto LAB_1006bd028;
  }
  *(undefined8 *)(param_1 + 0x11e8) = 0x800000004;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x11e0) = 0x100000000;
  *(undefined8 *)(param_1 + 0x11d8) = 0;
  if (param_7 == 1) {
LAB_1006bcc94:
    FUN_1006bd0d8(param_2,param_3,param_4,param_5,param_6,param_8);
    uVar19 = 0;
  }
  else {
    if (*param_5 != -0x13cf5bc9) {
      if (param_7 == 2) {
        uVar19 = 0xffffffffffffffe0;
        goto LAB_1006bd028;
      }
      if (param_7 == 0) goto LAB_1006bcc94;
    }
    local_130 = 0x1f;
    if (*(int *)(param_4 + 0x28) == 0) {
      uVar20 = (ulong)(uint)param_5[1];
    }
    else {
      uVar20 = 0;
    }
    local_12c[0] = 0xff;
    uVar19 = param_1;
    FUN_1006b3f90(param_1,local_12c,param_5 + 2,param_6 - 8);
    if (uVar19 < 0xffffffffffffff89 && 0xfe < local_12c[0]) {
      puVar2 = (uint *)((long)param_5 + param_6);
      lVar3 = (long)(param_5 + 2) + uVar19;
      psVar16 = asStack_c0;
      FUN_1006af64c(psVar16,&local_130,local_12c,lVar3,(long)puVar2 - lVar3);
      if ((psVar16 < (short *)0xffffffffffffff89) && (local_12c[0] < 9)) {
        uVar19 = param_1 + 0x404;
        FUN_1006b184c(uVar19,asStack_c0,0x1f,local_12c[0],param_9,0x1800);
        if (uVar19 < 0xffffffffffffff89) {
          local_134 = 0x34;
          lVar3 = lVar3 + (long)psVar16;
          puVar17 = local_12c;
          FUN_1006af64c(puVar17,&local_134,&local_138,lVar3,(long)puVar2 - lVar3);
          if (((puVar17 < (uint *)0xffffffffffffff89) && (local_138 < 10)) && (0x33 < local_134)) {
            cVar21 = -(local_10c == 0);
            cVar23 = -(sStack_10a == 0);
            cVar25 = -(sStack_108 == 0);
            cVar27 = -(sStack_106 == 0);
            cVar29 = -(sStack_104 == 0);
            cVar31 = -(sStack_102 == 0);
            cVar33 = -(sStack_100 == 0);
            cVar35 = -(sStack_fe == 0);
            bVar37 = -((short)local_fc == 0) & 1;
            bVar38 = -((short)((ulong)local_fc >> 0x10) == 0) & 2;
            bVar39 = -((short)((ulong)local_fc >> 0x20) == 0) & 4;
            bVar40 = -((short)((ulong)local_fc >> 0x30) == 0) & 8;
            bVar41 = -((short)uStack_f4 == 0) & 0x10;
            bVar42 = -((short)((ulong)uStack_f4 >> 0x10) == 0) & 0x20;
            bVar43 = -((short)((ulong)uStack_f4 >> 0x20) == 0) & 0x40;
            bVar44 = -((short)((ulong)uStack_f4 >> 0x30) == 0) & 0x80;
            auVar45[8] = bVar37;
            auVar45._0_8_ =
                 CONCAT17(cVar35,CONCAT16(cVar33,CONCAT15(cVar31,CONCAT14(cVar29,CONCAT13(cVar27,
                                                  CONCAT12(cVar25,CONCAT11(cVar23,cVar21))))))) &
                 0x8040201008040201;
            auVar45[9] = bVar38;
            auVar45[10] = bVar39;
            auVar45[0xb] = bVar40;
            auVar45[0xc] = bVar41;
            auVar45[0xd] = bVar42;
            auVar45[0xe] = bVar43;
            auVar45[0xf] = bVar44;
            auVar46[8] = bVar37;
            auVar46._0_8_ =
                 CONCAT17(cVar35,CONCAT16(cVar33,CONCAT15(cVar31,CONCAT14(cVar29,CONCAT13(cVar27,
                                                  CONCAT12(cVar25,CONCAT11(cVar23,cVar21))))))) &
                 0x8040201008040201;
            auVar46[9] = bVar38;
            auVar46[10] = bVar39;
            auVar46[0xb] = bVar40;
            auVar46[0xc] = bVar41;
            auVar46[0xd] = bVar42;
            auVar46[0xe] = bVar43;
            auVar46[0xf] = bVar44;
            auVar45 = NEON_ext(auVar45,auVar46,8,1);
            cVar22 = -((short)local_12c[0] == 0);
            cVar24 = -((short)(local_12c[0] >> 0x10) == 0);
            cVar26 = -((short)local_12c[1] == 0);
            cVar28 = -((short)(local_12c[1] >> 0x10) == 0);
            cVar30 = -((short)local_12c._8_8_ == 0);
            cVar32 = -(SUB82(local_12c._8_8_,2) == 0);
            cVar34 = -(SUB82(local_12c._8_8_,4) == 0);
            cVar36 = -(SUB82(local_12c._8_8_,6) == 0);
            bVar37 = -((short)local_12c._16_8_ == 0) & 1;
            bVar38 = -(SUB82(local_12c._16_8_,2) == 0) & 2;
            bVar39 = -(SUB82(local_12c._16_8_,4) == 0) & 4;
            bVar40 = -(SUB82(local_12c._16_8_,6) == 0) & 8;
            bVar41 = -((short)local_12c._24_8_ == 0) & 0x10;
            bVar42 = -(SUB82(local_12c._24_8_,2) == 0) & 0x20;
            bVar43 = -(SUB82(local_12c._24_8_,4) == 0) & 0x40;
            bVar44 = -(SUB82(local_12c._24_8_,6) == 0) & 0x80;
            auVar8[8] = bVar37;
            auVar8._0_8_ = CONCAT17(cVar36,CONCAT16(cVar34,CONCAT15(cVar32,CONCAT14(cVar30,CONCAT13(
                                                  cVar28,CONCAT12(cVar26,CONCAT11(cVar24,cVar22)))))
                                                  )) & 0x8040201008040201;
            auVar8[9] = bVar38;
            auVar8[10] = bVar39;
            auVar8[0xb] = bVar40;
            auVar8[0xc] = bVar41;
            auVar8[0xd] = bVar42;
            auVar8[0xe] = bVar43;
            auVar8[0xf] = bVar44;
            auVar9[8] = bVar37;
            auVar9._0_8_ = CONCAT17(cVar36,CONCAT16(cVar34,CONCAT15(cVar32,CONCAT14(cVar30,CONCAT13(
                                                  cVar28,CONCAT12(cVar26,CONCAT11(cVar24,cVar22)))))
                                                  )) & 0x8040201008040201;
            auVar9[9] = bVar38;
            auVar9[10] = bVar39;
            auVar9[0xb] = bVar40;
            auVar9[0xc] = bVar41;
            auVar9[0xd] = bVar42;
            auVar9[0xe] = bVar43;
            auVar9[0xf] = bVar44;
            auVar46 = NEON_ext(auVar8,auVar9,8,1);
            if (CONCAT22((CONCAT11(auVar45[0],cVar21) & 0xff01) +
                         (CONCAT11(auVar45[1],cVar23) & 0xff02) +
                         (CONCAT11(auVar45[2],cVar25) & 0xff04) +
                         (CONCAT11(auVar45[3],cVar27) & 0xff08) +
                         (CONCAT11(auVar45[4],cVar29) & 0xff10) +
                         (CONCAT11(auVar45[5],cVar31) & 0xff20) +
                         (CONCAT11(auVar45[6],cVar33) & 0xff40) +
                         (CONCAT11(auVar45[7],cVar35) & 0xff80),
                         (CONCAT11(auVar46[0],cVar22) & 0xff01) +
                         (CONCAT11(auVar46[1],cVar24) & 0xff02) +
                         (CONCAT11(auVar46[2],cVar26) & 0xff04) +
                         (CONCAT11(auVar46[3],cVar28) & 0xff08) +
                         (CONCAT11(auVar46[4],cVar30) & 0xff10) +
                         (CONCAT11(auVar46[5],cVar32) & 0xff20) +
                         (CONCAT11(auVar46[6],cVar34) & 0xff40) +
                         (CONCAT11(auVar46[7],cVar36) & 0xff80)) == 0) {
              cVar21 = -(local_ec == 0);
              cVar22 = -(sStack_ea == 0);
              cVar23 = -(sStack_e8 == 0);
              cVar24 = -(sStack_e6 == 0);
              cVar25 = -(sStack_e4 == 0);
              cVar26 = -(sStack_e2 == 0);
              cVar27 = -(sStack_e0 == 0);
              cVar28 = -(sStack_de == 0);
              bVar37 = -((short)local_dc == 0) & 1;
              bVar38 = -((short)((ulong)local_dc >> 0x10) == 0) & 2;
              bVar39 = -((short)((ulong)local_dc >> 0x20) == 0) & 4;
              bVar40 = -((short)((ulong)local_dc >> 0x30) == 0) & 8;
              bVar41 = -((short)uStack_d4 == 0) & 0x10;
              bVar42 = -((short)((ulong)uStack_d4 >> 0x10) == 0) & 0x20;
              bVar43 = -((short)((ulong)uStack_d4 >> 0x20) == 0) & 0x40;
              bVar44 = -((short)((ulong)uStack_d4 >> 0x30) == 0) & 0x80;
              auVar10[8] = bVar37;
              auVar10._0_8_ =
                   CONCAT17(cVar28,CONCAT16(cVar27,CONCAT15(cVar26,CONCAT14(cVar25,CONCAT13(cVar24,
                                                  CONCAT12(cVar23,CONCAT11(cVar22,cVar21))))))) &
                   0x8040201008040201;
              auVar10[9] = bVar38;
              auVar10[10] = bVar39;
              auVar10[0xb] = bVar40;
              auVar10[0xc] = bVar41;
              auVar10[0xd] = bVar42;
              auVar10[0xe] = bVar43;
              auVar10[0xf] = bVar44;
              auVar11[8] = bVar37;
              auVar11._0_8_ =
                   CONCAT17(cVar28,CONCAT16(cVar27,CONCAT15(cVar26,CONCAT14(cVar25,CONCAT13(cVar24,
                                                  CONCAT12(cVar23,CONCAT11(cVar22,cVar21))))))) &
                   0x8040201008040201;
              auVar11[9] = bVar38;
              auVar11[10] = bVar39;
              auVar11[0xb] = bVar40;
              auVar11[0xc] = bVar41;
              auVar11[0xd] = bVar42;
              auVar11[0xe] = bVar43;
              auVar11[0xf] = bVar44;
              auVar45 = NEON_ext(auVar10,auVar11,8,1);
              if ((((ushort)((CONCAT11(auVar45[0],cVar21) & 0xff01) +
                             (CONCAT11(auVar45[1],cVar22) & 0xff02) +
                             (CONCAT11(auVar45[2],cVar23) & 0xff04) +
                             (CONCAT11(auVar45[3],cVar24) & 0xff08) +
                             (CONCAT11(auVar45[4],cVar25) & 0xff10) +
                             (CONCAT11(auVar45[5],cVar26) & 0xff20) +
                             (CONCAT11(auVar45[6],cVar27) & 0xff40) +
                            (CONCAT11(auVar45[7],cVar28) & 0xff80)) == 0) &&
                  (uVar19 = (ulong)CONCAT16(-((short)((ulong)local_cc >> 0x30) == 0),
                                            (uint6)CONCAT14(-((short)((ulong)local_cc >> 0x20) == 0)
                                                            ,(uint)CONCAT12(-((short)((ulong)
                                                  local_cc >> 0x10) == 0),
                                                  (ushort)(byte)-((short)local_cc == 0)))) &
                            0x8000400020001,
                  (char)((char)uVar19 + (char)(uVar19 >> 0x10) + (char)(uVar19 >> 0x20) +
                        (char)(uVar19 >> 0x30)) == '\0')) && (local_c4 != 0)) {
                uVar19 = param_1 + 0x708;
                FUN_1006b184c(uVar19,local_12c,local_134,local_138,param_9,0x1800);
                if (uVar19 < 0xffffffffffffff89) {
                  local_134 = 0x23;
                  lVar3 = lVar3 + (long)puVar17;
                  puVar17 = local_12c;
                  FUN_1006af64c(puVar17,&local_134,&local_138,lVar3,(long)puVar2 - lVar3);
                  if (((puVar17 < (uint *)0xffffffffffffff89) && (local_138 < 10)) &&
                     (0x22 < local_134)) {
                    cVar21 = -(local_10c == 0);
                    cVar23 = -(sStack_10a == 0);
                    cVar25 = -(sStack_108 == 0);
                    cVar27 = -(sStack_106 == 0);
                    cVar29 = -(sStack_104 == 0);
                    cVar31 = -(sStack_102 == 0);
                    cVar33 = -(sStack_100 == 0);
                    cVar35 = -(sStack_fe == 0);
                    bVar37 = -((short)local_fc == 0) & 1;
                    bVar38 = -((short)((ulong)local_fc >> 0x10) == 0) & 2;
                    bVar39 = -((short)((ulong)local_fc >> 0x20) == 0) & 4;
                    bVar40 = -((short)((ulong)local_fc >> 0x30) == 0) & 8;
                    bVar41 = -((short)uStack_f4 == 0) & 0x10;
                    bVar42 = -((short)((ulong)uStack_f4 >> 0x10) == 0) & 0x20;
                    bVar43 = -((short)((ulong)uStack_f4 >> 0x20) == 0) & 0x40;
                    bVar44 = -((short)((ulong)uStack_f4 >> 0x30) == 0) & 0x80;
                    auVar12[8] = bVar37;
                    auVar12._0_8_ =
                         CONCAT17(cVar35,CONCAT16(cVar33,CONCAT15(cVar31,CONCAT14(cVar29,CONCAT13(
                                                  cVar27,CONCAT12(cVar25,CONCAT11(cVar23,cVar21)))))
                                                 )) & 0x8040201008040201;
                    auVar12[9] = bVar38;
                    auVar12[10] = bVar39;
                    auVar12[0xb] = bVar40;
                    auVar12[0xc] = bVar41;
                    auVar12[0xd] = bVar42;
                    auVar12[0xe] = bVar43;
                    auVar12[0xf] = bVar44;
                    auVar13[8] = bVar37;
                    auVar13._0_8_ =
                         CONCAT17(cVar35,CONCAT16(cVar33,CONCAT15(cVar31,CONCAT14(cVar29,CONCAT13(
                                                  cVar27,CONCAT12(cVar25,CONCAT11(cVar23,cVar21)))))
                                                 )) & 0x8040201008040201;
                    auVar13[9] = bVar38;
                    auVar13[10] = bVar39;
                    auVar13[0xb] = bVar40;
                    auVar13[0xc] = bVar41;
                    auVar13[0xd] = bVar42;
                    auVar13[0xe] = bVar43;
                    auVar13[0xf] = bVar44;
                    auVar45 = NEON_ext(auVar12,auVar13,8,1);
                    cVar22 = -((short)local_12c[0] == 0);
                    cVar24 = -((short)(local_12c[0] >> 0x10) == 0);
                    cVar26 = -((short)local_12c[1] == 0);
                    cVar28 = -((short)(local_12c[1] >> 0x10) == 0);
                    cVar30 = -((short)local_12c._8_8_ == 0);
                    cVar32 = -(SUB82(local_12c._8_8_,2) == 0);
                    cVar34 = -(SUB82(local_12c._8_8_,4) == 0);
                    cVar36 = -(SUB82(local_12c._8_8_,6) == 0);
                    bVar37 = -((short)local_12c._16_8_ == 0) & 1;
                    bVar38 = -(SUB82(local_12c._16_8_,2) == 0) & 2;
                    bVar39 = -(SUB82(local_12c._16_8_,4) == 0) & 4;
                    bVar40 = -(SUB82(local_12c._16_8_,6) == 0) & 8;
                    bVar41 = -((short)local_12c._24_8_ == 0) & 0x10;
                    bVar42 = -(SUB82(local_12c._24_8_,2) == 0) & 0x20;
                    bVar43 = -(SUB82(local_12c._24_8_,4) == 0) & 0x40;
                    bVar44 = -(SUB82(local_12c._24_8_,6) == 0) & 0x80;
                    auVar14[8] = bVar37;
                    auVar14._0_8_ =
                         CONCAT17(cVar36,CONCAT16(cVar34,CONCAT15(cVar32,CONCAT14(cVar30,CONCAT13(
                                                  cVar28,CONCAT12(cVar26,CONCAT11(cVar24,cVar22)))))
                                                 )) & 0x8040201008040201;
                    auVar14[9] = bVar38;
                    auVar14[10] = bVar39;
                    auVar14[0xb] = bVar40;
                    auVar14[0xc] = bVar41;
                    auVar14[0xd] = bVar42;
                    auVar14[0xe] = bVar43;
                    auVar14[0xf] = bVar44;
                    auVar15[8] = bVar37;
                    auVar15._0_8_ =
                         CONCAT17(cVar36,CONCAT16(cVar34,CONCAT15(cVar32,CONCAT14(cVar30,CONCAT13(
                                                  cVar28,CONCAT12(cVar26,CONCAT11(cVar24,cVar22)))))
                                                 )) & 0x8040201008040201;
                    auVar15[9] = bVar38;
                    auVar15[10] = bVar39;
                    auVar15[0xb] = bVar40;
                    auVar15[0xc] = bVar41;
                    auVar15[0xd] = bVar42;
                    auVar15[0xe] = bVar43;
                    auVar15[0xf] = bVar44;
                    auVar46 = NEON_ext(auVar14,auVar15,8,1);
                    if ((CONCAT22((CONCAT11(auVar45[0],cVar21) & 0xff01) +
                                  (CONCAT11(auVar45[1],cVar23) & 0xff02) +
                                  (CONCAT11(auVar45[2],cVar25) & 0xff04) +
                                  (CONCAT11(auVar45[3],cVar27) & 0xff08) +
                                  (CONCAT11(auVar45[4],cVar29) & 0xff10) +
                                  (CONCAT11(auVar45[5],cVar31) & 0xff20) +
                                  (CONCAT11(auVar45[6],cVar33) & 0xff40) +
                                  (CONCAT11(auVar45[7],cVar35) & 0xff80),
                                  (CONCAT11(auVar46[0],cVar22) & 0xff01) +
                                  (CONCAT11(auVar46[1],cVar24) & 0xff02) +
                                  (CONCAT11(auVar46[2],cVar26) & 0xff04) +
                                  (CONCAT11(auVar46[3],cVar28) & 0xff08) +
                                  (CONCAT11(auVar46[4],cVar30) & 0xff10) +
                                  (CONCAT11(auVar46[5],cVar32) & 0xff20) +
                                  (CONCAT11(auVar46[6],cVar34) & 0xff40) +
                                  (CONCAT11(auVar46[7],cVar36) & 0xff80)) == 0) &&
                       (uVar19 = (ulong)CONCAT16(-(sStack_e6 == 0),
                                                 (uint6)CONCAT14(-(sStack_e8 == 0),
                                                                 (uint)CONCAT12(-(sStack_ea == 0),
                                                                                -(ushort)(local_ec 
                                                  == 0)))) & 0x8000400020001,
                       (short)((short)uVar19 + (short)(uVar19 >> 0x10) + (short)(uVar19 >> 0x20) +
                              (short)(uVar19 >> 0x30)) == 0)) {
                      uVar19 = param_1 + 0xcb4;
                      FUN_1006b184c(uVar19,local_12c,local_134,local_138,param_9,0x1800);
                      if (uVar19 < 0xffffffffffffff89) {
                        puVar17 = (uint *)(lVar3 + (long)puVar17);
                        puVar1 = puVar17 + 3;
                        if (puVar1 <= puVar2) {
                          uVar5 = *puVar17;
                          *(uint *)(param_1 + 0x11e4) = uVar5;
                          uVar6 = puVar17[1];
                          *(uint *)(param_1 + 0x11e8) = uVar6;
                          uVar7 = puVar17[2];
                          *(uint *)(param_1 + 0x11ec) = uVar7;
                          uVar18 = (long)puVar2 - (long)puVar1;
                          uVar4 = (uint)LZCOUNT((int)uVar18 + 0x20000) ^ 0x1f;
                          if (0xfffdffff < uVar18) {
                            uVar4 = 0x1f;
                          }
                          if (uVar4 <= local_130) {
                            uVar19 = (ulong)(uVar4 + 1);
                            psVar16 = asStack_c0;
                            do {
                              if (*psVar16 == 0) goto LAB_1006bd01c;
                              uVar19 = uVar19 - 1;
                              psVar16 = psVar16 + 1;
                            } while (uVar19 != 0);
                            uVar19 = 0xffffffffffffffe2;
                            if (((((uVar5 != 0) && (uVar5 <= uVar18)) && (uVar6 != 0)) &&
                                ((uVar6 <= uVar18 && (uVar7 != 0)))) && (uVar7 <= uVar18)) {
                              *(undefined4 *)(param_1 + 0x400) = 2;
                              *(undefined8 *)(param_1 + 0x11d8) = 0x200000002;
                              *(undefined4 *)(param_1 + 0x11e0) = 2;
                              FUN_1006bd0d8(param_2,param_3,param_4,puVar1,uVar18,param_8);
                              uVar19 = uVar20;
                            }
                            goto LAB_1006bd028;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_1006bd01c:
    uVar19 = 0xffffffffffffffe2;
  }
LAB_1006bd028:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar19);
}

