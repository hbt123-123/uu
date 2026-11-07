// rea decompile_all
// name: FUN_10065fa88
// address: 0x10065fa88
// body: available
// range: 0x10065fa88-0x10065fc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10065fa88(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  cVar3 = (char)unaff_x20[2];
  uVar6 = unaff_x20[3];
  if ((unaff_x20[4] & 1) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc24);
      (*pcVar4)();
    }
    if (cVar3 == '\0') {
      if (param_1 == 0) {
        return uVar1;
      }
      if (param_1 == 1) {
        return uVar2;
      }
    }
    else if (cVar3 == '\x01') {
      if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc30);
        (*pcVar4)();
      }
      if ((long)param_1 < (long)(uVar2 - uVar1)) {
        uVar2 = uVar1 + param_1;
        if (SCARRY8(uVar1,param_1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc3c);
          (*pcVar4)();
        }
        if (-1 < (long)uVar2) {
          if (uVar2 < *(ulong *)(uVar6 + 0x10)) {
            return *(ulong *)(uVar6 + uVar2 * 8 + 0x20);
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc44);
          (*pcVar4)();
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc40);
        (*pcVar4)();
      }
    }
    else if (param_1 < *(ulong *)(uVar6 + 0x10)) {
      return *(ulong *)(uVar6 + param_1 * 8 + 0x20);
    }
    return 0;
  }
  if ((long)param_1 <= (long)unaff_x20[5]) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc2c);
      (*pcVar4)();
    }
    if (cVar3 == '\0') {
      if (param_1 != 1) {
        uVar2 = 0;
      }
      if (param_1 != 0) {
        uVar1 = uVar2;
      }
      return -uVar1;
    }
    if (cVar3 == '\x01') {
      if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc38);
        (*pcVar4)();
      }
      if ((long)(uVar2 - uVar1) <= (long)param_1) {
        return 0;
      }
      bVar5 = SCARRY8(uVar1,param_1);
      param_1 = uVar1 + param_1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc4c);
        (*pcVar4)();
      }
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc54);
        (*pcVar4)();
      }
      if (*(ulong *)(uVar6 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc5c);
        (*pcVar4)();
      }
    }
    else if (*(ulong *)(uVar6 + 0x10) <= param_1) {
      return 0;
    }
    return -*(long *)(uVar6 + param_1 * 8 + 0x20);
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc28);
    (*pcVar4)();
  }
  if (cVar3 == '\0') {
    if (param_1 != 1) {
      uVar2 = 0;
    }
    if (param_1 != 0) {
      uVar1 = uVar2;
    }
    return ~uVar1;
  }
  if (cVar3 == '\x01') {
    if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc34);
      (*pcVar4)();
    }
    if ((long)(uVar2 - uVar1) <= (long)param_1) {
      return 0xffffffffffffffff;
    }
    bVar5 = SCARRY8(uVar1,param_1);
    param_1 = uVar1 + param_1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc48);
      (*pcVar4)();
    }
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc50);
      (*pcVar4)();
    }
    if (*(ulong *)(uVar6 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065fc58);
      (*pcVar4)();
    }
  }
  else if (*(ulong *)(uVar6 + 0x10) <= param_1) {
    return 0xffffffffffffffff;
  }
  return ~*(ulong *)(uVar6 + param_1 * 8 + 0x20);
}

