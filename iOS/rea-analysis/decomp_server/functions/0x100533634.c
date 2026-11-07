// rea decompile_all
// name: FUN_100533634
// address: 0x100533634
// body: available
// range: 0x100533634-0x100533687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100533680 to 0x1007dbaac _$sSS6remove2atSJSS5IndexV_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100533634(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar2 = unaff_x20[1];
  if ((uVar2 >> 0x3d & 1) == 0) {
    uVar4 = *unaff_x20 & 0xffffffffffff;
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100533650);
      (*pcVar3)();
    }
  }
  else {
    uVar4 = uVar2 >> 0x38 & 0xf;
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100533688);
      (*pcVar3)();
    }
  }
  uVar1 = 0xb;
  if (((uint)(uVar2 >> 0x3c) & (uint)((*unaff_x20 & 0x800000000000000) == 0)) == 0) {
    uVar1 = 7;
  }
  __sSS5index6beforeSS5IndexVAD_tF(uVar1 | uVar4 << 0x10);
  __sSS6remove2atSJSS5IndexV_tF();
  return;
}

