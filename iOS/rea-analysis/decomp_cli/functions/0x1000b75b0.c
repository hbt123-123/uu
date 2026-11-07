// rea decompile_all
// name: FUN_1000b75b0
// address: 0x1000b75b0
// body: available
// range: 0x1000b75b0-0x1000b7647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b7644 to 0x1000c1d30 _$sSS4hash4intoys6HasherVz_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b75b0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    uVar1 = 0x676e6f6c;
    uVar2 = 0xe400000000000000;
  }
  else {
    uVar1 = 0x74726f6873;
    if (param_2 != '\x01') {
      uVar1 = 0xd000000000000012;
    }
    uVar2 = 0xe500000000000000;
    if (param_2 != '\x01') {
      uVar2 = 0x80000001000c9c90;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}

