// rea decompile_all
// name: FUN_1000726e8
// address: 0x1000726e8
// body: available
// range: 0x1000726e8-0x10007298b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000726e8(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = (uint)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10007298c);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = uVar5 + 0x37;
      uVar2 = uVar5 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar8 = 0x3a;
      if (param_3 < 0xb) {
        uVar8 = uVar5 + 0x30;
      }
      if (param_1 == (byte *)0x0) {
LAB_100072960:
        uVar7 = 0;
        iVar6 = 0;
        goto LAB_100072974;
      }
      uVar10 = 0;
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar8 & 0xff) <= (uint)bVar3)) {
          uVar9 = (uint)bVar3;
          if ((uVar9 < 0x41) || ((uVar1 & 0xff) <= uVar9)) {
            uVar7 = 0;
            iVar6 = 1;
            if ((uVar9 < 0x61) || ((uVar2 & 0xff) <= uVar9)) goto LAB_100072974;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar10 = (uVar10 & 0xff) * (uVar5 & 0xff);
        if (((uVar10 & 0xff00) != 0) ||
           (uVar10 = (uVar10 & 0xff) + ((uint)bVar3 + iVar6 & 0xff), uVar10 >> 8 != 0))
        goto LAB_10007296c;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_100072894:
      iVar6 = 0;
      uVar7 = uVar10;
      goto LAB_100072974;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100072988);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = uVar5 + 0x37;
      uVar2 = uVar5 + 0x57;
      if (param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar8 = 0x3a;
      if (param_3 < 0xb) {
        uVar8 = uVar5 + 0x30;
      }
      if (param_1 == (byte *)0x0) goto LAB_100072960;
      uVar10 = 0;
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar8 & 0xff) <= (uint)bVar3)) {
          uVar9 = (uint)bVar3;
          if ((uVar9 < 0x41) || ((uVar1 & 0xff) <= uVar9)) {
            uVar7 = 0;
            iVar6 = 1;
            if ((uVar9 < 0x61) || ((uVar2 & 0xff) <= uVar9)) goto LAB_100072974;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar10 = (uVar10 & 0xff) * (uVar5 & 0xff);
        if (((uVar10 & 0xff00) != 0) ||
           (uVar10 = (uVar10 & 0xff) - ((uint)bVar3 + iVar6 & 0xff), (uVar10 & 0xffffff00) != 0))
        goto LAB_10007296c;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_100072894;
    }
  }
  else if (param_2 != 0) {
    uVar8 = 0;
    uVar1 = uVar5 + 0x37;
    uVar2 = uVar5 + 0x57;
    if (param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar10 = 0x3a;
    if (param_3 < 0xb) {
      uVar10 = uVar5 + 0x30;
    }
    do {
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar10 & 0xff) <= (uint)bVar3)) {
        uVar9 = (uint)bVar3;
        if ((uVar9 < 0x41) || ((uVar1 & 0xff) <= uVar9)) {
          uVar7 = 0;
          iVar6 = 1;
          if ((uVar9 < 0x61) || ((uVar2 & 0xff) <= uVar9)) goto LAB_100072974;
          iVar6 = 0xa9;
        }
        else {
          iVar6 = 0xc9;
        }
      }
      else {
        iVar6 = 0xd0;
      }
      uVar8 = (uVar8 & 0xff) * (uVar5 & 0xff);
      if (((uVar8 & 0xff00) != 0) ||
         (uVar7 = (uVar8 & 0xff) + ((uint)bVar3 + iVar6 & 0xff), uVar7 >> 8 != 0))
      goto LAB_10007296c;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar8 = uVar7;
    } while (param_2 != 0);
    iVar6 = 0;
    goto LAB_100072974;
  }
LAB_10007296c:
  uVar7 = 0;
  iVar6 = 1;
LAB_100072974:
  return uVar7 & 0xff | iVar6 << 8;
}

