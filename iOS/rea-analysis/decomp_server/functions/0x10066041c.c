// rea decompile_all
// name: FUN_10066041c
// address: 0x10066041c
// body: available
// range: 0x10066041c-0x1006604b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10066041c(ulong param_1,ulong param_2,ulong param_3,char param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006604ac);
    (*pcVar1)();
  }
  uVar3 = (long)param_1 >> 6;
  if (param_4 == '\0') {
    if ((uVar3 == 0) || (param_2 = param_3, uVar3 == 1)) goto LAB_10066049c;
LAB_100660498:
    param_2 = 0;
  }
  else {
    if (param_4 == '\x01') {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006604b0);
        (*pcVar1)();
      }
      if ((long)(param_3 - param_2) <= (long)uVar3) goto LAB_100660498;
      bVar2 = SCARRY8(param_2,uVar3);
      uVar3 = param_2 + uVar3;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006604b4);
        (*pcVar1)();
      }
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006604b8);
        (*pcVar1)();
      }
      if (*(ulong *)(param_5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066046c);
        (*pcVar1)();
      }
    }
    else if (*(long *)(param_5 + 0x10) <= (long)uVar3) goto LAB_100660498;
    param_2 = *(ulong *)(param_5 + uVar3 * 8 + 0x20);
  }
LAB_10066049c:
  return (uint)(param_2 >> (param_1 & 0x3f)) & 1;
}

