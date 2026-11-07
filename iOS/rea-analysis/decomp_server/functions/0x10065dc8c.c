// rea decompile_all
// name: FUN_10065dc8c
// address: 0x10065dc8c
// body: available
// range: 0x10065dc8c-0x10065df0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10065dc8c(byte *param_1,ulong param_2,ulong param_3)

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
  undefined1 auVar11 [16];
  code *pcVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  iVar14 = (int)param_3;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10065df10);
      (*pcVar12)();
    }
    lVar15 = param_2 - 1;
    if (lVar15 == 0) {
LAB_10065df00:
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_2;
      return auVar11 << 0x40;
    }
    uVar1 = iVar14 + 0x37;
    uVar2 = iVar14 + 0x57;
    if ((long)param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if ((long)param_3 < 0xb) {
      uVar3 = iVar14 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      uVar17 = 0;
      uVar13 = 1;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar16 = (uint)bVar4;
          if ((uVar16 < 0x41) || ((uVar1 & 0xff) <= uVar16)) {
            uVar18 = 0;
            if ((uVar16 < 0x61) || ((uVar2 & 0xff) <= uVar16)) goto LAB_10065de24;
            cVar19 = -0x57;
          }
          else {
            cVar19 = -0x37;
          }
        }
        else {
          cVar19 = -0x30;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar17;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = param_3;
        if ((SUB168(auVar6 * auVar9,8) != 0) ||
           (uVar18 = uVar17 * param_3, uVar17 = uVar18 + (byte)(bVar4 + cVar19),
           CARRY8(uVar18,(ulong)(byte)(bVar4 + cVar19)))) goto LAB_10065def4;
        lVar15 = lVar15 + -1;
        uVar18 = uVar17;
      } while (lVar15 != 0);
LAB_10065de1c:
      uVar13 = 0;
LAB_10065de24:
      auVar20._8_8_ = uVar13;
      auVar20._0_8_ = uVar18;
      return auVar20;
    }
  }
  else if (*param_1 == 0x2d) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10065df0c);
      (*pcVar12)();
    }
    lVar15 = param_2 - 1;
    if (lVar15 == 0) goto LAB_10065df00;
    uVar1 = iVar14 + 0x37;
    uVar2 = iVar14 + 0x57;
    if ((long)param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if ((long)param_3 < 0xb) {
      uVar3 = iVar14 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      uVar17 = 0;
      uVar13 = 1;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar16 = (uint)bVar4;
          if ((uVar16 < 0x41) || ((uVar1 & 0xff) <= uVar16)) {
            uVar18 = 0;
            if ((uVar16 < 0x61) || ((uVar2 & 0xff) <= uVar16)) goto LAB_10065de24;
            cVar19 = -0x57;
          }
          else {
            cVar19 = -0x37;
          }
        }
        else {
          cVar19 = -0x30;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_3;
        if ((SUB168(auVar5 * auVar8,8) != 0) ||
           (uVar18 = uVar17 * param_3, uVar17 = uVar18 - (byte)(bVar4 + cVar19),
           uVar18 < (byte)(bVar4 + cVar19))) goto LAB_10065def4;
        lVar15 = lVar15 + -1;
        uVar18 = uVar17;
      } while (lVar15 != 0);
      goto LAB_10065de1c;
    }
  }
  else {
    if (param_2 == 0) {
LAB_10065def4:
      return ZEXT816(1) << 0x40;
    }
    uVar1 = iVar14 + 0x37;
    uVar2 = iVar14 + 0x57;
    if ((long)param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if ((long)param_3 < 0xb) {
      uVar3 = iVar14 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      uVar17 = 0;
      do {
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar16 = (uint)bVar4;
          if ((uVar16 < 0x41) || ((uVar1 & 0xff) <= uVar16)) {
            uVar18 = 0;
            uVar13 = 1;
            if ((uVar16 < 0x61) || ((uVar2 & 0xff) <= uVar16)) goto LAB_10065de24;
            cVar19 = -0x57;
          }
          else {
            cVar19 = -0x37;
          }
        }
        else {
          cVar19 = -0x30;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_3;
        if ((SUB168(auVar7 * auVar10,8) != 0) ||
           (uVar18 = uVar17 * param_3, uVar17 = uVar18 + (byte)(bVar4 + cVar19),
           CARRY8(uVar18,(ulong)(byte)(bVar4 + cVar19)))) goto LAB_10065def4;
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
        if (param_2 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar17;
          return auVar21;
        }
      } while( true );
    }
  }
  return ZEXT816(0);
}

