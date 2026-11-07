// rea decompile_all
// name: FUN_1006af210
// address: 0x1006af210
// body: available
// range: 0x1006af210-0x1006af32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006af210(long param_1,ulong *param_2,long param_3,uint param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  uint uVar17;
  ulong *puVar18;
  long lVar19;
  uint uVar20;
  ulong *puVar21;
  
  if ((int)param_4 < 1) {
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    lVar14 = 0;
    lVar16 = 0;
    uVar11 = 0;
    uVar12 = 0;
    do {
      uVar13 = 0;
      uVar10 = uVar11;
      puVar18 = param_2;
      lVar19 = lVar14;
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulong *)(param_3 + lVar19);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *puVar18;
        uVar9 = SUB168(auVar2 * auVar4,8);
        uVar11 = *(ulong *)(param_3 + lVar19) * *puVar18;
        bVar7 = CARRY8(uVar10,uVar11);
        uVar10 = uVar10 + uVar11;
        uVar11 = uVar12 + uVar9 + (ulong)bVar7;
        if (CARRY8(uVar12,uVar9) || CARRY8(uVar12 + uVar9,(ulong)bVar7)) {
          uVar13 = uVar13 + 1;
        }
        lVar19 = lVar19 + -8;
        uVar12 = uVar11;
        puVar18 = puVar18 + 1;
      } while (lVar19 != -8);
      *(ulong *)(param_1 + lVar16 * 8) = uVar10;
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 8;
      uVar12 = uVar13;
    } while (lVar16 != (int)param_4);
  }
  iVar1 = param_4 * 2 + -1;
  if ((int)param_4 < iVar1) {
    cVar15 = '\x01';
    uVar12 = uVar11;
    uVar17 = param_4;
    do {
      uVar11 = uVar13;
      cVar6 = (char)(uVar17 + 1);
      if ((int)(char)(cVar6 - (char)param_4) < (int)param_4) {
        uVar13 = 0;
        uVar20 = (uint)cVar15;
        puVar18 = (ulong *)(param_3 + (long)cVar15 * -8 + (long)(char)uVar17 * 8);
        puVar21 = param_2 + cVar15;
        do {
          uVar20 = uVar20 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *puVar18;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *puVar21;
          uVar9 = SUB168(auVar3 * auVar5,8);
          uVar10 = *puVar18 * *puVar21;
          bVar8 = CARRY8(uVar12,uVar10);
          uVar12 = uVar12 + uVar10;
          uVar10 = uVar11 + uVar9;
          bVar7 = CARRY8(uVar11,uVar9);
          uVar11 = uVar11 + uVar9 + (ulong)bVar8;
          if (bVar7 || CARRY8(uVar10,(ulong)bVar8)) {
            uVar13 = uVar13 + 1;
          }
          puVar18 = puVar18 + -1;
          puVar21 = puVar21 + 1;
        } while ((uVar20 & 0xff) != (param_4 & 0xff));
      }
      else {
        uVar13 = 0;
      }
      *(ulong *)(param_1 + (long)(char)uVar17 * 8) = uVar12;
      cVar15 = cVar15 + '\x01';
      uVar12 = uVar11;
      uVar17 = uVar17 + 1;
    } while (cVar6 < iVar1);
  }
  *(ulong *)(param_1 + (long)iVar1 * 8) = uVar11;
  return;
}

