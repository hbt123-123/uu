// rea decompile_all
// name: FUN_100647200
// address: 0x100647200
// body: available
// range: 0x100647200-0x100647377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100647200(ulong param_1,ulong param_2,ulong param_3,ulong param_4,char param_5,
                   long param_6)

{
  ulong uVar1;
  code *pcVar2;
  ulong local_40;
  
  if (param_5 != '\0') {
    if (param_5 == '\x01') {
      param_1 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
      local_40 = param_3 + param_1;
      if (SCARRY8(param_3,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100647370);
        (*pcVar2)();
      }
      if ((long)param_4 <= (long)local_40) {
        local_40 = param_4;
      }
      if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100647374);
        (*pcVar2)();
      }
      if (((long)param_2 <= (long)(param_4 - param_3)) && (SCARRY8(param_3,param_2))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100647378);
        (*pcVar2)();
      }
    }
    else {
      uVar1 = *(ulong *)(param_6 + 0x10);
      if ((long)param_1 <= (long)*(ulong *)(param_6 + 0x10)) {
        uVar1 = param_1;
      }
      local_40 = 0;
      if (-1 < (long)param_1) {
        local_40 = uVar1;
      }
    }
    _swift_bridgeObjectRetain(param_6);
    FUN_100645d2c();
    return local_40;
  }
  if ((long)param_1 < 0) {
    if (2 < (long)param_2) {
      return param_3;
    }
    if ((long)param_2 < 0) {
      return 0;
    }
    if (param_2 == 1) {
      return param_3;
    }
joined_r0x000100647310:
    if (param_2 == 2) {
      return param_3;
    }
  }
  else {
    if (2 < param_1) {
      return 0;
    }
    if ((long)param_2 < 3) {
      if ((long)param_2 < 0) {
        return 0;
      }
      if (param_1 != 0) {
        param_3 = param_4;
        if (param_1 != 1) {
          return 0;
        }
        goto joined_r0x000100647310;
      }
      param_4 = param_3;
      param_1 = param_2;
      if (param_2 == 2) {
        return param_3;
      }
    }
    else if (param_1 == 0) {
      return param_3;
    }
    if (param_1 == 1) {
      return param_4;
    }
  }
  return 0;
}

