// rea decompile_all
// name: FUN_10065e2f4
// address: 0x10065e2f4
// body: available
// range: 0x10065e2f4-0x10065e56f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065e2f4(ulong *param_1,byte *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  int iVar12;
  char cVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  
  iVar12 = (int)param_4;
  if (*param_2 == 0x2b) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10065e570);
      (*pcVar11)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      uVar1 = iVar12 + 0x37;
      uVar2 = iVar12 + 0x57;
      if ((long)param_4 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if ((long)param_4 < 0xb) {
        uVar3 = iVar12 + 0x30;
      }
      if (param_2 != (byte *)0x0) {
        uVar17 = 0;
        do {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar16 = (uint)bVar4;
            if ((uVar16 < 0x41) || ((uVar1 & 0xff) <= uVar16)) {
              uVar15 = 0;
              uVar14 = 1;
              if ((uVar16 < 0x61) || ((uVar2 & 0xff) <= uVar16)) goto LAB_10065e55c;
              cVar13 = -0x57;
            }
            else {
              cVar13 = -0x37;
            }
          }
          else {
            cVar13 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_4;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar15 = uVar17 * param_4, uVar17 = uVar15 + (byte)(bVar4 + cVar13),
             CARRY8(uVar15,(ulong)(byte)(bVar4 + cVar13)))) goto LAB_10065e554;
          param_3 = param_3 + -1;
          uVar15 = uVar17;
        } while (param_3 != 0);
LAB_10065e484:
        uVar14 = 0;
        goto LAB_10065e55c;
      }
      goto LAB_10065e548;
    }
  }
  else if (*param_2 == 0x2d) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10065e56c);
      (*pcVar11)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      uVar1 = iVar12 + 0x37;
      uVar2 = iVar12 + 0x57;
      if ((long)param_4 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if ((long)param_4 < 0xb) {
        uVar3 = iVar12 + 0x30;
      }
      if (param_2 != (byte *)0x0) {
        uVar17 = 0;
        do {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar16 = (uint)bVar4;
            if ((uVar16 < 0x41) || ((uVar1 & 0xff) <= uVar16)) {
              uVar15 = 0;
              uVar14 = 1;
              if ((uVar16 < 0x61) || ((uVar2 & 0xff) <= uVar16)) goto LAB_10065e55c;
              cVar13 = -0x57;
            }
            else {
              cVar13 = -0x37;
            }
          }
          else {
            cVar13 = -0x30;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar17;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_4;
          if ((SUB168(auVar5 * auVar8,8) != 0) ||
             (uVar15 = uVar17 * param_4, uVar17 = uVar15 - (byte)(bVar4 + cVar13),
             uVar15 < (byte)(bVar4 + cVar13))) goto LAB_10065e554;
          param_3 = param_3 + -1;
          uVar15 = uVar17;
        } while (param_3 != 0);
        goto LAB_10065e484;
      }
LAB_10065e548:
      uVar15 = 0;
      uVar14 = 0;
      goto LAB_10065e55c;
    }
  }
  else if (param_3 != 0) {
    uVar1 = iVar12 + 0x37;
    uVar2 = iVar12 + 0x57;
    if ((long)param_4 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if ((long)param_4 < 0xb) {
      uVar3 = iVar12 + 0x30;
    }
    if (param_2 != (byte *)0x0) {
      uVar17 = 0;
      do {
        bVar4 = *param_2;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar16 = (uint)bVar4;
          if ((uVar16 < 0x41) || ((uVar1 & 0xff) <= uVar16)) {
            uVar15 = 0;
            uVar14 = 1;
            if ((uVar16 < 0x61) || ((uVar2 & 0xff) <= uVar16)) goto LAB_10065e55c;
            cVar13 = -0x57;
          }
          else {
            cVar13 = -0x37;
          }
        }
        else {
          cVar13 = -0x30;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4;
        if ((SUB168(auVar7 * auVar10,8) != 0) ||
           (uVar15 = uVar17 * param_4 + (ulong)(byte)(bVar4 + cVar13),
           CARRY8(uVar17 * param_4,(ulong)(byte)(bVar4 + cVar13)))) goto LAB_10065e554;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        uVar17 = uVar15;
      } while (param_3 != 0);
      uVar14 = 0;
      goto LAB_10065e55c;
    }
    goto LAB_10065e548;
  }
LAB_10065e554:
  uVar15 = 0;
  uVar14 = 1;
LAB_10065e55c:
  *param_1 = uVar15;
  *(undefined1 *)(param_1 + 1) = uVar14;
  return;
}

