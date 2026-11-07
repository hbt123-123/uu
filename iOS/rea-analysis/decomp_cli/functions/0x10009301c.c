// rea decompile_all
// name: FUN_10009301c
// address: 0x10009301c
// body: available
// range: 0x10009301c-0x10009329f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10009301c(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  iVar8 = (int)param_3;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000932a0);
      (*pcVar6)();
    }
    lVar12 = param_2 - 1;
    if (lVar12 == 0) {
LAB_100093290:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      return auVar5 << 0x40;
    }
    uVar1 = iVar8 + 0x37;
    uVar2 = iVar8 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_3 < 0xb) {
      uVar3 = iVar8 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      lVar11 = 0;
      uVar7 = 1;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            lVar14 = 0;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1000931b4;
            cVar13 = -0x57;
          }
          else {
            cVar13 = -0x37;
          }
        }
        else {
          cVar13 = -0x30;
        }
        lVar14 = lVar11 * param_3;
        if ((SUB168(SEXT816(lVar11) * SEXT816(param_3),8) != lVar14 >> 0x3f) ||
           (lVar11 = lVar14 + (ulong)(byte)(bVar4 + cVar13),
           SCARRY8(lVar14,(ulong)(byte)(bVar4 + cVar13)))) goto LAB_100093284;
        lVar12 = lVar12 + -1;
        lVar14 = lVar11;
      } while (lVar12 != 0);
LAB_1000931ac:
      uVar7 = 0;
LAB_1000931b4:
      auVar15._8_8_ = uVar7;
      auVar15._0_8_ = lVar14;
      return auVar15;
    }
  }
  else if (*param_1 == 0x2d) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10009329c);
      (*pcVar6)();
    }
    lVar12 = param_2 - 1;
    if (lVar12 == 0) goto LAB_100093290;
    uVar1 = iVar8 + 0x37;
    uVar2 = iVar8 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_3 < 0xb) {
      uVar3 = iVar8 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      lVar11 = 0;
      uVar7 = 1;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            lVar14 = 0;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1000931b4;
            cVar13 = -0x57;
          }
          else {
            cVar13 = -0x37;
          }
        }
        else {
          cVar13 = -0x30;
        }
        lVar14 = lVar11 * param_3;
        if ((SUB168(SEXT816(lVar11) * SEXT816(param_3),8) != lVar14 >> 0x3f) ||
           (lVar11 = lVar14 - (ulong)(byte)(bVar4 + cVar13),
           SBORROW8(lVar14,(ulong)(byte)(bVar4 + cVar13)))) goto LAB_100093284;
        lVar12 = lVar12 + -1;
        lVar14 = lVar11;
      } while (lVar12 != 0);
      goto LAB_1000931ac;
    }
  }
  else {
    if (param_2 == 0) {
LAB_100093284:
      return ZEXT816(1) << 0x40;
    }
    uVar1 = iVar8 + 0x37;
    uVar2 = iVar8 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_3 < 0xb) {
      uVar3 = iVar8 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      uVar9 = 0;
      do {
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            lVar14 = 0;
            uVar7 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1000931b4;
            cVar13 = -0x57;
          }
          else {
            cVar13 = -0x37;
          }
        }
        else {
          cVar13 = -0x30;
        }
        lVar12 = uVar9 * param_3;
        if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar12 >> 0x3f) ||
           (uVar9 = lVar12 + (ulong)(byte)(bVar4 + cVar13),
           SCARRY8(lVar12,(ulong)(byte)(bVar4 + cVar13)))) goto LAB_100093284;
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
        if (param_2 == 0) {
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar9;
          return auVar16;
        }
      } while( true );
    }
  }
  return ZEXT816(0);
}

