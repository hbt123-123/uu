// rea decompile_all
// name: FUN_1001dff9c
// address: 0x1001dff9c
// body: available
// range: 0x1001dff9c-0x1001e0037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e002c to 0x1007dbba8 _$sSSySsSnySS5IndexVGcig (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dff9c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e0034);
    (*pcVar3)();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  uVar5 = 0xb;
  if (((uint)(param_3 >> 0x3c) & (uint)((param_2 & 0x800000000000000) == 0)) == 0) {
    uVar5 = 7;
  }
  uVar5 = uVar5 | uVar1 << 0x10;
  uVar4 = 0xf;
  __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,param_1,uVar5,param_2,param_3);
  uVar2 = uVar5;
  if ((param_1 & 1) == 0) {
    uVar2 = uVar4;
  }
  if (uVar2 >> 0xe <= uVar1 << 2) {
    __sSSySsSnySS5IndexVGcig(uVar2,uVar5,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e0038);
  (*pcVar3)();
}

