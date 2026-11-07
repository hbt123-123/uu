// rea decompile_all
// name: FUN_100705148
// address: 0x100705148
// body: available
// range: 0x100705148-0x100705567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100705148(long param_1,long *param_2,ulong *param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ulong *puVar14;
  byte *pbVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint *puVar25;
  int iVar26;
  uint local_64;
  
  if (param_4 < 7) {
    if (param_4 == 5) {
      lVar16 = *param_2;
      uVar18 = 0xbb000000;
    }
    else {
      if (param_4 != 6) {
LAB_100705194:
        uVar18 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                        (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
        goto LAB_1007051dc;
      }
      lVar16 = *param_2;
      uVar18 = 0xbf9b0000;
    }
  }
  else if (param_4 == 7) {
    lVar16 = *param_2;
    uVar18 = 0xbfa56300;
  }
  else {
    if (param_4 != 8) goto LAB_100705194;
    lVar16 = *param_2;
    uVar18 = 0xb7a56463;
  }
  uVar18 = lVar16 * (uVar18 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
  ;
LAB_1007051dc:
  lVar22 = *(long *)(param_1 + 0x40);
  uVar6 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
  uVar7 = ~uVar6;
  uVar5 = *(uint *)(*(long *)(param_1 + 0x30) + uVar18 * 4);
  lVar16 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar8 = (int)param_2 - (int)lVar16;
  uVar12 = 0;
  if (uVar7 <= uVar8) {
    uVar12 = uVar8 - uVar7;
  }
  puVar25 = (uint *)(lVar22 + (ulong)((uVar8 & (uVar6 ^ 0xffffffff)) << 1) * 4);
  pbVar3 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x1c);
  iVar26 = uVar8 + 9;
  uVar13 = *(uint *)(param_1 + 0xc4);
  *(uint *)(*(long *)(param_1 + 0x30) + uVar18 * 4) = uVar8;
  if (uVar5 < uVar6) {
    uVar12 = 0;
    puVar25[0] = 0;
    puVar25[1] = 0;
  }
  else {
    pbVar24 = (byte *)0x0;
    pbVar23 = (byte *)0x0;
    puVar11 = puVar25 + 1;
    uVar13 = ~(-1 << (ulong)(uVar13 & 0x1f));
    pbVar10 = (byte *)0x8;
    do {
      pbVar15 = pbVar24;
      if (pbVar23 <= pbVar24) {
        pbVar15 = pbVar23;
      }
      uVar18 = (ulong)uVar5;
      puVar9 = (ulong *)((long)param_2 + (long)pbVar15);
      if ((param_5 == 0) || (pbVar3 <= pbVar15 + uVar18)) {
        puVar17 = (ulong *)(pbVar15 + lVar16 + uVar18);
        puVar14 = puVar9;
        if (puVar9 < (ulong *)((long)param_3 + -7)) {
          if (*puVar17 == *puVar9) {
            lVar19 = 0;
            puVar14 = (ulong *)((long)(param_2 + 1) + (long)pbVar15);
            puVar17 = (ulong *)(pbVar15 + lVar16 + 8 + uVar18);
            do {
              if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_1007053d0;
              uVar20 = *puVar17;
              uVar21 = *puVar14;
              lVar19 = lVar19 + 8;
              puVar14 = puVar14 + 1;
              puVar17 = puVar17 + 1;
            } while (uVar20 == uVar21);
            uVar21 = uVar21 ^ uVar20;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar9 ^ *puVar17;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
        }
        else {
LAB_1007053d0:
          if (puVar14 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar17 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar17 = (ulong *)((long)puVar17 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar17 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if ((puVar14 < param_3) && ((byte)*puVar17 == (byte)*puVar14)) {
            puVar14 = (ulong *)((long)puVar14 + 1);
          }
          uVar21 = (long)puVar14 - (long)puVar9;
        }
        pbVar15 = pbVar15 + uVar21;
        lVar19 = lVar16 + uVar18;
      }
      else {
        lVar19 = lVar4 + uVar18;
        FUN_1006c7460(puVar9,pbVar15 + lVar19,param_3,pbVar3 + lVar4,pbVar3 + lVar16);
        pbVar15 = (byte *)((long)puVar9 + (long)pbVar15);
        if (pbVar3 <= pbVar15 + uVar18) {
          lVar19 = lVar16 + uVar18;
        }
      }
      iVar2 = iVar26;
      if ((byte *)(ulong)(iVar26 - uVar5) < pbVar15) {
        iVar2 = uVar5 + (int)pbVar15;
      }
      if (pbVar10 < pbVar15) {
        iVar26 = iVar2;
        pbVar10 = pbVar15;
      }
      if ((ulong *)((long)param_2 + (long)pbVar15) == param_3) break;
      puVar1 = (uint *)(lVar22 + (ulong)((uVar5 & uVar7) << 1) * 4);
      if (pbVar15[lVar19] < (byte)*(ulong *)((long)param_2 + (long)pbVar15)) {
        *puVar25 = uVar5;
        if (uVar5 <= uVar12) {
          puVar25 = &local_64;
          break;
        }
        puVar1 = puVar1 + 1;
        pbVar24 = pbVar15;
        puVar25 = puVar1;
      }
      else {
        *puVar11 = uVar5;
        puVar11 = puVar1;
        pbVar23 = pbVar15;
        if (uVar5 <= uVar12) {
          puVar11 = &local_64;
          break;
        }
      }
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      uVar5 = *puVar1;
    } while (uVar6 <= uVar5);
    *puVar11 = 0;
    *puVar25 = 0;
    uVar12 = (int)pbVar10 - 0x180;
    if (0xbf < uVar12) {
      uVar12 = 0xc0;
    }
    if (pbVar10 < (byte *)0x181) {
      uVar12 = 0;
    }
  }
  uVar5 = (iVar26 - uVar8) - 8;
  if (uVar12 <= uVar5) {
    uVar12 = uVar5;
  }
  return uVar12;
}

