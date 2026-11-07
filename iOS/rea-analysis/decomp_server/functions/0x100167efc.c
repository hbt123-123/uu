// rea decompile_all
// name: FUN_100167efc
// address: 0x100167efc
// body: available
// range: 0x100167efc-0x100167f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100167efc(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  FUN_100401b14(0);
  local_30 = param_1;
  FUN_1003fb4ec(FUN_10016c0d0,auStack_40,0xd0000000000000a4,0x800000010088d870,0xd00000000000001b,
                0x8000000100894d60,0x3f8,0);
  return;
}

