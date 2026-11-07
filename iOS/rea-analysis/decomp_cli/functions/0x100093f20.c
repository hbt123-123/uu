// rea decompile_all
// name: FUN_100093f20
// address: 0x100093f20
// body: available
// range: 0x100093f20-0x100093fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100093fa0 to 0x1000c1e50 _$sSSySsSnySS5IndexVGcig (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093f20(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (-1 < (long)param_1) {
    uVar2 = param_2;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    uVar3 = 0xb;
    if (((uint)(param_3 >> 0x3c) & (uint)((param_2 & 0x800000000000000) == 0)) == 0) {
      uVar3 = 7;
    }
    uVar3 = uVar3 | uVar2 << 0x10;
    uVar2 = 0xf;
    __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,param_1,uVar3,param_2,param_3);
    if ((param_1 & 1) == 0) {
      uVar3 = uVar2;
    }
    __sSSySsSnySS5IndexVGcig(0xf,uVar3,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100093fa8);
  (*pcVar1)();
}

