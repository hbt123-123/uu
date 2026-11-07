// rea decompile_all
// name: FUN_10000dbb8
// address: 0x10000dbb8
// body: available
// range: 0x10000dbb8-0x10000dce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000dce0 to 0x10000df74 FUN_10000df74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000dbb8(ulong param_1)

{
  byte bVar1;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0x13) & 1) == 0) {
      FUN_10000e0f4();
      *(byte *)(unaff_x20 + 0x12) = (byte)param_1 & 1;
      *(undefined1 *)(unaff_x20 + 0x13) = 1;
      if (*(char *)(unaff_x20 + 0x11) == '\x01') {
        FUN_10000e0f4();
        bVar1 = (byte)param_1;
        if ((param_1 & 1) == 0) {
          if (*(char *)(unaff_x20 + 0x10) == '\x01') {
            FUN_10000e0f4();
            *(byte *)(unaff_x20 + 0x12) = bVar1 & 1;
          }
          FUN_10000df74(1);
          return;
        }
      }
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_10000dd10,0,0xd00000000000009d,0x8000000100876d80,0xd00000000000001f,
                    0x8000000100876e20,0xe0,0);
    }
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10000dce4,0,0xd00000000000009d,0x8000000100876d80,0xd00000000000001f,
                  0x8000000100876e20,0xdc,0);
  }
  return;
}

