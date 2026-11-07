// rea decompile_all
// name: FUN_10054c680
// address: 0x10054c680
// body: available
// range: 0x10054c680-0x10054c98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054c680(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_88 [32];
  uint local_68;
  byte local_64;
  
  if (param_2 == 0) {
    return;
  }
  uVar5 = 0;
  pbVar1 = param_1 + param_2;
  local_68 = 0;
  pbVar10 = param_1;
  do {
    local_64 = (byte)uVar5;
    do {
      while ((uVar5 & 0xff) != 0) {
        if ((local_68 >> 7 & 1) != 0) {
          pbVar9 = pbVar10;
          uVar7 = local_68;
          uVar6 = uVar5;
          if (pbVar10 != (byte *)0x0) goto LAB_10054c798;
          goto LAB_10054c8bc;
        }
        pbVar9 = param_1;
        FUN_10054c98c();
        pcVar3 = (code *)auStack_88;
        puVar4 = (uint *)PTR___ss7UnicodeO4UTF8O13ForwardParserVN_100995e58;
        FUN_1002703f8(pcVar3,PTR___ss7UnicodeO4UTF8O13ForwardParserVN_100995e58,pbVar9);
        if ((char)puVar4[1] == '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10054c98c);
          (*pcVar3)();
        }
        *puVar4 = *puVar4 >> 8;
        *(char *)(puVar4 + 1) = (char)puVar4[1] + -8;
        (*pcVar3)(auStack_88,0);
        uVar5 = (uint)local_64;
      }
      if ((pbVar10 == (byte *)0x0) || (pbVar1 == pbVar10)) goto LAB_10054c93c;
      uVar5 = 0;
      pbVar9 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar9;
    } while (-1 < (char)bVar2);
    uVar7 = local_68 & 0xffffff00 | (uint)bVar2;
    uVar6 = 8;
LAB_10054c798:
    pbVar10 = pbVar9;
    uVar5 = uVar6;
    if (pbVar9 != pbVar1) {
      pbVar10 = pbVar9 + 1;
      uVar7 = (uint)*pbVar9 << (ulong)(uVar6 & 0x1f) | (-0xff << (ulong)(uVar6 & 0x1f)) - 1U & uVar7
      ;
      uVar5 = uVar6 + 8;
      if ((uVar5 & 0xff) < 0x20) {
        if (pbVar10 != pbVar1) {
          pbVar10 = pbVar9 + 2;
          uVar7 = (uint)pbVar9[1] << (ulong)(uVar5 & 0x1f) |
                  (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
          uVar5 = uVar6 + 0x10;
          if (0x1f < (uVar5 & 0xff)) goto LAB_10054c8bc;
          if (pbVar10 != pbVar1) {
            pbVar10 = pbVar9 + 3;
            uVar7 = (uint)pbVar9[2] << (ulong)(uVar5 & 0x1f) |
                    (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
            uVar5 = uVar6 + 0x18;
            if (0x1f < (uVar5 & 0xff)) goto LAB_10054c8bc;
            if (pbVar10 != pbVar1) {
              pbVar10 = pbVar9 + 4;
              uVar7 = (uint)pbVar9[3] << (ulong)(uVar5 & 0x1f) |
                      (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
              uVar5 = uVar6 + 0x20;
              if ((uVar6 & 0xff) < 0xe0) goto LAB_10054c8bc;
              if (pbVar10 != pbVar1) {
                pbVar10 = pbVar9 + 5;
                uVar7 = (uint)pbVar9[4] << (ulong)(uVar6 & 0x1f) |
                        (-0xff << (ulong)(uVar6 & 0x1f)) - 1U & uVar7;
                uVar5 = uVar6 + 0x28;
                if (0x1f < (uVar5 & 0xff)) goto LAB_10054c8bc;
              }
            }
          }
        }
        if ((uVar5 & 0xff) == 0) {
LAB_10054c93c:
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          return;
        }
      }
    }
LAB_10054c8bc:
    if ((uVar7 & 0xc0e0) == 0x80c0) {
      if ((uVar7 & 0x1e) == 0) goto LAB_10054c96c;
      iVar8 = 0x10;
    }
    else if ((uVar7 & 0xc0c0f0) == 0x8080e0) {
      if (((uVar7 & 0x200f) == 0) || ((uVar7 & 0x200f) == 0x200d)) goto LAB_10054c96c;
      iVar8 = 0x18;
    }
    else {
      if ((((uVar7 & 0xc0c0c0f8) != 0x808080f0) || ((uVar7 & 0x3007) == 0)) ||
         (0x400 < ((uVar7 & 0x3007) >> 8 | (uVar7 & 7) << 8))) {
LAB_10054c96c:
        __ss7UnicodeO4UTF8O13ForwardParserV14_invalidLengths5UInt8VyF
                  (CONCAT44(uVar5,uVar7) & 0xffffffffff);
        return;
      }
      iVar8 = 0x20;
    }
    local_68 = uVar7 >> iVar8;
    uVar5 = uVar5 - iVar8;
  } while( true );
}

