// rea decompile_all
// name: FUN_1003d30dc
// address: 0x1003d30dc
// body: available
// range: 0x1003d30dc-0x1003d3223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d3220 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d30dc(undefined8 param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if (param_2 < 4) {
    uVar4 = 0xea00000000006469;
    puVar3 = (undefined1 *)0x5f7070615f637063;
    if (param_2 != 2) {
      uVar4 = 0xe800000000000000;
      puVar3 = (undefined1 *)0x657079745f707061;
    }
    puVar1 = (undefined1 *)0x64695f70706164;
    if (param_2 != 0) {
      puVar1 = (undefined1 *)0x64695f707061;
    }
    uVar2 = 0xe700000000000000;
    if (param_2 != 0) {
      uVar2 = 0xe600000000000000;
    }
    if (param_2 < 2) {
      puVar3 = puVar1;
      uVar4 = uVar2;
    }
  }
  else {
    uVar2 = 0x80000001008af910;
    puVar1 = &DAT_d000000000000010;
    if (param_2 != 7) {
      uVar2 = 0xea00000000007375;
      puVar1 = (undefined1 *)0x746174735f707061;
    }
    uVar4 = 0xeb00000000687461;
    puVar3 = (undefined1 *)0x705f746567726174;
    if (param_2 != 6) {
      uVar4 = uVar2;
      puVar3 = puVar1;
    }
    puVar1 = (undefined1 *)0x656d616e;
    if (param_2 != 4) {
      puVar1 = (undefined1 *)0x6c72755f6e6f6369;
    }
    uVar2 = 0xe400000000000000;
    if (param_2 != 4) {
      uVar2 = 0xe800000000000000;
    }
    if (param_2 < 6) {
      puVar3 = puVar1;
      uVar4 = uVar2;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,puVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}

