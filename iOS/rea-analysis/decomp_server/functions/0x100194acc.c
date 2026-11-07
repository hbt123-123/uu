// rea decompile_all
// name: FUN_100194acc
// address: 0x100194acc
// body: available
// range: 0x100194acc-0x100194b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100194acc(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  FUN_100401b14(0);
  local_40 = param_1;
  FUN_1003fb45c(FUN_100198a58,auStack_50,0xd0000000000000b0,0x8000000100899320,0x7250656c646e6168,
                0xef2928737365636f,0x28,7);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
  FUN_100198660();
  return 0;
}

