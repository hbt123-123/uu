// rea decompile_all
// name: FUN_1001dfbb4
// address: 0x1001dfbb4
// body: available
// range: 0x1001dfbb4-0x1001dfdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001dfbb4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  byte abStack_72 [2];
  ulong local_70;
  ulong uStack_68;
  
  FUN_1001dfdc0(param_1,param_3,param_4);
  FUN_1001dfdc0(param_2,param_3,param_4);
  param_2 = param_2 >> 0xe;
  if (param_1 >> 0xe < param_2) {
    lVar8 = 0;
    do {
      lVar7 = lVar8 + 1;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001dfdbc);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        param_1 = param_1 >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          uVar5 = (param_4 & 0xfffffffffffffff) + 0x20;
          if ((param_3 >> 0x3c & 1) == 0) {
            uVar5 = param_3;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
          }
          bVar1 = *(byte *)(uVar5 + param_1);
        }
        else {
          local_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          bVar1 = *(byte *)((long)&local_70 + param_1);
        }
        bVar2 = (char)LZCOUNT(bVar1 ^ 0xff) - 0x18;
        if (-1 < (char)bVar1) {
          bVar2 = 1;
        }
        param_1 = (param_1 + bVar2) * 0x10000;
      }
      else {
        __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF();
      }
      lVar8 = lVar8 + 1;
    } while (param_1 >> 0xe < param_2);
  }
  else if (param_2 < param_1 >> 0xe) {
    lVar7 = 0;
    do {
      bVar4 = SBORROW8(lVar7,1);
      lVar7 = lVar7 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001dfdc0);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          uVar5 = (param_4 & 0xfffffffffffffff) + 0x20;
          if ((param_3 >> 0x3c & 1) == 0) {
            uVar5 = param_3;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
          }
          lVar8 = 0;
          do {
            pbVar6 = (byte *)(uVar5 + (param_1 >> 0x10) + -1 + lVar8);
            lVar8 = lVar8 + -1;
          } while ((*pbVar6 & 0xc0) == 0x80);
          lVar8 = -lVar8;
        }
        else {
          local_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          if ((abStack_72[(param_1 >> 0x10) + 1] & 0xc0) == 0x80) {
            lVar8 = 1;
            pbVar6 = abStack_72 + (param_1 >> 0x10);
            do {
              lVar8 = lVar8 + 1;
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + -1;
            } while ((bVar1 & 0xc0) == 0x80);
          }
          else {
            lVar8 = 1;
          }
        }
        param_1 = param_1 + lVar8 * -0x10000 & 0xffffffffffff0000 | 5;
      }
      else {
        __sSS17UnicodeScalarViewV13_foreignIndex6beforeSS0E0VAF_tF();
      }
    } while (param_2 < param_1 >> 0xe);
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}

