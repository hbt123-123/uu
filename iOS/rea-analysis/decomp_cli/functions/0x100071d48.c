// rea decompile_all
// name: FUN_100071d48
// address: 0x100071d48
// body: available
// range: 0x100071d48-0x100071ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100071d48(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = (int)param_3;
  sVar6 = (short)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100071ff8);
      (*pcVar8)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar9 + 0x37;
      uVar2 = iVar9 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_3 < 0xb) {
        uVar3 = iVar9 + 0x30;
      }
      if (param_1 == (byte *)0x0) {
LAB_100071fcc:
        uVar10 = 0;
        iVar9 = 0;
        goto LAB_100071fe0;
      }
      uVar11 = 0;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar12 = (uint)bVar4;
          if ((uVar12 < 0x41) || ((uVar1 & 0xff) <= uVar12)) {
            uVar10 = 0;
            iVar9 = 1;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_100071fe0;
            iVar9 = 0xa9;
          }
          else {
            iVar9 = 0xc9;
          }
        }
        else {
          iVar9 = 0xd0;
        }
        iVar5 = (int)(short)uVar11 * (int)sVar6;
        iVar7 = (int)(short)iVar5;
        if ((iVar7 != iVar5) ||
           (uVar11 = iVar7 + ((uint)bVar4 + iVar9 & 0xff), (int)(short)uVar11 != uVar11))
        goto LAB_100071fd8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_100071efc:
      iVar9 = 0;
      uVar10 = uVar11;
      goto LAB_100071fe0;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100071ff4);
      (*pcVar8)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar9 + 0x37;
      uVar2 = iVar9 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_3 < 0xb) {
        uVar3 = iVar9 + 0x30;
      }
      if (param_1 == (byte *)0x0) goto LAB_100071fcc;
      uVar11 = 0;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar12 = (uint)bVar4;
          if ((uVar12 < 0x41) || ((uVar1 & 0xff) <= uVar12)) {
            uVar10 = 0;
            iVar9 = 1;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_100071fe0;
            iVar9 = 0xa9;
          }
          else {
            iVar9 = 0xc9;
          }
        }
        else {
          iVar9 = 0xd0;
        }
        iVar5 = (int)(short)uVar11 * (int)sVar6;
        iVar7 = (int)(short)iVar5;
        if ((iVar7 != iVar5) ||
           (uVar11 = iVar7 - ((uint)bVar4 + iVar9 & 0xff), (int)(short)uVar11 != uVar11))
        goto LAB_100071fd8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_100071efc;
    }
  }
  else if (param_2 != 0) {
    uVar1 = iVar9 + 0x37;
    uVar2 = iVar9 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_3 < 0xb) {
      uVar3 = iVar9 + 0x30;
    }
    uVar11 = 0;
    do {
      bVar4 = *param_1;
      if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
        uVar12 = (uint)bVar4;
        if ((uVar12 < 0x41) || ((uVar1 & 0xff) <= uVar12)) {
          uVar10 = 0;
          iVar9 = 1;
          if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_100071fe0;
          iVar9 = 0xa9;
        }
        else {
          iVar9 = 0xc9;
        }
      }
      else {
        iVar9 = 0xd0;
      }
      iVar5 = (int)(short)uVar11 * (int)sVar6;
      iVar7 = (int)(short)iVar5;
      if ((iVar7 != iVar5) ||
         (uVar10 = iVar7 + ((uint)bVar4 + iVar9 & 0xff), (int)(short)uVar10 != uVar10))
      goto LAB_100071fd8;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar11 = uVar10;
    } while (param_2 != 0);
    iVar9 = 0;
    goto LAB_100071fe0;
  }
LAB_100071fd8:
  uVar10 = 0;
  iVar9 = 1;
LAB_100071fe0:
  return uVar10 & 0xffff | iVar9 << 0x10;
}

