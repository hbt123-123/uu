// rea decompile_all
// name: FUN_100706628
// address: 0x100706628
// body: available
// range: 0x100706628-0x1007068c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100706628(undefined1 *param_1,byte *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = (uint)param_4;
  if (*param_2 == 0x2b) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007068c8);
      (*pcVar5)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      uVar1 = uVar6 + 0x37;
      uVar2 = uVar6 + 0x57;
      if (param_4 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_4 < 0xb) {
        uVar3 = uVar6 + 0x30;
      }
      if (param_2 != (byte *)0x0) {
        uVar11 = 0;
        do {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar10 = (uint)bVar4;
            if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
              uVar8 = 0;
              uVar9 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1007068b4;
              iVar7 = 0xa9;
            }
            else {
              iVar7 = 0xc9;
            }
          }
          else {
            iVar7 = 0xd0;
          }
          uVar11 = (uVar11 & 0xff) * (uVar6 & 0xff);
          if (((uVar11 & 0xff00) != 0) ||
             (uVar11 = (uVar11 & 0xff) + ((uint)bVar4 + iVar7 & 0xff), uVar11 >> 8 != 0))
          goto LAB_1007068ac;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
LAB_1007067d0:
        uVar9 = 0;
        uVar8 = uVar11;
        goto LAB_1007068b4;
      }
      goto LAB_1007068a0;
    }
  }
  else if (*param_2 == 0x2d) {
    if (param_3 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007068c4);
      (*pcVar5)();
    }
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      uVar1 = uVar6 + 0x37;
      uVar2 = uVar6 + 0x57;
      if (param_4 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_4 < 0xb) {
        uVar3 = uVar6 + 0x30;
      }
      if (param_2 != (byte *)0x0) {
        uVar11 = 0;
        do {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar10 = (uint)bVar4;
            if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
              uVar8 = 0;
              uVar9 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1007068b4;
              iVar7 = 0xa9;
            }
            else {
              iVar7 = 0xc9;
            }
          }
          else {
            iVar7 = 0xd0;
          }
          uVar11 = (uVar11 & 0xff) * (uVar6 & 0xff);
          if (((uVar11 & 0xff00) != 0) ||
             (uVar11 = (uVar11 & 0xff) - ((uint)bVar4 + iVar7 & 0xff), (uVar11 & 0xffffff00) != 0))
          goto LAB_1007068ac;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        goto LAB_1007067d0;
      }
LAB_1007068a0:
      uVar8 = 0;
      uVar9 = 0;
      goto LAB_1007068b4;
    }
  }
  else if (param_3 != 0) {
    uVar1 = uVar6 + 0x37;
    uVar2 = uVar6 + 0x57;
    if (param_4 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_4 < 0xb) {
      uVar3 = uVar6 + 0x30;
    }
    if (param_2 != (byte *)0x0) {
      uVar11 = 0;
      do {
        bVar4 = *param_2;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            uVar8 = 0;
            uVar9 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1007068b4;
            iVar7 = 0xa9;
          }
          else {
            iVar7 = 0xc9;
          }
        }
        else {
          iVar7 = 0xd0;
        }
        uVar11 = (uVar11 & 0xff) * (uVar6 & 0xff);
        if (((uVar11 & 0xff00) != 0) ||
           (uVar8 = (uVar11 & 0xff) + ((uint)bVar4 + iVar7 & 0xff), uVar8 >> 8 != 0))
        goto LAB_1007068ac;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        uVar11 = uVar8;
      } while (param_3 != 0);
      uVar9 = 0;
      goto LAB_1007068b4;
    }
    goto LAB_1007068a0;
  }
LAB_1007068ac:
  uVar8 = 0;
  uVar9 = 1;
LAB_1007068b4:
  *param_1 = (char)uVar8;
  param_1[1] = uVar9;
  return;
}

