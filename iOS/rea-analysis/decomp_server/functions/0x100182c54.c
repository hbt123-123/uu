// rea decompile_all
// name: FUN_100182c54
// address: 0x100182c54
// body: available
// range: 0x100182c54-0x100182cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100182cd8 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100182c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xee006572756c6961;
  uVar2 = 0x466c616974726170;
  if (cVar3 != '\x01') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6572756c696166;
  }
  uVar1 = 0x73736563637573;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return;
}

