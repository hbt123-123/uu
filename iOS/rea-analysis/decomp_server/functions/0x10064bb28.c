// rea decompile_all
// name: FUN_10064bb28
// address: 0x10064bb28
// body: available
// range: 0x10064bb28-0x10064bdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064bb28(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  char param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = param_3 + -1;
  if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdcc);
    (*pcVar4)();
  }
  uVar5 = 0;
  uVar3 = param_5 - param_4;
  uVar2 = (ulong)(param_4 != 0);
  if (param_5 != 0) {
    uVar2 = 2;
  }
LAB_10064bb94:
  do {
    if (param_6 == '\0') {
      lVar7 = param_4;
      uVar8 = uVar2;
      if (param_5 == 0) {
        if (param_4 == 0) {
          lVar7 = param_5;
          if (uVar5 != 1) {
            if (uVar5 == 0) {
              return;
            }
            goto LAB_10064bc7c;
          }
        }
        else if (uVar5 != 0) {
          if (uVar5 == 1) {
            return;
          }
LAB_10064bc7c:
          lVar7 = 0;
          uVar8 = (ulong)(param_4 != 0);
        }
      }
      else if ((uVar5 != 0) && (lVar7 = param_5, uVar5 != 1)) {
        if (uVar5 == 2) {
          return;
        }
        lVar7 = 0;
        uVar8 = 2;
      }
    }
    else {
      if (param_6 == '\x01') {
        uVar8 = uVar3;
        if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdb8);
          (*pcVar4)();
        }
      }
      else {
        uVar8 = *(ulong *)(param_7 + 0x10);
      }
      if (uVar5 == uVar8) {
        return;
      }
      if (param_6 == '\x02') {
        uVar8 = *(ulong *)(param_7 + 0x10);
        if (uVar5 < uVar8) {
          lVar7 = *(long *)(param_7 + 0x20 + uVar5 * 8);
        }
        else {
          lVar7 = 0;
        }
      }
      else {
        if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdbc);
          (*pcVar4)();
        }
        uVar8 = uVar3;
        if ((long)uVar5 < (long)uVar3) {
          uVar1 = param_4 + uVar5;
          if (SCARRY8(param_4,uVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdc0);
            (*pcVar4)();
          }
          if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdc4);
            (*pcVar4)();
          }
          if (*(ulong *)(param_7 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdc8);
            (*pcVar4)();
          }
          lVar7 = *(long *)(param_7 + 0x20 + uVar1 * 8);
        }
        else {
          lVar7 = 0;
        }
      }
    }
    if ((long)uVar8 <= (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdb4);
      (*pcVar4)();
    }
    *(char *)(param_1 + lVar6) = (char)lVar7;
    if (lVar6 != 0) {
      if (lVar6 == -0x8000000000000000) goto LAB_10064bdac;
      *(char *)(param_1 + -1 + lVar6) = (char)((ulong)lVar7 >> 8);
      if (lVar6 == 1) {
        lVar6 = 0;
        uVar5 = uVar5 + 1;
      }
      else {
        if (lVar6 == -0x7fffffffffffffff) goto LAB_10064bdac;
        *(char *)(param_1 + -2 + lVar6) = (char)((ulong)lVar7 >> 0x10);
        if (lVar6 == 2) {
          lVar6 = 0;
          uVar5 = uVar5 + 1;
        }
        else {
          if (lVar6 == -0x7ffffffffffffffe) goto LAB_10064bdac;
          *(char *)(param_1 + -3 + lVar6) = (char)((ulong)lVar7 >> 0x18);
          if (lVar6 == 3) {
            lVar6 = 0;
            uVar5 = uVar5 + 1;
          }
          else {
            if (lVar6 == -0x7ffffffffffffffd) goto LAB_10064bdac;
            *(char *)(param_1 + -4 + lVar6) = (char)((ulong)lVar7 >> 0x20);
            if (lVar6 == 4) {
              lVar6 = 0;
              uVar5 = uVar5 + 1;
            }
            else {
              if (lVar6 == -0x7ffffffffffffffc) goto LAB_10064bdac;
              *(char *)(param_1 + -5 + lVar6) = (char)((ulong)lVar7 >> 0x28);
              if (lVar6 == 5) {
                lVar6 = 0;
                uVar5 = uVar5 + 1;
              }
              else {
                if (lVar6 == -0x7ffffffffffffffb) goto LAB_10064bdac;
                *(char *)(param_1 + -6 + lVar6) = (char)((ulong)lVar7 >> 0x30);
                if (lVar6 == 6) {
                  lVar6 = 0;
                  uVar5 = uVar5 + 1;
                }
                else {
                  if (lVar6 == -0x7ffffffffffffffa) {
LAB_10064bdac:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10064bdb0);
                    (*pcVar4)();
                  }
                  *(char *)(param_1 + -7 + lVar6) = (char)((ulong)lVar7 >> 0x38);
                  if (lVar6 != 7) {
                    if (lVar6 != -0x7ffffffffffffff9) {
                      lVar6 = lVar6 + -8;
                      goto LAB_10064bb90;
                    }
                    goto LAB_10064bdac;
                  }
                  lVar6 = 0;
                  uVar5 = uVar5 + 1;
                }
              }
            }
          }
        }
      }
      goto LAB_10064bb94;
    }
LAB_10064bb90:
    uVar5 = uVar5 + 1;
  } while( true );
}

