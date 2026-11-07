// rea decompile_all
// name: FUN_10008e368
// address: 0x10008e368
// body: available
// range: 0x10008e368-0x10008e3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10008e368(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(ulong *)(param_4 + 0x10);
  if (uVar2 < param_1 || uVar2 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008e3cc);
    (*pcVar1)();
  }
  param_3 = param_3 - param_1;
  if ((long)param_2 < 1) {
    if (((long)param_3 < 1) && ((long)param_2 < (long)param_3)) goto LAB_10008e3a4;
  }
  else if ((-1 < (long)param_3) && (param_3 < param_2)) {
LAB_10008e3a4:
    return ZEXT816(1) << 0x40;
  }
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008e3d0);
    (*pcVar1)();
  }
  if (param_1 + param_2 <= uVar2) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1 + param_2;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008e3d4);
  (*pcVar1)();
}

