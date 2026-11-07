// rea decompile_all
// name: FUN_10009f5c4
// address: 0x10009f5c4
// body: available
// range: 0x10009f5c4-0x10009f66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10009f5c4(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((long)uVar3 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f664);
    (*pcVar1)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f668);
    (*pcVar1)();
  }
  if (uVar3 == param_2) {
    return 0;
  }
  if (1 < (long)(uVar3 - param_2)) {
    return 1;
  }
  if (param_2 < uVar3) {
    param_1 = param_1 + param_2 * 0x40;
    uVar2 = 1;
    if (((*(ulong *)(param_1 + 0x30) & 0x6000000000000000) == 0x4000000000000000) &&
       (*(ulong *)(param_1 + 0x30) == 0x4000000000000000)) {
      if ((*(long *)(param_1 + 0x38) == 0 && *(long *)(param_1 + 0x28) == 0) &&
          (*(long *)(param_1 + 0x20) == 0 && *(long *)(param_1 + 0x40) == 0)) {
        FUN_10009583c(0,0,0x4000000000000000,0);
        uVar2 = 0;
      }
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f66c);
  (*pcVar1)();
}

