// rea decompile_all
// name: FUN_1006b1e58
// address: 0x1006b1e58
// body: available
// range: 0x1006b1e58-0x1006b22ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b1e58(undefined2 *param_1,uint param_2,uint *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  
  uVar15 = 0xb;
  if (param_2 != 0) {
    uVar15 = param_2;
  }
  uVar6 = (ulong)uVar15;
  if (4 < uVar15) {
    if (0xc < uVar15) {
      return 0xffffffffffffffd4;
    }
    uVar16 = (uint)LZCOUNT((int)param_4) ^ 0x1f;
    uVar9 = ((uint)LZCOUNT(param_5) ^ 0x1f) + 2;
    if (uVar16 + 1 < uVar9) {
      uVar9 = uVar16 + 1;
    }
    if (uVar9 <= uVar15) {
      uVar17 = 0;
      uVar16 = 0;
      uVar9 = 0;
      uVar14 = (ulong)(0x3e - uVar15);
      iVar4 = 1 << (ulong)(uVar15 & 0x1f);
      uVar19 = 0;
      iVar18 = iVar4;
      if (param_4 != 0) {
        uVar19 = 0x4000000000000000 / param_4;
      }
      do {
        uVar10 = param_3[uVar9];
        if (uVar10 == param_4) {
          return 0;
        }
        uVar20 = (uint)(param_4 >> (uVar6 & 0x3f));
        if (uVar10 == 0) {
          param_1[uVar9] = 0;
        }
        else if (uVar20 < uVar10) {
          uVar13 = uVar19 * uVar10;
          uVar11 = uVar13 >> (uVar14 & 0x3f);
          uVar10 = (uint)uVar11;
          if (((uVar11 & 0xfff8) == 0) &&
             ((ulong)*(uint *)(&DAT_10084e8a0 + (uVar11 & 0xffff) * 4) << (uVar14 - 0x14 & 0x3f) <
              uVar13 - ((uVar11 & 0xffff) << (uVar14 & 0x3f)))) {
            uVar10 = uVar10 + 1;
          }
          uVar1 = uVar10 & 0xffff;
          uVar2 = uVar1;
          uVar5 = uVar9;
          if (uVar1 <= uVar17) {
            uVar2 = uVar17;
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          param_1[uVar9] = (short)uVar10;
          iVar18 = iVar18 - uVar1;
          uVar17 = uVar2;
        }
        else {
          param_1[uVar9] = 0xffff;
          iVar18 = iVar18 + -1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 <= param_5);
      psVar8 = param_1 + uVar16;
      sVar3 = *psVar8;
      if (-iVar18 < (int)sVar3 >> 1) {
LAB_1006b2228:
        *psVar8 = sVar3 + (short)iVar18;
        return uVar6;
      }
      uVar9 = 0;
      uVar13 = param_4 * 3 >> ((ulong)(uVar15 + 1) & 0x3f);
      uVar15 = param_5 + 1;
      uVar11 = (ulong)uVar15;
      puVar7 = param_3;
      uVar19 = uVar11;
      puVar12 = param_1;
      do {
        uVar16 = *puVar7;
        if (uVar16 == 0) {
          *puVar12 = 0;
        }
        else {
          if (uVar20 < uVar16) {
            if ((uint)uVar13 < uVar16) {
              *puVar12 = 0xfffe;
              goto LAB_1006b1fd0;
            }
            *puVar12 = 1;
          }
          else {
            *puVar12 = 0xffff;
          }
          uVar9 = uVar9 + 1;
          param_4 = param_4 - uVar16;
        }
LAB_1006b1fd0:
        puVar12 = puVar12 + 1;
        uVar19 = uVar19 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar19 != 0);
      uVar16 = iVar4 - uVar9;
      uVar19 = (ulong)uVar16;
      if (uVar16 != 0) {
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = param_4 / uVar19;
        }
        if ((uVar13 & 0xffffffff) < uVar21) {
          uVar19 = uVar11 & 7;
          uVar17 = 0;
          if ((ulong)(uVar16 * 2) != 0) {
            uVar17 = (uint)((param_4 * 3) / (ulong)(uVar16 * 2));
          }
          if (param_5 < 7) {
            lVar22 = 0;
          }
          else {
            lVar22 = 0;
            puVar7 = param_3 + 4;
            psVar8 = param_1 + 4;
            do {
              if ((psVar8[-4] == -2) && (uVar16 = puVar7[-4], uVar16 <= uVar17)) {
                psVar8[-4] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((psVar8[-3] == -2) && (uVar16 = puVar7[-3], uVar16 <= uVar17)) {
                psVar8[-3] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((psVar8[-2] == -2) && (uVar16 = puVar7[-2], uVar16 <= uVar17)) {
                psVar8[-2] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((psVar8[-1] == -2) && (uVar16 = puVar7[-1], uVar16 <= uVar17)) {
                psVar8[-1] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((*psVar8 == -2) && (uVar16 = *puVar7, uVar16 <= uVar17)) {
                *psVar8 = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((psVar8[1] == -2) && (uVar16 = puVar7[1], uVar16 <= uVar17)) {
                psVar8[1] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((psVar8[2] == -2) && (uVar16 = puVar7[2], uVar16 <= uVar17)) {
                psVar8[2] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              if ((psVar8[3] == -2) && (uVar16 = puVar7[3], uVar16 <= uVar17)) {
                psVar8[3] = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              lVar22 = lVar22 + -8;
              puVar7 = puVar7 + 8;
              psVar8 = psVar8 + 8;
            } while (-lVar22 != (uVar11 & 0xfffffff8));
            lVar22 = -lVar22;
          }
          if ((uVar15 & 7) != 0) {
            puVar7 = param_3 + lVar22;
            psVar8 = param_1 + lVar22;
            do {
              if ((*psVar8 == -2) && (uVar16 = *puVar7, uVar16 <= uVar17)) {
                *psVar8 = 1;
                uVar9 = uVar9 + 1;
                param_4 = param_4 - uVar16;
              }
              puVar7 = puVar7 + 1;
              psVar8 = psVar8 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          uVar19 = (ulong)(iVar4 - uVar9);
        }
        iVar18 = (int)uVar19;
        if (uVar9 == uVar15) {
          uVar19 = 0;
          uVar15 = 0;
          uVar9 = 0;
          do {
            uVar16 = param_3[uVar19];
            uVar17 = (uint)uVar19;
            if (param_3[uVar19] <= uVar9) {
              uVar16 = uVar9;
              uVar17 = uVar15;
            }
            uVar15 = uVar17;
            uVar19 = uVar19 + 1;
            uVar9 = uVar16;
          } while (uVar11 != uVar19);
          psVar8 = param_1 + uVar15;
          sVar3 = *psVar8;
          goto LAB_1006b2228;
        }
        if (param_4 == 0) {
          if (iVar18 != 0) {
            uVar15 = 0;
            do {
              if (0 < (short)param_1[uVar15]) {
                uVar19 = (ulong)((int)uVar19 - 1);
                param_1[uVar15] = param_1[uVar15] + 1;
              }
              uVar9 = 0;
              if (uVar15 != param_5) {
                uVar9 = uVar15 + 1;
              }
              uVar15 = uVar9;
            } while ((int)uVar19 != 0);
          }
        }
        else {
          uVar15 = 0;
          uVar13 = ~(-1L << (uVar14 - 1 & 0x3f));
          uVar11 = 0;
          if (param_4 != 0) {
            uVar11 = ((uVar19 << (uVar14 & 0x3f)) + uVar13) / param_4;
          }
          do {
            uVar19 = uVar13;
            if (param_1[uVar15] == -2) {
              uVar19 = uVar13 + uVar11 * param_3[uVar15];
              uVar13 = uVar13 >> (uVar14 & 0x3f);
              uVar21 = uVar19 >> (uVar14 & 0x3f);
              if (uVar21 == uVar13) {
                return 0xffffffffffffffff;
              }
              param_1[uVar15] = (short)uVar21 - (short)uVar13;
            }
            uVar15 = uVar15 + 1;
            uVar13 = uVar19;
          } while (uVar15 <= param_5);
        }
      }
      return uVar6;
    }
  }
  return 0xffffffffffffffff;
}

