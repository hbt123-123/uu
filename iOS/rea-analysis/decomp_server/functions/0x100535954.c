// rea decompile_all
// name: FUN_100535954
// address: 0x100535954
// body: available
// range: 0x100535954-0x100535d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100535954(byte *param_1,long param_2,long *param_3,long param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  lVar6 = *param_3;
  if (lVar6 == param_4) goto LAB_100535970;
  param_5 = (byte *)0x0;
  pbVar1 = param_1 + lVar6;
  bVar2 = *pbVar1;
  uVar9 = (uint)bVar2;
  uVar12 = 1;
  if ((bVar2 == 0x5c) || (bVar2 == 0x4e)) goto LAB_1005359a4;
  lVar10 = lVar6;
  if (bVar2 == 0x2d) {
    lVar10 = 0;
    if (param_1 != (byte *)0x0) {
      lVar10 = param_2 - (long)param_1;
    }
    if ((lVar6 < 0) || (lVar10 <= lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100535cf8);
      (*pcVar3)();
    }
    lVar10 = lVar6 + 1;
    *param_3 = lVar10;
    if (lVar10 == param_4) {
      *param_3 = lVar6;
      goto LAB_100535970;
    }
    uVar9 = (uint)param_1[lVar10];
    if (uVar9 != 0x5c) goto LAB_100535a18;
  }
  else {
LAB_100535a18:
    if (uVar9 != 0x49) {
      if (uVar9 == 0x30) {
        lVar8 = 0;
        if (param_1 != (byte *)0x0) {
          lVar8 = param_2 - (long)param_1;
        }
        if ((lVar10 < 0) || (lVar8 <= lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100535cfc);
          (*pcVar3)();
        }
        lVar8 = lVar10 + 1;
        *param_3 = lVar8;
        if (lVar8 == param_4) {
          uVar12 = 0;
          param_5 = (byte *)0x0;
          goto LAB_1005359a4;
        }
        uVar9 = (uint)param_1[lVar8];
        if (uVar9 == 0x5c) goto LAB_100535ae0;
        if (uVar9 - 0x3a < 0xfffffff6) {
LAB_100535af8:
          param_5 = (byte *)0x0;
          if (uVar9 == 0x2e) {
            lVar10 = 0;
            if (param_1 != (byte *)0x0) {
              lVar10 = param_2 - (long)param_1;
            }
            if ((lVar8 < 0) || (lVar10 <= lVar8)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d08);
              (*pcVar3)();
            }
            lVar8 = lVar8 + 1;
            *param_3 = lVar8;
            if (lVar8 == param_4) {
LAB_100535970:
              uVar12 = 0xd;
            }
            else {
              uVar9 = (uint)param_1[lVar8];
              if (0xfffffff5 < uVar9 - 0x3a) {
                do {
                  if (uVar9 - 0x3a < 0xfffffff6) goto LAB_100535bc0;
                  if (lVar10 == lVar8) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d00);
                    (*pcVar3)();
                  }
                  *param_3 = lVar8 + 1;
                  if ((2 - param_4) + lVar8 == 1) {
                    if (param_4 < lVar6) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x100535c9c);
                      (*pcVar3)();
                    }
                    goto LAB_100535cb4;
                  }
                  param_5 = (byte *)0x0;
                  uVar9 = (uint)param_1[lVar8 + 1];
                  uVar12 = 1;
                  lVar8 = lVar8 + 1;
                } while (uVar9 != 0x5c);
                goto LAB_1005359a4;
              }
              uVar12 = 1;
              if (uVar9 == 0x5c) {
                param_5 = (byte *)0x0;
                goto LAB_1005359a4;
              }
            }
          }
          else {
LAB_100535bc0:
            param_5 = (byte *)0x0;
            if ((uVar9 | 0x20) == 0x65) {
              lVar10 = 0;
              if (param_1 != (byte *)0x0) {
                lVar10 = param_2 - (long)param_1;
              }
              if ((lVar8 < 0) || (lVar10 <= lVar8)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d0c);
                (*pcVar3)();
              }
              lVar7 = lVar8 + 1;
              *param_3 = lVar7;
              if (lVar7 == param_4) goto LAB_100535970;
              bVar2 = param_1[lVar7];
              if (bVar2 == 0x2b) {
LAB_100535c10:
                if (lVar10 <= lVar7) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d18);
                  (*pcVar3)();
                }
                lVar7 = lVar8 + 2;
                *param_3 = lVar7;
                if (lVar7 == param_4) goto LAB_100535970;
                bVar2 = param_1[lVar7];
                if (bVar2 == 0x5c) goto LAB_100535ae0;
              }
              else {
                if (bVar2 == 0x5c) goto LAB_100535ae0;
                if (bVar2 == 0x2d) goto LAB_100535c10;
              }
              uVar9 = (uint)bVar2;
              if (0xfffffff5 < uVar9 - 0x3a) {
                if (lVar10 <= lVar7) {
                  lVar10 = lVar7;
                }
                lVar8 = lVar7;
                do {
                  lVar7 = lVar8 + 1;
                  if (uVar9 - 0x3a < 0xfffffff6) goto LAB_100535ca0;
                  if (lVar7 - lVar10 == 1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d10);
                    (*pcVar3)();
                  }
                  *param_3 = lVar7;
                  if (param_4 == lVar7) {
                    if (param_4 < lVar6) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x100535cf0);
                      (*pcVar3)();
                    }
                    goto LAB_100535cb4;
                  }
                  param_5 = (byte *)0x0;
                  uVar9 = (uint)param_1[lVar7];
                  uVar12 = 1;
                  lVar8 = lVar7;
                } while (uVar9 != 0x5c);
                goto LAB_1005359a4;
              }
              goto LAB_100535a78;
            }
