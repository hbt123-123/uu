// rea decompile_all
// name: FUN_100536f44
// address: 0x100536f44
// body: available
// range: 0x100536f44-0x100536fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100536fa4 to 0x1007db9ec _$sSS14removeSubrangeyySnySS5IndexVGF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100536f44(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < (long)param_1) {
    uVar3 = unaff_x20[1];
    uVar1 = *unaff_x20;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    uVar2 = 0xb;
    if (((uint)(uVar3 >> 0x3c) & (uint)((*unaff_x20 & 0x800000000000000) == 0)) == 0) {
      uVar2 = 7;
    }
    uVar5 = 0xf;
    __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,param_1,uVar2 | uVar1 << 0x10);
    if ((param_1 & 1) == 0) {
      __sSS14removeSubrangeyySnySS5IndexVGF(0xf,uVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100536fb8);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100536fb4);
  (*pcVar4)();
}

