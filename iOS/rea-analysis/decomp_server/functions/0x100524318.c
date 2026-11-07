// rea decompile_all
// name: FUN_100524318
// address: 0x100524318
// body: available
// range: 0x100524318-0x1005243b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100524318(double *param_1,long param_2)

{
  double dVar1;
  
  dVar1 = (double)param_2;
  FUN_10051ff3c(0,0,0x3000000000000000,0xff);
  FUN_10051fe90(dVar1,0,0x1000000000000000,0);
  FUN_100008184(0,0xc000000000000000);
  FUN_10051ff3c(dVar1,0,0x1000000000000000,0);
  FUN_100006cdc(0,0xc000000000000000);
  *param_1 = dVar1;
  param_1[2] = 1.2882297539194267e-231;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = -2.0;
  param_1[4] = 0.0;
  return;
}

