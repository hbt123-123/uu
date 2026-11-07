// rea decompile_all
// name: FUN_1003b5ee4
// address: 0x1003b5ee4
// body: available
// range: 0x1003b5ee4-0x1003b5f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b5f50 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b5ee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x6c7275;
  if (cVar4 != '\x01') {
    uVar3 = 0x5f64657461657263;
  }
  uVar1 = 0xe300000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xea00000000007461;
  }
  uVar2 = 0x64695f;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe300000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

