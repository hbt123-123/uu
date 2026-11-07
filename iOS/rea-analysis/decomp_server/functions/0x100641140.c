// rea decompile_all
// name: FUN_100641140
// address: 0x100641140
// body: available
// range: 0x100641140-0x1006412cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100641140(long *param_1,long param_2,ulong param_3,long param_4,long param_5,char param_6,
                   long param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412cc);
        (*pcVar2)();
      }
      uVar4 = 0;
      uVar1 = param_5 - param_4;
      do {
        uVar3 = uVar4;
        if (param_6 == '\0') {
          lVar5 = param_4;
          if (param_5 == 0) {
            uVar6 = (ulong)(param_4 != 0);
            if (param_4 == 0) {
              if ((uVar4 != 1) && (uVar4 == 0)) break;
            }
            else {
              if (uVar4 == 0) goto LAB_100641268;
              if (uVar4 == 1) break;
            }
            lVar5 = 0;
          }
          else if (uVar4 == 0) {
            uVar6 = 2;
          }
          else if (uVar4 == 1) {
            lVar5 = param_5;
            uVar6 = 2;
          }
          else {
            if (uVar4 == 2) break;
            lVar5 = 0;
            uVar6 = 2;
          }
        }
        else {
          if (param_6 == '\x01') {
            uVar6 = uVar1;
            if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412b8);
              (*pcVar2)();
            }
          }
          else {
            uVar6 = *(ulong *)(param_7 + 0x10);
          }
          if (uVar4 == uVar6) break;
          if (param_6 == '\x02') {
            uVar6 = *(ulong *)(param_7 + 0x10);
            if (uVar4 < uVar6) {
              lVar5 = *(long *)(param_7 + 0x20 + uVar4 * 8);
            }
            else {
              lVar5 = 0;
            }
          }
          else {
            if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412bc);
              (*pcVar2)();
            }
            uVar6 = uVar1;
            if ((long)uVar4 < (long)uVar1) {
              uVar3 = param_4 + uVar4;
              if (SCARRY8(param_4,uVar4)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412c0);
                (*pcVar2)();
              }
              if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412c4);
                (*pcVar2)();
              }
              if (*(ulong *)(param_7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412c8);
                (*pcVar2)();
              }
              lVar5 = *(long *)(param_7 + 0x20 + uVar3 * 8);
            }
            else {
              lVar5 = 0;
            }
          }
        }
LAB_100641268:
        if ((long)uVar6 <= (long)uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006412b4);
          (*pcVar2)();
        }
        *(long *)(param_2 + uVar4 * 8) = lVar5;
        uVar3 = param_3;
        if (param_3 - 1 == uVar4) break;
        lVar5 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100641290);
          (*pcVar2)();
        }
      } while( true );
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  *(char *)(param_1 + 2) = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return uVar3;
}

