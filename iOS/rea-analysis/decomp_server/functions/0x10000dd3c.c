// rea decompile_all
// name: FUN_10000dd3c
// address: 0x10000dd3c
// body: available
// range: 0x10000dd3c-0x10000ddff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000dd98 to 0x10000df74 FUN_10000df74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000dd3c(uint param_1)

{
  byte bVar1;
  byte bVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x13) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x13) = 0;
    if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
      bVar1 = *(byte *)(unaff_x20 + 0x12);
      FUN_10000e0f4();
      bVar2 = (byte)param_1;
      if ((uint)bVar1 != (param_1 & 1)) {
        if ((*(byte *)(unaff_x20 + 0x10) & bVar1 & 1) != 0) {
          FUN_10000e0f4();
          *(byte *)(unaff_x20 + 0x12) = bVar2 & 1;
        }
        FUN_10000df74(bVar1);
        return;
      }
    }
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10000de00,0,0xd00000000000009d,0x8000000100876d80,0xd00000000000001b,
                  0x8000000100876ec0,0xf0,0);
  }
  return;
}

