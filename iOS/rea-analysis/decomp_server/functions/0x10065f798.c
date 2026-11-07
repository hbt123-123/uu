// rea decompile_all
// name: FUN_10065f798
// address: 0x10065f798
// body: available
// range: 0x10065f798-0x10065f87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10065f798(long param_1,long param_2,char param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 == '\0') {
    if (param_2 == 0 && param_1 == 0) goto LAB_10065f824;
    uVar4 = (ulong)(param_1 != 0);
    lVar5 = uVar4 << 6;
    if (param_2 != 0) {
      uVar4 = 2;
      lVar5 = 0x80;
    }
LAB_10065f84c:
    lVar3 = uVar4 - 1;
    FUN_100644580();
    lVar2 = lVar5 - LZCOUNT(lVar3);
    if (SBORROW8(lVar5,LZCOUNT(lVar3))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f870);
      (*pcVar1)();
    }
  }
  else {
    if (param_3 == '\x01') {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f874);
        (*pcVar1)();
      }
      if (0 < param_2 - param_1) {
LAB_10065f82c:
        uVar4 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f878);
          (*pcVar1)();
        }
        if (uVar4 + 0xfe00000000000000 >> 0x3a < 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f87c);
          (*pcVar1)();
        }
LAB_10065f848:
        lVar5 = uVar4 << 6;
        goto LAB_10065f84c;
      }
    }
    else {
      uVar4 = *(ulong *)(param_4 + 0x10);
      if (uVar4 != 0) {
        if (param_3 != '\x02') goto LAB_10065f82c;
        if (uVar4 >> 0x39 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10065f824);
          (*pcVar1)();
        }
        goto LAB_10065f848;
      }
    }
LAB_10065f824:
    lVar2 = 0;
  }
  return lVar2;
}

