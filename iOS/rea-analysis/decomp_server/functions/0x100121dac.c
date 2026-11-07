// rea decompile_all
// name: FUN_100121dac
// address: 0x100121dac
// body: available
// range: 0x100121dac-0x100121ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100121dac(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "/System/Library/Frameworks/CoreGraphics.framework/CoreGraphics";
  _dlopen("/System/Library/Frameworks/CoreGraphics.framework/CoreGraphics",1);
  if (pcVar1 == (char *)0x0) {
    FUN_100401b14();
    FUN_1003fb4ec(FUN_100121ea4,0,0xd00000000000009b,0x800000010088dba0,0xd000000000000017,
                  0x800000010080e310,0x14,0);
  }
  else {
    pcVar2 = pcVar1;
    _dlsym();
    if (pcVar2 == (char *)0x0) {
      FUN_100401b14();
      FUN_1003fb4ec(FUN_100121ed0,0,0xd00000000000009b,0x800000010088dba0,0xd000000000000017,
                    0x800000010080e310,0x1a,0);
      _dlclose(pcVar1);
    }
  }
  return;
}

