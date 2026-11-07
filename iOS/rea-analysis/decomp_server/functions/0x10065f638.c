// rea decompile_all
// name: FUN_10065f638
// address: 0x10065f638
// body: available
// range: 0x10065f638-0x10065f703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10065f638(long param_1,long param_2,char param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_3 == '\0') {
    if (param_2 == 0 && param_1 == 0) goto LAB_10065f6b4;
    uVar3 = (ulong)(param_1 != 0);
    uVar2 = -(ulong)(param_1 == 0);
    if (param_2 != 0) {
      uVar3 = 2;
      uVar2 = 1;
    }
  }
  else {
    if (param_3 == '\x01') {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f6fc);
        (*pcVar1)();
      }
      if (param_2 == param_1) {
LAB_10065f6b4:
        return ZEXT816(1) << 0x40;
      }
    }
    else {
      uVar3 = *(ulong *)(param_4 + 0x10);
      if (uVar3 == 0) goto LAB_10065f6b4;
      if (param_3 == '\x02') {
        uVar2 = uVar3 - 1;
        goto LAB_10065f6d0;
      }
    }
    uVar3 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f700);
      (*pcVar1)();
    }
    uVar2 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f704);
      (*pcVar1)();
    }
  }
LAB_10065f6d0:
  if ((-1 < (long)uVar2) && ((long)uVar2 < (long)uVar3)) {
    FUN_1006605e8();
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f6f8);
  (*pcVar1)();
}

