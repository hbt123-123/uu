// rea decompile_all
// name: FUN_1006b43a0
// address: 0x1006b43a0
// body: available
// range: 0x1006b43a0-0x1006b4dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b4df8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b43a0(long param_1,int *param_2,uint param_3,uint param_4,undefined4 *param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  uint uVar19;
  bool bVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  ulong uVar27;
  int *piVar28;
  undefined1 *puVar29;
  int iVar30;
  ulong uVar31;
  char *pcVar32;
  long lVar33;
  short *psVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  ushort uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  byte *pbVar42;
  uint uVar43;
  short local_190 [16];
  uint local_170 [6];
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (((ulong)param_5 & 3) != 0) {
    uVar21 = 0xffffffffffffffff;
    goto LAB_1006b4c94;
  }
  if (param_6 < 0x1000) {
    uVar21 = 0xffffffffffffffbe;
    goto LAB_1006b4c94;
  }
  uVar4 = 0xb;
  if (param_4 != 0) {
    uVar4 = param_4;
  }
  if (0xff < param_3) {
    uVar21 = 0xffffffffffffffd2;
    goto LAB_1006b4c94;
  }
  _bzero(param_5,0x1000);
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uVar31 = (ulong)(param_3 + 1);
  local_170[2] = 0;
  local_170[3] = 0;
  local_170[0] = 0;
  local_170[1] = 0;
  uStack_158 = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  piVar28 = param_2;
  uVar21 = uVar31;
  do {
    uVar35 = (ulong)((uint)LZCOUNT(*piVar28 + 1) ^ 0x1f);
    local_170[uVar35 * 2] = local_170[uVar35 * 2] + 1;
    uVar21 = uVar21 - 1;
    piVar28 = piVar28 + 1;
  } while (uVar21 != 0);
  uStack_88._0_4_ = (int)uStack_88 + (int)local_80;
  local_90._0_4_ = (int)local_90 + (int)uStack_88;
  local_98._0_4_ = (int)local_98 + (int)local_90;
  local_a0._0_4_ = (int)local_a0 + (int)local_98;
  uStack_a8._0_4_ = (int)uStack_a8 + (int)local_a0;
  local_b0._0_4_ = (int)local_b0 + (int)uStack_a8;
  local_b8._0_4_ = (int)local_b8 + (int)local_b0;
  local_c0._0_4_ = (int)local_c0 + (int)local_b8;
  uStack_c8._0_4_ = (int)uStack_c8 + (int)local_c0;
  local_d0._0_4_ = (int)local_d0 + (int)uStack_c8;
  local_d8._0_4_ = (int)local_d8 + (int)local_d0;
  local_e0._0_4_ = (int)local_e0 + (int)local_d8;
  uStack_e8._0_4_ = (int)uStack_e8 + (int)local_e0;
  local_f0._0_4_ = (int)local_f0 + (int)uStack_e8;
  local_f8._0_4_ = (int)local_f8 + (int)local_f0;
  local_100._0_4_ = (int)local_100 + (int)local_f8;
  uStack_108._0_4_ = (int)uStack_108 + (int)local_100;
  local_110._0_4_ = (int)local_110 + (int)uStack_108;
  local_118._0_4_ = (int)local_118 + (int)local_110;
  local_120._0_4_ = (int)local_120 + (int)local_118;
  uStack_128._0_4_ = (int)uStack_128 + (int)local_120;
  local_130._0_4_ = (int)local_130 + (int)uStack_128;
  local_138._0_4_ = (int)local_138 + (int)local_130;
  local_140._0_4_ = (int)local_140 + (int)local_138;
  uStack_148._0_4_ = (int)uStack_148 + (int)local_140;
  local_150._0_4_ = (int)local_150 + (int)uStack_148;
  uStack_158._0_4_ = (int)uStack_158 + (int)local_150;
  local_170[5] = local_170[4] + (int)uStack_158;
  local_170[3] = local_170[2] + local_170[5];
  local_170[2] = local_170[2] + local_170[5];
  local_170[4] = local_170[5];
  uStack_158 = CONCAT44((int)uStack_158,(int)uStack_158);
  local_150 = CONCAT44((int)local_150,(int)local_150);
  uStack_148 = CONCAT44((int)uStack_148,(int)uStack_148);
  local_140 = CONCAT44((int)local_140,(int)local_140);
  local_138 = CONCAT44((int)local_138,(int)local_138);
  local_130 = CONCAT44((int)local_130,(int)local_130);
  uStack_128 = CONCAT44((int)uStack_128,(int)uStack_128);
  local_120 = CONCAT44((int)local_120,(int)local_120);
  local_118 = CONCAT44((int)local_118,(int)local_118);
  local_110 = CONCAT44((int)local_110,(int)local_110);
  uStack_108 = CONCAT44((int)uStack_108,(int)uStack_108);
  local_100 = CONCAT44((int)local_100,(int)local_100);
  local_f8 = CONCAT44((int)local_f8,(int)local_f8);
  local_f0 = CONCAT44((int)local_f0,(int)local_f0);
  uStack_e8 = CONCAT44((int)uStack_e8,(int)uStack_e8);
  local_e0 = CONCAT44((int)local_e0,(int)local_e0);
  local_d8 = CONCAT44((int)local_d8,(int)local_d8);
  local_d0 = CONCAT44((int)local_d0,(int)local_d0);
  uStack_c8 = CONCAT44((int)uStack_c8,(int)uStack_c8);
  local_c0 = CONCAT44((int)local_c0,(int)local_c0);
  local_b8 = CONCAT44((int)local_b8,(int)local_b8);
  local_b0 = CONCAT44((int)local_b0,(int)local_b0);
  uStack_a8 = CONCAT44((int)uStack_a8,(int)uStack_a8);
  local_a0 = CONCAT44((int)local_a0,(int)local_a0);
  local_98 = CONCAT44((int)local_98,(int)local_98);
  local_90 = CONCAT44((int)local_90,(int)local_90);
  uStack_88 = CONCAT44((int)uStack_88,(int)uStack_88);
  local_80 = CONCAT44((int)local_80,(int)local_80);
  local_78 = CONCAT44((undefined4)local_78,(undefined4)local_78);
  uVar21 = 0;
  do {
    uVar22 = param_2[uVar21];
    uVar35 = (ulong)(((uint)LZCOUNT(uVar22 + 1) ^ 0x1f) + 1);
    uVar43 = local_170[uVar35 * 2];
    uVar37 = local_170[uVar35 * 2 + 1];
    uVar41 = (ulong)uVar37;
    local_170[uVar35 * 2 + 1] = uVar37 + 1;
    uVar35 = uVar41;
    if (uVar43 < uVar37) {
      puVar24 = (undefined8 *)(param_5 + uVar41 * 2 + 2);
      uVar26 = uVar41;
      do {
        uVar26 = uVar26 - 1;
        uVar35 = uVar41;
        if (uVar22 <= (uint)param_5[(uVar26 & 0xffffffff) * 2 + 2]) break;
        *puVar24 = *(undefined8 *)(param_5 + (uVar26 & 0xffffffff) * 2 + 2);
        uVar37 = (int)uVar41 - 1;
        uVar41 = (ulong)uVar37;
        puVar24 = puVar24 + -1;
        uVar35 = (ulong)uVar43;
      } while (uVar43 < uVar37);
    }
    param_5[uVar35 * 2 + 2] = uVar22;
    *(char *)((long)(param_5 + uVar35 * 2 + 2) + 6) = (char)uVar21;
    uVar21 = uVar21 + 1;
  } while (uVar21 != uVar31);
  uVar21 = (ulong)(param_3 + 0x100);
  do {
    iVar30 = (int)uVar21;
    uVar35 = (ulong)(iVar30 - 0x100);
    uVar43 = iVar30 - 1;
    uVar21 = (ulong)uVar43;
  } while (param_5[uVar35 * 2 + 2] == 0);
  piVar28 = param_5 + (long)(iVar30 + -0x100) * 2 + 2;
  param_5[0x202] = piVar28[-2] + *piVar28;
  *(undefined2 *)(piVar28 + -1) = 0x100;
  *(undefined2 *)(piVar28 + 1) = 0x100;
  uVar41 = (ulong)uVar4;
  if (uVar43 < 0x100 || iVar30 - 0x101U == 0) {
    *param_5 = 0x80000000;
  }
  else {
    uVar26 = uVar21 - 0x100;
    if (uVar26 < 4) {
      lVar33 = 0x101;
LAB_1006b477c:
      uVar26 = lVar33 - 1;
      puVar25 = param_5 + lVar33 * 2;
      do {
        puVar25 = puVar25 + 2;
        *puVar25 = 0x40000000;
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar21);
    }
    else {
      lVar33 = (uVar26 & 0xfffffffffffffffc) + 0x101;
      uVar36 = uVar21 - 0x100 & 0xfffffffffffffffc;
      puVar25 = param_5 + 0x20a;
      do {
        puVar25[-6] = 0x40000000;
        puVar25[-4] = 0x40000000;
        puVar25[-2] = 0x40000000;
        *puVar25 = 0x40000000;
        uVar36 = uVar36 - 4;
        puVar25 = puVar25 + 8;
      } while (uVar36 != 0);
      if (uVar26 != (uVar26 & 0xfffffffffffffffc)) goto LAB_1006b477c;
    }
    *param_5 = 0x80000000;
    uVar21 = 0x100;
    uVar38 = 0x101;
    uVar37 = iVar30 - 0x102U;
    do {
      bVar20 = *(uint *)((long)param_5 +
                        (-(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar37 << 3) + 8) <
               *(uint *)((long)param_5 + (-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 8)
      ;
      uVar40 = (uint)uVar21;
      uVar22 = uVar40;
      uVar23 = uVar37;
      if (!bVar20) {
        uVar22 = uVar40 + 1;
        uVar23 = uVar40;
      }
      uVar37 = uVar37 - bVar20;
      bVar20 = *(uint *)((long)param_5 +
                        (-(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar37 << 3) + 8) <
               *(uint *)((long)param_5 +
                        (-(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar22 << 3) + 8);
      uVar40 = uVar22;
      uVar19 = uVar37;
      if (!bVar20) {
        uVar40 = uVar22 + 1;
        uVar19 = uVar22;
      }
      uVar21 = (ulong)uVar40;
      uVar37 = uVar37 - bVar20;
      param_5[(ulong)uVar38 * 2 + 2] =
           param_5[(ulong)uVar19 * 2 + 2] + param_5[(ulong)uVar23 * 2 + 2];
      *(ushort *)(param_5 + (ulong)uVar19 * 2 + 2 + 1) = uVar38;
      *(ushort *)(param_5 + (ulong)uVar23 * 2 + 2 + 1) = uVar38;
      uVar38 = uVar38 + 1;
    } while (uVar38 <= uVar43);
  }
  *(undefined1 *)((long)param_5 + (ulong)uVar43 * 8 + 0xf) = 0;
  if (iVar30 - 0x102U < 0xffffff00) {
    uVar21 = (ulong)(iVar30 - 2);
    pcVar32 = (char *)((long)param_5 + uVar21 * 8 + 0xf);
    do {
      uVar21 = uVar21 - 1;
      *pcVar32 = *(char *)((long)param_5 + (ulong)*(ushort *)(pcVar32 + -3) * 8 + 0xf) + '\x01';
      pcVar32 = pcVar32 + -8;
    } while ((uVar21 & 0xffffff00) != 0);
  }
  uVar21 = 0xffffffffffffffff;
  pcVar32 = (char *)((long)param_5 + 0xf);
  do {
    *pcVar32 = *(char *)((long)param_5 + (ulong)*(ushort *)(pcVar32 + -3) * 8 + 0xf) + '\x01';
    uVar21 = uVar21 + 1;
    pcVar32 = pcVar32 + 8;
  } while (uVar21 < uVar35);
  pbVar42 = (byte *)((long)param_5 + uVar35 * 8 + 0xf);
  bVar5 = *pbVar42;
  uVar26 = (ulong)bVar5;
  uVar43 = bVar5 - uVar4;
  uVar21 = uVar26;
  if (uVar4 <= bVar5 && uVar43 != 0) {
    iVar39 = 0;
    uVar37 = iVar30 - 0x101U;
    do {
      uVar22 = uVar37;
      iVar39 = iVar39 + (1 << (ulong)(uVar43 & 0x1f)) +
               (-1 << (ulong)((uint)bVar5 - (int)uVar21 & 0x1f));
      *pbVar42 = (byte)uVar4;
      pbVar42 = (byte *)((long)param_5 + (ulong)uVar22 * 8 + 0xf);
      uVar21 = (ulong)*pbVar42;
      uVar37 = uVar22 - 1;
    } while (uVar4 < *pbVar42);
    uVar36 = (ulong)(uVar22 + 1);
    do {
      uVar37 = (int)uVar36 - 1;
      uVar36 = (ulong)uVar37;
    } while (uVar4 == *(byte *)((long)param_5 + uVar36 * 8 + 0xf));
    uVar43 = iVar39 >> (uVar43 & 0x1f);
    local_140 = 0xf0f0f0f0f0f0f0f0;
    uStack_158 = 0xf0f0f0f0f0f0f0f0;
    local_170[4] = 0xf0f0f0f0;
    local_170[5] = 0xf0f0f0f0;
    uStack_148 = 0xf0f0f0f0f0f0f0f0;
    local_150 = 0xf0f0f0f0f0f0f0f0;
    local_170[2] = 0xf0f0f0f0;
    local_170[3] = 0xf0f0f0f0;
    local_170[0] = 0xf0f0f0f0;
    local_170[1] = 0xf0f0f0f0;
    if (-1 < (int)uVar37) {
      uVar21 = uVar36;
      uVar27 = uVar41;
      pbVar42 = (byte *)((long)param_5 + (ulong)uVar37 * 8 + 0xf);
      do {
        while( true ) {
          bVar5 = *pbVar42;
          uVar37 = (uint)uVar21;
          if ((uint)bVar5 < (uint)uVar27) break;
          uVar21 = uVar21 - 1;
          pbVar42 = pbVar42 + -8;
          if ((int)uVar37 < 1) goto LAB_1006b4964;
        }
        local_170[uVar4 - bVar5] = uVar37;
        uVar21 = uVar21 - 1;
        uVar27 = (ulong)bVar5;
        pbVar42 = pbVar42 + -8;
      } while (0 < (int)uVar37);
    }
LAB_1006b4964:
    if (0 < (int)uVar43) {
      do {
        if ((int)LZCOUNT(uVar43) == 0x1f) {
          uVar21 = 1;
        }
        else {
          uVar21 = (ulong)(0x20 - (int)LZCOUNT(uVar43));
          do {
            uVar27 = uVar21 - 1;
            if ((local_170[uVar21] != 0xf0f0f0f0) &&
               ((local_170[uVar27 & 0xffffffff] == 0xf0f0f0f0 ||
                ((uint)param_5[(ulong)local_170[uVar21] * 2 + 2] <=
                 (uint)(param_5[(ulong)local_170[uVar27 & 0xffffffff] * 2 + 2] * 2))))) {
              if (0xc < uVar21) goto LAB_1006b4a14;
              goto LAB_1006b49fc;
            }
            uVar21 = uVar27;
          } while ((uVar27 & 0xfffffffe) != 0);
          uVar21 = 1;
        }
LAB_1006b49fc:
        do {
          if (local_170[uVar21] != 0xf0f0f0f0) break;
          uVar21 = uVar21 + 1;
        } while (uVar21 != 0xd);
LAB_1006b4a14:
        uVar23 = (int)uVar21 - 1;
        uVar22 = local_170[uVar21 & 0xffffffff];
        uVar37 = uVar22;
        if (local_170[uVar23] != 0xf0f0f0f0) {
          uVar37 = local_170[uVar23];
        }
        local_170[uVar23] = uVar37;
        *(char *)((long)param_5 + (ulong)uVar22 * 8 + 0xf) =
             *(char *)((long)param_5 + (ulong)uVar22 * 8 + 0xf) + '\x01';
        uVar37 = 0xf0f0f0f0;
        if ((uVar22 != 0) &&
           (uVar37 = uVar22 - 1,
           uVar4 - (int)uVar21 != (uint)*(byte *)((long)param_5 + (ulong)uVar37 * 8 + 0xf))) {
          uVar37 = 0xf0f0f0f0;
        }
        iVar30 = -1 << (ulong)(uVar23 & 0x1f);
        local_170[uVar21 & 0xffffffff] = uVar37;
        bVar20 = SCARRY4(iVar30,uVar43);
        uVar43 = iVar30 + uVar43;
      } while (uVar43 != 0 && (int)uVar43 < 0 == bVar20);
    }
    uVar21 = uVar41;
    if ((int)uVar43 < 0) {
      uVar41 = (ulong)local_170[1];
      do {
        uVar22 = (uint)uVar41;
        uVar37 = uVar43;
        if (uVar43 <= uVar22 + 0xf0f0f0f) {
          uVar37 = uVar22 + 0xf0f0f0f;
        }
        uVar40 = -uVar37;
        uVar23 = uVar22;
        if ((4 < uVar40) &&
           (uVar41 = (long)param_5 + (ulong)(uVar22 + 1) * 8 + 0xf,
           uVar22 + 1 <= uVar22 - uVar37 && uVar41 <= uVar41 + (ulong)~uVar37 * 8)) {
          uVar37 = 4;
          if ((uVar40 & 3) != 0) {
            uVar37 = uVar40 & 3;
          }
          iVar30 = uVar40 - uVar37;
          uVar23 = uVar22 + iVar30;
          uVar43 = uVar43 + iVar30;
          do {
            lVar33 = (ulong)(uVar22 + 1) * 8;
            lVar1 = (ulong)(uVar22 + 2) * 8;
            lVar2 = (ulong)(uVar22 + 3) * 8;
            lVar3 = (ulong)(uVar22 + 4) * 8;
            cVar11 = *(char *)((long)param_5 + lVar1 + 0xf);
            cVar12 = *(char *)((long)param_5 + lVar2 + 0xf);
            cVar13 = *(char *)((long)param_5 + lVar3 + 0xf);
            *(char *)((long)param_5 + lVar33 + 0xf) = *(char *)((long)param_5 + lVar33 + 0xf) + -1;
            *(char *)((long)param_5 + lVar1 + 0xf) = cVar11 + -1;
            *(char *)((long)param_5 + lVar2 + 0xf) = cVar12 + -1;
            *(char *)((long)param_5 + lVar3 + 0xf) = cVar13 + -1;
            iVar30 = iVar30 + -4;
            uVar22 = uVar22 + 4;
          } while (iVar30 != 0);
        }
        iVar30 = uVar23 + 0xf0f0f10;
        uVar37 = uVar43;
        while( true ) {
          uVar23 = uVar23 + 1;
          uVar41 = uVar36;
          if (iVar30 == 0) break;
          *(char *)((long)param_5 + (ulong)uVar23 * 8 + 0xf) =
               *(char *)((long)param_5 + (ulong)uVar23 * 8 + 0xf) + -1;
          iVar30 = iVar30 + 1;
          bVar20 = uVar37 == 0xffffffff;
          uVar37 = uVar37 + 1;
          if (bVar20) goto LAB_1006b4a70;
        }
        do {
          uVar36 = uVar41;
          uVar41 = (ulong)((int)uVar36 - 1);
        } while (uVar4 == *(byte *)((long)param_5 + uVar36 * 8 + 0xf));
        uVar41 = (ulong)((int)uVar36 + 1);
        *(char *)((long)param_5 + uVar41 * 8 + 0xf) =
             *(char *)((long)param_5 + uVar41 * 8 + 0xf) + -1;
        uVar43 = uVar37 + 1;
      } while ((int)uVar37 < -1);
    }
  }
LAB_1006b4a70:
  local_170[0] = 0;
  local_170[1] = 0;
  local_170[2] = 0;
  local_170[3] = 0;
  uStack_158 = uStack_158 & 0xffffffffffff0000;
  local_170[4] = 0;
  local_170[5] = 0;
  local_190[0] = 0;
  local_190[1] = 0;
  local_190[2] = 0;
  local_190[3] = 0;
  local_190[4] = 0;
  local_190[5] = 0;
  local_190[6] = 0;
  local_190[7] = 0;
  local_190[0xc] = 0;
  local_190[8] = 0;
  local_190[9] = 0;
  local_190[10] = 0;
  local_190[0xb] = 0;
  uVar43 = (uint)uVar21;
  if (uVar43 < 0xd) {
    uVar41 = 0xffffffffffffffff;
    pbVar42 = (byte *)((long)param_5 + 0xf);
    do {
      *(short *)((long)local_170 + (ulong)*pbVar42 * 2) =
           *(short *)((long)local_170 + (ulong)*pbVar42 * 2) + 1;
      uVar41 = uVar41 + 1;
      pbVar42 = pbVar42 + 8;
    } while (uVar41 < uVar35);
    if (uVar43 != 0) {
      uVar37 = 0;
      uVar35 = (ulong)uVar4;
      if (uVar26 <= uVar4) {
        uVar35 = uVar26;
      }
      lVar33 = uVar35 << 1;
      do {
        *(short *)((long)local_190 + lVar33) = (short)uVar37;
        uVar37 = *(ushort *)((long)local_170 + lVar33) + uVar37 >> 1 & 0x7fff;
        lVar33 = lVar33 + -2;
      } while ((int)lVar33 != 0);
    }
    if (param_3 < 3) {
      uVar41 = 0;
LAB_1006b4b5c:
      puVar29 = (undefined1 *)((long)param_5 + uVar41 * 8 + 0xf);
      lVar33 = uVar31 - uVar41;
      do {
        *(undefined1 *)(param_1 + (ulong)(byte)puVar29[-1] * 4 + 2) = *puVar29;
        puVar29 = puVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
    }
    else {
      uVar41 = uVar31 & 0x1fc;
      pbVar42 = (byte *)((long)param_5 + 0x16);
      uVar35 = uVar41;
      do {
        bVar5 = pbVar42[1];
        bVar6 = pbVar42[9];
        bVar7 = pbVar42[0x11];
        bVar8 = *pbVar42;
        bVar9 = pbVar42[8];
        bVar10 = pbVar42[0x10];
        *(byte *)(param_1 + (ulong)pbVar42[-8] * 4 + 2) = pbVar42[-7];
        *(byte *)(param_1 + (ulong)bVar8 * 4 + 2) = bVar5;
        *(byte *)(param_1 + (ulong)bVar9 * 4 + 2) = bVar6;
        *(byte *)(param_1 + (ulong)bVar10 * 4 + 2) = bVar7;
        pbVar42 = pbVar42 + 0x20;
        uVar35 = uVar35 - 4;
      } while (uVar35 != 0);
      if (uVar41 != uVar31) goto LAB_1006b4b5c;
    }
    uVar37 = param_3 % 6;
    uVar4 = 0;
    if (uVar37 != 5) {
      uVar4 = uVar37 + 1;
    }
    uVar35 = (ulong)uVar4;
    if (param_3 < 5) {
      lVar33 = 0;
    }
    else {
      lVar33 = 0;
      psVar34 = (short *)(param_1 + 0xc);
      do {
        sVar18 = local_190[*(byte *)(psVar34 + -5)];
        local_190[*(byte *)(psVar34 + -5)] = sVar18 + 1;
        sVar14 = local_190[*(byte *)(psVar34 + -3)];
        local_190[*(byte *)(psVar34 + -3)] = sVar14 + 1;
        sVar15 = local_190[*(byte *)(psVar34 + -1)];
        local_190[*(byte *)(psVar34 + -1)] = sVar15 + 1;
        sVar16 = local_190[*(byte *)(psVar34 + 1)];
        local_190[*(byte *)(psVar34 + 1)] = sVar16 + 1;
        sVar17 = local_190[*(byte *)(psVar34 + 3)];
        local_190[*(byte *)(psVar34 + 3)] = sVar17 + 1;
        psVar34[-6] = sVar18;
        psVar34[-4] = sVar14;
        psVar34[-2] = sVar15;
        *psVar34 = sVar16;
        psVar34[2] = sVar17;
        sVar18 = local_190[*(byte *)(psVar34 + 5)];
        local_190[*(byte *)(psVar34 + 5)] = sVar18 + 1;
        psVar34[4] = sVar18;
        psVar34 = psVar34 + 0xc;
        lVar33 = lVar33 + -6;
      } while (uVar35 - uVar31 != lVar33);
      lVar33 = -lVar33;
    }
    if (uVar37 != 5) {
      pbVar42 = (byte *)(param_1 + lVar33 * 4 + 2);
      do {
        sVar18 = local_190[*pbVar42];
        local_190[*pbVar42] = sVar18 + 1;
        *(short *)(pbVar42 + -2) = sVar18;
        pbVar42 = pbVar42 + 4;
        uVar35 = uVar35 - 1;
      } while (uVar35 != 0);
    }
  }
  if (0xc < uVar43) {
    uVar21 = 0xffffffffffffffff;
  }
LAB_1006b4c94:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar21);
}

