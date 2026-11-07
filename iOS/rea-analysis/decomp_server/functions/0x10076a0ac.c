// rea decompile_all
// name: FUN_10076a0ac
// address: 0x10076a0ac
// body: available
// range: 0x10076a0ac-0x10076a13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076a0ac(uint param_1)

{
  byte bVar1;
  code *pcVar2;
  
  if (DAT_100b2d2d0 != param_1) {
    bVar1 = (byte)param_1;
    DAT_100b2d2d0 = bVar1;
    if (param_1 == 0) {
      std::set_terminate(DAT_100b2d2c8);
      DAT_100b2d2c8 = (_func_void *)0x0;
      DAT_100b2cf48 = bVar1;
    }
    else {
      if ((DAT_100b2d2f6 & 1) == 0) {
        DAT_100b2d2f6 = 1;
        FUN_10074b318(&DAT_100b2cf50,0,0);
      }
      FUN_100777df8(&DAT_100b2d2d1);
      pcVar2 = FUN_10076a14c;
      std::set_terminate(FUN_10076a14c);
      DAT_100b2cf48 = bVar1;
      DAT_100b2d2c8 = pcVar2;
    }
  }
  return;
}

