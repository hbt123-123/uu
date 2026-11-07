// rea decompile_all
// name: FUN_10051b4bc
// address: 0x10051b4bc
// body: available
// range: 0x10051b4bc-0x10051b73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10051b4bc(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar6 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10051b73c);
      (*pcVar5)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar6 + 0x37;
      uVar2 = iVar6 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_3 < 0xb) {
        uVar3 = iVar6 + 0x30;
      }
      if (param_1 != (byte *)0x0) {
        iVar11 = 0;
        do {
          param_1 = param_1 + 1;
          bVar4 = *param_1;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar10 = (uint)bVar4;
            if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
              iVar7 = 0;
              uVar8 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10051b71c;
              iVar7 = 0xa9;
            }
            else {
              iVar7 = 0xc9;
            }
          }
          else {
            iVar7 = 0xd0;
          }
          iVar9 = (int)((long)iVar11 * (long)iVar6);
          if (((long)iVar11 * (long)iVar6 - (long)iVar9 != 0) ||
             (uVar10 = (uint)bVar4 + iVar7 & 0xff, iVar11 = iVar9 + uVar10, SCARRY4(iVar9,uVar10)))
          goto LAB_10051b714;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
LAB_10051b648:
        uVar8 = 0;
        iVar7 = iVar11;
        goto LAB_10051b71c;
      }
      goto LAB_10051b708;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10051b738);
      (*pcVar5)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar6 + 0x37;
      uVar2 = iVar6 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if (param_3 < 0xb) {
        uVar3 = iVar6 + 0x30;
      }
      if (param_1 != (byte *)0x0) {
        iVar11 = 0;
        do {
          param_1 = param_1 + 1;
          bVar4 = *param_1;
          if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
            uVar10 = (uint)bVar4;
            if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
              iVar7 = 0;
              uVar8 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10051b71c;
              iVar7 = 0xa9;
            }
            else {
              iVar7 = 0xc9;
            }
          }
          else {
            iVar7 = 0xd0;
          }
          iVar9 = (int)((long)iVar11 * (long)iVar6);
          if (((long)iVar11 * (long)iVar6 - (long)iVar9 != 0) ||
             (uVar10 = (uint)bVar4 + iVar7 & 0xff, iVar11 = iVar9 - uVar10, SBORROW4(iVar9,uVar10)))
          goto LAB_10051b714;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        goto LAB_10051b648;
      }
LAB_10051b708:
      iVar7 = 0;
      uVar8 = 0;
      goto LAB_10051b71c;
    }
  }
  else if (param_2 != 0) {
    uVar1 = iVar6 + 0x37;
    uVar2 = iVar6 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if (param_3 < 0xb) {
      uVar3 = iVar6 + 0x30;
    }
    if (param_1 != (byte *)0x0) {
      iVar11 = 0;
      do {
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            iVar7 = 0;
            uVar8 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10051b71c;
            iVar7 = 0xa9;
          }
          else {
            iVar7 = 0xc9;
          }
        }
        else {
          iVar7 = 0xd0;
        }
        iVar9 = (int)((long)iVar11 * (long)iVar6);
        if (((long)iVar11 * (long)iVar6 - (long)iVar9 != 0) ||
           (uVar10 = (uint)bVar4 + iVar7 & 0xff, iVar7 = iVar9 + uVar10, SCARRY4(iVar9,uVar10)))
        goto LAB_10051b714;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        iVar11 = iVar7;
      } while (param_2 != 0);
      uVar8 = 0;
      goto LAB_10051b71c;
    }
    goto LAB_10051b708;
  }
LAB_10051b714:
  iVar7 = 0;
  uVar8 = 1;
LAB_10051b71c:
  return (ulong)CONCAT14(uVar8,iVar7);
}

