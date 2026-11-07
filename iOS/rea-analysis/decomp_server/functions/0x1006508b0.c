// rea decompile_all
// name: FUN_1006508b0
// address: 0x1006508b0
// body: available
// range: 0x1006508b0-0x100650917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006508b0(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_2 < 0) {
    lVar1 = -param_2;
    if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100650914);
      (*pcVar2)();
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100650918);
      (*pcVar2)();
    }
    lVar3 = *param_1;
    FUN_10065f798(lVar3,param_1[1],(char)param_1[2],param_1[3]);
    if (lVar1 < lVar3) {
      FUN_1006599cc(lVar1);
    }
    else {
      FUN_100646f0c();
    }
  }
  else {
    FUN_100658ed8(param_2);
  }
  return;
}

