// rea decompile_all
// name: FUN_1007c5e60
// address: 0x1007c5e60
// body: available
// range: 0x1007c5e60-0x1007c5edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c5eac to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c5e60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  switch((ulong)puVar1 & 0xffffffff) {
  case 0:
    uVar2 = param_1[1];
    break;
  default:
    return;
  case 4:
    lVar3 = 0;
    __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001007c5edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    return;
  case 5:
  case 6:
    uVar2 = *param_1;
  }
  _swift_bridgeObjectRelease(uVar2);
  return;
}

