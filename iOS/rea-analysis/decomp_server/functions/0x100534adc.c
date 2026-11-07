// rea decompile_all
// name: FUN_100534adc
// address: 0x100534adc
// body: available
// range: 0x100534adc-0x100534ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100534adc(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  long unaff_x21;
  long local_50;
  long lStack_48;
  
  lVar6 = *param_3;
  if (*(char *)((long)param_1 + lVar6) == '\"') {
    lVar1 = 0;
    if (param_1 != (undefined8 *)0x0) {
      lVar1 = param_2 - (long)param_1;
    }
    if ((lVar6 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100534ce4);
      (*pcVar3)();
    }
    lVar6 = lVar6 + 1;
    if (lVar6 != param_4) {
      bVar9 = 0;
      bVar8 = 0;
      lVar7 = 0;
      lVar5 = lVar6;
      do {
        uVar10 = (ulong)*(byte *)((long)param_1 + lVar5);
        bVar2 = bVar8;
        if (uVar10 < 0x2f) {
          if (uVar10 == 0x2b) goto LAB_100534bf8;
          if (uVar10 == 0x2d) {
            bVar2 = 1;
          }
          else if (uVar10 == 0x22) {
            *param_3 = lVar5;
            if (!(bool)(bVar9 & bVar8)) {
              lVar5 = lVar7 * 3;
              if (SUB168(SEXT816(lVar7) * SEXT816(3),8) != lVar5 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100534ce8);
                (*pcVar3)();
              }
              lVar7 = lVar5 + 3;
              if (-1 < lVar5) {
                lVar7 = lVar5;
              }
              lVar7 = lVar7 >> 2;
              lVar5 = param_2;
              FUN_10009a308();
              *param_3 = lVar6;
              local_50 = lVar7;
              lStack_48 = lVar5;
              FUN_100536a50(&local_50,param_1,param_2,param_3);
              if (unaff_x21 != 0) {
                FUN_100006cdc(local_50,lStack_48);
                return;
              }
              lVar6 = *param_3;
              if ((-1 < lVar6) && (lVar6 < lVar1)) {
                *param_3 = lVar6 + 1;
                return;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100534cec);
              (*pcVar3)();
            }
            goto LAB_100534b2c;
          }
        }
        else {
          if (uVar10 != 0x2f) {
            if (uVar10 != 0x5c) {
              bVar2 = 1;
              if (uVar10 != 0x5f) {
                bVar2 = bVar8;
              }
              goto LAB_100534bfc;
            }
            if (lVar1 <= lVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100534ce0);
              (*pcVar3)();
            }
            lVar5 = lVar5 + 1;
            if (lVar5 == param_4) break;
            uVar10 = (ulong)*(byte *)((long)param_1 + lVar5);
            if (*(byte *)((long)param_1 + lVar5) != 0x2f) {
              *param_3 = lVar5;
              goto LAB_100534b2c;
            }
          }
LAB_100534bf8:
          bVar9 = 1;
        }
LAB_100534bfc:
        bVar8 = bVar2;
        if ((-1 < *(long *)(&DAT_100aa8ce8 + uVar10 * 8)) &&
           (bVar4 = SCARRY8(lVar7,1), lVar7 = lVar7 + 1, bVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100534cdc);
          (*pcVar3)();
        }
        if (lVar1 <= lVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100534cd8);
          (*pcVar3)();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != param_4);
    }
    *param_3 = param_4;
  }
LAB_100534b2c:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  param_1[1] = 5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}

