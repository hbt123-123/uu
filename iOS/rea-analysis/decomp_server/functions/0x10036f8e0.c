// rea decompile_all
// name: FUN_10036f8e0
// address: 0x10036f8e0
// body: available
// range: 0x10036f8e0-0x10036f9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036f9ec to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036f8e0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 < 4) {
    uVar3 = 0x44414548;
    if (param_2 != 2) {
      uVar3 = 0x54534f50;
    }
    uVar2 = 0x534e4f4954504f;
    if (param_2 != 0) {
      uVar2 = 0x544547;
    }
    uVar1 = 0xe700000000000000;
    if (param_2 != 0) {
      uVar1 = 0xe300000000000000;
    }
    uVar4 = (ulong)uVar3;
    uVar5 = 0xe400000000000000;
    if (param_2 < 2) {
      uVar4 = uVar2;
      uVar5 = uVar1;
    }
  }
  else {
    uVar2 = 0x4543415254;
    if (param_2 != 7) {
      uVar2 = 0x5443454e4e4f43;
    }
    uVar1 = 0xe500000000000000;
    if (param_2 != 7) {
      uVar1 = 0xe700000000000000;
    }
    uVar4 = 0x4554454c4544;
    if (param_2 != 6) {
      uVar4 = uVar2;
    }
    uVar5 = 0xe600000000000000;
    if (param_2 != 6) {
      uVar5 = uVar1;
    }
    uVar2 = 0x545550;
    if (param_2 != 4) {
      uVar2 = 0x4843544150;
    }
    uVar1 = 0xe300000000000000;
    if (param_2 != 4) {
      uVar1 = 0xe500000000000000;
    }
    if (param_2 < 6) {
      uVar4 = uVar2;
      uVar5 = uVar1;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  return;
}

