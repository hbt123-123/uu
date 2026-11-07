// rea decompile_all
// name: FUN_10064b1b4
// address: 0x10064b1b4
// body: available
// range: 0x10064b1b4-0x10064b4cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10064b1b4(ulong param_1,ulong param_2,char param_3,long param_4,ulong param_5,ulong param_6,
             char param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 == '\0') {
    uVar4 = (ulong)(param_1 != 0);
    if (param_2 != 0) {
      uVar4 = 2;
    }
joined_r0x00010064b228:
    if (param_7 != '\0') goto LAB_10064b1d8;
LAB_10064b22c:
    if (param_6 == 0) {
      if (param_5 == 0) {
        if (uVar4 != 0) goto LAB_10064b258;
      }
      else if (uVar4 != 1) goto LAB_10064b258;
    }
    else if (uVar4 != 2) goto LAB_10064b258;
  }
  else {
    if (param_3 != '\x01') {
      uVar4 = *(ulong *)(param_4 + 0x10);
      goto joined_r0x00010064b228;
    }
    uVar4 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4bc);
      (*pcVar2)();
    }
    if (param_7 == '\0') goto LAB_10064b22c;
LAB_10064b1d8:
    if (param_7 == '\x01') {
      uVar5 = param_6 - param_5;
      if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4c0);
        (*pcVar2)();
      }
    }
    else {
      uVar5 = *(ulong *)(param_8 + 0x10);
    }
    if (uVar4 != uVar5) {
LAB_10064b258:
      if (param_3 == '\0') {
        uVar4 = (ulong)(param_1 != 0);
        if (param_2 != 0) {
          uVar4 = 2;
        }
      }
      else if (param_3 == '\x01') {
        uVar4 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4c4);
          (*pcVar2)();
        }
      }
      else {
        uVar4 = *(ulong *)(param_4 + 0x10);
      }
      if (param_7 == '\0') {
        if (param_6 == 0) {
          if (param_5 == 0) {
            if ((long)uVar4 < 1) {
              return 0xffffffffffffffff;
            }
          }
          else if ((long)uVar4 < 2) {
            return 0xffffffffffffffff;
          }
        }
        else if ((long)uVar4 < 3) {
          return 0xffffffffffffffff;
        }
      }
      else {
        if (param_7 == '\x01') {
          lVar3 = param_6 - param_5;
          if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4c8);
            (*pcVar2)();
          }
        }
        else {
          lVar3 = *(long *)(param_8 + 0x10);
        }
        if ((long)uVar4 <= lVar3) {
          return 0xffffffffffffffff;
        }
      }
      return 1;
    }
  }
  if (param_3 == '\0') {
    if (param_2 != 0) {
      uVar4 = 2;
      goto LAB_10064b2fc;
    }
    uVar4 = (ulong)(param_1 != 0);
  }
  else if (param_3 == '\x01') {
    uVar4 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4cc);
      (*pcVar2)();
    }
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b210);
      (*pcVar2)();
    }
  }
  else {
    uVar4 = *(ulong *)(param_4 + 0x10);
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_10064b2fc:
  do {
    uVar5 = uVar4 - 1;
    if (param_3 == '\0') {
      uVar7 = param_2;
      if (uVar4 != 2) {
        uVar7 = 0;
      }
      uVar6 = param_1;
      if (uVar4 != 1) {
        uVar6 = uVar7;
      }
joined_r0x00010064b388:
      if (param_7 == '\0') goto LAB_10064b3e0;
LAB_10064b38c:
      if (param_7 == '\x01') {
        if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4a0);
          (*pcVar2)();
        }
        if ((long)(param_6 - param_5) < (long)uVar4) {
LAB_10064b320:
          if (uVar6 != 0) {
            return 1;
          }
          goto LAB_10064b324;
        }
        uVar4 = param_5 + uVar5;
        if (SCARRY8(param_5,uVar5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4a8);
          (*pcVar2)();
        }
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4b0);
          (*pcVar2)();
        }
        if (*(ulong *)(param_8 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4b8);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(param_8 + 0x20 + uVar4 * 8);
      }
      else {
        if (*(long *)(param_8 + 0x10) < (long)uVar4) goto LAB_10064b320;
        uVar7 = *(ulong *)(param_8 + 0x18 + uVar4 * 8);
      }
      if (uVar6 != uVar7) {
LAB_10064b430:
        uVar1 = 0xffffffffffffffff;
        if (uVar7 < uVar6) {
          uVar1 = 1;
        }
        return uVar1;
      }
    }
    else {
      if (param_3 == '\x01') {
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b49c);
          (*pcVar2)();
        }
        if ((long)(param_2 - param_1) < (long)uVar4) {
LAB_10064b3d4:
          uVar6 = 0;
          goto joined_r0x00010064b388;
        }
        uVar7 = param_1 + uVar5;
        if (SCARRY8(param_1,uVar5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4a4);
          (*pcVar2)();
        }
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4ac);
          (*pcVar2)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064b4b4);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(param_4 + 0x20 + uVar7 * 8);
      }
      else {
        if (*(long *)(param_4 + 0x10) < (long)uVar4) goto LAB_10064b3d4;
        uVar6 = *(ulong *)(param_4 + 0x18 + uVar4 * 8);
      }
      if (param_7 != '\0') goto LAB_10064b38c;
LAB_10064b3e0:
      uVar7 = param_5;
      if ((uVar4 != 1) && (uVar7 = param_6, uVar4 != 2)) goto LAB_10064b320;
      if (uVar6 != uVar7) goto LAB_10064b430;
    }
LAB_10064b324:
    uVar4 = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
  } while( true );
}

