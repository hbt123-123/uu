// rea decompile_all
// name: FUN_1006af64c
// address: 0x1006af64c
// body: available
// range: 0x1006af64c-0x1006af953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1006af64c(void *param_1,uint *param_2,int *param_3,uint *param_4,void *param_5)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint *puVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 local_64;
  
  if (param_5 < (void *)0x4) {
    local_64 = 0;
    ___memcpy_chk(&local_64,param_4,param_5,4);
    FUN_1006af64c(param_1,param_2,param_3,&local_64,4);
    pvVar10 = (void *)0xffffffffffffffec;
    if (param_1 <= param_5 || (void *)0xffffffffffffff88 < param_1) {
      pvVar10 = param_1;
    }
  }
  else {
    _bzero(param_1,(ulong)(*param_2 + 1) << 1);
    uVar18 = *param_4;
    uVar13 = uVar18 & 0xf;
    if (uVar13 < 0xb) {
      uVar11 = 0;
      lVar3 = (long)param_4 + (long)param_5;
      *param_3 = uVar13 + 5;
      uVar5 = *param_2;
      uVar19 = 0x20 << (ulong)uVar13;
      uVar17 = uVar19 | 1;
      iVar20 = uVar13 + 6;
      uVar18 = uVar18 >> 4;
      puVar9 = (uint *)(lVar3 + -4);
      uVar13 = 4;
      bVar8 = true;
      puVar16 = param_4;
      do {
        uVar12 = uVar11;
        uVar14 = uVar13;
        if (!bVar8) {
          while (((uVar18 ^ 0xffffffff) & 0xffff) == 0) {
            while ((uint *)(lVar3 + -5) <= puVar16) {
              uVar18 = uVar18 >> 0x10;
              uVar14 = uVar14 + 0x10;
              uVar12 = uVar12 + 0x18;
              if (((uVar18 ^ 0xffffffff) & 0xffff) != 0) goto joined_r0x0001006af7a0;
            }
            puVar16 = (uint *)((long)puVar16 + 2);
            uVar18 = *puVar16 >> (ulong)(uVar14 & 0x1f);
            uVar12 = uVar12 + 0x18;
          }
joined_r0x0001006af7a0:
          for (; uVar13 = uVar18 & 3, uVar13 == 3; uVar18 = uVar18 >> 2) {
            uVar12 = uVar12 + 3;
            uVar14 = uVar14 + 2;
          }
          uVar6 = uVar12 + uVar13;
          if (uVar5 < uVar6) {
            return (void *)0xffffffffffffffd0;
          }
          if (uVar11 < uVar6) {
            _bzero((void *)((long)param_1 + (ulong)uVar11 * 2),
                   (ulong)(~uVar11 + uVar12 + uVar13) * 2 + 2);
            uVar11 = uVar6;
          }
          puVar2 = (uint *)((long)puVar16 + (long)((int)(uVar14 + 2) >> 3));
          uVar12 = uVar11;
          if (((uint *)(lVar3 + -7) < puVar16) && (uVar13 = uVar14 + 2, puVar9 < puVar2)) {
            uVar18 = uVar18 >> 2;
          }
          else {
            uVar13 = uVar14 + 2 & 7;
            uVar18 = *puVar2 >> (ulong)uVar13;
            puVar16 = puVar2;
          }
        }
        uVar14 = uVar19 * 2 - 1;
        uVar11 = uVar18 & uVar19 - 1;
        uVar6 = uVar14 - uVar17;
        uVar18 = uVar18 & uVar14;
        uVar14 = 0;
        if ((int)uVar19 <= (int)uVar18) {
          uVar14 = uVar6;
        }
        uVar18 = uVar18 - uVar14;
        iVar15 = iVar20;
        if (uVar11 < uVar6) {
          uVar18 = uVar11;
          iVar15 = iVar20 + -1;
        }
        iVar7 = uVar18 - 1;
        bVar8 = iVar7 != 0;
        iVar4 = 1 - uVar18;
        if (0 < (int)uVar18) {
          iVar4 = iVar7;
        }
        *(short *)((long)param_1 + (ulong)uVar12 * 2) = (short)iVar7;
        uVar17 = uVar17 - iVar4;
        for (; (int)uVar17 < (int)uVar19; uVar19 = (int)uVar19 >> 1) {
          iVar20 = iVar20 + -1;
        }
        uVar18 = iVar15 + uVar13;
        bVar1 = puVar16 <= (uint *)(lVar3 + -7);
        puVar2 = (uint *)((long)puVar16 + (long)((int)uVar18 >> 3));
        iVar15 = (int)puVar16;
        puVar16 = puVar9;
        uVar13 = uVar18 + (iVar15 - (int)puVar9) * 8;
        if (bVar1 || puVar2 <= puVar9) {
          puVar16 = puVar2;
          uVar13 = uVar18 & 7;
        }
        if ((int)uVar17 < 2) break;
        uVar11 = uVar12 + 1;
        uVar18 = *puVar16 >> (ulong)(uVar13 & 0x1f);
      } while (uVar11 <= uVar5);
      pvVar10 = (void *)0xffffffffffffffec;
      if ((uVar17 == 1) && ((int)uVar13 < 0x21)) {
        *param_2 = uVar12;
        pvVar10 = (void *)((long)puVar16 + ((long)((int)(uVar13 + 7) >> 3) - (long)param_4));
      }
    }
    else {
      pvVar10 = (void *)0xffffffffffffffd4;
    }
  }
  return pvVar10;
}

