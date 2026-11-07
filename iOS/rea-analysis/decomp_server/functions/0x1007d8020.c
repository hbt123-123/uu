// rea decompile_all
// name: FUN_1007d8020
// address: 0x1007d8020
// body: available
// range: 0x1007d8020-0x1007d805f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007d805c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d8020(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = -(param_2 >> 7 & 1) & 0xfffffffffffff800 | (param_2 & 0xff) << 3;
  uVar2 = *(undefined8 *)(&DAT_1008541f0 + uVar1);
  __sSS4hash4intoys6HasherVz_tF(param_1,*(undefined8 *)(&DAT_1008541d8 + uVar1),uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return;
}

