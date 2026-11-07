// rea decompile_all
// name: FUN_1003b7250
// address: 0x1003b7250
// body: available
// range: 0x1003b7250-0x1003b734f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b734c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b7250(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xec0000006567616d;
  uVar5 = 0x695f6d6f74737563;
  if (bVar4 != 4) {
    uVar1 = 0xed00006769666e6f;
    uVar5 = 0x635f746573657270;
  }
  uVar3 = 0x80000001008afa50;
  uVar6 = 0xd000000000000012;
  if (bVar4 != 3) {
    uVar3 = uVar1;
    uVar6 = uVar5;
  }
  uVar1 = 0x80000001008afa20;
  uVar5 = 0xd000000000000012;
  if (bVar4 != 1) {
    uVar1 = 0xee007865646e695f;
    uVar5 = 0x64657463656c6573;
  }
  uVar2 = 0xed0000657079745f;
  uVar7 = 0x64657463656c6573;
  if (bVar4 != 0) {
    uVar2 = uVar1;
    uVar7 = uVar5;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

