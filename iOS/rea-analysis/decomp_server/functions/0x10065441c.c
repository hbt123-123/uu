// rea decompile_all
// name: FUN_10065441c
// address: 0x10065441c
// body: available
// range: 0x10065441c-0x1006544c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10065441c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_3 >> 0x20;
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544ac);
    (*pcVar5)();
  }
  param_3 = param_3 & 0xffffffff;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_1 / uVar1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  if (SUB168(auVar3 * auVar4,8) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544b0);
    (*pcVar5)();
  }
  lVar8 = param_1 - uVar2 * uVar1;
  uVar7 = uVar2 * param_3;
  if (uVar2 >> 0x20 == 0) {
    uVar6 = lVar8 << 0x20;
    if (CARRY8(param_2,uVar6)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544b4);
      (*pcVar5)();
    }
    if (uVar7 <= param_2 + uVar6) {
      return uVar2;
    }
  }
  uVar1 = lVar8 + uVar1;
  uVar6 = uVar2 - 1;
  if (uVar1 >> 0x20 == 0) {
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544b8);
      (*pcVar5)();
    }
    if (uVar6 >> 0x20 == 0) {
      if (uVar7 < param_3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544c0);
        (*pcVar5)();
      }
      uVar1 = uVar1 << 0x20;
      if (CARRY8(param_2,uVar1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544c4);
        (*pcVar5)();
      }
      if (uVar7 - param_3 <= param_2 + uVar1) {
        return uVar6;
      }
    }
    uVar6 = uVar2 - 2;
    if (uVar2 < 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544a0);
      (*pcVar5)();
    }
  }
  else if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006544bc);
    (*pcVar5)();
  }
  return uVar6;
}

