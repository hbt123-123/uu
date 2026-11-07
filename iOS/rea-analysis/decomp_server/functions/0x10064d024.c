// rea decompile_all
// name: FUN_10064d024
// address: 0x10064d024
// body: available
// range: 0x10064d024-0x10064d16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10064d024(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_38;
  
  if (param_1 == 1) {
LAB_10064d140:
    uVar6 = 0;
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d16c);
      (*pcVar2)();
    }
    lVar1 = *unaff_x20;
    lVar3 = unaff_x20[1];
    if ((char)unaff_x20[2] == '\0') {
      if (lVar3 == 0) {
        uVar4 = (ulong)(lVar1 != 0);
        goto joined_r0x00010064d13c;
      }
      uVar4 = 2;
    }
    else {
      if ((char)unaff_x20[2] == '\x01') {
        uVar4 = lVar3 - lVar1;
        if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d170);
          (*pcVar2)();
        }
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d06c);
          (*pcVar2)();
        }
      }
      else {
        uVar4 = *(ulong *)(unaff_x20[3] + 0x10);
      }
joined_r0x00010064d13c:
      if (uVar4 == 0) goto LAB_10064d140;
    }
    uVar6 = 0;
    do {
      uVar7 = uVar4 - 1;
      lVar3 = *unaff_x20;
      lVar1 = unaff_x20[1];
      if ((char)unaff_x20[2] == '\0') {
        if (uVar4 != 2) {
          lVar1 = 0;
        }
        if (uVar4 != 1) {
          lVar3 = lVar1;
        }
      }
      else {
        lVar5 = unaff_x20[3];
        if ((char)unaff_x20[2] == '\x01') {
          if (SBORROW8(lVar1,lVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d134);
            (*pcVar2)();
          }
          if (lVar1 - lVar3 < (long)uVar4) {
LAB_10064d11c:
            lVar3 = 0;
          }
          else {
            uVar4 = lVar3 + uVar7;
            if (SCARRY8(lVar3,uVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d160);
              (*pcVar2)();
            }
            if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d164);
              (*pcVar2)();
            }
            if (*(ulong *)(lVar5 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10064d168);
              (*pcVar2)();
            }
            lVar3 = *(long *)(lVar5 + uVar4 * 8 + 0x20);
          }
        }
        else {
          if (*(long *)(lVar5 + 0x10) < (long)uVar4) goto LAB_10064d11c;
          lVar3 = *(long *)(lVar5 + uVar4 * 8 + 0x18);
        }
      }
      FUN_100654374(&local_38,uVar6,lVar3,param_1);
      uVar6 = local_38;
      FUN_100644614();
      uVar4 = uVar7;
    } while (uVar7 != 0);
  }
  return uVar6;
}

