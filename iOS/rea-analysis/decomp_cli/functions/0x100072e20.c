// rea decompile_all
// name: FUN_100072e20
// address: 0x100072e20
// body: available
// range: 0x100072e20-0x10007309b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100072e20(byte *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  iVar6 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10007309c);
      (*pcVar5)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar6 + 0x37;
      uVar2 = iVar6 + 0x57;
      if ((long)param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if ((long)param_3 < 0xb) {
        uVar3 = iVar6 + 0x30;
      }
      if (param_1 == (byte *)0x0) {
LAB_100073068:
        uVar7 = 0;
        bVar8 = 0;
        goto LAB_10007307c;
      }
      uVar11 = 0;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            uVar7 = 0;
            bVar8 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10007307c;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar11 = uVar11 * (param_3 & 0xffffffff);
        if (((uVar11 & 0xffffffff00000000) != 0) ||
           (uVar10 = (uint)bVar4 + iVar6 & 0xff, uVar9 = (uint)uVar11,
           uVar11 = (ulong)(uVar9 + uVar10), CARRY4(uVar9,uVar10))) goto LAB_100073074;
        param_2 = param_2 + -1;
        uVar7 = uVar11;
      } while (param_2 != 0);
LAB_100072fac:
      bVar8 = 0;
      goto LAB_10007307c;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100073098);
      (*pcVar5)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar1 = iVar6 + 0x37;
      uVar2 = iVar6 + 0x57;
      if ((long)param_3 < 0xb) {
        uVar2 = 0x61;
        uVar1 = 0x41;
      }
      uVar3 = 0x3a;
      if ((long)param_3 < 0xb) {
        uVar3 = iVar6 + 0x30;
      }
      if (param_1 == (byte *)0x0) goto LAB_100073068;
      uVar11 = 0;
      do {
        param_1 = param_1 + 1;
        bVar4 = *param_1;
        if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
          uVar10 = (uint)bVar4;
          if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
            uVar7 = 0;
            bVar8 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10007307c;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar11 = uVar11 * (param_3 & 0xffffffff);
        if (((uVar11 & 0xffffffff00000000) != 0) ||
           (uVar10 = (uint)bVar4 + iVar6 & 0xff, uVar9 = (uint)uVar11,
           uVar11 = (ulong)(uVar9 - uVar10), uVar9 < uVar10)) goto LAB_100073074;
        param_2 = param_2 + -1;
        uVar7 = uVar11;
      } while (param_2 != 0);
      goto LAB_100072fac;
    }
  }
  else if (param_2 != 0) {
    uVar11 = 0;
    uVar1 = iVar6 + 0x37;
    uVar2 = iVar6 + 0x57;
    if ((long)param_3 < 0xb) {
      uVar2 = 0x61;
      uVar1 = 0x41;
    }
    uVar3 = 0x3a;
    if ((long)param_3 < 0xb) {
      uVar3 = iVar6 + 0x30;
    }
    do {
      bVar4 = *param_1;
      if ((bVar4 < 0x30) || ((uVar3 & 0xff) <= (uint)bVar4)) {
        uVar10 = (uint)bVar4;
        if ((uVar10 < 0x41) || ((uVar1 & 0xff) <= uVar10)) {
          uVar7 = 0;
          bVar8 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10007307c;
          iVar6 = 0xa9;
        }
        else {
          iVar6 = 0xc9;
        }
      }
      else {
        iVar6 = 0xd0;
      }
      uVar11 = uVar11 * (param_3 & 0xffffffff);
      if (((uVar11 & 0xffffffff00000000) != 0) ||
         (uVar10 = (uint)bVar4 + iVar6 & 0xff, uVar9 = (uint)uVar11, uVar7 = (ulong)(uVar9 + uVar10)
         , CARRY4(uVar9,uVar10))) goto LAB_100073074;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar11 = uVar7;
    } while (param_2 != 0);
    bVar8 = 0;
    goto LAB_10007307c;
  }
LAB_100073074:
  uVar7 = 0;
  bVar8 = 1;
LAB_10007307c:
  return uVar7 | (ulong)bVar8 << 0x20;
}

