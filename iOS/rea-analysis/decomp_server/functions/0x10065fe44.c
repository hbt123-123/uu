// rea decompile_all
// name: FUN_10065fe44
// address: 0x10065fe44
// body: available
// range: 0x10065fe44-0x10065fef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10065fe44(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar2 = param_1;
  FUN_100660be4();
  if ((param_1 < 0) || (lVar2 < param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065feec);
    (*pcVar1)();
  }
  FUN_100660be4();
  if ((param_3 < 0) || (lVar2 < param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fef0);
    (*pcVar1)();
  }
  param_3 = param_3 - param_1;
  if (param_2 < 1) {
    if ((param_3 < 1) && (param_2 < param_3)) goto LAB_10065feac;
  }
  else if ((-1 < param_3) && (param_3 < param_2)) {
LAB_10065feac:
    lVar4 = 0;
    uVar3 = 1;
    goto LAB_10065fed4;
  }
  lVar4 = param_1 + param_2;
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fef4);
    (*pcVar1)();
  }
  FUN_100660be4();
  if ((lVar4 < 0) || (lVar2 < lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fef8);
    (*pcVar1)();
  }
  uVar3 = 0;
LAB_10065fed4:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}

