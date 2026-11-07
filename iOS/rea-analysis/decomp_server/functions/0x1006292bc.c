// rea decompile_all
// name: FUN_1006292bc
// address: 0x1006292bc
// body: available
// range: 0x1006292bc-0x100629467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006292bc(long *param_1,long param_2,long param_3,char param_4,long param_5,long param_6,
                   ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_7;
    if (param_7 != 0) {
      if ((long)param_7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100629468);
        (*pcVar2)();
      }
      uVar3 = 0;
      uVar1 = param_3 - param_2;
      do {
        uVar6 = uVar3;
        if (param_4 == '\0') {
          lVar4 = param_2;
          if (param_3 == 0) {
            uVar5 = (ulong)(param_2 != 0);
            if (param_2 == 0) {
              if ((uVar3 != 1) && (uVar3 == 0)) break;
            }
            else {
              if (uVar3 == 0) goto LAB_1006293f4;
              if (uVar3 == 1) break;
            }
            lVar4 = 0;
          }
          else if (uVar3 == 0) {
            uVar5 = 2;
          }
          else if (uVar3 == 1) {
            lVar4 = param_3;
            uVar5 = 2;
          }
          else {
            if (uVar3 == 2) break;
            lVar4 = 0;
            uVar5 = 2;
          }
        }
        else {
          if (param_4 == '\x01') {
            uVar5 = uVar1;
            if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100629454);
              (*pcVar2)();
            }
          }
          else {
            uVar5 = *(ulong *)(param_5 + 0x10);
          }
          if (uVar3 == uVar5) break;
          if (param_4 == '\x02') {
            uVar5 = *(ulong *)(param_5 + 0x10);
            if (uVar3 < uVar5) {
              lVar4 = *(long *)(param_5 + 0x20 + uVar3 * 8);
            }
            else {
              lVar4 = 0;
            }
          }
          else {
            if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100629458);
              (*pcVar2)();
            }
            uVar5 = uVar1;
            if ((long)uVar3 < (long)uVar1) {
              uVar6 = param_2 + uVar3;
              if (SCARRY8(param_2,uVar3)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10062945c);
                (*pcVar2)();
              }
              if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100629460);
                (*pcVar2)();
              }
              if (*(ulong *)(param_5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100629464);
                (*pcVar2)();
              }
              lVar4 = *(long *)(param_5 + 0x20 + uVar6 * 8);
            }
            else {
              lVar4 = 0;
            }
          }
        }
LAB_1006293f4:
        if ((long)uVar5 <= (long)uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100629450);
          (*pcVar2)();
        }
        *(long *)(param_6 + uVar3 * 8) = lVar4;
        uVar6 = param_7;
        if (param_7 - 1 == uVar3) break;
        lVar4 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10062941c);
          (*pcVar2)();
        }
      } while( true );
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *(char *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = uVar6;
  _swift_bridgeObjectRetain(param_5);
  return uVar6;
}

