// rea decompile_all
// name: FUN_10022a560
// address: 0x10022a560
// body: available
// range: 0x10022a560-0x10022a64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022a64c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022a560(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar6 = *unaff_x20;
  uVar4 = 0xeb000000006c7275;
  uVar5 = 0x5f616d69786f7270;
  if (bVar6 != 4) {
    uVar4 = 0x80000001008a58d0;
    uVar5 = 0xd000000000000019;
  }
  if (bVar6 == 3) {
    uVar5 = 0xd000000000000012;
    uVar4 = 0x80000001008a58b0;
  }
  uVar2 = 0xee00746572636573;
  uVar1 = 0x5f7463656a6f7270;
  if (bVar6 != 1) {
    uVar1 = 0xd000000000000011;
    uVar2 = 0x80000001008a5890;
  }
  uVar3 = 0xec000000656d616e;
  uVar7 = 0x5f7463656a6f7270;
  if (bVar6 != 0) {
    uVar3 = uVar2;
    uVar7 = uVar1;
  }
  if (bVar6 < 3) {
    uVar4 = uVar3;
    uVar5 = uVar7;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}

