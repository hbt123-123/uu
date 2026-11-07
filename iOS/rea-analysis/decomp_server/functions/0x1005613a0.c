// rea decompile_all
// name: FUN_1005613a0
// address: 0x1005613a0
// body: available
// range: 0x1005613a0-0x10056196f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005613a0(byte *param_1,long param_2,long param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  
  if ((param_1 != (byte *)0x0) && (0 < param_2 - (long)param_1)) {
    pbVar10 = *(byte **)(param_3 + 0x28);
    bVar12 = *pbVar10;
    while (bVar12 != param_4) {
      *(byte **)(param_3 + 0x28) = pbVar10 + 1;
      if (bVar12 == 0x5c) {
        bVar12 = pbVar10[1];
        pbVar1 = pbVar10 + 2;
        *(byte **)(param_3 + 0x28) = pbVar1;
        if (0xf7 < (bVar12 - 0x38 & 0xff)) {
          uVar5 = bVar12 - 0x30;
          bVar9 = *pbVar1;
          if ((byte)(bVar9 - 0x38) < 0xf8) {
LAB_100561470:
            *param_1 = (byte)uVar5;
          }
          else {
            *(byte **)(param_3 + 0x28) = pbVar10 + 3;
            bVar9 = bVar9 - 0x30;
            bVar2 = pbVar10[3];
            if ((byte)(bVar2 - 0x38) < 0xf8) {
              bVar9 = bVar9 | (char)uVar5 * '\b';
            }
            else {
              *(byte **)(param_3 + 0x28) = pbVar10 + 4;
              bVar9 = (bVar2 + (bVar9 * '\b' | bVar12 << 6)) - 0x30;
            }
            *param_1 = bVar9;
          }
          goto LAB_100561790;
        }
        if (0x71 < bVar12) {
          if (bVar12 < 0x75) {
            if (bVar12 == 0x72) {
              *param_1 = 0xd;
            }
            else {
              if (bVar12 != 0x74) goto LAB_1005615c4;
              *param_1 = 9;
            }
          }
          else {
            if (bVar12 == 0x75) {
              bVar6 = true;
              lVar11 = 4;
              goto LAB_100561570;
            }
            if (bVar12 == 0x76) {
              *param_1 = 0xb;
            }
            else {
              if (bVar12 == 0x78) {
                bVar12 = *pbVar1;
                if ((byte)(bVar12 - 0x3a) < 0xf6) {
                  if ((byte)(bVar12 + 0xb9) < 0xfa) {
                    if ((byte)(bVar12 + 0x99) < 0xfa) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x10056196c);
                      (*pcVar4)();
                    }
                    cVar7 = -0x57;
                  }
                  else {
                    cVar7 = -0x37;
                  }
                }
                else {
                  cVar7 = -0x30;
                }
                bVar12 = bVar12 + cVar7;
                *(byte **)(param_3 + 0x28) = pbVar10 + 3;
                bVar9 = pbVar10[3];
                if ((byte)(bVar9 - 0x3a) < 0xf6) {
                  if ((byte)(bVar9 + 0xb9) < 0xfa) {
                    if ((byte)(bVar9 + 0x99) < 0xfa) goto LAB_10056178c;
                    cVar7 = -0x57;
                  }
                  else {
                    cVar7 = -0x37;
                  }
                }
                else {
                  cVar7 = -0x30;
                }
                bVar12 = bVar9 + cVar7 + bVar12 * '\x10';
                *(byte **)(param_3 + 0x28) = pbVar10 + 4;
                goto LAB_10056178c;
              }
LAB_1005615c4:
              *param_1 = bVar12;
            }
          }
          goto LAB_100561790;
        }
        if (0x61 < bVar12) {
          if (bVar12 == 0x62) {
            *param_1 = 8;
          }
          else if (bVar12 == 0x66) {
            *param_1 = 0xc;
          }
          else {
            if (bVar12 != 0x6e) goto LAB_1005615c4;
            *param_1 = 10;
          }
          goto LAB_100561790;
        }
        if (bVar12 != 0x55) {
          if (bVar12 != 0x61) goto LAB_1005615c4;
          *param_1 = 7;
          goto LAB_100561790;
        }
        bVar6 = false;
        lVar11 = 8;
LAB_100561570:
        bVar12 = *pbVar1;
        if ((byte)(bVar12 - 0x3a) < 0xf6) {
          if ((byte)(bVar12 + 0xb9) < 0xfa) {
            if ((byte)(bVar12 + 0x99) < 0xfa) goto LAB_100561964;
            cVar7 = -0x57;
          }
          else {
            cVar7 = -0x37;
          }
        }
        else {
          cVar7 = -0x30;
        }
        bVar9 = pbVar10[3];
        if ((byte)(bVar9 - 0x3a) < 0xf6) {
          if ((byte)(bVar9 + 0xb9) < 0xfa) {
            if ((byte)(bVar9 + 0x99) < 0xfa) goto LAB_100561964;
            cVar8 = -0x57;
          }
          else {
            cVar8 = -0x37;
          }
        }
        else {
          cVar8 = -0x30;
        }
        bVar2 = pbVar10[4];
        if ((byte)(bVar2 - 0x3a) < 0xf6) {
          if ((byte)(bVar2 + 0xb9) < 0xfa) {
            if ((byte)(bVar2 + 0x99) < 0xfa) goto LAB_100561964;
            cVar13 = -0x57;
          }
          else {
            cVar13 = -0x37;
          }
        }
        else {
          cVar13 = -0x30;
        }
        bVar3 = pbVar10[5];
        if ((byte)(bVar3 - 0x3a) < 0xf6) {
          if ((byte)(bVar3 + 0xb9) < 0xfa) {
            if ((byte)(bVar3 + 0x99) < 0xfa) goto LAB_100561964;
            cVar14 = -0x57;
          }
          else {
            cVar14 = -0x37;
          }
        }
        else {
          cVar14 = -0x30;
        }
        uVar5 = ((uint)(byte)(bVar12 + cVar7) * 0x100 + (uint)(byte)(bVar9 + cVar8) * 0x10 +
                (uint)(byte)(bVar2 + cVar13)) * 0x10 + (uint)(byte)(bVar3 + cVar14);
        if (!bVar6) {
          bVar12 = pbVar10[6];
          if ((byte)(bVar12 - 0x3a) < 0xf6) {
            if ((byte)(bVar12 + 0xb9) < 0xfa) {
              if ((byte)(bVar12 + 0x99) < 0xfa) goto LAB_100561964;
              cVar7 = -0x57;
            }
            else {
              cVar7 = -0x37;
            }
          }
          else {
            cVar7 = -0x30;
          }
          bVar9 = pbVar10[7];
          if ((byte)(bVar9 - 0x3a) < 0xf6) {
            if ((byte)(bVar9 + 0xb9) < 0xfa) {
              if ((byte)(bVar9 + 0x99) < 0xfa) goto LAB_100561964;
              cVar8 = -0x57;
            }
            else {
              cVar8 = -0x37;
            }
          }
          else {
            cVar8 = -0x30;
          }
          bVar2 = pbVar10[8];
          if ((byte)(bVar2 - 0x3a) < 0xf6) {
            if ((byte)(bVar2 + 0xb9) < 0xfa) {
              if ((byte)(bVar2 + 0x99) < 0xfa) goto LAB_100561964;
              cVar13 = -0x57;
            }
            else {
              cVar13 = -0x37;
            }
          }
          else {
            cVar13 = -0x30;
          }
          bVar3 = pbVar10[9];
          if ((byte)(bVar3 - 0x3a) < 0xf6) {
            if ((byte)(bVar3 + 0xb9) < 0xfa) {
              if ((byte)(bVar3 + 0x99) < 0xfa) {
LAB_100561964:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100561968);
                (*pcVar4)();
              }
              cVar14 = -0x57;
            }
            else {
              cVar14 = -0x37;
            }
          }
          else {
            cVar14 = -0x30;
          }
          uVar5 = (uVar5 * 0x100 + (uint)(byte)(bVar12 + cVar7) * 0x10 + (uint)(byte)(bVar9 + cVar8)
                  ) * 0x100 + (uint)(byte)(bVar2 + cVar13) * 0x10 + (uint)(byte)(bVar3 + cVar14);
        }
        *(byte **)(param_3 + 0x28) = pbVar1 + lVar11;
        if (uVar5 < 0x80) goto LAB_100561470;
        bVar12 = (byte)uVar5;
        if (uVar5 < 0x800) {
          *param_1 = (byte)(uVar5 >> 6) | 0xc0;
          param_1[1] = bVar12 & 0x3f | 0x80;
          lVar11 = 2;
        }
        else if (uVar5 >> 0x10 == 0) {
          *param_1 = (byte)(uVar5 >> 0xc) | 0xe0;
          param_1[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar12 & 0x3f | 0x80;
          lVar11 = 3;
        }
        else {
          if (0x10 < uVar5 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100561970);
            (*pcVar4)();
          }
          *param_1 = (byte)(uVar5 >> 0x12) | 0xf0;
          param_1[1] = (byte)(uVar5 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          param_1[3] = bVar12 & 0x3f | 0x80;
          lVar11 = 4;
        }
      }
      else {
LAB_10056178c:
        *param_1 = bVar12;
LAB_100561790:
        lVar11 = 1;
      }
      param_1 = param_1 + lVar11;
      pbVar10 = *(byte **)(param_3 + 0x28);
      bVar12 = *pbVar10;
    }
    *(byte **)(param_3 + 0x28) = pbVar10 + 1;
  }
  return;
}

