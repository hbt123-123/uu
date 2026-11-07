// rea decompile_all
// name: FUN_1000caef4
// address: 0x1000caef4
// body: available
// range: 0x1000caef4-0x1000cafbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000cafb8 to 0x1000ca9f4 FUN_1000ca9f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000caef4(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  
  FUN_1000c7b64();
  uVar4 = *(ulong *)(param_1 + 0x68);
  bVar1 = *(byte *)(param_1 + 0x70);
  bVar2 = *(byte *)(param_1 + 0x71);
  _swift_release();
  if ((bVar2 & 1) == 0) {
    if ((bVar1 & 1) == 0) {
      if (uVar4 != 2) goto LAB_1000caf1c;
    }
    else if (uVar4 < 2) goto LAB_1000caf1c;
    FUN_1000c815c();
    cVar3 = *(char *)(param_1 + 0x10);
    _swift_release();
    if (cVar3 == '\x01') {
      FUN_1000ca9f4();
      return;
    }
  }
LAB_1000caf1c:
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_1000cafbc,0,0xd00000000000009c,0x8000000100885110,0xd00000000000002e,
                0x80000001008858d0,0xa7,0);
  return;
}

