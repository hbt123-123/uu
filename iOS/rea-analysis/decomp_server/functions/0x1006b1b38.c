// rea decompile_all
// name: FUN_1006b1b38
// address: 0x1006b1b38
// body: available
// range: 0x1006b1b38-0x1006b1d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b1b38(undefined2 *param_1,long param_2,long param_3,int param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  uVar1 = param_4 + 1;
  if (param_4 == -1) {
    return -1;
  }
  bVar4 = false;
  uVar9 = 0;
  uVar11 = param_5 - 5;
  iVar17 = 1 << (ulong)(param_5 & 0x1f);
  uVar13 = iVar17 + 1;
  puVar12 = (undefined2 *)((long)param_1 + param_2 + -2);
  uVar16 = 4;
  puVar14 = param_1;
  iVar18 = param_5 + 1;
  do {
    if (bVar4) {
      uVar7 = (uint)uVar9;
      uVar6 = uVar9;
      if (uVar7 < uVar1) {
        while (*(short *)(param_3 + uVar6 * 2) == 0) {
          uVar6 = uVar6 + 1;
          if (uVar1 == uVar6) goto LAB_1006b1d18;
        }
      }
      uVar5 = (uint)uVar6;
      if (uVar5 == uVar1) {
LAB_1006b1d18:
        uVar1 = uVar16 + 0xe;
        if (-8 < (int)uVar16) {
          uVar1 = uVar16 + 7;
        }
        if (uVar13 != 1) {
          return -1;
        }
        if ((param_6 == 0) && (puVar12 < puVar14)) {
          return -0x46;
        }
        *puVar14 = (short)uVar11;
        return (long)puVar14 + (((long)((ulong)uVar1 << 0x20) >> 0x23) - (long)param_1);
      }
      if (uVar5 < uVar7 + 0x18) {
        uVar7 = uVar7 + 3;
      }
      else {
        iVar10 = 0xffff << (ulong)(uVar16 & 0x1f);
        puVar15 = puVar14;
        if (param_6 == 0) {
          do {
            if (puVar12 < puVar15) {
              return -0x46;
            }
            uVar11 = uVar11 + iVar10;
            puVar14 = puVar15 + 1;
            *puVar15 = (short)uVar11;
            uVar11 = uVar11 >> 0x10;
            iVar8 = (int)uVar9;
            uVar9 = (ulong)(iVar8 + 0x18);
            puVar15 = puVar14;
          } while (iVar8 + 0x30U <= uVar5);
        }
        else {
          do {
            uVar11 = uVar11 + iVar10;
            puVar14 = puVar15 + 1;
            *puVar15 = (short)uVar11;
            uVar11 = uVar11 >> 0x10;
            iVar8 = (int)uVar9;
            uVar9 = (ulong)(iVar8 + 0x18);
            puVar15 = puVar14;
          } while (iVar8 + 0x30U <= uVar5);
        }
        uVar7 = (int)uVar9 + 3;
      }
      while (iVar10 = (int)uVar9, uVar7 <= uVar5) {
        uVar11 = (3 << (ulong)(uVar16 & 0x1f)) + uVar11;
        uVar16 = uVar16 + 2;
        uVar9 = (ulong)(iVar10 + 3);
        uVar7 = iVar10 + 6;
      }
      uVar11 = (uVar5 - iVar10 << (ulong)(uVar16 & 0x1f)) + uVar11;
      uVar9 = uVar6;
      if ((int)uVar16 < 0xf) {
        uVar16 = uVar16 + 2;
      }
      else {
        if ((param_6 == 0) && (puVar12 < puVar14)) {
          return -0x46;
        }
        *puVar14 = (short)uVar11;
        uVar11 = uVar11 >> 0x10;
        uVar16 = uVar16 - 0xe;
        puVar14 = puVar14 + 1;
      }
    }
    sVar3 = *(short *)(param_3 + (uVar9 & 0xffffffff) * 2);
    iVar10 = ~uVar13 + iVar17 * 2;
    iVar8 = -(int)sVar3;
    if (-1 < sVar3) {
      iVar8 = (int)sVar3;
    }
    uVar13 = uVar13 - iVar8;
    iVar8 = sVar3 + 1;
    iVar2 = 0;
    if (iVar17 <= iVar8) {
      iVar2 = iVar10;
    }
    iVar2 = iVar2 + iVar8;
    bVar4 = iVar2 == 1;
    iVar8 = iVar18;
    if ((int)uVar13 < 1) {
      return -1;
    }
    for (; (int)uVar13 < iVar17; iVar17 = iVar17 >> 1) {
      iVar8 = iVar8 + -1;
    }
    uVar11 = (iVar2 << (ulong)(uVar16 & 0x1f)) + uVar11;
    uVar16 = (uVar16 + iVar18) - (uint)(iVar2 < iVar10);
    puVar15 = puVar14;
    if (0x10 < (int)uVar16) {
      if ((param_6 == 0) && (puVar12 < puVar14)) {
        return -0x46;
      }
      puVar15 = puVar14 + 1;
      *puVar14 = (short)uVar11;
      uVar11 = uVar11 >> 0x10;
      uVar16 = uVar16 - 0x10;
    }
    uVar7 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar7;
    puVar14 = puVar15;
    if ((uVar1 <= uVar7) || (iVar18 = iVar8, uVar13 == 1)) goto LAB_1006b1d18;
  } while( true );
}

