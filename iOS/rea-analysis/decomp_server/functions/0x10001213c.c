// rea decompile_all
// name: FUN_10001213c
// address: 0x10001213c
// body: available
// range: 0x10001213c-0x100012257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001213c(void)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_50 [16];
  int local_40;
  
  if ((*(byte *)(unaff_x20 + 0x130) & 1) == 0) {
    iVar1 = 0xfa9c;
    _CGDisplayRegisterReconfigurationCallback();
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_x20 + 0x130) = 1;
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_10002a56c,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000025,
                    0x800000010087aed0,0x662,0);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_40 = iVar1;
      FUN_1003fb4ec(FUN_10003ff54,auStack_50,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000025,0x800000010087aed0,0x65e,0);
    }
  }
  return;
}

