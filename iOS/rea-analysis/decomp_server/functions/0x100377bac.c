// rea decompile_all
// name: FUN_100377bac
// address: 0x100377bac
// body: available
// range: 0x100377bac-0x100377c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100377c40 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100377bac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x737066;
  if (bVar5 != 2) {
    uVar1 = 0x735f616d6f726863;
  }
  uVar4 = 0xe300000000000000;
  if (bVar5 != 2) {
    uVar4 = 0xef676e696c706d61;
  }
  uVar2 = 0x6874646977;
  if (bVar5 != 0) {
    uVar2 = 0x746867696568;
  }
  uVar3 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe600000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}

