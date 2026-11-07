// rea decompile_all
// name: FUN_10055e428
// address: 0x10055e428
// body: available
// range: 0x10055e428-0x10055e603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10055e428(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong unaff_x22;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar6 == pbVar1) {
LAB_10055e510:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,param_1,0,0);
    *param_1 = 1;
    _swift_willThrow();
  }
  else {
    pbVar5 = pbVar6 + 1;
    bVar2 = *pbVar6;
    *(byte **)(unaff_x20 + 0x28) = pbVar5;
    uVar3 = bVar2 - 0x30;
    if (uVar3 == 0) {
      if (pbVar5 == pbVar1) {
        return 0;
      }
      if (*pbVar5 == 0x78) {
        pbVar6 = pbVar6 + 2;
        *(byte **)(unaff_x20 + 0x28) = pbVar6;
        if (pbVar6 == pbVar1) {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = 0;
          do {
            bVar2 = *pbVar6;
            if ((byte)(bVar2 - 0x3a) < 0xf6) {
              if ((byte)(bVar2 + 0x99) < 0xfa) {
                if ((byte)(bVar2 + 0xb9) < 0xfa) break;
                cVar7 = -0x37;
              }
              else {
                cVar7 = -0x57;
              }
            }
            else {
              cVar7 = -0x30;
            }
            if (unaff_x22 >> 0x3c != 0) goto LAB_10055e510;
            pbVar6 = pbVar6 + 1;
            *(byte **)(unaff_x20 + 0x28) = pbVar6;
            unaff_x22 = unaff_x22 * 0x10 + (ulong)(byte)(bVar2 + cVar7);
          } while (pbVar6 != pbVar1);
        }
      }
      else {
        unaff_x22 = 0;
        do {
          bVar2 = *pbVar5;
          if ((byte)(bVar2 - 0x38) < 0xf8) break;
          if (unaff_x22 >> 0x3d != 0) goto LAB_10055e510;
          pbVar5 = pbVar5 + 1;
          *(byte **)(unaff_x20 + 0x28) = pbVar5;
          unaff_x22 = (ulong)(byte)(bVar2 - 0x30) | unaff_x22 << 3;
        } while (pbVar5 != pbVar1);
      }
    }
    else {
      if ((bVar2 - 0x3a & 0xff) < 0xf7) goto LAB_10055e510;
      unaff_x22 = (ulong)uVar3 & 0xff;
      while ((pbVar5 != pbVar1 && (0xf5 < (byte)(*pbVar5 - 0x3a)))) {
        if (0x1999999999999999 < unaff_x22) goto LAB_10055e510;
        uVar8 = (ulong)(byte)(*pbVar5 - 0x30);
        uVar9 = unaff_x22 * 10;
        if (CARRY8(uVar8,uVar9)) goto LAB_10055e510;
        pbVar5 = pbVar5 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar5;
        unaff_x22 = uVar9 + uVar8;
        if (CARRY8(uVar9,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10055e5a0);
          (*pcVar4)();
        }
      }
    }
    FUN_100560bb8();
  }
  return unaff_x22;
}

