// rea decompile_all
// name: FUN_100705be0
// address: 0x100705be0
// body: available
// range: 0x100705be0-0x100705f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100705be0(long param_1,uint param_2,long *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar19;
  undefined8 uVar18;
  uint uVar20;
  uint uVar21;
  
  if (param_2 == 0) {
    iVar3 = 0;
    if ((int)param_3[10] != 0) goto LAB_100705ca4;
  }
  else {
    if ((int)param_3[0xc] == 2) {
      iVar3 = param_2 << 0xb;
      iVar4 = (int)param_3[10];
    }
    else {
      iVar4 = (int)param_3[10];
      if (iVar4 == 1) {
        iVar3 = param_2 * 0x600;
        goto LAB_100705ca4;
      }
      iVar3 = (int)param_3[8] * param_2;
      lVar6 = *param_3;
      uVar7 = (ulong)param_2;
      if (param_4 == 0) {
        if (param_2 < 4) {
          uVar10 = 0;
        }
        else {
          iVar13 = 0;
          iVar15 = 0;
          iVar16 = 0;
          uVar10 = uVar7 & 0xfffffffc;
          pbVar11 = (byte *)(param_1 + 3);
          uVar14 = uVar10;
          do {
            iVar3 = iVar3 - ((int)LZCOUNT(*(int *)(lVar6 + (ulong)pbVar11[-3] * 4) + 1) << 8 ^
                            0x1f00U);
            iVar13 = iVar13 - ((int)LZCOUNT(*(int *)(lVar6 + (ulong)pbVar11[-2] * 4) + 1) << 8 ^
                              0x1f00U);
            iVar15 = iVar15 - ((int)LZCOUNT(*(int *)(lVar6 + (ulong)pbVar11[-1] * 4) + 1) << 8 ^
                              0x1f00U);
            iVar16 = iVar16 - ((int)LZCOUNT(*(int *)(lVar6 + (ulong)*pbVar11 * 4) + 1) << 8 ^
                              0x1f00U);
            uVar14 = uVar14 - 4;
            pbVar11 = pbVar11 + 4;
          } while (uVar14 != 0);
          iVar3 = iVar16 + iVar15 + iVar13 + iVar3;
          if (uVar10 == uVar7) goto LAB_100705bf8;
        }
        lVar8 = uVar7 - uVar10;
        pbVar11 = (byte *)(param_1 + uVar10);
        do {
          iVar3 = iVar3 - ((int)LZCOUNT(*(int *)(lVar6 + (ulong)*pbVar11 * 4) + 1) << 8 ^ 0x1f00U);
          lVar8 = lVar8 + -1;
          pbVar11 = pbVar11 + 1;
        } while (lVar8 != 0);
      }
      else {
        if (param_2 < 4) {
          uVar10 = 0;
        }
        else {
          iVar13 = 0;
          uVar10 = uVar7 & 0xfffffffc;
          iVar15 = 0;
          iVar16 = 0;
          pbVar11 = (byte *)(param_1 + 3);
          uVar14 = uVar10;
          do {
            iVar1 = *(int *)(lVar6 + (ulong)pbVar11[-3] * 4) + 1;
            iVar2 = *(int *)(lVar6 + (ulong)*pbVar11 * 4) + 1;
            uVar5 = (uint)LZCOUNT(iVar1) ^ 0x1f;
            uVar12 = (uint)LZCOUNT(iVar2) ^ 0x1f;
            iVar17 = *(int *)(lVar6 + (ulong)pbVar11[-2] * 4) + 1;
            iVar19 = *(int *)(lVar6 + (ulong)pbVar11[-1] * 4) + 1;
            uVar20 = (uint)(byte)((byte)LZCOUNT(iVar17) ^ 0x1f);
            uVar21 = (uint)(byte)((byte)LZCOUNT(iVar19) ^ 0x1f);
            uVar18 = NEON_ushl(CONCAT44(iVar19 * 0x100,iVar17 * 0x100),CONCAT44(-uVar21,-uVar20),4);
            iVar3 = iVar3 - (((uint)(iVar1 * 0x100) >> (ulong)(uVar5 & 0x1f)) + uVar5 * 0x100);
            iVar15 = iVar15 - ((int)uVar18 + uVar20 * 0x100);
            iVar16 = iVar16 - ((int)((ulong)uVar18 >> 0x20) + uVar21 * 0x100);
            iVar13 = iVar13 - (((uint)(iVar2 * 0x100) >> (ulong)(uVar12 & 0x1f)) + uVar12 * 0x100);
            uVar14 = uVar14 - 4;
            pbVar11 = pbVar11 + 4;
          } while (uVar14 != 0);
          iVar3 = iVar13 + iVar15 + iVar3 + iVar16;
          if (uVar10 == uVar7) goto LAB_100705bf8;
        }
        lVar8 = uVar7 - uVar10;
        pbVar11 = (byte *)(param_1 + uVar10);
        do {
          iVar13 = *(int *)(lVar6 + (ulong)*pbVar11 * 4) + 1;
          uVar5 = (uint)LZCOUNT(iVar13) ^ 0x1f;
          iVar3 = iVar3 - (((uint)(iVar13 * 0x100) >> (ulong)(uVar5 & 0x1f)) + uVar5 * 0x100);
          lVar8 = lVar8 + -1;
          pbVar11 = pbVar11 + 1;
        } while (lVar8 != 0);
      }
    }
LAB_100705bf8:
    if (iVar4 != 0) {
LAB_100705ca4:
      uVar5 = (uint)LZCOUNT(param_2 + 1);
      uVar12 = uVar5 ^ 0x1f;
      uVar5 = uVar5 << 8 ^ 0x1f00;
      if (param_4 != 0) {
        uVar5 = ((param_2 + 1) * 0x100 >> (ulong)(uVar12 & 0x1f)) + uVar12 * 0x100;
      }
      return uVar5 + iVar3;
    }
    if (0x3f < param_2) {
      uVar5 = 0x32 - (int)LZCOUNT(param_2);
      goto LAB_100705c2c;
    }
  }
  uVar5 = (uint)(byte)(&DAT_10084fdf4)[param_2];
LAB_100705c2c:
  piVar9 = (int *)param_3[1];
  uVar12 = (uint)LZCOUNT(*piVar9 + 1);
  if (param_4 == 0) {
    return (uVar12 << 8 ^ 0x1f00) + *(int *)(&DAT_10084fd64 + (ulong)uVar5 * 4) * 0x100 +
           ((int)LZCOUNT(piVar9[uVar5] + 1) << 8 ^ 0xffffe0ffU) + 1 + iVar3;
  }
  uVar12 = uVar12 ^ 0x1f;
  uVar20 = (uint)LZCOUNT(piVar9[uVar5] + 1) ^ 0x1f;
  return ((((uint)((*piVar9 + 1) * 0x100) >> (ulong)(uVar12 & 0x1f)) + uVar12 * 0x100 +
          *(int *)(&DAT_10084fd64 + (ulong)uVar5 * 4) * 0x100) -
         (((uint)((piVar9[uVar5] + 1) * 0x100) >> (ulong)(uVar20 & 0x1f)) + uVar20 * 0x100)) + iVar3
  ;
}

