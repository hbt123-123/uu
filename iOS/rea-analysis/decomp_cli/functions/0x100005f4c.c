// rea decompile_all
// name: FUN_100005f4c
// address: 0x100005f4c
// body: available
// range: 0x100005f4c-0x100005ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005ff0 to 0x1000c2aa4 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005f4c(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  uVar4 = 0xec00000064657463;
  uVar5 = 0xe900000000000064;
  uVar2 = 0x657463656e6e6f63;
  if (bVar1 != 2) {
    uVar5 = 0xe600000000000000;
    uVar2 = 0x64656c696166;
  }
  uVar3 = 0x656e6e6f63736964;
  if (bVar1 != 0) {
    uVar4 = 0xea0000000000676e;
    uVar3 = 0x697463656e6e6f63;
  }
  if (bVar1 < 2) {
    uVar5 = uVar4;
    uVar2 = uVar3;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  return;
}

