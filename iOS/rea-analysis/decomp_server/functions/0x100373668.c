// rea decompile_all
// name: FUN_100373668
// address: 0x100373668
// body: available
// range: 0x100373668-0x10037372b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100373728 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100373668(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar7 = 0x706d62;
  if (bVar4 != 5) {
    uVar7 = 0x666967;
  }
  uVar1 = 0xe300000000000000;
  uVar5 = 0x66666974;
  if (bVar4 != 3) {
    uVar5 = 0x63696568;
  }
  if (bVar4 < 5) {
    uVar1 = 0xe400000000000000;
    uVar7 = uVar5;
  }
  uVar5 = 0x70626577;
  if (bVar4 != 1) {
    uVar5 = 0x676e70;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4 != 1) {
    uVar2 = 0xe300000000000000;
  }
  uVar6 = 0x6765706a;
  if (bVar4 != 0) {
    uVar6 = uVar5;
  }
  uVar3 = 0xe400000000000000;
  if (bVar4 != 0) {
    uVar3 = uVar2;
  }
  if (bVar4 < 3) {
    uVar1 = uVar3;
    uVar7 = uVar6;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  return;
}

