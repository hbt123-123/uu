// rea decompile_all
// name: FUN_10019f864
// address: 0x10019f864
// body: available
// range: 0x10019f864-0x10019f97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019f97c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019f864(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar6 = 0xea00000000007468;
  uVar4 = 0x676965685f78616d;
  if (bVar3 != 5) {
    uVar6 = 0xe600000000000000;
    uVar4 = 0x746c75736572;
  }
  uVar7 = 0x747065645f746962;
  if (bVar3 != 3) {
    uVar7 = 0x746469775f78616d;
  }
  if (bVar3 < 5) {
    uVar6 = 0xe900000000000068;
    uVar4 = uVar7;
  }
  uVar7 = 0x735f616d6f726863;
  uVar1 = 0xef676e696c706d61;
  if (bVar3 != 1) {
    uVar7 = 0xd000000000000011;
    uVar1 = 0x8000000100876270;
  }
  uVar2 = 0xeb00000000636564;
  uVar5 = 0x6f635f6f65646976;
  if (bVar3 != 0) {
    uVar2 = uVar1;
    uVar5 = uVar7;
  }
  if (bVar3 < 3) {
    uVar6 = uVar2;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  return;
}

