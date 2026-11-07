// rea decompile_all
// name: FUN_100108560
// address: 0x100108560
// body: available
// range: 0x100108560-0x1001085ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100108594 to 0x1007dba28 _$sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001085a0 to 0x1007dba28 _$sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100108560(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001085ac);
    (*pcVar2)();
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    lVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x10) + -1 == lVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001085a8);
        (*pcVar2)();
      }
      pcVar1 = (char *)(param_1 + 0x21 + lVar3);
      lVar3 = lVar3 + 1;
    } while (*pcVar1 != '\0');
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(param_1 + 0x20);
    return;
  }
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(param_1 + 0x20,0);
  return;
}

