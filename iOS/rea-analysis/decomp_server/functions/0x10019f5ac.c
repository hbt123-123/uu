// rea decompile_all
// name: FUN_10019f5ac
// address: 0x10019f5ac
// body: available
// range: 0x10019f5ac-0x10019f61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019f61c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019f5ac(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar5 = 0x65707974;
  if (bVar4 != 2) {
    uVar5 = 0x726468;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar1 = 0x6469;
  if (bVar4 != 0) {
    uVar1 = 0x737066;
  }
  uVar3 = 0xe200000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xe300000000000000;
  }
  if (bVar4 < 2) {
    uVar2 = uVar3;
    uVar5 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return;
}

