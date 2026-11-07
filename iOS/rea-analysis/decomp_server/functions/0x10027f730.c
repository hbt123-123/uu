// rea decompile_all
// name: FUN_10027f730
// address: 0x10027f730
// body: available
// range: 0x10027f730-0x10027f7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027f788 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027f798 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027f730(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (2 < iVar1) {
    if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 != 5) {
        return;
      }
      _swift_bridgeObjectRelease(param_1[1]);
      return;
    }
LAB_10027f78c:
    _swift_errorRelease(*param_1);
    return;
  }
  if (iVar1 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      goto LAB_10027f78c;
    }
    lVar3 = 0;
    __sSS10FoundationE8EncodingVMa();
  }
                    /* WARNING: Could not recover jumptable at 0x00010027f7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  return;
}

