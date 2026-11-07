// rea decompile_all
// name: FUN_10000cbdc
// address: 0x10000cbdc
// body: available
// range: 0x10000cbdc-0x10000ce57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000cbdc(long *param_1,byte *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  iVar6 = (int)param_4;
  if (*param_2 == 0x2b) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10000ce58);
      (*pcVar5)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      uVar1 = iVar6 + 0x37;
      uVar2 = iVar6 + 0x57;
      if (param_4 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_4 < 0xb) {
        uVar3 = iVar6 + 0x30;
      }
      if (param_2 != (byte *)0x0) {
        lVar12 = 0;
        do {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar11 = (uint)bVar4;
            if ((uVar11 < 0x41) || ((uVar1 & 0xff) <= uVar11)) {
              lVar9 = 0;
              uVar8 = 1;
              if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_10000ce44;
              cVar7 = -0x57;
            }
            else {
              cVar7 = -0x37;
            }
          }
          else {
            cVar7 = -0x30;
          }
          lVar9 = lVar12 * param_4;
          if ((SUB168(SEXT816(lVar12) * SEXT816(param_4),8) != lVar9 >> 0x3f) ||
             (lVar12 = lVar9 + (ulong)(byte)(bVar4 + cVar7),
             SCARRY8(lVar9,(ulong)(byte)(bVar4 + cVar7)))) goto LAB_10000ce3c;
          param_3 = param_3 + -1;
          lVar9 = lVar12;
        } while (param_3 != 0);
LAB_10000cd6c:
        uVar8 = 0;
        goto LAB_10000ce44;
      }
      goto LAB_10000ce30;
    }
  }
  else if (*param_2 == 0x2d) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10000ce54);
      (*pcVar5)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      uVar1 = iVar6 + 0x37;
      uVar2 = iVar6 + 0x57;
      if (param_4 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_4 < 0xb) {
        uVar3 = iVar6 + 0x30;
      }
      if (param_2 != (byte *)0x0) {
        lVar12 = 0;
        do {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar11 = (uint)bVar4;
            if ((uVar11 < 0x41) || ((uVar1 & 0xff) <= uVar11)) {
              lVar9 = 0;
              uVar8 = 1;
              if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_10000ce44;
              cVar7 = -0x57;
            }
            else {
              cVar7 = -0x37;
            }
          }
          else {
            cVar7 = -0x30;
          }
          lVar9 = lVar12 * param_4;
          if ((SUB168(SEXT816(lVar12) * SEXT816(param_4),8) != lVar9 >> 0x3f) ||
             (lVar12 = lVar9 - (ulong)(byte)(bVar4 + cVar7),
             SBORROW8(lVar9,(ulong)(byte)(bVar4 + cVar7)))) goto LAB_10000ce3c;
          param_3 = param_3 + -1;
          lVar9 = lVar12;
        } while (param_3 != 0);
        goto LAB_10000cd6c;
      }
LAB_10000ce30:
      lVar9 = 0;
      uVar8 = 0;
      goto LAB_10000ce44;
    }
  }
  else if (param_3 != 0) {
    uVar1 = iVar6 + 0x37;
    uVar2 = iVar6 + 0x57;
    if (param_4 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_4 < 0xb) {
      uVar3 = iVar6 + 0x30;
    }
    if (param_2 != (byte *)0x0) {
      lVar12 = 0;
      do {
        bVar4 = *param_2;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar11 = (uint)bVar4;
          if ((uVar11 < 0x41) || ((uVar1 & 0xff) <= uVar11)) {
            lVar9 = 0;
            uVar8 = 1;
            if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_10000ce44;
            cVar7 = -0x57;
          }
          else {
            cVar7 = -0x37;
          }
        }
        else {
          cVar7 = -0x30;
        }
        lVar10 = lVar12 * param_4;
        if ((SUB168(SEXT816(lVar12) * SEXT816(param_4),8) != lVar10 >> 0x3f) ||
           (lVar9 = lVar10 + (ulong)(byte)(bVar4 + cVar7),
           SCARRY8(lVar10,(ulong)(byte)(bVar4 + cVar7)))) goto LAB_10000ce3c;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        lVar12 = lVar9;
      } while (param_3 != 0);
      uVar8 = 0;
      goto LAB_10000ce44;
    }
    goto LAB_10000ce30;
  }
LAB_10000ce3c:
  lVar9 = 0;
  uVar8 = 1;
LAB_10000ce44:
  *param_1 = lVar9;
  *(undefined1 *)(param_1 + 1) = uVar8;
  return;
}