LAB_100535ca0:
            param_4 = lVar8;
            if (lVar8 < lVar6) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d14);
              (*pcVar3)();
            }
LAB_100535cb4:
            param_5 = (byte *)0x0;
            bVar4 = param_1 != (byte *)0x0;
            pbVar5 = (byte *)0x0;
            if (bVar4) {
              pbVar5 = param_1 + param_4;
            }
            param_1 = (byte *)0x0;
            if (bVar4) {
              param_1 = pbVar1;
            }
            FUN_10050ef90(param_1,pbVar5,1);
            if (((ulong)pbVar5 & 1) == 0) {
              uVar12 = 0;
              param_5 = param_1;
              goto LAB_1005359a4;
            }
            uVar12 = 6;
          }
        }
        else {
          uVar12 = 0xc;
        }
      }
      else {
        if (0xfffffff6 < uVar9 - 0x3a) {
          lVar8 = lVar10;
          lVar7 = 0;
          if (param_1 != (byte *)0x0) {
            lVar7 = param_2 - (long)param_1;
          }
          do {
            lVar11 = lVar8 + 1;
            if (uVar9 - 0x3a < 0xfffffff6) goto LAB_100535af8;
            if ((lVar10 < 0) || (lVar7 <= lVar8)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100535cf4);
              (*pcVar3)();
            }
            *param_3 = lVar11;
            if (param_4 == lVar11) {
              if (param_4 < lVar6) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100535d04);
                (*pcVar3)();
              }
              goto LAB_100535cb4;
            }
            param_5 = (byte *)0x0;
            uVar9 = (uint)param_1[lVar11];
            uVar12 = 1;
            lVar8 = lVar11;
          } while (uVar9 != 0x5c);
          goto LAB_1005359a4;
        }
LAB_100535a78:
        param_5 = (byte *)0x0;
        uVar12 = 1;
      }
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,param_1,0,0);
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined8 *)(param_1 + 8) = uVar12;
      _swift_willThrow();
      goto LAB_1005359a4;
    }
  }
LAB_100535ae0:
  uVar12 = 1;
  param_5 = (byte *)0x0;
LAB_1005359a4:
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = param_5;
  return auVar13;
}

