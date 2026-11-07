// rea decompile_all
// name: FUN_10065df10
// address: 0x10065df10
// body: available
// range: 0x10065df10-0x10065df7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065df10(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*param_1 == '+') {
    lVar3 = param_2 + -1;
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065df80);
      (*pcVar1)();
    }
    pcVar2 = (char *)0x0;
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1 + 1;
    }
  }
  else {
    pcVar2 = param_1;
    lVar3 = param_2;
    if (*param_1 == '-') {
      lVar3 = param_2 + -1;
      if (param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065df7c);
        (*pcVar1)();
      }
      pcVar2 = (char *)0x0;
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1 + 1;
      }
      uVar4 = 1;
      goto LAB_10065df60;
    }
  }
  uVar4 = 0;
LAB_10065df60:
  FUN_10065d818(pcVar2,lVar3,param_3,uVar4,param_5,param_7);
  return;
}

