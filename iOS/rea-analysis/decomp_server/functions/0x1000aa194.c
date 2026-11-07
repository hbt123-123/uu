// rea decompile_all
// name: FUN_1000aa194
// address: 0x1000aa194
// body: available
// range: 0x1000aa194-0x1000aa5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000aa194(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  uVar7 = (uint)(param_4 >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar7 = 1;
  }
  uVar16 = 4L << uVar7;
  uVar5 = param_2;
  if ((param_2 & 0xc) == uVar16) {
    FUN_10000caa8(param_2,param_4,param_5);
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_1000aa1e4;
LAB_1000aa244:
    uVar15 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar15 = param_5 >> 0x38 & 0xf;
    }
    if (uVar15 < uVar5 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5fc);
      (*pcVar4)();
    }
    uVar15 = 0xf;
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(0xf,uVar5,param_4,param_5);
  }
  else {
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_1000aa244;
LAB_1000aa1e4:
    uVar15 = uVar5 >> 0x10;
  }
  if ((param_2 & 0xc) == uVar16) {
    FUN_10000caa8(param_2,param_4,param_5);
  }
  if ((param_3 & 0xc) == uVar16) {
    FUN_10000caa8(param_3,param_4,param_5);
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_1000aa200;
LAB_1000aa2fc:
    uVar5 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5ec);
      (*pcVar4)();
    }
    if (uVar5 < param_3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5f0);
      (*pcVar4)();
    }
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(param_2,param_3,param_4,param_5);
  }
  else {
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_1000aa2fc;
LAB_1000aa200:
    param_2 = (param_3 >> 0x10) - (param_2 >> 0x10);
  }
  uVar5 = uVar15 + param_2;
  if (SCARRY8(uVar15,param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5e4);
    (*pcVar4)();
  }
  lVar9 = uVar5 - uVar15;
  if ((long)uVar5 < (long)uVar15) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5e8);
    (*pcVar4)();
  }
  pbVar8 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar8 = (byte *)(uVar15 + param_1);
  }
  iVar14 = (int)param_6;
  if (*pbVar8 == 0x2b) {
    if (lVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5f8);
      (*pcVar4)();
    }
    if (lVar9 == 1) goto LAB_1000aa5b8;
    uVar7 = iVar14 + 0x37;
    uVar1 = iVar14 + 0x57;
    if (param_6 < 0xb) {
      uVar1 = 0x61;
      uVar7 = 0x41;
    }
    uVar2 = 0x3a;
    if (param_6 < 0xb) {
      uVar2 = iVar14 + 0x30;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_1000aa5ac;
    lVar9 = 0;
    lVar11 = param_2 - 1;
    uVar6 = 1;
    do {
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar8;
      if ((bVar3 < 0x30) || ((uVar2 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar7 & 0xff) <= uVar10)) {
          lVar13 = 0;
          if ((uVar10 < 0x61) || ((uVar1 & 0xff) <= uVar10)) goto LAB_1000aa5c0;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = lVar9 * param_6;
      if ((SUB168(SEXT816(lVar9) * SEXT816(param_6),8) != lVar13 >> 0x3f) ||
         (lVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_1000aa5b8;
      lVar11 = lVar11 + -1;
      lVar13 = lVar9;
    } while (lVar11 != 0);
  }
  else if (*pbVar8 == 0x2d) {
    if (lVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000aa5f4);
      (*pcVar4)();
    }
    if (lVar9 == 1) {
LAB_1000aa5b8:
      lVar13 = 0;
      uVar6 = 1;
      goto LAB_1000aa5c0;
    }
    uVar7 = iVar14 + 0x37;
    uVar1 = iVar14 + 0x57;
    if (param_6 < 0xb) {
      uVar1 = 0x61;
      uVar7 = 0x41;
    }
    uVar2 = 0x3a;
    if (param_6 < 0xb) {
      uVar2 = iVar14 + 0x30;
    }
    if (pbVar8 == (byte *)0x0) {
LAB_1000aa5ac:
      lVar13 = 0;
      uVar6 = 0;
      goto LAB_1000aa5c0;
    }
    lVar9 = 0;
    lVar11 = param_2 - 1;
    uVar6 = 1;
    do {
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar8;
      if ((bVar3 < 0x30) || ((uVar2 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar7 & 0xff) <= uVar10)) {
          lVar13 = 0;
          if ((uVar10 < 0x61) || ((uVar1 & 0xff) <= uVar10)) goto LAB_1000aa5c0;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = lVar9 * param_6;
      if ((SUB168(SEXT816(lVar9) * SEXT816(param_6),8) != lVar13 >> 0x3f) ||
         (lVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_1000aa5b8;
      lVar11 = lVar11 + -1;
      lVar13 = lVar9;
    } while (lVar11 != 0);
  }
  else {
    if (uVar5 == uVar15) goto LAB_1000aa5b8;
    uVar7 = iVar14 + 0x37;
    uVar1 = iVar14 + 0x57;
    if (param_6 < 0xb) {
      uVar1 = 0x61;
      uVar7 = 0x41;
    }
    uVar2 = 0x3a;
    if (param_6 < 0xb) {
      uVar2 = iVar14 + 0x30;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_1000aa5ac;
    lVar9 = 0;
    uVar6 = 1;
    do {
      bVar3 = *pbVar8;
      if ((bVar3 < 0x30) || ((uVar2 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar7 & 0xff) <= uVar10)) {
          lVar13 = 0;
          if ((uVar10 < 0x61) || ((uVar1 & 0xff) <= uVar10)) goto LAB_1000aa5c0;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar11 = lVar9 * param_6;
      if ((SUB168(SEXT816(lVar9) * SEXT816(param_6),8) != lVar11 >> 0x3f) ||
         (lVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_1000aa5b8;
      pbVar8 = pbVar8 + 1;
      param_2 = param_2 - 1;
      lVar13 = lVar9;
    } while (param_2 != 0);
  }
  uVar6 = 0;
LAB_1000aa5c0:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = lVar13;
  return auVar17;
}

