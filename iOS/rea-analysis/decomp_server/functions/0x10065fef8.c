// rea decompile_all
// name: FUN_10065fef8
// address: 0x10065fef8
// body: available
// range: 0x10065fef8-0x10065ffff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10065fef8(long param_1,long param_2,char param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 == '\0') {
    if (param_2 == 0 && param_1 == 0) {
      return 0;
    }
    uVar3 = (ulong)(param_1 != 0);
    if (param_2 != 0) {
      uVar3 = 2;
    }
  }
  else {
    if (param_3 == '\x01') {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fff0);
        (*pcVar1)();
      }
      if (param_2 - param_1 < 1) {
        return 0;
      }
    }
    else {
      uVar3 = *(ulong *)(param_4 + 0x10);
      if (uVar3 == 0) {
        return 0;
      }
      if (param_3 == '\x02') goto LAB_10065ff58;
    }
    uVar3 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fff4);
      (*pcVar1)();
    }
  }
LAB_10065ff58:
  uVar4 = uVar3 - 1;
  if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065ffe8);
    (*pcVar1)();
  }
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065ffec);
    (*pcVar1)();
  }
  if (param_3 == '\0') {
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        param_2 = 0;
      }
      return LZCOUNT(param_2);
    }
  }
  else {
    if (param_3 == '\x01') {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fff8);
        (*pcVar1)();
      }
      if ((long)uVar4 < param_2 - param_1) {
        bVar2 = SCARRY8(param_1,uVar4);
        uVar4 = param_1 + uVar4;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fffc);
          (*pcVar1)();
        }
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100660000);
          (*pcVar1)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10065ffa0);
          (*pcVar1)();
        }
LAB_10065ffc8:
        return LZCOUNT(*(undefined8 *)(param_4 + uVar4 * 8 + 0x20));
      }
    }
    else if (uVar4 < *(ulong *)(param_4 + 0x10)) goto LAB_10065ffc8;
    param_1 = 0;
  }
  return LZCOUNT(param_1);
}

