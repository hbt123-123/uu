// rea decompile_all
// name: FUN_100071a98
// address: 0x100071a98
// body: available
// range: 0x100071a98-0x100071d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100071a98(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = (int)param_3;
  cVar5 = (char)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100071d48);
      (*pcVar7)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar10 + 0x37;
      uVar2 = iVar10 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_3 < 0xb) {
        uVar3 = iVar10 + 0x30;
      }
      if (param_1 == (byte *)0x0) {
LAB_100071d1c:
        uVar9 = 0;
        iVar10 = 0;
        goto LAB_100071d30;
      }
      uVar11 = 0;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar12 = (uint)bVar4;
          if ((uVar12 < 0x41) || ((uVar1 & 0xff) <= uVar12)) {
            uVar9 = 0;
            iVar10 = 1;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_100071d30;
            cVar8 = -0x57;
          }
          else {
            cVar8 = -0x37;
          }
        }
        else {
          cVar8 = -0x30;
        }
        iVar10 = (int)(char)uVar11 * (int)cVar5;
        iVar6 = (int)(char)iVar10;
        if ((iVar6 != iVar10) ||
           (uVar11 = iVar6 + (char)(bVar4 + cVar8), (int)(char)uVar11 != uVar11))
        goto LAB_100071d28;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_100071c4c:
      iVar10 = 0;
      uVar9 = uVar11;
      goto LAB_100071d30;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100071d44);
      (*pcVar7)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar10 + 0x37;
      uVar2 = iVar10 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_3 < 0xb) {
        uVar3 = iVar10 + 0x30;
      }
      if (param_1 == (byte *)0x0) goto LAB_100071d1c;
      uVar11 = 0;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar12 = (uint)bVar4;
          if ((uVar12 < 0x41) || ((uVar1 & 0xff) <= uVar12)) {
            uVar9 = 0;
            iVar10 = 1;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_100071d30;
            cVar8 = -0x57;
          }
          else {
            cVar8 = -0x37;
          }
        }
        else {
          cVar8 = -0x30;
        }
        iVar10 = (int)(char)uVar11 * (int)cVar5;
        iVar6 = (int)(char)iVar10;
        if ((iVar6 != iVar10) ||
           (uVar11 = iVar6 - (char)(bVar4 + cVar8), (int)(char)uVar11 != uVar11))
        goto LAB_100071d28;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_100071c4c;
    }
  }
  else if (param_2 != 0) {
    uVar1 = iVar10 + 0x37;
    uVar2 = iVar10 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_3 < 0xb) {
      uVar3 = iVar10 + 0x30;
    }
    uVar11 = 0;
    do {
      bVar4 = *param_1;
      if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
        uVar12 = (uint)bVar4;
        if ((uVar12 < 0x41) || ((uVar1 & 0xff) <= uVar12)) {
          uVar9 = 0;
          iVar10 = 1;
          if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_100071d30;
          cVar8 = -0x57;
        }
        else {
          cVar8 = -0x37;
        }
      }
      else {
        cVar8 = -0x30;
      }
      iVar10 = (int)(char)uVar11 * (int)cVar5;
      iVar6 = (int)(char)iVar10;
      if ((iVar6 != iVar10) || (uVar9 = iVar6 + (char)(bVar4 + cVar8), (int)(char)uVar9 != uVar9))
      goto LAB_100071d28;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar11 = uVar9;
    } while (param_2 != 0);
    iVar10 = 0;
    goto LAB_100071d30;
  }
LAB_100071d28:
  uVar9 = 0;
  iVar10 = 1;
LAB_100071d30:
  return uVar9 & 0xff | iVar10 << 8;
}

